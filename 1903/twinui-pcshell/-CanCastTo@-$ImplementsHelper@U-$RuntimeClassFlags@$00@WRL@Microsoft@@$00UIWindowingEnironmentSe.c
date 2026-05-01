/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWindowingEnironmentSettingsArgsForImplicitEvent@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007920C
 * Callers:
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ViewSizePreference@ViewManagement@UI@6@AEAW489UI@6@AEA_KAEAPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@PEAUIWindowingEnvironmentSettings@3456@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ViewSizePreference@ViewManagement@UI@7@2AEA_KAEAPEAUIAsyncCallback@@$$QEAPEAUIPropertySet@Collections@Foundation@7@$$QEAPEAUIWindowingEnvironmentSettings@4567@@Z @ 0x18000E30C (--$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@UIWindowingEnironmentSettingsArgsForImplicitEvent@6789@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180027240 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180027240.c)
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapperInternal@@PEAU7@AEAW4ViewSizePreference@ViewManagement@UI@6@AEAW489UI@6@AEA_KAEAPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapperInternal@@1AEAW4ViewSizePreference@ViewManagement@UI@7@2AEA_KAEAPEAUIAsyncCallback@@$$QEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x180267008 (--$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManager_ea_180267008.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VViewEventArgsBase@@@Details@23@UIWeakReferenceSource@@UIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@UIWindowingEnironmentSettingsArgsForImplicitEvent@89Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18026A754 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U-$Implem_ea_18026A754.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9

  if ( !InlineIsEqualGUID(a2, &GUID_ca746cf0_7375_4d7a_9d29_6c72d8b5e684) )
    return 2147500034LL;
  *v2 = v3;
  return 0LL;
}
