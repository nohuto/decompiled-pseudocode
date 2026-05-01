/*
 * XREFs of ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x180078FE0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180034B70 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180031BB0 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x180079600 (-_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUII.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800F7904 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x1800F7F04 (-_HandleImmersiveOwnedWindowVisibilityChange@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWN.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::_HandleWindowChangedOwner(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2,
        HWND a3)
{
  __int64 v5; // rbp
  int v6; // esi
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  int v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h] BYREF

  v5 = *(_QWORD *)a2;
  v6 = *((_DWORD *)a2 + 4);
  if ( v6 == 1 )
  {
    v7 = *((_QWORD *)a2 + 1);
    v8 = 16;
    v9 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int64 *, HWND))(**((_QWORD **)this + 67) + 80LL))(*((_QWORD *)this + 67), &v7, a3);
    if ( v5 != 27 && IsWindowVisible(*((HWND *)a2 + 1)) )
      CApplicationManager::_TryPresentDesktopExperience(this, *((_QWORD *)a2 + 1), 3LL, v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
  else if ( (unsigned int)(v6 - 2) <= 1 )
  {
    CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange(this, a2, a3);
  }
  if ( v5 == 27 )
  {
    if ( v6 == 1 )
      CApplicationManager::_HandleActivation2((__int64)this, (__int64)a2, 3);
    else
      CApplicationManager::_HandleActivation(this, a2);
  }
}
