/*
 * XREFs of ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x18004E3B0
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@@Z @ 0x18004DF20 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18004EA2C (-_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImme.c)
 *     ?IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z @ 0x18010AF00 (-IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z.c)
 *     ?UnensureApplication@CAppViewManager@@AEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18010F9A4 (-UnensureApplication@CAppViewManager@@AEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_EvaluateFrameworkViewTypeForSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEA_N@Z @ 0x18011013C (-_EvaluateFrameworkViewTypeForSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0PEAUIViewWrapper@V.c)
 *     ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180110B00 (-_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveM.c)
 *     ?_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransferWindowOptions@@PEAPEAUIImmersiveApplicationInternal@@PEA_N4@Z @ 0x1801112A8 (-_PrepareToSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEBUTransf.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::_GetGlomForWindow(
        CAppViewManager *this,
        HWND a2,
        struct IImmersiveApplicationInternal **a3,
        bool *a4)
{
  __int64 v7; // rbx
  int v8; // ebx
  struct IImmersiveApplicationInternal *v9; // rbx
  struct IImmersiveApplicationInternal *v10; // rax
  struct IImmersiveApplicationInternal *v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+80h] [rbp+40h] BYREF
  HWND v14; // [rsp+88h] [rbp+48h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  v12 = 0LL;
  v7 = *((_QWORD *)this + 15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  v8 = (*(__int64 (__fastcall **)(__int64, HWND, GUID *, struct IImmersiveApplicationInternal **))(*(_QWORD *)v7 + 40LL))(
         v7,
         a2,
         &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
         &v12);
  if ( v8 >= 0 )
  {
    v13 = 0LL;
    v9 = v12;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    v8 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, GUID *, __int64 *))(*(_QWORD *)v9 + 352LL))(
           v9,
           1LL,
           &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
           &v13);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v13 + 32LL))(v13, &v14);
      if ( v8 >= 0 )
      {
        *a4 = a2 == v14;
        v10 = v12;
        v12 = 0LL;
        *a3 = v10;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  return (unsigned int)v8;
}
