/*
 * XREFs of TtmpSetTerminalPendingCleanup @ 0x14087F33C
 * Callers:
 *     TtmiCreateTerminal @ 0x14087E82C (TtmiCreateTerminal.c)
 *     TtmpCloseTerminalHandle @ 0x14087F080 (TtmpCloseTerminalHandle.c)
 * Callees:
 *     TtmpResetEvaluationTimer @ 0x14087F244 (TtmpResetEvaluationTimer.c)
 *     TtmiScheduleSessionWorker @ 0x140880240 (TtmiScheduleSessionWorker.c)
 */

char __fastcall TtmpSetTerminalPendingCleanup(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 36) |= 1u;
  TtmiScheduleSessionWorker(a1, 2LL);
  return TtmpResetEvaluationTimer((char *)a2, 0LL);
}
