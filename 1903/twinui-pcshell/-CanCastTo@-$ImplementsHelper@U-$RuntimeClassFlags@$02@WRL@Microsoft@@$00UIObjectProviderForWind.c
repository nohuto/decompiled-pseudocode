/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180026320
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveApplicationManagerInternal@@UIImmersiveApplicationManagerSafeForSyncCallouts@@UIImmersiveApplicationManagerSafeForSyncCallouts2@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180024760 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveApplicationM.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectProviderForWindow,IImmersiveApplicationTerminator,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager,IWindowManagementShowMoveSizeEvents>::CanCastTo(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  int v3; // r9d
  _DWORD *v5; // rcx
  _QWORD *v6; // r8
  int v7; // r9d
  _DWORD *v8; // r10
  __int64 v9; // r11
  _QWORD *v10; // r8
  __int64 v11; // r11

  v3 = *a2;
  if ( *a2 == 261971833
    && a2[1] == *(_DWORD *)&GUID_0f9d5f79_22ef_4898_88f4_9b5c3ad2b5fe.Data2
    && a2[2] == *(_DWORD *)GUID_0f9d5f79_22ef_4898_88f4_9b5c3ad2b5fe.Data4
    && a2[3] == *(_DWORD *)&GUID_0f9d5f79_22ef_4898_88f4_9b5c3ad2b5fe.Data4[4]
    || (a1 += 8LL, v3 == 2002484756)
    && a2[1] == *(_DWORD *)&GUID_775b7e14_1c27_4d58_93ed_c37ef70caba8.Data2
    && a2[2] == *(_DWORD *)GUID_775b7e14_1c27_4d58_93ed_c37ef70caba8.Data4
    && a2[3] == *(_DWORD *)&GUID_775b7e14_1c27_4d58_93ed_c37ef70caba8.Data4[4]
    || (a1 += 8LL, v3 == -814696900)
    && a2[1] == *(_DWORD *)&GUID_cf70b63c_d31a_4e82_a823_b61bcc4df275.Data2
    && a2[2] == *(_DWORD *)GUID_cf70b63c_d31a_4e82_a823_b61bcc4df275.Data4
    && a2[3] == *(_DWORD *)&GUID_cf70b63c_d31a_4e82_a823_b61bcc4df275.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else if ( InlineIsEqualGUID(a2, &GUID_b706dded_208c_4795_b610_e7c002c31edc)
         || (v9 += 8LL, v7 == -615847089)
         && v8[1] == *(_DWORD *)&GUID_db4aeb4f_d9af_4ed4_aed4_3ba004c0ffee.Data2
         && v8[2] == *(_DWORD *)GUID_db4aeb4f_d9af_4ed4_aed4_3ba004c0ffee.Data4
         && v8[3] == *(_DWORD *)&GUID_db4aeb4f_d9af_4ed4_aed4_3ba004c0ffee.Data4[4] )
  {
    *v6 = v9;
    return 0LL;
  }
  else if ( InlineIsEqualGUID(v5, &GUID_8878425f_8c9b_4051_a1ef_cc08e3166e7b) )
  {
    *v10 = v11 + 8;
    return 0LL;
  }
  else
  {
    return 2147500034LL;
  }
}
