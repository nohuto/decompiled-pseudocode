/*
 * XREFs of ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180054960
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000A088 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@456@@Z @ 0x180055F3C (-ConvertToStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVector@PEAVAppInstallInfoRecord.c)
 *     ?ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180056434 (-ConvertFromStoreRecords@AppManager@ContentManagement@@AEAAJPEAU-$IVectorView@PEAVInstallAppInfo.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18005689C (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AppInstallBatching@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180057334 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AppInstallBatching@@@wil@@CA.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18005A798 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVInstallAppInfo@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::AppManager::StartBatchInstalls(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rcx
  int v7; // eax
  int v8; // edi
  int AppInstallManager; // eax
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v10; // rbx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // rcx
  char v27; // [rsp+20h] [rbp-50h]
  char v28; // [rsp+28h] [rbp-48h]
  __int64 v29; // [rsp+50h] [rbp-20h] BYREF
  _QWORD *v30; // [rsp+58h] [rbp-18h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v31[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v33; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+48h] BYREF

  v31[1] = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)-2LL;
  *a3 = 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_AppInstallBatching>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_AppInstallBatching>::GetCachedFeatureEnabledState();
  LODWORD(v33) = 0;
  BYTE4(v33) = 3;
  LODWORD(v34) = 0;
  WORD2(v34) = WORD2(v33);
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_AppInstallBatching>::GetFeaturePropertyCache'::`2'::data,
    0x68C9CDu,
    (const struct FEATURE_LOGGED_TRAITS *)&v34,
    3);
  v30 = 0LL;
  v7 = ContentManagement::AppManager::ConvertToStoreRecords(v6, a2, &v30);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_33:
    v26 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v26 + 16LL))(v26, *v26);
    }
    return (unsigned int)v8;
  }
  v31[0] = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(
                        (ContentManagement::AppManager *)(a1 - 48),
                        v31);
  v8 = AppInstallManager;
  v10 = v31[0];
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
LABEL_31:
    if ( v10 )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v10 + 16LL))(v10);
    goto LABEL_33;
  }
  v29 = 0LL;
  v11 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, __int64 *))v31[0])(
          v31[0],
          &GUID_e5362e53_1657_4c6c_b537_ddb132eb14de,
          &v29);
  v8 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_29:
    v25 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    goto LABEL_31;
  }
  v34 = 0LL;
  v28 = 0;
  v27 = 0;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, _QWORD, char, char, _QWORD, __int64 *))(*(_QWORD *)v29 + 72LL))(
          v29,
          v30,
          0LL,
          0LL,
          v27,
          v28,
          0LL,
          &v34);
  v8 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v12);
LABEL_27:
    v24 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    goto LABEL_29;
  }
  v33 = 0LL;
  v13 = v34;
  v8 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *> *>>(v34);
  if ( v8 < 0 || (v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 64LL))(v13, &v33), v8 < 0) )
  {
    v16 = (unsigned int)v8;
    v17 = 216LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)v16);
    v23 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    goto LABEL_27;
  }
  v15 = ContentManagement::AppManager::ConvertFromStoreRecords(v14, v33, a3);
  v8 = v15;
  if ( v15 < 0 )
  {
    v16 = (unsigned int)v15;
    v17 = 218LL;
    goto LABEL_25;
  }
  v18 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v10 + 16LL))(v10);
  v21 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
  }
  return 0LL;
}
