/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800250E0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024880 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180024880.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180155AF8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$Impleme_ea_180155AF8.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IPrivilegedOperationsConsumer,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>::CanCastTo(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // r10
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r9
  _DWORD *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r8
  _QWORD *v17; // r10

  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_0afd5bce_d688_4973_ad54_ad0ce775f26b, a1, a2)
    || (unsigned int)InlineIsEqualGUID(v2, &GUID_e0fe7384_5482_4659_ab2c_4ff038948779, v3 + 8, v4)
    || (unsigned int)InlineIsEqualGUID(v6, &GUID_6d1c2de0_833b_4edb_89a3_4a79a8a02b88, v3 + 8, v7)
    || (unsigned int)InlineIsEqualGUID(v8, &GUID_b7c623c4_971b_4c3e_96fe_89de6651d7db, v3 + 8, v9) )
  {
    goto LABEL_15;
  }
  v11 = v3 + 8;
  if ( *v10 == 794127247
    && v10[1] == *(_DWORD *)&GUID_2f556b8f_7278_41ef_b868_3152588db186.Data2
    && v10[2] == *(_DWORD *)GUID_2f556b8f_7278_41ef_b868_3152588db186.Data4
    && v10[3] == *(_DWORD *)&GUID_2f556b8f_7278_41ef_b868_3152588db186.Data4[4]
    || (v11 = v3 + 16, *v10 == -499699522)
    && v10[1] == *(_DWORD *)&GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7.Data2
    && v10[2] == *(_DWORD *)GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7.Data4
    && v10[3] == *(_DWORD *)&GUID_e23730be_13f1_4f0b_88ab_76d5e3beb5b7.Data4[4] )
  {
    *v5 = v11;
    return 0LL;
  }
  if ( (unsigned int)InlineIsEqualGUID(v10, &GUID_374fdd79_cca2_4be4_a49d_0508c29743bc, v3 + 24, v10)
    || (unsigned int)InlineIsEqualGUID(v12, &GUID_de6e8a03_3811_4239_9de9_96d0dfc301e6, v3 + 8, v13) )
  {
LABEL_15:
    *v5 = v3;
    return 0LL;
  }
  else if ( (unsigned int)InlineIsEqualGUID(v14, &GUID_3d2acb9f_0690_4569_b33a_da2d10adff4f, v3, v15) )
  {
    *v17 = v16 + 8;
    return 0LL;
  }
  else
  {
    return 2147500034LL;
  }
}
