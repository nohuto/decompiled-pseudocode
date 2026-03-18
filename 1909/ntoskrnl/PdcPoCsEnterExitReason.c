/*
 * XREFs of PdcPoCsEnterExitReason @ 0x1408AAFC0
 * Callers:
 *     <none>
 * Callees:
 *     PopEvaluateAggressiveStandbyActions @ 0x1408A4938 (PopEvaluateAggressiveStandbyActions.c)
 *     PopSetModernStandbyTransitionReason @ 0x1408AB9E0 (PopSetModernStandbyTransitionReason.c)
 */

__int64 __fastcall PdcPoCsEnterExitReason(char a1)
{
  PopSetModernStandbyTransitionReason();
  return PopEvaluateAggressiveStandbyActions(a1);
}
