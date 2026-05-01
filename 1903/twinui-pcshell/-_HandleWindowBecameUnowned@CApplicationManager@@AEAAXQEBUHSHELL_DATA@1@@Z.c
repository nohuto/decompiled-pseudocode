/*
 * XREFs of ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18011DDB8
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x18001FF50 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18001B9F0 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180081058 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18011CCCC (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18011DFC0 (-_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::_HandleWindowBecameUnowned(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2)
{
  __int64 v4; // r15
  BOOL v5; // eax
  int v6; // ecx
  HWND v7; // rdi
  DWORD WindowThreadProcessId; // ebx
  __int64 v9; // [rsp+28h] [rbp-18h] BYREF
  int v10; // [rsp+30h] [rbp-10h]
  __int64 v11; // [rsp+38h] [rbp-8h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF
  DWORD dwProcessId; // [rsp+80h] [rbp+40h] BYREF

  v4 = *(_QWORD *)a2;
  if ( *((_DWORD *)a2 + 4) == 1 )
  {
    if ( !*((_BYTE *)a2 + 21) || (v5 = IsWindowVisible(*((HWND *)a2 + 1)), v6 = 6, !v5) )
      v6 = 10;
    v9 = *((_QWORD *)a2 + 1);
    v10 = v6;
    v11 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 67) + 80LL))(*((_QWORD *)this + 67), &v9);
    if ( v4 == 26 )
      CApplicationManager::_HandleActivation2((__int64)this, (__int64)a2, 1);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  }
  else if ( *((_DWORD *)a2 + 4) == 2 )
  {
    if ( !*((_QWORD *)this + 131)
      || !GetPropW(*((HWND *)a2 + 1), L"IAM.IsUncloakedXamlIslandPopup")
      || (v7 = (HWND)*((_QWORD *)this + 131),
          WindowThreadProcessId = GetWindowThreadProcessId(*((HWND *)a2 + 1), &dwProcessId),
          WindowThreadProcessId != GetWindowThreadProcessId(v7, (LPDWORD)&v12))
      || dwProcessId != (_DWORD)v12 )
    {
      CApplicationManager::_HandleWindowCreation(this, a2);
      if ( v4 == 26 )
      {
        v12 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
        v9 = *((_QWORD *)a2 + 1);
        v10 = 3;
        if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>((__int64)this, &v9, &v12, 0LL) >= 0
          && (((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 280LL))(v12) & 1) != 0
           || ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 280LL))(v12) & 8) != 0)
          && ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 280LL))(v12) & 2) == 0 )
        {
          CApplicationManager::_HandleActivation(this, a2);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
      }
    }
  }
  else
  {
    if ( *((_DWORD *)a2 + 4) == 3 )
      (*(void (__fastcall **)(PVOID, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                     + 24LL))(
        CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
        *((_QWORD *)a2 + 1),
        1LL);
    if ( v4 == 26 )
      CApplicationManager::_HandleActivation(this, a2);
  }
}
