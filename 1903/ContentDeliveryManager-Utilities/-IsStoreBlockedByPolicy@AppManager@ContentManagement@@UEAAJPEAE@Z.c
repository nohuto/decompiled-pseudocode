/*
 * XREFs of ?IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z @ 0x180055570
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004C064 (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU-$IAsyncO.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180054CC4 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x180057F40 (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::IsStoreBlockedByPolicy(
        ContentManagement::AppManager *this,
        unsigned __int8 *a2,
        bool *a3)
{
  int AppInstallManager; // eax
  int v6; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v7; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v9; // rbx
  __int64 (__fastcall *v10)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, HSTRING, HSTRING, void (__fastcall ****)(__int64, GUID *, __int64 *)); // rdi
  HRESULT v11; // eax
  HRESULT v12; // eax
  DWORD v13; // edx
  int v14; // r8d
  __int64 v15; // rdx
  void (__fastcall ***v16)(__int64, GUID *, __int64 *); // rcx
  void (__fastcall ***v17)(__int64, GUID *, __int64 *); // rdi
  void (__fastcall ***v18)(__int64, GUID *, __int64 *); // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v19; // rcx
  unsigned __int16 v20; // [rsp+38h] [rbp-29h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v21; // [rsp+40h] [rbp-21h] BYREF
  void (__fastcall ***v22[2])(__int64, GUID *, __int64 *); // [rsp+48h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-9h] BYREF
  HSTRING string; // [rsp+70h] [rbp+Fh] BYREF
  HSTRING_HEADER v25; // [rsp+78h] [rbp+17h] BYREF
  HSTRING v26; // [rsp+90h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v22[1] = (void (__fastcall ***)(__int64, GUID *, __int64 *))-2LL;
  *a2 = 0;
  if ( (int)CallerIdentity::CheckCallerCapability((CallerIdentity *)L"storeAppInstall", &v20, a3) < 0 || !(_BYTE)v20 )
    return 2147942405LL;
  v21 = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(
                        (ContentManagement::AppManager *)((char *)this - 48),
                        &v21);
  v6 = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
LABEL_5:
    v7 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return (unsigned int)v6;
  }
  v22[0] = 0LL;
  v9 = v21;
  v10 = *(__int64 (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, HSTRING, HSTRING, void (__fastcall ****)(__int64, GUID *, __int64 *)))(*(_QWORD *)v21 + 184LL);
  string = 0LL;
  v11 = WindowsCreateStringReference(
          L"CN=Microsoft Corporation, O=Microsoft Corporation, L=Redmond, S=Washington, C=US",
          0x50u,
          &hstringHeader,
          &string);
  if ( v11 < 0 )
  {
LABEL_28:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
    JUMPOUT(0x18005579CLL);
  }
  v26 = 0LL;
  v12 = WindowsCreateStringReference(L"Microsoft.WindowsStore", 0x16u, &v25, &v26);
  if ( v12 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
    goto LABEL_28;
  }
  if ( v22[0] )
    (*((void (__fastcall **)(void (__fastcall ***)(__int64, GUID *, __int64 *)))*v22[0] + 2))(v22[0]);
  v6 = v10(v9, v26, string, v22);
  if ( v6 < 0 )
  {
    v15 = 68LL;
    goto LABEL_14;
  }
  v17 = v22[0];
  v6 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *>(v22[0], v13, v14);
  if ( v6 >= 0 )
    v6 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *), unsigned __int8 *))(*v17)[8])(
           v17,
           a2);
  if ( v6 < 0 )
  {
    v15 = 70LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v6);
    v16 = v22[0];
    if ( v22[0] )
    {
      v22[0] = 0LL;
      ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v16)[2])(v16);
    }
    goto LABEL_5;
  }
  v18 = v22[0];
  if ( v22[0] )
  {
    v22[0] = 0LL;
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v18)[2])(v18);
  }
  v19 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return 0LL;
}
