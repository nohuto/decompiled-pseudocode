/*
 * XREFs of PsGetWorkOnBehalfThread @ 0x1400ACCF4
 * Callers:
 *     IopQueueWorkItemProlog @ 0x1400D1AC8 (IopQueueWorkItemProlog.c)
 *     IoReferenceIoAttributionFromThread @ 0x1400DF1BC (IoReferenceIoAttributionFromThread.c)
 *     PsGetEffectiveContainerId @ 0x140125480 (PsGetEffectiveContainerId.c)
 *     AlpcpCaptureAttributes @ 0x1406363E0 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x14064A580 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406B5240 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140849F40 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D110 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D7C0 (ExAcquireSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACDD0 (ObfReferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
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
