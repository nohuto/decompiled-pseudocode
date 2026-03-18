/*
 * XREFs of PdcPoCsEnterExitReason @ 0x1408AB760
 * Callers:
 *     <none>
 * Callees:
 *     PopEvaluateAggressiveStandbyActions @ 0x1408A50F8 (PopEvaluateAggressiveStandbyActions.c)
 *     PopSetModernStandbyTransitionReason @ 0x1408AC180 (PopSetModernStandbyTransitionReason.c)
 */

__int64 __fastcall PdcPoCsEnterExitReason(char a1)
{
  PopSetModernStandbyTransitionReason();
  return PopEvaluateAggressiveStandbyActions(a1);
}
