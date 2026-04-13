/*
 * XREFs of _lambda_0f2a19371a6bcb5c3bb872f6cc85e02d_::operator() @ 0x180056C80
 * Callers:
 *     ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x180056980 (-StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x180057F40 (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18005C2D0 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVAppInstallItem@Ins.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_0f2a19371a6bcb5c3bb872f6cc85e02d_::operator()(__int64 a1)
{
  int AppInstallManager; // eax
  int v3; // ebx
  int v4; // eax
  __int64 v5; // rdx
  char *v6; // r10
  char *v7; // r11
  _QWORD *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v15; // rcx
  char v17; // [rsp+28h] [rbp-31h]
  char v18; // [rsp+30h] [rbp-29h]
  char v19; // [rsp+30h] [rbp-29h]
  char v20; // [rsp+38h] [rbp-21h]
  char v21; // [rsp+38h] [rbp-21h]
  char v22; // [rsp+40h] [rbp-19h]
  char v23; // [rsp+40h] [rbp-19h]
  char v24; // [rsp+48h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  __int64 v26; // [rsp+C0h] [rbp+67h] BYREF
  _QWORD *v27; // [rsp+C8h] [rbp+6Fh] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v28; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v29; // [rsp+D8h] [rbp+7Fh] BYREF

  v28 = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(*(ContentManagement::AppManager **)a1, &v28);
  v3 = AppInstallManager;
  if ( AppInstallManager >= 0 )
  {
    v27 = 0LL;
    v4 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, _QWORD **))v28)(
           v28,
           &GUID_e5362e53_1657_4c6c_b537_ddb132eb14de,
           &v27);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v26 = 0LL;
      v5 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
      v6 = *(char **)(a1 + 48);
      v7 = *(char **)(a1 + 40);
      v8 = *(_QWORD **)(a1 + 32);
      v9 = *v27;
      if ( v5 )
      {
        v24 = 0;
        v23 = *v6;
        v21 = *v7;
        v19 = 0;
        v10 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD, _QWORD, _QWORD, char, char, char, char, _QWORD, _QWORD, __int64 *))(v9 + 64))(
                v27,
                v5,
                **(_QWORD **)(a1 + 8),
                **(_QWORD **)(a1 + 16),
                **(_QWORD **)(a1 + 24),
                *v8,
                v19,
                v21,
                v23,
                v24,
                **(_QWORD **)(a1 + 56),
                0LL,
                &v26);
      }
      else
      {
        v22 = 0;
        v20 = *v6;
        v18 = *v7;
        v17 = 0;
        v10 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD, _QWORD, char, char, char, char, _QWORD, _QWORD, __int64 *))(v9 + 56))(
                v27,
                **(_QWORD **)(a1 + 8),
                **(_QWORD **)(a1 + 16),
                **(_QWORD **)(a1 + 24),
                *v8,
                v17,
                v18,
                v20,
                v22,
                **(_QWORD **)(a1 + 56),
                0LL,
                &v26);
      }
      v3 = v10;
      if ( v10 >= 0 )
      {
        v29 = 0LL;
        v11 = v26;
        v3 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *> *>>(v26);
        if ( v3 < 0 || (v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 64LL))(v11, &v29), v3 < 0) )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x13F,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v3);
        else
          v3 = 0;
        v12 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13F,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
          (const char *)(unsigned int)v10);
      }
      v13 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v4);
    }
    v14 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
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
  v15 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return (unsigned int)v3;
}
