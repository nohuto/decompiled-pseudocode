/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApplicationStateChangeHandler@@UILightDismissNotification@@UIDesktopVisibilityChangesNotification@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18030DFC4
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UITabletModeChangeListener@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIDesktopVisibilityChangesNotification@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18030E0A4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiv_ea_18030E0A4.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18030E038 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIClipboardViewLauncher.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApplicationStateChangeHandler,ILightDismissNotification,IDesktopVisibilityChangesNotification,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r11
  __int64 v10; // r10

  if ( InlineIsEqualGUID(a2, &GUID_b755e6e0_b048_49cc_8911_11a041216f5f) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_8d4d1ec2_4740_4fc5_b4b1_6dc3722a2eeb)
      || InlineIsEqualGUID(v6, &GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84) )
    {
      *v7 = v9;
    }
    else
    {
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,Microsoft::WRL::FtmBase>::CanCastTo(
                             v9 + 8,
                             v10);
    }
    return v8;
  }
}
