/*
 * XREFs of ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x18013E164
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x180136378 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18002FC38 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VFrameFactory@@UIApplicationFrameFactory@@PEAUIPrivilegedPresentationOperations@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationFrameFactory@@$$QEAPEAUIPrivilegedPresentationOperations@@@Z @ 0x18012AB68 (--$MakeAndInitialize@VFrameFactory@@UIApplicationFrameFactory@@PEAUIPrivilegedPresentationOperat.c)
 *     ??$MakeAndInitialize@VCFallbackWindow@@UIFallbackWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIFallbackWindow@@@Z @ 0x180142A04 (--$MakeAndInitialize@VCFallbackWindow@@UIFallbackWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIF.c)
 *     ??$MakeAndInitialize@VCImmersiveWindowManager@@UIImmersiveWindowManager@@AEAPEAUIIAMServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveWindowManager@@AEAPEAUIIAMServiceProvider@@@Z @ 0x180143EFC (--$MakeAndInitialize@VCImmersiveWindowManager@@UIImmersiveWindowManager@@AEAPEAUIIAMServiceProvi.c)
 *     ?s_CreateInstance@CImmersiveMode@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180147968 (-s_CreateInstance@CImmersiveMode@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VCClassicWindowManager@@UIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSystemModeInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSystemModeInternal@@@Z @ 0x18014812C (--$MakeAndInitialize@VCClassicWindowManager@@UIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSys.c)
 *     ??0CRotationManagerSync@@QEAA@XZ @ 0x180149EF8 (--0CRotationManagerSync@@QEAA@XZ.c)
 *     ?CreateInstance@CImmersiveApplicationTransitionHelper@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18014ABA0 (-CreateInstance@CImmersiveApplicationTransitionHelper@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VCCharmsWindowManager@@UICharmWindowManagerInternal@@AEAPEAUIImmersiveApplicationTransitionHelper@@@Details@WRL@Microsoft@@YAJPEAPEAUICharmWindowManagerInternal@@AEAPEAUIImmersiveApplicationTransitionHelper@@@Z @ 0x18014B3FC (--$MakeAndInitialize@VCCharmsWindowManager@@UICharmWindowManagerInternal@@AEAPEAUIImmersiveAppli.c)
 *     ??$MakeAndInitialize@VCAppViewManager@@V1@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCAppViewManager@@AEAPEAUIImmersiveApplicationManagerInternal@@@Z @ 0x18014BEEC (--$MakeAndInitialize@VCAppViewManager@@V1@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@.c)
 *     ?s_CreateInstance@CRealmActivationHistory@@SAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x18015A154 (-s_CreateInstance@CRealmActivationHistory@@SAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUI.c)
 *     ?CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x18015B534 (-CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180428438 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1804284AC (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_InitializeIAMSubcomponents(IUnknown *punkSite)
{
  IUnknown *v2; // rsi
  const struct _GUID *v3; // rdx
  __int64 v4; // rcx
  CCriticalFailureHandler *v5; // rcx
  int Instance; // ebx
  CCriticalFailureHandler *v7; // rcx
  CCriticalFailureHandler *v8; // rcx
  CCriticalFailureHandler *v9; // rcx
  CCriticalFailureHandler *v10; // rcx
  IUnknown **v11; // rsi
  const struct _GUID *v12; // rcx
  CCriticalFailureHandler *v13; // rcx
  CCriticalFailureHandler *v14; // rcx
  CCriticalFailureHandler *v15; // rcx
  CCriticalFailureHandler *v16; // rcx
  CRotationManagerSync *v17; // rax
  CRotationManagerSync *v18; // rax
  struct IPrivilegedPresentationOperations *v19; // rcx
  char *v20; // rax
  CCriticalFailureHandler *v21; // rcx
  const struct _GUID *v22; // rcx
  CCriticalFailureHandler *v23; // rcx
  CCriticalFailureHandler *v24; // rcx
  CCriticalFailureHandler *v25; // rcx
  CCriticalFailureHandler *v26; // rcx
  const struct _GUID *v27; // rdx
  const struct _GUID *v28; // rdx
  unsigned __int64 *v30; // [rsp+20h] [rbp-38h]
  unsigned __int64 *v31; // [rsp+28h] [rbp-30h]
  __int64 (__fastcall ***v32)(_QWORD, GUID *, IUnknown *); // [rsp+30h] [rbp-28h] BYREF
  __int64 (__fastcall ***v33)(_QWORD, GUID *, IUnknown *); // [rsp+38h] [rbp-20h] BYREF
  __int64 v34[3]; // [rsp+40h] [rbp-18h] BYREF
  IUnknown *lpVtbl; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v36; // [rsp+A8h] [rbp+50h] BYREF
  __int64 (__fastcall ***v37)(_QWORD, GUID *, __int64 *); // [rsp+B0h] [rbp+58h] BYREF
  __int64 (__fastcall ***v38)(_QWORD, GUID *, IUnknown *); // [rsp+B8h] [rbp+60h] BYREF

  v34[1] = -2LL;
  v2 = punkSite + 72;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[72]);
  Instance = CEnumerableObjectCollection::CreateInstance(v4, v3, (void **)&v2->lpVtbl);
  LODWORD(lpVtbl) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v5, (int *)&lpVtbl);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)lpVtbl;
  }
  if ( Instance >= 0 )
    goto LABEL_8;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v5,
      (int *)&lpVtbl,
      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      0x1386u,
      v30,
      v31);
    Instance = (int)lpVtbl;
  }
  if ( Instance >= 0 )
  {
LABEL_8:
    v36 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
    lpVtbl = (IUnknown *)((unsigned __int64)&punkSite[24] & -(__int64)(punkSite != 0LL));
    v36 = 0LL;
    v37 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
    Instance = Microsoft::WRL::Details::MakeAndInitialize<CImmersiveWindowManager,IImmersiveWindowManager,IIAMServiceProvider * &>(
                 &v37,
                 &lpVtbl);
    if ( Instance >= 0 )
      Instance = (**v37)(v37, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &v36);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
    LODWORD(lpVtbl) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v7, (int *)&lpVtbl);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = (int)lpVtbl;
    }
    if ( Instance >= 0 )
      goto LABEL_17;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v7,
        (int *)&lpVtbl,
        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        0x138Cu,
        v30,
        v31);
      Instance = (int)lpVtbl;
    }
    if ( Instance >= 0 )
    {
LABEL_17:
      Instance = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64))v2->lpVtbl->QueryInterface + 5))(
                   v2->lpVtbl,
                   v36);
      LODWORD(lpVtbl) = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v8, (int *)&lpVtbl);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = (int)lpVtbl;
      }
      if ( Instance >= 0 )
        goto LABEL_24;
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v8,
          (int *)&lpVtbl,
          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          0x138Fu,
          v30,
          v31);
        Instance = (int)lpVtbl;
      }
      if ( Instance >= 0 )
      {
LABEL_24:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[71]);
        punkSite[71].lpVtbl = 0LL;
        v38 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
        Instance = Microsoft::WRL::Details::MakeAndInitialize<CFallbackWindow,IFallbackWindow,>(&v38);
        if ( Instance >= 0 )
          Instance = (**v38)(v38, &GUID_743bc0bd_69f0_4f28_8401_047ae0c0ffee, punkSite + 71);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
        LODWORD(lpVtbl) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v9, (int *)&lpVtbl);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = (int)lpVtbl;
        }
        if ( Instance >= 0 )
          goto LABEL_33;
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v9,
            (int *)&lpVtbl,
            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            0x1396u,
            v30,
            v31);
          Instance = (int)lpVtbl;
        }
        if ( Instance >= 0 )
        {
LABEL_33:
          Instance = IUnknown_SetSite((IUnknown *)punkSite[71].lpVtbl, punkSite);
          LODWORD(lpVtbl) = Instance;
          if ( !CRVPrivate::cfhImmersiveShellStartup )
          {
            CCriticalFailureHandler::GetFakeFailure(v10, (int *)&lpVtbl);
            CRVPrivate::cfhImmersiveShellStartup = 1;
            Instance = (int)lpVtbl;
          }
          if ( Instance >= 0 )
            goto LABEL_40;
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v10,
              (int *)&lpVtbl,
              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              0x1399u,
              v30,
              v31);
            Instance = (int)lpVtbl;
          }
          if ( Instance >= 0 )
          {
LABEL_40:
            v11 = (IUnknown **)&punkSite[66];
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[66]);
            Instance = CImmersiveMode::s_CreateInstance(v12, (void **)&punkSite[66].lpVtbl);
            LODWORD(lpVtbl) = Instance;
            if ( !CRVPrivate::cfhImmersiveShellStartup )
            {
              CCriticalFailureHandler::GetFakeFailure(v13, (int *)&lpVtbl);
              CRVPrivate::cfhImmersiveShellStartup = 1;
              Instance = (int)lpVtbl;
            }
            if ( Instance >= 0 )
              goto LABEL_47;
            if ( Instance != -2147024882 && Instance != -2144862209 )
            {
              CCriticalFailureHandler::HandleFailure(
                v13,
                (int *)&lpVtbl,
                L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                0x13A1u,
                v30,
                v31);
              Instance = (int)lpVtbl;
            }
            if ( Instance >= 0 )
            {
LABEL_47:
              Instance = IUnknown_SetSite(*v11, punkSite);
              LODWORD(lpVtbl) = Instance;
              if ( !CRVPrivate::cfhImmersiveShellStartup )
              {
                CCriticalFailureHandler::GetFakeFailure(v14, (int *)&lpVtbl);
                CRVPrivate::cfhImmersiveShellStartup = 1;
                Instance = (int)lpVtbl;
              }
              if ( Instance >= 0 )
                goto LABEL_54;
              if ( Instance != -2147024882 && Instance != -2144862209 )
              {
                CCriticalFailureHandler::HandleFailure(
                  v14,
                  (int *)&lpVtbl,
                  L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  0x13A4u,
                  v30,
                  v31);
                Instance = (int)lpVtbl;
              }
              if ( Instance >= 0 )
              {
LABEL_54:
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[67]);
                lpVtbl = *v11;
                punkSite[67].lpVtbl = 0LL;
                v32 = 0LL;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
                Instance = Microsoft::WRL::Details::MakeAndInitialize<CClassicWindowManager,IClassicWindowManagerPrivate,IImmersiveSystemModeInternal * &>(
                             &v32,
                             &lpVtbl);
                if ( Instance >= 0 )
                  Instance = (**v32)(v32, &GUID_226276c7_ca53_498c_b0be_ad1ea9c0ffee, punkSite + 67);
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
                LODWORD(lpVtbl) = Instance;
                if ( !CRVPrivate::cfhImmersiveShellStartup )
                {
                  CCriticalFailureHandler::GetFakeFailure(v15, (int *)&lpVtbl);
                  CRVPrivate::cfhImmersiveShellStartup = 1;
                  Instance = (int)lpVtbl;
                }
                if ( Instance >= 0 )
                  goto LABEL_63;
                if ( Instance != -2147024882 && Instance != -2144862209 )
                {
                  CCriticalFailureHandler::HandleFailure(
                    v15,
                    (int *)&lpVtbl,
                    L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    0x13ACu,
                    v30,
                    v31);
                  Instance = (int)lpVtbl;
                }
                if ( Instance >= 0 )
                {
LABEL_63:
                  Instance = IUnknown_SetSite((IUnknown *)punkSite[67].lpVtbl, punkSite);
                  LODWORD(lpVtbl) = Instance;
                  if ( !CRVPrivate::cfhImmersiveShellStartup )
                  {
                    CCriticalFailureHandler::GetFakeFailure(v16, (int *)&lpVtbl);
                    CRVPrivate::cfhImmersiveShellStartup = 1;
                    Instance = (int)lpVtbl;
                  }
                  if ( Instance >= 0 )
                    goto LABEL_70;
                  if ( Instance != -2147024882 && Instance != -2144862209 )
                  {
                    CCriticalFailureHandler::HandleFailure(
                      v16,
                      (int *)&lpVtbl,
                      L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                      0x13AFu,
                      v30,
                      v31);
                    Instance = (int)lpVtbl;
                  }
                  if ( Instance >= 0 )
                  {
LABEL_70:
                    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[68]);
                    punkSite[68].lpVtbl = 0LL;
                    v17 = (CRotationManagerSync *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
                    if ( v17 && (v18 = CRotationManagerSync::CRotationManagerSync(v17)) != 0LL )
                    {
                      v19 = (CRotationManagerSync *)((char *)v18 + 72);
                      v20 = (char *)v18 + 72;
                    }
                    else
                    {
                      v19 = 0LL;
                      v20 = 0LL;
                    }
                    lpVtbl = (IUnknown *)v19;
                    if ( v20 )
                      Instance = (**(__int64 (__fastcall ***)(struct IPrivilegedPresentationOperations *, GUID *, IUnknown *))v19)(
                                   v19,
                                   &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee,
                                   punkSite + 68);
                    else
                      Instance = -2147024882;
                    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&lpVtbl);
                    LODWORD(lpVtbl) = Instance;
                    if ( !CRVPrivate::cfhImmersiveShellStartup )
                    {
                      CCriticalFailureHandler::GetFakeFailure(v21, (int *)&lpVtbl);
                      CRVPrivate::cfhImmersiveShellStartup = 1;
                      Instance = (int)lpVtbl;
                    }
                    if ( Instance >= 0 )
                      goto LABEL_84;
                    if ( Instance != -2147024882 && Instance != -2144862209 )
                    {
                      CCriticalFailureHandler::HandleFailure(
                        v21,
                        (int *)&lpVtbl,
                        L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                        0x13B7u,
                        v30,
                        v31);
                      Instance = (int)lpVtbl;
                    }
                    if ( Instance >= 0 )
                    {
LABEL_84:
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[69]);
                      Instance = CImmersiveApplicationTransitionHelper::CreateInstance(
                                   v22,
                                   (void **)&punkSite[69].lpVtbl);
                      LODWORD(lpVtbl) = Instance;
                      if ( !CRVPrivate::cfhImmersiveShellStartup )
                      {
                        CCriticalFailureHandler::GetFakeFailure(v23, (int *)&lpVtbl);
                        CRVPrivate::cfhImmersiveShellStartup = 1;
                        Instance = (int)lpVtbl;
                      }
                      if ( Instance >= 0 )
                        goto LABEL_91;
                      if ( Instance != -2147024882 && Instance != -2144862209 )
                      {
                        CCriticalFailureHandler::HandleFailure(
                          v23,
                          (int *)&lpVtbl,
                          L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                          0x13C1u,
                          v30,
                          v31);
                        Instance = (int)lpVtbl;
                      }
                      if ( Instance >= 0 )
                      {
LABEL_91:
                        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[74]);
                        lpVtbl = (IUnknown *)punkSite[69].lpVtbl;
                        punkSite[74].lpVtbl = 0LL;
                        v33 = 0LL;
                        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
                        Instance = Microsoft::WRL::Details::MakeAndInitialize<CCharmsWindowManager,ICharmWindowManagerInternal,IImmersiveApplicationTransitionHelper * &>(
                                     &v33,
                                     &lpVtbl);
                        if ( Instance >= 0 )
                          Instance = (**v33)(v33, &GUID_abda261c_6cda_4269_9160_4a16fbc0ffee, punkSite + 74);
                        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
                        LODWORD(lpVtbl) = Instance;
                        if ( !CRVPrivate::cfhImmersiveShellStartup )
                        {
                          CCriticalFailureHandler::GetFakeFailure(v24, (int *)&lpVtbl);
                          CRVPrivate::cfhImmersiveShellStartup = 1;
                          Instance = (int)lpVtbl;
                        }
                        if ( Instance >= 0 )
                          goto LABEL_100;
                        if ( Instance != -2147024882 && Instance != -2144862209 )
                        {
                          CCriticalFailureHandler::HandleFailure(
                            v24,
                            (int *)&lpVtbl,
                            L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                            0x13C8u,
                            v30,
                            v31);
                          Instance = (int)lpVtbl;
                        }
                        if ( Instance >= 0 )
                        {
LABEL_100:
                          Instance = IUnknown_SetSite((IUnknown *)punkSite[74].lpVtbl, punkSite);
                          LODWORD(lpVtbl) = Instance;
                          if ( !CRVPrivate::cfhImmersiveShellStartup )
                          {
                            CCriticalFailureHandler::GetFakeFailure(v25, (int *)&lpVtbl);
                            CRVPrivate::cfhImmersiveShellStartup = 1;
                            Instance = (int)lpVtbl;
                          }
                          if ( Instance >= 0 )
                            goto LABEL_107;
                          if ( Instance != -2147024882 && Instance != -2144862209 )
                          {
                            CCriticalFailureHandler::HandleFailure(
                              v25,
                              (int *)&lpVtbl,
                              L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                              0x13CBu,
                              v30,
                              v31);
                            Instance = (int)lpVtbl;
                          }
                          if ( Instance >= 0 )
                          {
LABEL_107:
                            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[75]);
                            lpVtbl = punkSite + 30;
                            punkSite[75].lpVtbl = 0LL;
                            v34[0] = 0LL;
                            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v34);
                            Instance = Microsoft::WRL::Details::MakeAndInitialize<CAppViewManager,CAppViewManager,IImmersiveApplicationManagerInternal * &>(
                                         v34,
                                         &lpVtbl);
                            if ( Instance >= 0 )
                              Instance = (**(__int64 (__fastcall ***)(__int64, GUID *, IUnknown *))v34[0])(
                                           v34[0],
                                           &GUID_f89b0985_7620_4f91_ad6d_a2ab45c0ffee,
                                           punkSite + 75);
                            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v34);
                            LODWORD(lpVtbl) = Instance;
                            if ( !CRVPrivate::cfhImmersiveShellStartup )
                            {
                              CCriticalFailureHandler::GetFakeFailure(v26, (int *)&lpVtbl);
                              CRVPrivate::cfhImmersiveShellStartup = 1;
                              Instance = (int)lpVtbl;
                            }
                            if ( Instance >= 0 )
                              goto LABEL_116;
                            if ( Instance != -2147024882 && Instance != -2144862209 )
                            {
                              CCriticalFailureHandler::HandleFailure(
                                v26,
                                (int *)&lpVtbl,
                                L"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                                0x13D3u,
                                v30,
                                v31);
                              Instance = (int)lpVtbl;
                            }
                            if ( Instance >= 0 )
                            {
LABEL_116:
                              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[65]);
                              Instance = CRealmActivationHistory::s_CreateInstance(
                                           (struct IImmersiveApplicationManagerInternal *)&punkSite[30],
                                           v27,
                                           (void **)&punkSite[65].lpVtbl);
                              if ( Instance >= 0 )
                              {
                                Instance = IUnknown_SetSite((IUnknown *)punkSite[65].lpVtbl, punkSite);
                                if ( Instance >= 0 )
                                {
                                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[76]);
                                  Instance = CApplicationFrameService_CreateInstance(
                                               (struct IImmersiveApplicationManagerInternal *)&punkSite[30],
                                               v28,
                                               (void **)&punkSite[76].lpVtbl);
                                  if ( Instance >= 0 )
                                  {
                                    Instance = IUnknown_SetSite((IUnknown *)punkSite[76].lpVtbl, punkSite);
                                    if ( Instance >= 0 )
                                    {
                                      lpVtbl = (IUnknown *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr;
                                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[77]);
                                      Instance = Microsoft::WRL::Details::MakeAndInitialize<FrameFactory,IApplicationFrameFactory,IPrivilegedPresentationOperations *>(
                                                   &punkSite[77].lpVtbl,
                                                   (struct IPrivilegedPresentationOperations **)&lpVtbl);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
  }
  return (unsigned int)Instance;
}
