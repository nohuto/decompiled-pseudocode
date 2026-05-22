/*
 * XREFs of ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ @ 0x1800F87A0
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F82B0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800F88C0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KI@Z @ 0x18003CCD4 (-SendHomeGesture@MPCManager@@QEAAXKK_KI@Z.c)
 *     ?OnInteractiveIntentGesture@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@III_KI@Z @ 0x18003CF70 (-OnInteractiveIntentGesture@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@III_KI@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ @ 0x180042B14 (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180102BE4 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCGamepadProcessor::ProcessInteractionMode(MPCGamepadProcessor *this)
{
  MPCHolographicInputManager *Instance; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  const char *v5; // r9
  struct IMPCFocusTarget *FocusedTarget; // rax
  __int64 v7; // rax
  _BYTE *v8; // rcx

  if ( *((_BYTE *)this + 5845)
    || (Instance = MPCHolographicInputManager::GetInstance(),
        FocusedTarget = MPCHolographicInputManager::GetFocusedTarget(Instance, v3, v4, v5),
        (*(unsigned __int8 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)FocusedTarget + 32LL))(FocusedTarget)) )
  {
    MPCButtonHoldHelper::UpdateState(
      *((MPCButtonHoldHelper **)this + 741),
      (*((_DWORD *)this + 1350) & 0x40000000) != 0,
      *((_QWORD *)this + 475));
    v8 = (_BYTE *)*((_QWORD *)this + 741);
    if ( v8[8] )
      *((_BYTE *)this + 5368) = 1;
    if ( !v8[11] || *((_BYTE *)this + 377) )
    {
      if ( v8[13] )
        MPCManager::OnInteractiveIntentGesture(
          (__int64)MPCManager::s_instance,
          *((_QWORD *)this + 7),
          4u,
          **((_DWORD **)this + 7),
          64,
          *((_DWORD *)this + 1350),
          *((_QWORD *)this + 475),
          0);
    }
    else
    {
      MPCManager::SendHomeGesture(
        MPCManager::s_instance,
        **((_DWORD **)this + 7),
        *(_DWORD *)(*((_QWORD *)this + 7) + 4LL),
        *((_QWORD *)this + 475),
        0);
    }
  }
  else
  {
    v7 = *((_QWORD *)this + 741);
    if ( *(_BYTE *)(v7 + 8) )
    {
      *(_WORD *)(v7 + 8) = 0;
      *(_QWORD *)(v7 + 16) = 0LL;
    }
    *(_QWORD *)(v7 + 32) = 0LL;
  }
}
