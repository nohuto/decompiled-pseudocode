/*
 * XREFs of ResetAccessibilityCountersOnMouseInput @ 0x1C006AAA0
 * Callers:
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01351B4 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0033028 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C013EEA0 (ApiSetEditionKillAccessibilityTimer.c)
 */

void ResetAccessibilityCountersOnMouseInput()
{
  __int64 v0; // rcx
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF
  int v2; // [rsp+30h] [rbp+8h] BYREF

  gStickyKeysLeftShiftCount = 0;
  gStickyKeysRightShiftCount = 0;
  _InterlockedOr(v1, 0);
  if ( gtmridFKActivation )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v2);
    if ( gtmridFKActivation )
    {
      ApiSetEditionKillAccessibilityTimer();
      gtmridFKActivation = 0LL;
      gFilterKeysState = 8;
    }
    if ( !v2 )
      UserSessionSwitchLeaveCrit(v0);
  }
}
