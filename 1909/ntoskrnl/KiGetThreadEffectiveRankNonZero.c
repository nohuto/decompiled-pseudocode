/*
 * XREFs of KiGetThreadEffectiveRankNonZero @ 0x140014C20
 * Callers:
 *     KiSelectReadyThreadEx @ 0x1400101A0 (KiSelectReadyThreadEx.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140011F24 (KiGroupSchedulingQuantumEnd.c)
 *     KiRemoveBoostThread @ 0x140014690 (KiRemoveBoostThread.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400149F0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiIsThreadRankNonZero @ 0x140014B90 (KiIsThreadRankNonZero.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400152E0 (KiDeferGroupSchedulingPreemption.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140015770 (KiTransitionSchedulingGroupGeneration.c)
 *     KeAccumulateTicks @ 0x140033750 (KeAccumulateTicks.c)
 *     KiSelectReadyThread @ 0x140041FA0 (KiSelectReadyThread.c)
 *     KiDeferredReadyThread @ 0x140068290 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x14006BC80 (KiDirectSwitchThread.c)
 *     KiChooseLowestRankedThread @ 0x1401156A8 (KiChooseLowestRankedThread.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x140115EEC (KiMoveScbThreadsToNewReadylist.c)
 *     KiAddThreadToReadyQueue @ 0x1402AEC94 (KiAddThreadToReadyQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetThreadEffectiveRankNonZero(__int64 a1, __int64 a2, __int64 a3, char a4, bool *a5)
{
  bool v5; // r11
  __int64 result; // rax
  int v7; // ebx
  __int64 v8; // r9

  v5 = a5 && *(_QWORD *)(a2 + 120);
  result = 0LL;
  v7 = 0;
  if ( *(char *)(a1 + 195) < 16
    && (*(_DWORD *)(a1 + 120) & 0x200) == 0
    && (!a4 || !*(_DWORD *)(a1 + 484) && *(_BYTE *)(a1 + 390) != 1) )
  {
    v8 = a2;
    do
    {
      if ( (*(_BYTE *)(v8 + 112) & 2) != 0 )
      {
        result = 0xFFFFFFFFLL;
        goto LABEL_12;
      }
      v8 = *(_QWORD *)(v8 + 408);
    }
    while ( v8 );
    do
    {
      result = (unsigned int)(*(_DWORD *)(a2 + 116) + result);
      if ( v5 )
      {
        v7 += **(_DWORD **)(a2 + 120);
      }
      else if ( (_DWORD)result )
      {
        break;
      }
      a2 = *(_QWORD *)(a2 + 408);
    }
    while ( a2 );
  }
LABEL_12:
  if ( a5 )
    *a5 = v7 != 0;
  return result;
}
