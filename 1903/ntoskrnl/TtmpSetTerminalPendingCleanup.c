/*
 * XREFs of TtmpSetTerminalPendingCleanup @ 0x1408BCE8C
 * Callers:
 *     TtmiCreateTerminal @ 0x1408BC32C (TtmiCreateTerminal.c)
 *     TtmpCloseTerminalHandle @ 0x1408BCBD0 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     TtmpResetEvaluationTimer @ 0x1408BCD94 (TtmpResetEvaluationTimer.c)
 *     TtmiScheduleSessionWorker @ 0x1408BDEDC (TtmiScheduleSessionWorker.c)
 */

char __fastcall TtmpSetTerminalPendingCleanup(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 36) |= 1u;
  TtmiScheduleSessionWorker(a1, 2LL);
  return TtmpResetEvaluationTimer((char *)a2, 0LL);
}
