/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIImmersiveApplicationManagerSafeForSyncCallouts2@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18002DAD0
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveApplicationManager@@UIImmersiveShellHookNotification@@UIImmersiveApplicationArrayService@@UIImmersiveApplicationArrayService2@@UIImmersiveApplicationVisibilityOverride@@UIIAMServiceProvider@@UISpecialWindowMessageCallback@@UIImmersiveMonitorNotification@@UIApplicationManagerViewPosition@@UIImmersiveApplicationNotificationService@@UIImmersiveAppNotificationListeners@@UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIImmersiveApplicationManagerSafeForSyncCallouts2@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18002E250 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiv_ea_18002E250.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveApplicationManagerInternal,IImmersiveApplicationManagerSafeForSyncCallouts,IImmersiveApplicationManagerSafeForSyncCallouts2,IApplicationStateChangeHandler,IImmersiveSessionIdleNotification,IRequestTrustedComponentForegroundControlInitialization,IAppSwitchingTestability,IImmersiveApplicationPresentation,IApplicationViewReconstitution,IApplicationViewSerialization,IPrivilegedOperationsConsumer,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager,IWindowManagementShowMoveSizeEvents>::CanCastTo(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // r9

  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee, a3, a2)
    && !(unsigned int)InlineIsEqualGUID(v3, &GUID_237c07c9_313b_4b5a_b98d_4f613da23e8f, v4, v5)
    && !(unsigned int)InlineIsEqualGUID(v7, &GUID_af40de1b_7663_429e_9fee_6029ee6c4978, v4, v8)
    && !(unsigned int)InlineIsEqualGUID(v9, &GUID_b755e6e0_b048_49cc_8911_11a041216f5f, v4, v10)
    && !(unsigned int)InlineIsEqualGUID(v11, &GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2, v4, v12)
    && !(unsigned int)InlineIsEqualGUID(v13, &GUID_2a239388_fc85_4077_981e_9e4205cf9451, v4, v14)
    && !(unsigned int)InlineIsEqualGUID(v15, &GUID_8332fbec_5803_4461_be72_91b106e7af8a, v4, v16)
    && !(unsigned int)InlineIsEqualGUID(v17, &GUID_a63390e7_2828_46fb_9af0_fe36eae5bae0, v4, v18)
    && !(unsigned int)InlineIsEqualGUID(v19, &GUID_371e4246_3f0a_4ec6_a471_4d35f63b1164, v4, v20)
    && !(unsigned int)InlineIsEqualGUID(v21, &GUID_41146a36_84a5_4c5a_b7d9_df28c9576c6b, v4, v22)
    && !(unsigned int)InlineIsEqualGUID(v23, &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db, v4, v24) )
  {
    return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager,IWindowManagementShowMoveSizeEvents>::CanCastTo(
             v6 + 8,
             v25);
  }
  *v4 = v6;
  return 0LL;
}
