/*
 * XREFs of ?GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z @ 0x180055A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004C064 (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU-$IAsyncO.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180054CC4 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x180057F40 (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::GetIsApplicable(
        ContentManagement::AppManager *this,
        HSTRING a2,
        bool *a3,
        unsigned __int8 *a4)
{
  int AppInstallManager; // eax
  int v9; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v10; // rcx
  DWORD v12; // edx
  int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, _QWORD, HSTRING, bool *, int *); // rsi
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdi
  void (__fastcall ***v24)(__int64, GUID *, __int64 *); // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v25; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v26; // [rsp+30h] [rbp-20h] BYREF
  int v27[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v28; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v30; // [rsp+98h] [rbp+48h] BYREF

  v28 = -2LL;
  *a4 = 0;
  if ( (int)CallerIdentity::CheckCallerCapability((CallerIdentity *)L"storeAppInstall", (unsigned __int16 *)&v30, a3) < 0
    || !(_BYTE)v30 )
  {
    return 2147942405LL;
  }
  v26 = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(
                        (ContentManagement::AppManager *)((char *)this - 48),
                        &v26);
  v9 = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
LABEL_5:
    v10 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return (unsigned int)v9;
  }
  *(_QWORD *)v27 = 0LL;
  if ( *((_QWORD *)this + 4) )
  {
    v30 = 0LL;
    v16 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, __int64 *))v26)(
            v26,
            &GUID_95b24b17_e96a_4d0e_84e1_c8cb417a0178,
            &v30);
    v9 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v16);
      v17 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v15 = *(_QWORD *)v27;
      if ( !*(_QWORD *)v27 )
        goto LABEL_5;
      goto LABEL_14;
    }
    v18 = v30;
    v19 = *(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, bool *, int *))(*(_QWORD *)v30 + 96LL);
    if ( *(_QWORD *)v27 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v27 + 16LL))(*(_QWORD *)v27);
    v20 = v19(v18, *((_QWORD *)this + 4), a2, a3, v27);
    v9 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x84,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v20);
      v21 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      goto LABEL_12;
    }
    v22 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, HSTRING, bool *, int *))(*(_QWORD *)v26 + 144LL))(
           v26,
           a2,
           a3,
           v27);
    if ( v9 < 0 )
    {
      v14 = 122LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_12:
      v15 = *(_QWORD *)v27;
      if ( !*(_QWORD *)v27 )
        goto LABEL_5;
      *(_QWORD *)v27 = 0LL;
LABEL_14:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      goto LABEL_5;
    }
  }
  v23 = *(_QWORD *)v27;
  v9 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *>(
         *(void (__fastcall ****)(__int64, GUID *, __int64 *))v27,
         v12,
         v13);
  if ( v9 >= 0 )
    v9 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v23 + 64LL))(v23, a4);
  if ( v9 < 0 )
  {
    v14 = 136LL;
    goto LABEL_11;
  }
  v24 = *(void (__fastcall ****)(__int64, GUID *, __int64 *))v27;
  if ( *(_QWORD *)v27 )
  {
    *(_QWORD *)v27 = 0LL;
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v24)[2])(v24);
  }
  v25 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return 0LL;
}
