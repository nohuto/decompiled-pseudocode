/*
 * XREFs of ?GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z @ 0x180057264
 * Callers:
 *     ?GetEntitlement@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@000E0@Z @ 0x180055510 (-GetEntitlement@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@000E0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180005D24 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z @ 0x180055394 (-GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x180057F40 (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_InstallAttribution@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800586EC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_InstallAttribution@@@wil@@CA.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVGetEntitlementResult@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVGetEntitlementResult@InstallControl@Preview@Store@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVGetEntitlementResult@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18005C568 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVGetEntitlementResult@InstallControl@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ContentManagement::AppManager::GetEntitlementInternal(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING a5,
        unsigned __int8 a6,
        HSTRING a7)
{
  int AppInstallManager; // eax
  int Entitlement; // ebx
  HSTRING *v12; // r9
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdi
  int v20; // eax
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  _QWORD *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  _QWORD *v28; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v29; // rcx
  int v31[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD *v32; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+50h] [rbp-20h] BYREF
  __int64 v34; // [rsp+58h] [rbp-18h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v35[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  HSTRING v37; // [rsp+A8h] [rbp+38h] BYREF

  v37 = a4;
  v35[1] = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)-2LL;
  v35[0] = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(this, v35);
  Entitlement = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x158,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
    goto LABEL_40;
  }
  if ( (`wil::Feature<__WilFeatureTraits_Feature_InstallAttribution>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_InstallAttribution>::GetCachedFeatureEnabledState();
  LODWORD(v37) = 0;
  BYTE4(v37) = 3;
  v31[0] = 0;
  LOWORD(v31[1]) = WORD2(v37);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_InstallAttribution>::GetFeaturePropertyCache'::`2'::data,
    0x312BB7u,
    (const struct FEATURE_LOGGED_TRAITS *)v31,
    1,
    3);
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v13 = CreativeFramework::StoreHelpers::GenerateStoreId(a2, a3, &string, v12);
  Entitlement = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_39:
    WindowsDeleteString(string);
    goto LABEL_40;
  }
  v32 = 0LL;
  v14 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, _QWORD **))v35[0])(
          v35[0],
          &GUID_260a2a16_5a9e_4ebd_b944_f2ba75c31159,
          &v32);
  Entitlement = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x160,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v14);
LABEL_37:
    v28 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
    }
    goto LABEL_39;
  }
  *(_QWORD *)v31 = 0LL;
  v15 = *v32;
  if ( a6 )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD *, HSTRING, HSTRING, HSTRING, int *))(v15 + 64))(v32, string, a7, a5, v31);
    Entitlement = v16;
    if ( v16 < 0 )
    {
      v17 = 357LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v16);
LABEL_35:
      v27 = *(_QWORD *)v31;
      if ( *(_QWORD *)v31 )
      {
        *(_QWORD *)v31 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
      goto LABEL_37;
    }
  }
  else
  {
    v18 = *((_QWORD *)this + 10);
    if ( v18 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD *, __int64, HSTRING, HSTRING, HSTRING, int *))(v15 + 56))(
              v32,
              v18,
              string,
              a7,
              a5,
              v31);
      Entitlement = v16;
      if ( v16 < 0 )
      {
        v17 = 367LL;
        goto LABEL_17;
      }
    }
    else
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD *, HSTRING, HSTRING, HSTRING, int *))(v15 + 48))(v32, string, a7, a5, v31);
      Entitlement = v16;
      if ( v16 < 0 )
      {
        v17 = 363LL;
        goto LABEL_17;
      }
    }
  }
  v34 = 0LL;
  v19 = *(_QWORD *)v31;
  Entitlement = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult *>,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult *>>(*(_QWORD *)v31);
  if ( Entitlement < 0
    || (Entitlement = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 64LL))(v19, &v34), Entitlement < 0) )
  {
    v22 = 372LL;
    goto LABEL_32;
  }
  v20 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v34 + 48LL))(v34, &v37);
  Entitlement = v20;
  if ( v20 < 0 )
  {
    v21 = (unsigned int)v20;
    v22 = 375LL;
    goto LABEL_33;
  }
  if ( (_DWORD)v37 )
  {
    Entitlement = -2147467259;
    v22 = 376LL;
LABEL_32:
    v21 = (unsigned int)Entitlement;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)v21);
    v26 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    goto LABEL_35;
  }
  v23 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v24 = *(_QWORD *)v31;
  if ( *(_QWORD *)v31 )
  {
    *(_QWORD *)v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v25 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
  }
  WindowsDeleteString(string);
  Entitlement = 0;
LABEL_40:
  v29 = v35[0];
  if ( v35[0] )
  {
    v35[0] = 0LL;
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, _QWORD))(*(_QWORD *)v29 + 16LL))(
      v29,
      *(_QWORD *)v29);
  }
  return (unsigned int)Entitlement;
}
