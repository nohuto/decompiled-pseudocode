/*
 * XREFs of _lambda_0f2a19371a6bcb5c3bb872f6cc85e02d_::operator() @ 0x180055614
 * Callers:
 *     ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x180055330 (-StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18005689C (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18005ACB8 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVAppInstallItem@Ins.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_0f2a19371a6bcb5c3bb872f6cc85e02d_::operator()(__int64 a1)
{
  int AppInstallManager; // eax
  int v3; // edi
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  _QWORD *v7; // r10
  char *v8; // r11
  char *v9; // rdi
  _QWORD *v10; // rsi
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rcx
  char v18; // [rsp+28h] [rbp-58h]
  char v19; // [rsp+30h] [rbp-50h]
  char v20; // [rsp+30h] [rbp-50h]
  char v21; // [rsp+38h] [rbp-48h]
  char v22; // [rsp+38h] [rbp-48h]
  char v23; // [rsp+40h] [rbp-40h]
  char v24; // [rsp+40h] [rbp-40h]
  char v25; // [rsp+48h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  __int64 v27; // [rsp+C0h] [rbp+40h] BYREF
  _QWORD *v28; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v29; // [rsp+D0h] [rbp+50h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v30; // [rsp+D8h] [rbp+58h] BYREF

  v30 = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(*(ContentManagement::AppManager **)a1, &v30);
  v3 = AppInstallManager;
  v4 = v30;
  if ( AppInstallManager >= 0 )
  {
    v28 = 0LL;
    v5 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, _QWORD **))v30)(
           v30,
           &GUID_e5362e53_1657_4c6c_b537_ddb132eb14de,
           &v28);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v27 = 0LL;
      v6 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
      v7 = *(_QWORD **)(a1 + 56);
      v8 = *(char **)(a1 + 48);
      v9 = *(char **)(a1 + 40);
      v10 = *(_QWORD **)(a1 + 32);
      v11 = *v28;
      if ( v6 )
      {
        v25 = 0;
        v24 = *v8;
        v22 = *v9;
        v20 = 0;
        v12 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD, _QWORD, _QWORD, char, char, char, char, _QWORD, _QWORD, __int64 *))(v11 + 64))(
                v28,
                v6,
                **(_QWORD **)(a1 + 8),
                **(_QWORD **)(a1 + 16),
                **(_QWORD **)(a1 + 24),
                *v10,
                v20,
                v22,
                v24,
                v25,
                *v7,
                0LL,
                &v27);
      }
      else
      {
        v23 = 0;
        v21 = *v8;
        v19 = *v9;
        v18 = 0;
        v12 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD, _QWORD, char, char, char, char, _QWORD, _QWORD, __int64 *))(v11 + 56))(
                v28,
                **(_QWORD **)(a1 + 8),
                **(_QWORD **)(a1 + 16),
                **(_QWORD **)(a1 + 24),
                *v10,
                v18,
                v19,
                v21,
                v23,
                *v7,
                0LL,
                &v27);
      }
      v3 = v12;
      if ( v12 >= 0 )
      {
        v29 = 0LL;
        v13 = v27;
        v3 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *> *>>(v27);
        if ( v3 < 0 || (v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 64LL))(v13, &v29), v3 < 0) )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x13F,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v3);
        else
          v3 = 0;
        v14 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13F,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v12);
      }
      v15 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v5);
    }
    v16 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
  }
  if ( v4 )
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v3;
}
