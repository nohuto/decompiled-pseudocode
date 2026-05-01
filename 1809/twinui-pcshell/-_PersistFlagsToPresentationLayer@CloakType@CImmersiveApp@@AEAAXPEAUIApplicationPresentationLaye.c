/*
 * XREFs of ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x180121C2C
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x18002B490 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18004ADFC (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 *     ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x18011B610 (-ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x18011CC10 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer(
        LPCWSTR *this,
        struct IApplicationPresentationLayer *a2)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF
  HWND hWnd; // [rsp+58h] [rbp+20h] BYREF

  if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
  {
    v4 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
    if ( (*(int (__fastcall **)(struct IApplicationPresentationLayer *, __int64 *))(*(_QWORD *)a2 + 136LL))(a2, &v4) >= 0
      && (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v4 + 24LL))(v4, &hWnd) >= 0 )
    {
      SetPropW(hWnd, this[1], (HANDLE)*(unsigned int *)this);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  }
}
