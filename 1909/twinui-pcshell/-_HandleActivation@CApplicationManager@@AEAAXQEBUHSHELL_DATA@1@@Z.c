/*
 * XREFs of ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18013C16C
 * Callers:
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x18007F080 (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x18007F634 (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18013D258 (-_HandleWindowBecameUnowned@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180025EC0 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x180060610 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800836B8 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::_HandleActivation(
        CApplicationManager *this,
        const struct CApplicationManager::HSHELL_DATA *const a2)
{
  __int64 v4; // [rsp+38h] [rbp-20h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+10h] BYREF

  v6 = 0LL;
  if ( *((_DWORD *)a2 + 4) == 2 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
    v4 = *((_QWORD *)a2 + 1);
    v5 = 2;
    if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>((__int64)this, &v4, &v6, &v7) >= 0 )
      CApplicationManager::_UpdatePerApplicationDataIfNeeded((__int64)this, v6, *((HWND *)a2 + 1), 0);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 68) + 24LL))(
    *((_QWORD *)this + 68),
    *((_QWORD *)a2 + 1),
    *((unsigned int *)a2 + 4),
    v6);
  CApplicationManager::_HandleActivation2((__int64)this, (__int64)a2, 1);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
}
