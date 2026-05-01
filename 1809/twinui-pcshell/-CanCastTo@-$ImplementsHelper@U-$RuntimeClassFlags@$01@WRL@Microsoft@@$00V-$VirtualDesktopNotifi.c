/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18026E050
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIXamlViewHost@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18026DFDC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIXamlViewHost@@UIAllUp.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopThumbnailWindowFilter@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802EC090 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802EC090.c)
 *     ?VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1802EC490 (-VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAU.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIInvocationAnimationHost@@UIAnimatedDismissableHost@@UIDismissalAnimationHost@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802EF668 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIInvocationAnimationHo.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableObjectArray@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802F3D80 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802F3D80.c)
 *     ?VirtualDesktopItemCollection_CreateInstance@@YAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1802F4114 (-VirtualDesktopItemCollection_CreateInstance@@YAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDes.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9

  if ( !InlineIsEqualGUID(a2, &GUID_c179334c_4295_40d3_bea1_c654d965605a) )
    return 2147500034LL;
  *v2 = v3;
  return 0LL;
}
