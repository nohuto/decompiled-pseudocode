/*
 * XREFs of ?XamlAllUpViewHost_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D0A18
 * Callers:
 *     ?_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18034ADF8 (-_CreateXamlMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationVi.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitializeOrThrow@VXamlAllUpViewHost@@$$V@wil@@YA?AV?$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@XZ @ 0x1802BFD58 (--$MakeAndInitializeOrThrow@VXamlAllUpViewHost@@$$V@wil@@YA-AV-$ComPtr@VXamlAllUpViewHost@@@WRL@.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@@Details@23@UIXamlViewHost@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802C72D8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@V-.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x1802CB058 (-InternalRelease@-$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall XamlAllUpViewHost_CreateInstance(const struct _GUID *a1, void **a2)
{
  _DWORD *v3; // rcx
  void *v4; // r9
  int CanCastTo; // edi
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  XamlAllUpViewHost *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = (XamlAllUpViewHost *)a1;
  *a2 = 0LL;
  try
  {
    wil::MakeAndInitializeOrThrow<XamlAllUpViewHost,>(&v9);
    *a2 = 0LL;
    if ( InlineIsEqualGUID(&GUID_f1b5677a_51f5_46d9_9108_3d9c8201199b, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a2 = v4;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 8LL))(v4);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewHostBase<IAllUpViewHost>>,IXamlViewHost,IAllUpViewHostInternal,ITabletModeChangeListener,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::CanCastTo(
                    (__int64)v4,
                    v3);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
    }
    Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease((__int64 *)&v9);
    result = (unsigned int)CanCastTo;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2D8,
                           (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
                           v6);
  }
  return result;
}
