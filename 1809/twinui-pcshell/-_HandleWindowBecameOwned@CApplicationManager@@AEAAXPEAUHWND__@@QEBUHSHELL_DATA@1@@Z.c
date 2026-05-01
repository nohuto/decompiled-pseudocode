/*
 * XREFs of ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x180079538
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180034B70 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180031BB0 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x180079600 (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18007E4B0 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800F7904 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x1800F7F04 (-_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWN.c)
 *     ?_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZBID@@@Z @ 0x1800F80C0 (-_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZB.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CApplicationManager::_HandleWindowBecameOwned(
        CApplicationManager *this,
        HWND a2,
        const struct CApplicationManager::HSHELL_DATA *const a3)
{
  __int64 v6; // r15
  int v7; // eax
  int v8; // ecx
  __int64 v9; // r9
  int v10; // r14d
  BOOL v11; // eax
  void *v12; // rbx
  HWND v13; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+38h] [rbp-38h]
  __int64 v15[2]; // [rsp+40h] [rbp-30h] BYREF
  HWND v16; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h] BYREF
  char v18; // [rsp+60h] [rbp-10h]
  IUnknown *punk; // [rsp+A0h] [rbp+30h] BYREF
  void *ppv; // [rsp+A8h] [rbp+38h] BYREF

  v15[1] = -2LL;
  v6 = *(_QWORD *)a3;
  v7 = *((_DWORD *)a3 + 4);
  if ( v7 == 1 )
  {
    if ( !*((_BYTE *)a3 + 21) || (v11 = IsWindowVisible(*((HWND *)a3 + 1)), v8 = 5, !v11) )
      v8 = 9;
    v13 = (HWND)*((_QWORD *)a3 + 1);
    v14 = v8;
    v15[0] = 0LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD, HWND *))(**((_QWORD **)this + 67) + 80LL))(*((_QWORD *)this + 67), &v13);
    if ( v10 == 1 )
    {
      LOBYTE(v9) = 1;
      CApplicationManager::_HandleMonitorRelatedNotificationForDesktopWindow(
        this,
        *((_QWORD *)a3 + 1),
        *((_QWORD *)a3 + 1),
        v9,
        *((_DWORD *)a3 + 6));
    }
    if ( v6 == 25 )
    {
      CApplicationManager::_HandleActivation2((__int64)this, (__int64)a3, 3);
    }
    else if ( !v10 )
    {
      CApplicationManager::_TryPresentDesktopExperience(this, *((_QWORD *)a3 + 1), 3LL, v15[0]);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  }
  else if ( (unsigned int)(v7 - 2) <= 1 )
  {
    if ( v6 == 25 )
      CApplicationManager::_HandleActivation(this, a3);
    else
      CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange(this, a3, a2);
    punk = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    v13 = a2;
    v14 = 1;
    if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v13, &punk, 0LL) >= 0 )
    {
      ppv = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppv);
      if ( IUnknown_GetSite(punk, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &ppv) >= 0 )
      {
        v13 = 0LL;
        v16 = a2;
        v17 = 0LL;
        v18 = 0;
        v12 = ppv;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
        (*(void (__fastcall **)(void *, IUnknown *, HWND *, HWND *))(*(_QWORD *)v12 + 56LL))(v12, punk, &v16, &v13);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppv);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  }
  else
  {
    CApplicationManager::_HandleActivation(this, a3);
  }
}
