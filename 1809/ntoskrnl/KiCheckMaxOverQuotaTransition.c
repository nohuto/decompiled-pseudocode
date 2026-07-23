/*
 * XREFs of KiCheckMaxOverQuotaTransition @ 0x14012AF0C
 * Callers:
 *     KiSwapThread @ 0x140056210 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400D0FC4 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 * Callees:
 *     KiChargeSchedulingGroupCycleTime @ 0x1400D36AC (KiChargeSchedulingGroupCycleTime.c)
 */

char __fastcall KiCheckMaxOverQuotaTransition(__int64 a1, volatile signed __int64 *a2)
{
  if ( (*(_BYTE *)(a1 + 112) & 0x12) != 0 || !KiChargeSchedulingGroupCycleTime(a2, (_QWORD *)a1) )
    return 0;
  *(_BYTE *)(a1 + 112) |= 2u;
  return 1;
}
