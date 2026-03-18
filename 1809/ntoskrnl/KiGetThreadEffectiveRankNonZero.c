/*
 * XREFs of KiGetThreadEffectiveRankNonZero @ 0x1400D1500
 * Callers:
 *     KiSelectReadyThread @ 0x140057A20 (KiSelectReadyThread.c)
 *     KiSelectReadyThreadEx @ 0x14005ADA0 (KiSelectReadyThreadEx.c)
 *     KeAccumulateTicks @ 0x1400601D0 (KeAccumulateTicks.c)
 *     KiDeferredReadyThread @ 0x1400C3370 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400C5210 (KiDirectSwitchThread.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400C6160 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400D0F24 (KiGroupSchedulingQuantumEnd.c)
 *     KiIsThreadRankNonZero @ 0x1400D1460 (KiIsThreadRankNonZero.c)
 *     KiQueueReadyThread @ 0x1400D2350 (KiQueueReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400D2C80 (KiDeferGroupSchedulingPreemption.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1400D3260 (KiTransitionSchedulingGroupGeneration.c)
 *     KiChooseLowestRankedThread @ 0x140116A8C (KiChooseLowestRankedThread.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x140117350 (KiMoveScbThreadsToNewReadylist.c)
 *     KiAddThreadToReadyQueue @ 0x140297F84 (KiAddThreadToReadyQueue.c)
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
