/*
 * XREFs of MiSignalLargePageRebuild @ 0x1400EF834
 * Callers:
 *     MiWorkingSetManager @ 0x1400EF634 (MiWorkingSetManager.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiNodeFreeZeroPages @ 0x1400EE374 (MiNodeFreeZeroPages.c)
 *     MiNodeLargeFreeZeroPages @ 0x1400EE9A8 (MiNodeLargeFreeZeroPages.c)
 *     MiPageCombiningActive @ 0x1400EFB60 (MiPageCombiningActive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiWakeLargePageRebuild @ 0x1402CEB90 (MiWakeLargePageRebuild.c)
 */

__int64 __fastcall MiSignalLargePageRebuild(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  unsigned __int8 CurrentIrql; // si
  unsigned int i; // edi
  __int64 v6; // rbx
  unsigned __int64 v8; // r15
  unsigned int v9; // r12d
  __int64 v10; // rdx
  unsigned __int64 j; // rbp
  int v12; // edx
  int v13; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  volatile signed __int64 *v15[4]; // [rsp+20h] [rbp-48h] BYREF

  result = MiPageCombiningActive();
  if ( (_DWORD)result != 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
    {
      v15[0] = 0LL;
      v6 = *(_QWORD *)(a1 + 16) + 1984LL * i;
      v15[1] = (volatile signed __int64 *)(v6 + 1928);
      KxAcquireQueuedSpinLock((__int64)v15, (volatile __int64 *)(v6 + 1928), v3);
      if ( !*(_BYTE *)(v6 + 849) && (*(_BYTE *)(v6 + 848))-- == 1 )
      {
        v8 = 0LL;
        v9 = MmNumberOfChannels;
        v10 = 0LL;
        for ( j = (-(__int64)(*(_BYTE *)(v6 + 851) != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000;
              (unsigned int)v10 < v9;
              v10 = (unsigned int)(v12 + 1) )
        {
          v8 += MiNodeFreeZeroPages(v6, v10, 0);
        }
        if ( v8 < j
          || (MiFlags & 0x30) == 0
          || (unsigned __int64)MiNodeLargeFreeZeroPages((_QWORD *)v6, 4u, 2) >> 3 >= v8
          || (v13 = MiWakeLargePageRebuild(a1, i, 1LL)) == 0 )
        {
          *(_BYTE *)(v6 + 850) = 8;
          *(_BYTE *)(v6 + 848) = 8;
        }
      }
      KxReleaseQueuedSpinLock(v15);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
