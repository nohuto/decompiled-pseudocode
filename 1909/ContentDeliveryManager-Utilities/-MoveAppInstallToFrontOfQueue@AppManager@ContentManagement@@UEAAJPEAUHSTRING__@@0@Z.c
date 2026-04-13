/*
 * XREFs of ?MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z @ 0x180055F90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180054F24 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@Z @ 0x18005818C (-GetAppInstallManager@AppManager@ContentManagement@@AEAAJPEAPEAUIAppInstallManager@InstallContro.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::MoveAppInstallToFrontOfQueue(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3)
{
  int AppInstallManager; // eax
  bool *v6; // r8
  int v7; // ebx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v8; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v13; // rcx
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v14; // rcx
  _QWORD v15[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned __int16 v17; // [rsp+50h] [rbp+20h] BYREF
  struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *v18; // [rsp+68h] [rbp+38h] BYREF

  v15[1] = -2LL;
  v18 = 0LL;
  AppInstallManager = ContentManagement::AppManager::GetAppInstallManager(
                        (ContentManagement::AppManager *)((char *)this - 48),
                        &v18);
  v7 = AppInstallManager;
  if ( AppInstallManager < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)AppInstallManager);
LABEL_3:
    v8 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return (unsigned int)v7;
  }
  if ( (int)CallerIdentity::CheckCallerCapability((CallerIdentity *)L"storeAppInstall", &v17, v6) >= 0 && (_BYTE)v17 )
  {
    v15[0] = 0LL;
    v7 = (**(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *, GUID *, _QWORD *))v18)(
           v18,
           &GUID_95b24b17_e96a_4d0e_84e1_c8cb417a0178,
           v15);
    if ( v7 < 0 )
    {
      v10 = 148LL;
      goto LABEL_10;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, HSTRING))(*(_QWORD *)v15[0] + 104LL))(v15[0], a2, a3);
    if ( v7 < 0 )
    {
      v10 = 150LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v7);
      v11 = v15[0];
      if ( v15[0] )
      {
        v15[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      goto LABEL_3;
    }
    v12 = v15[0];
    if ( v15[0] )
    {
      v15[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    return 0LL;
  }
  else
  {
    v14 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return 2147942405LL;
  }
}
