/*
 * XREFs of ?IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z @ 0x180053F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000480C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004B278 (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU-$IAsyncO.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x18005372C (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18005689C (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::IsStoreBlockedByPolicy(
        ContentManagement::AppManager *this,
        unsigned __int8 *a2,
        bool *a3)
{
  int AppInstallManager; // eax
  unsigned int v6; // ebx
  HRESULT v8; // eax
  HSTRING v9; // rdi
  HRESULT v10; // eax
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v11; // rbx
  DWORD v12; // edx
  int v13; // edi
  int v14; // r8d
  __int64 v15; // rdx
  void (__fastcall ***v16)(__int64, GUID *, __int64 *); // rcx
  void (__fastcall ***v17)(__int64, GUID *, __int64 *); // rsi
  void (__fastcall ***v18)(__int64, GUID *, __int64 *); // rcx
  unsigned __int16 v19; // [rsp+38h] [rbp-29h] BYREF
  void (__fastcall ***v20)(__int64, GUID *, __int64 *); // [rsp+40h] [rbp-21h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v21[2]; // [rsp+48h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-9h] BYREF
  HSTRING string; // [rsp+70h] [rbp+Fh] BYREF
  HSTRING_HEADER v24; // [rsp+78h] [rbp+17h] BYREF
  HSTRING v25; // [rsp+90h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v21[1] = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)-2LL;
  *a2 = 0;
  if ( (int)CallerIdentity::CheckCallerCapability((CallerIdentity *)L"storeAppInstall", &v19, a3) < 0 || !(_BYTE)v19 )
    return 2147942405LL;
  v21[0] = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(
                        (ContentManagement::AppManager *)((char *)this - 48),
                        v21);
  v6 = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
    if ( v21[0] )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v21[0] + 16LL))(v21[0]);
    return v6;
  }
  v20 = 0LL;
  string = 0LL;
  v8 = WindowsCreateStringReference(
         L"CN=Microsoft Corporation, O=Microsoft Corporation, L=Redmond, S=Washington, C=US",
         0x50u,
         &hstringHeader,
         &string);
  if ( v8 < 0 )
  {
LABEL_24:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
    JUMPOUT(0x180054177LL);
  }
  v9 = string;
  v25 = 0LL;
  v10 = WindowsCreateStringReference(L"Microsoft.WindowsStore", 0x16u, &v24, &v25);
  if ( v10 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
    goto LABEL_24;
  }
  v11 = v21[0];
  v13 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, HSTRING, HSTRING, void (__fastcall ****)(__int64, GUID *, __int64 *)))(*(_QWORD *)v21[0] + 184LL))(
          v21[0],
          v25,
          v9,
          &v20);
  if ( v13 < 0 )
  {
    v15 = 68LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v13);
    v16 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v16)[2])(v16);
    }
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v11 + 16LL))(v11);
    return (unsigned int)v13;
  }
  v17 = v20;
  v13 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *>(v20, v12, v14);
  if ( v13 >= 0 )
    v13 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *), unsigned __int8 *))(*v17)[8])(
            v17,
            a2);
  if ( v13 < 0 )
  {
    v15 = 70LL;
    goto LABEL_11;
  }
  v18 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v18)[2])(v18);
  }
  (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v11 + 16LL))(v11);
  return 0LL;
}
