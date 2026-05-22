/*
 * XREFs of ?ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ @ 0x180047AF8
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F82B0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800F88C0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

char __fastcall MPCGamepadInputHelper::ShouldHandleMPCInput(MPCGamepadInputHelper *this)
{
  char v2; // bl

  v2 = 1;
  if ( *((_DWORD *)MPCHolographicInputManager::GetInstance() + 534) != 1
    || (*((_DWORD *)MPCHolographicInputManager::GetInstance() + 538) & 2) != 0
    || *(_BYTE *)this && !*((_BYTE *)this + 41) )
  {
    return 0;
  }
  return v2;
}
