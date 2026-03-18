/*
 * XREFs of ?StopFilterKeysTimers@@YAXXZ @ 0x1C015E6A0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C019CD50 (ApiSetEditionKillAccessibilityTimer.c)
 */

void __fastcall StopFilterKeysTimers(__int64 a1)
{
  if ( gtmridFKResponse )
  {
    ApiSetEditionKillAccessibilityTimer(a1, gtmridFKResponse);
    gtmridFKResponse = 0LL;
  }
  if ( gtmridFKAcceptanceDelay )
  {
    ApiSetEditionKillAccessibilityTimer(a1, gtmridFKAcceptanceDelay);
    gtmridFKAcceptanceDelay = 0LL;
  }
  gLastVkDown = 0;
  gBounceVk = 0;
}
