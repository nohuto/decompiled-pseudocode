/*
 * XREFs of PsGetWorkOnBehalfThread @ 0x14000D38C
 * Callers:
 *     IopQueueWorkItemProlog @ 0x140080604 (IopQueueWorkItemProlog.c)
 *     IoReferenceIoAttributionFromThread @ 0x1400A9B1C (IoReferenceIoAttributionFromThread.c)
 *     PsGetEffectiveContainerId @ 0x140121D10 (PsGetEffectiveContainerId.c)
 *     AlpcpCaptureAttributes @ 0x1405E3090 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x1405E5490 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406D9AB8 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140885460 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

struct _KTHREAD *__fastcall PsGetWorkOnBehalfThread(struct _KTHREAD *a1, _DWORD *a2)
{
  struct _KTHREAD *Thread; // rbx
  KIRQL v6; // al
  KIRQL v7; // si
  struct _KPRCB *CurrentPrcb; // rcx
  volatile signed __int32 *SchedulerAssist; // rdx

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
      SchedulerAssist = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
      _InterlockedAnd(SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, SchedulerAssist);
    }
    __writecr8(v7);
  }
  return Thread;
}
