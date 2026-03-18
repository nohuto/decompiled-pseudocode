/*
 * XREFs of IoSetDiskIoAttributionFromThread @ 0x140095080
 * Callers:
 *     IoPageReadEx @ 0x140094BE0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140094EEC (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x14011A258 (IoAsynchronousPageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140127C80 (IopBuildAsynchronousFsdRequest.c)
 *     IoSetIoAttributionIrp @ 0x140298A10 (IoSetIoAttributionIrp.c)
 *     IopSynchronousServiceTail @ 0x1405F3250 (IopSynchronousServiceTail.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066AD0 (ObDereferenceObjectDeferDelete.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x140090844 (IopSetDiskIoAttributionFromProcess.c)
 *     IopSetDiskIoAttributionExtension @ 0x14011A840 (IopSetDiskIoAttributionExtension.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IoSetDiskIoAttributionFromThread(__int64 a1, struct _KTHREAD *a2)
{
  struct _KTHREAD *Thread; // rsi
  int v4; // edi
  __int64 v6; // rdx
  _KPROCESS *Process; // rbx
  __int64 v8; // rbp
  int v9; // ebx
  KIRQL v11; // al
  __int64 v12; // rbx
  KIRQL v13; // r15
  KIRQL v14; // al
  KIRQL v15; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v17; // rcx

  Thread = a2[1].WaitBlock[1].Thread;
  v4 = 0;
  if ( !Thread )
    goto LABEL_14;
  if ( a2 != KeGetCurrentThread() )
  {
    v14 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Thread = a2[1].WaitBlock[1].Thread;
    v15 = v14;
    if ( Thread )
    {
      ObfReferenceObjectWithTag(a2[1].WaitBlock[1].Thread, 0x746C6644u);
      v4 = 1;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&PspThreadWorkOnBehalfLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v15);
  }
  if ( Thread )
  {
    Process = Thread->Process;
  }
  else
  {
LABEL_14:
    if ( a2 == KeGetCurrentThread() )
    {
      v6 = (__int64)a2->ApcState.Process;
      if ( (_KPROCESS *)v6 != a2->Process && (int)IopSetDiskIoAttributionFromProcess(a1, v6) >= 0 )
      {
LABEL_15:
        v9 = 0;
        goto LABEL_8;
      }
    }
    Process = a2->Process;
  }
  v8 = 0LL;
  if ( *(_QWORD *)&Process[2].IdealNode[2] )
  {
    v11 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
    v12 = *(_QWORD *)&Process[2].IdealNode[2];
    v13 = v11;
    if ( v12 )
      v8 = *(_QWORD *)(v12 + 24);
    ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
    {
      v17 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v17);
    }
    __writecr8(v13);
    if ( v12 )
    {
      v9 = IopSetDiskIoAttributionExtension(a1, v8, KeGetCurrentThread(), 0LL);
      if ( v9 >= 0 )
        v9 = 0;
    }
    else
    {
      v9 = -1073741275;
    }
  }
  else
  {
    v9 = -1073741275;
  }
  if ( v9 >= 0 )
    goto LABEL_15;
LABEL_8:
  if ( v4 )
    ObDereferenceObjectDeferDelete(Thread);
  return (unsigned int)v9;
}
