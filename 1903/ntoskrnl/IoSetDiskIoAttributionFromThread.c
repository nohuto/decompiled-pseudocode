/*
 * XREFs of IoSetDiskIoAttributionFromThread @ 0x1400A7AE0
 * Callers:
 *     IoPageReadEx @ 0x1400A7640 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400A794C (IoSynchronousPageWriteEx.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140127260 (IopBuildAsynchronousFsdRequest.c)
 *     IoAsynchronousPageWrite @ 0x140137438 (IoAsynchronousPageWrite.c)
 *     IoSetIoAttributionIrp @ 0x140298CB0 (IoSetIoAttributionIrp.c)
 *     IopSynchronousServiceTail @ 0x1405F28F0 (IopSynchronousServiceTail.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066860 (ObDereferenceObjectDeferDelete.c)
 *     IopSetDiskIoAttributionExtension @ 0x1400A94C4 (IopSetDiskIoAttributionExtension.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x1400A953C (IopSetDiskIoAttributionFromProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IoSetDiskIoAttributionFromThread(__int64 a1, struct _KTHREAD *a2)
{
  struct _KTHREAD *Thread; // rsi
  int v4; // edi
  _KPROCESS *Process; // rbx
  __int64 v7; // rbp
  int v8; // ebx
  KIRQL v10; // al
  __int64 v11; // rbx
  KIRQL v12; // r15
  KIRQL v13; // al
  KIRQL v14; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v16; // rcx

  Thread = a2[1].WaitBlock[1].Thread;
  v4 = 0;
  if ( !Thread )
    goto LABEL_14;
  if ( a2 != KeGetCurrentThread() )
  {
    v13 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Thread = a2[1].WaitBlock[1].Thread;
    v14 = v13;
    if ( Thread )
    {
      ObfReferenceObjectWithTag(a2[1].WaitBlock[1].Thread, 0x746C6644u);
      v4 = 1;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&PspThreadWorkOnBehalfLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v14);
  }
  if ( Thread )
  {
    Process = Thread->Process;
  }
  else
  {
LABEL_14:
    if ( a2 == KeGetCurrentThread()
      && a2->ApcState.Process != a2->Process
      && (int)IopSetDiskIoAttributionFromProcess(a1) >= 0 )
    {
LABEL_15:
      v8 = 0;
      goto LABEL_8;
    }
    Process = a2->Process;
  }
  v7 = 0LL;
  if ( *(_QWORD *)&Process[2].IdealNode[2] )
  {
    v10 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
    v11 = *(_QWORD *)&Process[2].IdealNode[2];
    v12 = v10;
    if ( v11 )
      v7 = *(_QWORD *)(v11 + 24);
    ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      v16 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v16);
    }
    __writecr8(v12);
    if ( v11 )
    {
      v8 = IopSetDiskIoAttributionExtension(a1, v7, KeGetCurrentThread(), 0LL);
      if ( v8 >= 0 )
        v8 = 0;
    }
    else
    {
      v8 = -1073741275;
    }
  }
  else
  {
    v8 = -1073741275;
  }
  if ( v8 >= 0 )
    goto LABEL_15;
LABEL_8:
  if ( v4 )
    ObDereferenceObjectDeferDelete(Thread);
  return (unsigned int)v8;
}
