/*
 * XREFs of ?GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z @ 0x180055BD8
 * Callers:
 *     ?GetEntitlement@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@000E0@Z @ 0x180053F00 (-GetEntitlement@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@000E0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000A088 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z @ 0x180053D88 (-GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18005689C (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_InstallAttribution@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180057064 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_InstallAttribution@@@wil@@CA.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVGetEntitlementResult@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVGetEntitlementResult@InstallControl@Preview@Store@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVGetEntitlementResult@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18005AF48 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVGetEntitlementResult@InstallControl@.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
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
  int Entitlement; // edi
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v12; // rbx
  HSTRING *v13; // r9
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rsi
  int v21; // eax
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  _QWORD *v29; // rcx
  int v31[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD *v32; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+50h] [rbp-20h] BYREF
  __int64 v34; // [rsp+58h] [rbp-18h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v35[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  HSTRING v37; // [rsp+B8h] [rbp+48h] BYREF

  v37 = a4;
  v35[1] = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)-2LL;
  v35[0] = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(this, v35);
  Entitlement = AppInstallManager;
  v12 = v35[0];
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
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_InstallAttribution>::GetFeaturePropertyCache'::`2'::data,
    0x312BB7u,
    (const struct FEATURE_LOGGED_TRAITS *)v31,
    3);
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v14 = CreativeFramework::StoreHelpers::GenerateStoreId(a2, a3, &string, v13);
  Entitlement = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v14);
LABEL_39:
    WindowsDeleteString(string);
    goto LABEL_40;
  }
  v32 = 0LL;
  v15 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, _QWORD **))v12)(
          v12,
          &GUID_260a2a16_5a9e_4ebd_b944_f2ba75c31159,
          &v32);
  Entitlement = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x160,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v15);
LABEL_37:
    v29 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v29 + 16LL))(v29);
    }
    goto LABEL_39;
  }
  *(_QWORD *)v31 = 0LL;
  v16 = *v32;
  if ( a6 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD *, HSTRING, HSTRING, HSTRING, int *))(v16 + 64))(v32, string, a7, a5, v31);
    Entitlement = v17;
    if ( v17 < 0 )
    {
      v18 = 357LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v17);
LABEL_35:
      v28 = *(_QWORD *)v31;
      if ( *(_QWORD *)v31 )
      {
        *(_QWORD *)v31 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      goto LABEL_37;
    }
  }
  else
  {
    v19 = *((_QWORD *)this + 10);
    if ( v19 )
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD *, __int64, HSTRING, HSTRING, HSTRING, int *))(v16 + 56))(
              v32,
              v19,
              string,
              a7,
              a5,
              v31);
      Entitlement = v17;
      if ( v17 < 0 )
      {
        v18 = 367LL;
        goto LABEL_17;
      }
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD *, HSTRING, HSTRING, HSTRING, int *))(v16 + 48))(v32, string, a7, a5, v31);
      Entitlement = v17;
      if ( v17 < 0 )
      {
        v18 = 363LL;
        goto LABEL_17;
      }
    }
  }
  v34 = 0LL;
  v20 = *(_QWORD *)v31;
  Entitlement = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult *>,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult *>>(*(_QWORD *)v31);
  if ( Entitlement < 0
    || (Entitlement = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 64LL))(v20, &v34), Entitlement < 0) )
  {
    v23 = 372LL;
    goto LABEL_32;
  }
  v21 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v34 + 48LL))(v34, &v37);
  Entitlement = v21;
  if ( v21 < 0 )
  {
    v22 = (unsigned int)v21;
    v23 = 375LL;
    goto LABEL_33;
  }
  if ( (_DWORD)v37 )
  {
    Entitlement = -2147467259;
    v23 = 376LL;
LABEL_32:
    v22 = (unsigned int)Entitlement;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)v22);
    v27 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    goto LABEL_35;
  }
  v24 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v25 = *(_QWORD *)v31;
  if ( *(_QWORD *)v31 )
  {
    *(_QWORD *)v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v26 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
  }
  WindowsDeleteString(string);
  Entitlement = 0;
LABEL_40:
  if ( v12 )
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)Entitlement;
}
