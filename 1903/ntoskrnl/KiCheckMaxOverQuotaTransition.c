/*
 * XREFs of KiCheckMaxOverQuotaTransition @ 0x140015754
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140011CF4 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KiComputeGroupSchedulingRank @ 0x1400156CC (KiComputeGroupSchedulingRank.c)
 *     KiSwapThread @ 0x140040E00 (KiSwapThread.c)
 * Callees:
 *     KiChargeSchedulingGroupCycleTime @ 0x140014B30 (KiChargeSchedulingGroupCycleTime.c)
 */

char __fastcall KiCheckMaxOverQuotaTransition(__int64 a1, volatile signed __int64 *a2)
{
  if ( (*(_BYTE *)(a1 + 112) & 0x12) != 0 || !KiChargeSchedulingGroupCycleTime(a2, (_QWORD *)a1) )
    return 0;
  *(_BYTE *)(a1 + 112) |= 2u;
  return 1;
}
