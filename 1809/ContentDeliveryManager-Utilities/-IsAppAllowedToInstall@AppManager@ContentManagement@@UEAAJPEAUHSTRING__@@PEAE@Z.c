/*
 * XREFs of ?IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x180054180
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004B278 (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU-$IAsyncO.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x18005372C (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18005689C (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::IsAppAllowedToInstall(
        ContentManagement::AppManager *this,
        HSTRING a2,
        bool *a3)
{
  int AppInstallManager; // eax
  unsigned int v7; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v9; // rbx
  DWORD v10; // edx
  int v11; // edi
  int v12; // r8d
  __int64 v13; // rdx
  void (__fastcall ***v14)(__int64, GUID *, __int64 *); // rcx
  int v15; // eax
  unsigned int v16; // esi
  __int64 v17; // rcx
  void (__fastcall ***v18)(__int64, GUID *, __int64 *); // rcx
  __int64 v19; // rsi
  void (__fastcall ***v20)(__int64, GUID *, __int64 *); // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  void (__fastcall ***v24)(__int64, GUID *, __int64 *); // rsi
  void (__fastcall ***v25)(__int64, GUID *, __int64 *); // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v26[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v28; // [rsp+90h] [rbp+40h] BYREF
  void (__fastcall ***v29)(__int64, GUID *, __int64 *); // [rsp+98h] [rbp+48h] BYREF

  v26[1] = (struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *)-2LL;
  *a3 = 0;
  if ( (int)CallerIdentity::CheckCallerCapability((CallerIdentity *)L"storeAppInstall", (unsigned __int16 *)&v28, a3) < 0
    || !(_BYTE)v28 )
  {
    return 2147942405LL;
  }
  v26[0] = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(
                        (ContentManagement::AppManager *)((char *)this - 48),
                        v26);
  v7 = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
    if ( v26[0] )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v26[0] + 16LL))(v26[0]);
    return v7;
  }
  v29 = 0LL;
  v9 = v26[0];
  if ( *((_QWORD *)this + 4) )
  {
    v28 = 0LL;
    v15 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, __int64 *))v26[0])(
            v26[0],
            &GUID_95b24b17_e96a_4d0e_84e1_c8cb417a0178,
            &v28);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v15);
      v17 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v18 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v18)[2])(v18);
      }
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v9 + 16LL))(v9);
      return v16;
    }
    v19 = v28;
    v20 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v20)[2])(v20);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, _QWORD, _QWORD, _QWORD, void (__fastcall ****)(__int64, GUID *, __int64 *)))(*(_QWORD *)v19 + 88LL))(
            v19,
            *((_QWORD *)this + 4),
            a2,
            0LL,
            0LL,
            0LL,
            &v29);
    v11 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x64,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v21);
      v22 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      goto LABEL_11;
    }
    v23 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, HSTRING, _QWORD))(*(_QWORD *)v26[0] + 192LL))(
            v26[0],
            a2,
            &v29);
    if ( v11 < 0 )
    {
      v13 = 88LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_11:
      v14 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v14)[2])(v14);
      }
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v9 + 16LL))(v9);
      return (unsigned int)v11;
    }
  }
  v24 = v29;
  v11 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *>(v29, v10, v12);
  if ( v11 >= 0 )
    v11 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *), bool *))(*v24)[8])(v24, a3);
  if ( v11 < 0 )
  {
    v13 = 103LL;
    goto LABEL_10;
  }
  v25 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v25)[2])(v25);
  }
  (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v9 + 16LL))(v9);
  return 0LL;
}
