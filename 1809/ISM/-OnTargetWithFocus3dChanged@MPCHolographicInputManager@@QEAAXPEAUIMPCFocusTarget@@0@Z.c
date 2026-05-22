/*
 * XREFs of ?OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x180043194
 * Callers:
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x180007CDC (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?MPCHolographicInputManager_FocusedAppDisabled3DGamepad_@ISMTracing@@QEAAXAEB_N@Z @ 0x180044038 (-MPCHolographicInputManager_FocusedAppDisabled3DGamepad_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ?MPCHolographicInputManager_FocusedAppDisabled3DMouse_@ISMTracing@@QEAAXAEB_N@Z @ 0x1800440C0 (-MPCHolographicInputManager_FocusedAppDisabled3DMouse_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180047A44 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x180047BA4 (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x18004CC74 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCHolographicInputManager::OnTargetWithFocus3dChanged(
        MPCHolographicInputManager *this,
        struct IMPCFocusTarget *a2,
        struct IMPCFocusTarget *a3)
{
  bool v3; // bl
  char v7; // di
  char v8; // r15
  int v9; // eax
  int v10; // eax
  MPCCursorManager *v11; // rdi
  _DWORD *v12; // rcx
  ISMTracing *v13; // rcx
  _DWORD *v14; // rcx
  ISMTracing *v15; // rcx
  struct MPCGamepadInputHelper *Instance; // rax
  struct MPCGamepadInputHelper *v17; // rdi
  __int64 v18; // rax
  _QWORD *v19; // rdi
  _QWORD *i; // rbx

  v3 = 0;
  v7 = 0;
  v8 = 0;
  if ( ((1LL << gdwDeviceFamily) & 0x400) == 0 )
  {
    if ( a3 && (*(unsigned __int8 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a3 + 32LL))(a3) )
    {
      v9 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a3 + 56LL))(a3);
      v7 = GetPropW((HWND)v9, L"Windows.UI.Input.Spatial.DisableMouseRouting") != 0LL;
      v10 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a3 + 56LL))(a3);
      v8 = GetPropW((HWND)v10, L"Windows.UI.Input.Spatial.Disable3DFocusGamepadRouting") != 0LL;
    }
    if ( v7 != *((_BYTE *)this + 1874) )
    {
      *((_BYTE *)this + 1874) = v7;
      v11 = (MPCCursorManager *)*((_QWORD *)this + 237);
      if ( v11 && *((_BYTE *)v11 + 64) )
      {
        *((_BYTE *)v11 + 56) = *((_DWORD *)MPCHolographicInputManager::GetInstance() + 534) == 1;
        MPCCursorManager::UpdateMouseBinding(v11);
      }
      v12 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v12 && *v12 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCHolographicInputManager_FocusedAppDisabled3DMouse_(v13, (const bool *)this + 1874);
      }
    }
    if ( v8 != *((_BYTE *)this + 1875) )
    {
      *((_BYTE *)this + 1875) = v8;
      v14 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v14 )
      {
        if ( *v14 )
        {
          ISMTracing::Instance();
          ISMTracing::MPCHolographicInputManager_FocusedAppDisabled3DGamepad_(v15, (const bool *)this + 1875);
        }
      }
    }
  }
  Instance = MPCGamepadInputHelper::GetInstance();
  v17 = Instance;
  if ( a3 )
  {
    *(_BYTE *)Instance = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a3 + 32LL))(a3);
    v18 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a3 + 56LL))(a3);
    *((_QWORD *)v17 + 1) = v18;
    *((_QWORD *)v17 + 2) = GetAncestor((HWND)(int)v18, 2u);
    *((_DWORD *)v17 + 6) = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a3 + 48LL))(a3);
    v3 = (*(unsigned int (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a3 + 88LL))(a3) != 0;
  }
  else
  {
    *(_BYTE *)Instance = 0;
    *((_DWORD *)Instance + 6) = 0;
    *((_QWORD *)Instance + 2) = 0LL;
    *((_QWORD *)Instance + 1) = 0LL;
  }
  *((_BYTE *)v17 + 1) = v3;
  *((_BYTE *)v17 + 38) = *((_BYTE *)MPCHolographicInputManager::GetInstance() + 1875);
  MPCGamepadInputHelper::UpdateGamepadFocus(v17);
  v19 = (_QWORD *)*((_QWORD *)this + 230);
  for ( i = (_QWORD *)*((_QWORD *)this + 229); i != v19; ++i )
    (*(void (__fastcall **)(_QWORD, struct IMPCFocusTarget *, struct IMPCFocusTarget *))(*(_QWORD *)*i + 336LL))(
      *i,
      a2,
      a3);
}
