/*
 * XREFs of ?_TryPresentDesktopExperience@CApplicationManager@@AEAAXPEAUHWND__@@W4MODE_CHANGE_REASON@@PEAUIImmersiveMonitor@@@Z @ 0x18007F6FC
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180029C10 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18002AB90 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z @ 0x18007F080 (-_HandleWindowChangedOwner@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@PEAUHWND__@@@Z.c)
 *     ?_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z @ 0x18007F634 (-_HandleWindowBecameOwned@CApplicationManager@@AEAAXPEAUHWND__@@QEBUHSHELL_DATA@1@@Z.c)
 *     ?_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZBID@@@Z @ 0x18013C92C (-_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZB.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_IsMultimon@CApplicationManager@@AEBA_NXZ @ 0x18008331C (-_IsMultimon@CApplicationManager@@AEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18013BB74 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18013C02C (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ?_IsActiveDesktopApp@CApplicationManager@@AEBA_NPEAUHWND__@@@Z @ 0x18013E994 (-_IsActiveDesktopApp@CApplicationManager@@AEBA_NPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::_TryPresentDesktopExperience(
        CApplicationManager *a1,
        HWND a2,
        int a3,
        struct IImmersiveMonitor *a4)
{
  struct IObjectArray *v8[3]; // [rsp+40h] [rbp-18h] BYREF
  struct ISyncIAMEventHandler *v9; // [rsp+78h] [rbp+20h] BYREF

  if ( a4 )
  {
    v8[1] = (struct IObjectArray *)-2LL;
    if ( CApplicationManager::_IsMultimon(a1) && CApplicationManager::_IsActiveDesktopApp(a1, a2) )
    {
      v8[0] = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v8);
      if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(a1, a4, v8) >= 0 )
      {
        v9 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
        if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(a1, &v9) >= 0 )
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, _QWORD, int, int, int))(*(_QWORD *)v9 + 24LL))(
            v9,
            v8[0],
            ((unsigned __int64)a1 + 248) & -(__int64)(a1 != 0LL),
            0LL,
            1,
            a3,
            0xFFFF);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v8);
    }
  }
}
