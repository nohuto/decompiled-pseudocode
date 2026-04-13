/*
 * XREFs of ?IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x180055A10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004C444 (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU-$IAsyncO.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180054F24 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18005818C (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::IsAppAllowedToInstall(
        ContentManagement::AppManager *this,
        HSTRING a2,
        bool *a3)
{
  int AppInstallManager; // eax
  int v7; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v8; // rcx
  DWORD v10; // edx
  int v11; // r8d
  __int64 v12; // rdx
  void (__fastcall ***v13)(__int64, GUID *, __int64 *); // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  void (__fastcall ***v19)(__int64, GUID *, __int64 *); // rdi
  void (__fastcall ***v20)(__int64, GUID *, __int64 *); // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v21; // rcx
  void (__fastcall ***v22[2])(__int64, GUID *, __int64 *); // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v24; // [rsp+90h] [rbp+40h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v25; // [rsp+98h] [rbp+48h] BYREF

  v22[1] = (void (__fastcall ***)(__int64, GUID *, __int64 *))-2LL;
  *a3 = 0;
  if ( (int)CallerIdentity::CheckCallerCapability((CallerIdentity *)L"storeAppInstall", (unsigned __int16 *)&v24, a3) < 0
    || !(_BYTE)v24 )
  {
    return 2147942405LL;
  }
  v25 = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(
                        (ContentManagement::AppManager *)((char *)this - 48),
                        &v25);
  v7 = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
LABEL_5:
    v8 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return (unsigned int)v7;
  }
  v22[0] = 0LL;
  if ( *((_QWORD *)this + 4) )
  {
    v24 = 0LL;
    v14 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, __int64 *))v25)(
            v25,
            &GUID_95b24b17_e96a_4d0e_84e1_c8cb417a0178,
            &v24);
    v7 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v14);
      v15 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      goto LABEL_5;
    }
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, _QWORD, _QWORD, _QWORD, void (__fastcall ****)(__int64, GUID *, __int64 *)))(*(_QWORD *)v24 + 88LL))(
            v24,
            *((_QWORD *)this + 4),
            a2,
            0LL,
            0LL,
            0LL,
            v22);
    v7 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x64,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v16);
      v17 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      goto LABEL_12;
    }
    v18 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, HSTRING, _QWORD))(*(_QWORD *)v25 + 192LL))(
           v25,
           a2,
           v22);
    if ( v7 < 0 )
    {
      v12 = 88LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_12:
      v13 = v22[0];
      if ( v22[0] )
      {
        v22[0] = 0LL;
        ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v13)[2])(v13);
      }
      goto LABEL_5;
    }
  }
  v19 = v22[0];
  v7 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *>(v22[0], v10, v11);
  if ( v7 >= 0 )
    v7 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *), bool *))(*v19)[8])(v19, a3);
  if ( v7 < 0 )
  {
    v12 = 103LL;
    goto LABEL_11;
  }
  v20 = v22[0];
  if ( v22[0] )
  {
    v22[0] = 0LL;
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v20)[2])(v20);
  }
  v21 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return 0LL;
}
