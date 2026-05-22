/*
 * XREFs of ?ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAUInputInfo@@@Z @ 0x1800876CC
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180137BA0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180138A90 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021360 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

char __fastcall MPCGamepadInputHelper::ShouldUseGazeAndCommit(MPCGamepadInputHelper *this, struct InputInfo *a2)
{
  struct MPCHolographicInputManager *Instance; // rax
  char v5; // cl

  Instance = MPCHolographicInputManager::GetInstance();
  v5 = 0;
  if ( (*((_BYTE *)Instance + 2640) & 2) == 0 && !*((_BYTE *)a2 + 456) )
    return *((_BYTE *)this + 39) == 0;
  return v5;
}
