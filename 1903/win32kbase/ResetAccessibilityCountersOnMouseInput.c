/*
 * XREFs of ResetAccessibilityCountersOnMouseInput @ 0x1C009DEA0
 * Callers:
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C0192274 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C002C3B8 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C019CD50 (ApiSetEditionKillAccessibilityTimer.c)
 */

void ResetAccessibilityCountersOnMouseInput()
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF
  int v3; // [rsp+30h] [rbp+8h] BYREF

  gStickyKeysLeftShiftCount = 0;
  gStickyKeysRightShiftCount = 0;
  _InterlockedOr(v2, 0);
  if ( gtmridFKActivation )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v3);
    v1 = gtmridFKActivation;
    if ( gtmridFKActivation )
    {
      ApiSetEditionKillAccessibilityTimer();
      gtmridFKActivation = 0LL;
      gFilterKeysState = 8;
    }
    if ( !v3 )
      UserSessionSwitchLeaveCrit(v0, v1);
  }
}
