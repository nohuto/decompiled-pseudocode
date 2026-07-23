/*
 * XREFs of PdcPoCsEnterExitReason @ 0x14086FE70
 * Callers:
 *     <none>
 * Callees:
 *     PopEvaluateAggressiveStandbyActions @ 0x140869E28 (PopEvaluateAggressiveStandbyActions.c)
 *     PopSetModernStandbyTransitionReason @ 0x140870790 (PopSetModernStandbyTransitionReason.c)
 */

__int64 __fastcall PdcPoCsEnterExitReason(char a1)
{
  PopSetModernStandbyTransitionReason();
  return PopEvaluateAggressiveStandbyActions(a1);
}
