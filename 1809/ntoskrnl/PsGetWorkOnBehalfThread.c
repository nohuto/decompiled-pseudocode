/*
 * XREFs of PsGetWorkOnBehalfThread @ 0x1400ACC54
 * Callers:
 *     IopQueueWorkItemProlog @ 0x1400D1B68 (IopQueueWorkItemProlog.c)
 *     IoReferenceIoAttributionFromThread @ 0x1400DF25C (IoReferenceIoAttributionFromThread.c)
 *     PsGetEffectiveContainerId @ 0x140125570 (PsGetEffectiveContainerId.c)
 *     AlpcpCaptureAttributes @ 0x140637400 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x14064B720 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406B64C0 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14084B180 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

struct _KTHREAD *__fastcall PsGetWorkOnBehalfThread(struct _KTHREAD *a1, _DWORD *a2)
{
  struct _KTHREAD *Thread; // rbx
  KIRQL v6; // al
  KIRQL v7; // si
  struct _KPRCB *CurrentPrcb; // rcx

  Thread = a1[1].WaitBlock[1].Thread;
  *a2 = 0;
  if ( Thread && a1 != KeGetCurrentThread() )
  {
    v6 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Thread = a1[1].WaitBlock[1].Thread;
    v7 = v6;
    if ( Thread )
    {
      ObfReferenceObjectWithTag(a1[1].WaitBlock[1].Thread, 0x746C6644u);
      *a2 = 1;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&PspThreadWorkOnBehalfLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v7);
  }
  return Thread;
}
