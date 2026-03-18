/*
 * XREFs of PdcPoCsEnterExitReason @ 0x14086EC30
 * Callers:
 *     <none>
 * Callees:
 *     PopEvaluateAggressiveStandbyActions @ 0x140868BE8 (PopEvaluateAggressiveStandbyActions.c)
 *     PopSetModernStandbyTransitionReason @ 0x14086F550 (PopSetModernStandbyTransitionReason.c)
 */

__int64 __fastcall PdcPoCsEnterExitReason(char a1)
{
  PopSetModernStandbyTransitionReason();
  return PopEvaluateAggressiveStandbyActions(a1);
}
