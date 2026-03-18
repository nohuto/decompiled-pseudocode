/*
 * XREFs of MiPageFileLargestBitmapsRun @ 0x1400F1450
 * Callers:
 *     MiFindFreePageFileSpace @ 0x1400F0E24 (MiFindFreePageFileSpace.c)
 *     MiGetKernelStackSwapSupport @ 0x1400F15E0 (MiGetKernelStackSwapSupport.c)
 *     MiFindBestOutswapPagefile @ 0x1400F16F8 (MiFindBestOutswapPagefile.c)
 *     MiGatherPagefilePages @ 0x14014A9AC (MiGatherPagefilePages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402CEE10 (MiTrimUnusedPageFileRegionsWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiPageFileLargestBitmapsRun(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 i; // rdx
  unsigned int v8; // edi
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  v3 = *(_QWORD *)(a1 + 144);
  if ( (*(_BYTE *)(a1 + 152) & 1) != 0 && v3 )
    v3 ^= a1 + 144;
  v4 = 0LL;
  while ( v3 )
  {
    if ( *(_DWORD *)(v3 + 52) == -1 )
    {
      if ( !*(_DWORD *)(v3 + 48) )
        goto LABEL_13;
      v5 = *(_QWORD *)v3;
      v4 = v3;
    }
    else
    {
      v5 = *(_QWORD *)(v3 + 8);
    }
    if ( (*(_BYTE *)(a1 + 152) & 1) != 0 && v5 )
      v3 ^= v5;
    else
      v3 = v5;
  }
  v3 = v4;
LABEL_13:
  v6 = *(_QWORD *)v3;
  if ( *(_QWORD *)v3 )
  {
    for ( ; *(_QWORD *)(v6 + 8); v6 = *(_QWORD *)(v6 + 8) )
      ;
  }
  else
  {
    for ( i = *(_QWORD *)(v3 + 16); ; i = *(_QWORD *)(v6 + 16) )
    {
      v6 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v6 || *(_QWORD *)(v6 + 8) == v3 )
        break;
      v3 = v6;
    }
  }
  if ( v6 )
    v2 = *(_DWORD *)(v6 + 52);
  v8 = *(_DWORD *)(a1 + 140);
  if ( v2 > v8 )
    v8 = v2;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  return v8;
}
