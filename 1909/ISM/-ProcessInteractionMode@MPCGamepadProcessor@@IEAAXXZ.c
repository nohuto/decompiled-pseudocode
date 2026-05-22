/*
 * XREFs of ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ @ 0x180138E9C
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180137BA0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180138CD0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021360 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?OnInteractiveIntentGesture@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@III_KI@Z @ 0x18007E820 (-OnInteractiveIntentGesture@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@III_KI@Z.c)
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KI@Z @ 0x18007F06C (-SendHomeGesture@MPCManager@@QEAAXKK_KI@Z.c)
 *     ?IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ @ 0x180081748 (-IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180140A70 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 */

void __fastcall MPCGamepadProcessor::ProcessInteractionMode(MPCGamepadProcessor *this)
{
  MPCHolographicInputManager *Instance; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  const char *v5; // r9
  _BYTE *v6; // rcx

  if ( *((_BYTE *)this + 7157)
    || (Instance = MPCHolographicInputManager::GetInstance(),
        (unsigned __int8)MPCHolographicInputManager::IsExclusiveAppFocused(Instance, v3, v4, v5)) )
  {
    MPCButtonHoldHelper::UpdateState(
      *((MPCButtonHoldHelper **)this + 905),
      (*((_DWORD *)this + 1676) & 0x40000000) != 0,
      *((_QWORD *)this + 584));
    v6 = (_BYTE *)*((_QWORD *)this + 905);
    if ( v6[8] )
      *((_BYTE *)this + 6680) = 1;
    if ( !v6[11] || *((_BYTE *)this + 385) )
    {
      if ( v6[13] )
        MPCManager::OnInteractiveIntentGesture(
          (__int64)MPCManager::s_instance,
          *((_QWORD *)this + 7),
          4u,
          **((_DWORD **)this + 7),
          64,
          *((_DWORD *)this + 1676),
          *((_QWORD *)this + 584),
          0);
    }
    else
    {
      MPCManager::SendHomeGesture(
        MPCManager::s_instance,
        **((_DWORD **)this + 7),
        *(_DWORD *)(*((_QWORD *)this + 7) + 4LL),
        *((_QWORD *)this + 584),
        0);
    }
  }
  else
  {
    MPCButtonHoldHelper::ResetState(*((MPCButtonHoldHelper **)this + 905));
  }
}
