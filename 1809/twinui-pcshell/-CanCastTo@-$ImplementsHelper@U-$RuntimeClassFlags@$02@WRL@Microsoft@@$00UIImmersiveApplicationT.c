/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180039AD4
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveApplicationManagerSafeForSyncCallouts@@UIImmersiveApplicationManagerSafeForSyncCallouts2@@UIApplicationStateChangeHandler@@UIImmersiveSessionIdleNotification@@UIRequestTrustedComponentForegroundControlInitialization@@UIAppSwitchingTestability@@UIImmersiveApplicationPresentation@@UIApplicationViewReconstitution@@UIApplicationViewSerialization@@UIPrivilegedOperationsConsumer@@UIObjectProviderForWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIImmersiveApplicationTerminator@@UIImmersiveApplicationTitleBarManager@@UIUncloakWindowService@@UIXamlIslandPopupManager@@UIWindowManagementShowMoveSizeEvents@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800380A0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveApplicationM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveApplicationTitleBarManager,IUncloakWindowService,IXamlIslandPopupManager,IWindowManagementShowMoveSizeEvents>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == -814696900
    && a2[1] == *(_DWORD *)&GUID_cf70b63c_d31a_4e82_a823_b61bcc4df275.Data2
    && a2[2] == *(_DWORD *)GUID_cf70b63c_d31a_4e82_a823_b61bcc4df275.Data4
    && a2[3] == *(_DWORD *)&GUID_cf70b63c_d31a_4e82_a823_b61bcc4df275.Data4[4]
    || (a1 += 8LL, *a2 == -1224286739)
    && a2[1] == *(_DWORD *)&GUID_b706dded_208c_4795_b610_e7c002c31edc.Data2
    && a2[2] == *(_DWORD *)GUID_b706dded_208c_4795_b610_e7c002c31edc.Data4
    && a2[3] == *(_DWORD *)&GUID_b706dded_208c_4795_b610_e7c002c31edc.Data4[4]
    || (a1 += 8LL, *a2 == -615847089)
    && a2[1] == *(_DWORD *)&GUID_db4aeb4f_d9af_4ed4_aed4_3ba004c0ffee.Data2
    && a2[2] == *(_DWORD *)GUID_db4aeb4f_d9af_4ed4_aed4_3ba004c0ffee.Data4
    && a2[3] == *(_DWORD *)&GUID_db4aeb4f_d9af_4ed4_aed4_3ba004c0ffee.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == -2005384609
    && a2[1] == *(_DWORD *)&GUID_8878425f_8c9b_4051_a1ef_cc08e3166e7b.Data2
    && a2[2] == *(_DWORD *)GUID_8878425f_8c9b_4051_a1ef_cc08e3166e7b.Data4
    && a2[3] == *(_DWORD *)&GUID_8878425f_8c9b_4051_a1ef_cc08e3166e7b.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0LL;
  }
  return 2147500034LL;
}
