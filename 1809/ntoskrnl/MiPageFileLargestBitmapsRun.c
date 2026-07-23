/*
 * XREFs of MiPageFileLargestBitmapsRun @ 0x140124908
 * Callers:
 *     MiFindBestOutswapPagefile @ 0x1400E4E2C (MiFindBestOutswapPagefile.c)
 *     MiGetKernelStackSwapSupport @ 0x140124104 (MiGetKernelStackSwapSupport.c)
 *     MiFindFreePageFileSpace @ 0x14012420C (MiFindFreePageFileSpace.c)
 *     MiGatherPagefilePages @ 0x14014F0E0 (MiGatherPagefilePages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402B8C60 (MiTrimUnusedPageFileRegionsWorker.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiPageFileLargestBitmapsRun(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  int v5; // edx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 i; // rax
  __int64 j; // rdx
  unsigned int v11; // edi
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  v3 = *(_QWORD *)(a1 + 152);
  v4 = *(_QWORD *)(a1 + 144);
  if ( (v3 & 1) != 0 && v4 )
    v4 ^= a1 + 144;
  v5 = v3 & 1;
  v6 = 0LL;
  while ( v4 )
  {
    if ( *(_DWORD *)(v4 + 52) == -1 )
    {
      if ( !*(_DWORD *)(v4 + 48) )
        goto LABEL_15;
      v7 = *(_QWORD *)v4;
      v6 = v4;
    }
    else
    {
      v7 = *(_QWORD *)(v4 + 8);
    }
    if ( v5 && v7 )
      v4 ^= v7;
    else
      v4 = v7;
  }
  v4 = v6;
LABEL_15:
  v8 = *(_QWORD *)v4;
  if ( *(_QWORD *)v4 )
  {
    for ( i = *(_QWORD *)(v8 + 8); i; i = *(_QWORD *)(i + 8) )
      v8 = i;
  }
  else
  {
    for ( j = *(_QWORD *)(v4 + 16); ; j = *(_QWORD *)(v8 + 16) )
    {
      v8 = j & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v8 || *(_QWORD *)(v8 + 8) == v4 )
        break;
      v4 = v8;
    }
  }
  if ( v8 )
    v2 = *(_DWORD *)(v8 + 52);
  v11 = *(_DWORD *)(a1 + 140);
  if ( v2 > v11 )
    v11 = v2;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  return v11;
}
