/*
 * XREFs of PdcPoCsEnterExitReason @ 0x14086EC10
 * Callers:
 *     <none>
 * Callees:
 *     PopEvaluateAggressiveStandbyActions @ 0x140868BC8 (PopEvaluateAggressiveStandbyActions.c)
 *     PopSetModernStandbyTransitionReason @ 0x14086F530 (PopSetModernStandbyTransitionReason.c)
 */

__int64 __fastcall PdcPoCsEnterExitReason(char a1)
{
  PopSetModernStandbyTransitionReason();
  return PopEvaluateAggressiveStandbyActions(a1);
}
