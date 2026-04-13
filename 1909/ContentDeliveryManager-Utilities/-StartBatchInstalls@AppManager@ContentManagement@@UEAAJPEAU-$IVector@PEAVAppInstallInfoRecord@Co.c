/*
 * XREFs of ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x1800561F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180005D24 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@456@@Z @ 0x180057834 (-ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVector@PEAVAppInstallInfoRecord.c)
 *     ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180057D28 (-ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVectorView@PEAVInstallAppInfo.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18005818C (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AppInstallBatching@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180058C0C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AppInstallBatching@@@wil@@CA.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18005C050 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVInstallAppInfo@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppManager::StartBatchInstalls(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ebx
  int AppInstallManager; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v20; // rcx
  __int64 v21; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v26; // rcx
  _QWORD *v27; // rcx
  int v28; // [rsp+20h] [rbp-50h]
  char v29; // [rsp+28h] [rbp-48h]
  __int64 v30; // [rsp+50h] [rbp-20h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v31; // [rsp+58h] [rbp-18h] BYREF
  _QWORD v32[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v34; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v35; // [rsp+A8h] [rbp+38h] BYREF

  v32[1] = -2LL;
  *a3 = 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_AppInstallBatching>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_AppInstallBatching>::GetCachedFeatureEnabledState();
  LODWORD(v34) = 0;
  BYTE4(v34) = 3;
  LODWORD(v35) = 0;
  WORD2(v35) = WORD2(v34);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_AppInstallBatching>::GetFeaturePropertyCache'::`2'::data,
    0x68C9CDu,
    (const struct FEATURE_LOGGED_TRAITS *)&v35,
    1,
    3);
  v32[0] = 0LL;
  v7 = ContentManagement::AppManager::ConvertToStoreRecords(v6, a2, v32);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_35:
    v27 = (_QWORD *)v32[0];
    if ( v32[0] )
    {
      v32[0] = 0LL;
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v27 + 16LL))(v27, *v27);
    }
    return (unsigned int)v8;
  }
  v31 = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(
                        (ContentManagement::AppManager *)(a1 - 48),
                        &v31);
  v8 = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
LABEL_33:
    v26 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v26 + 16LL))(v26);
    }
    goto LABEL_35;
  }
  v30 = 0LL;
  v10 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, __int64 *))v31)(
          v31,
          &GUID_e5362e53_1657_4c6c_b537_ddb132eb14de,
          &v30);
  v8 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v10);
LABEL_31:
    v25 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    goto LABEL_33;
  }
  v35 = 0LL;
  v29 = 0;
  LOBYTE(v28) = 0;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, char, _QWORD, __int64 *))(*(_QWORD *)v30 + 72LL))(
          v30,
          v32[0],
          0LL,
          0LL,
          v28,
          v29,
          0LL,
          &v35);
  v8 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_29:
    v24 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    goto LABEL_31;
  }
  v34 = 0LL;
  v12 = v35;
  v8 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *> *>>(v35);
  if ( v8 < 0 || (v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 64LL))(v12, &v34), v8 < 0) )
  {
    v15 = (unsigned int)v8;
    v16 = 216LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)v15);
    v23 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    goto LABEL_29;
  }
  v14 = ContentManagement::AppManager::ConvertFromStoreRecords(v13, v34, a3);
  v8 = v14;
  if ( v14 < 0 )
  {
    v15 = (unsigned int)v14;
    v16 = 218LL;
    goto LABEL_27;
  }
  v17 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = v32[0];
  if ( v32[0] )
  {
    v32[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return 0LL;
}
