/*
 * XREFs of ?GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z @ 0x180054470
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004B278 (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU-$IAsyncO.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x18005372C (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18005689C (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::GetIsApplicable(
        ContentManagement::AppManager *this,
        HSTRING a2,
        bool *a3,
        unsigned __int8 *a4)
{
  int AppInstallManager; // eax
  unsigned int v9; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v11; // rbx
  DWORD v12; // edx
  int v13; // edi
  int v14; // r8d
  __int64 v15; // rdx
  void (__fastcall ***v16)(__int64, GUID *, __int64 *); // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  void (__fastcall ***v20)(__int64, GUID *, __int64 *); // rsi
  void (__fastcall ***v21)(__int64, GUID *, __int64 *); // rcx
  void (__fastcall ***v22)(__int64, GUID *, __int64 *); // [rsp+30h] [rbp-20h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v23[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v25; // [rsp+98h] [rbp+48h] BYREF

  v23[1] = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)-2LL;
  *a4 = 0;
  if ( (int)CallerIdentity::CheckCallerCapability((CallerIdentity *)L"storeAppInstall", (unsigned __int16 *)&v25, a3) < 0
    || !(_BYTE)v25 )
  {
    return 2147942405LL;
  }
  v23[0] = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(
                        (ContentManagement::AppManager *)((char *)this - 48),
                        v23);
  v9 = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
    if ( v23[0] )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v23[0] + 16LL))(v23[0]);
    return v9;
  }
  v22 = 0LL;
  v11 = v23[0];
  if ( *((_QWORD *)this + 4) )
  {
    v25 = 0LL;
    v13 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, __int64 *))v23[0])(
            v23[0],
            &GUID_95b24b17_e96a_4d0e_84e1_c8cb417a0178,
            &v25);
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, bool *, void (__fastcall ****)(__int64, GUID *, __int64 *)))(*(_QWORD *)v25 + 96LL))(
              v25,
              *((_QWORD *)this + 4),
              a2,
              a3,
              &v22);
      if ( v13 >= 0 )
      {
        v19 = v25;
        if ( v25 )
        {
          v25 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        goto LABEL_22;
      }
      v17 = 132LL;
    }
    else
    {
      v17 = 127LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v13);
    v18 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    goto LABEL_11;
  }
  v13 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, HSTRING, bool *, void (__fastcall ****)(__int64, GUID *, __int64 *)))(*(_QWORD *)v23[0] + 144LL))(
          v23[0],
          a2,
          a3,
          &v22);
  if ( v13 < 0 )
  {
    v15 = 122LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_11:
    v16 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v16)[2])(v16);
    }
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v11 + 16LL))(v11);
    return (unsigned int)v13;
  }
LABEL_22:
  v20 = v22;
  v13 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *>(v22, v12, v14);
  if ( v13 >= 0 )
    v13 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *), unsigned __int8 *))(*v20)[8])(
            v20,
            a4);
  if ( v13 < 0 )
  {
    v15 = 136LL;
    goto LABEL_10;
  }
  v21 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v21)[2])(v21);
  }
  (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v11 + 16LL))(v11);
  return 0LL;
}
