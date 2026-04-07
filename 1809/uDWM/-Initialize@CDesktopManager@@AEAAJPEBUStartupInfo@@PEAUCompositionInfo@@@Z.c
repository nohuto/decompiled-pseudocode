/*
 * XREFs of ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18003CFEC
 * Callers:
 *     ?Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z @ 0x18003CA30 (-Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?UpdateRemotingMode@CDesktopManager@@AEAA_NXZ @ 0x18002CD34 (-UpdateRemotingMode@CDesktopManager@@AEAA_NXZ.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18002CDC4 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ??0CWindowList@@QEAA@XZ @ 0x18003CAE0 (--0CWindowList@@QEAA@XZ.c)
 *     ??0CContactManager@@QEAA@XZ @ 0x18003CC3C (--0CContactManager@@QEAA@XZ.c)
 *     ??0CTransitionVisualController@@QEAA@XZ @ 0x18003CD40 (--0CTransitionVisualController@@QEAA@XZ.c)
 *     ?SetEventCallback@CAnimationClockCoordinator@@QEAAJPEAUIAnimationClockEventListener@@@Z @ 0x18003CDCC (-SetEventCallback@CAnimationClockCoordinator@@QEAAJPEAUIAnimationClockEventListener@@@Z.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x18003CE2C (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?Init@CTextCache@@QEAAJXZ @ 0x18003CE60 (-Init@CTextCache@@QEAAJXZ.c)
 *     ?Init@CIconicBitmapRegistry@@QEAAJXZ @ 0x18003CEAC (-Init@CIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?Init@CImmersiveIconicBitmapRegistry@@QEAAJXZ @ 0x18003CF4C (-Init@CImmersiveIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?ReadProductType@CDesktopManager@@AEAAXXZ @ 0x18003D638 (-ReadProductType@CDesktopManager@@AEAAXXZ.c)
 *     ?_InitializeWnf@CDesktopManager@@AEAAJXZ @ 0x18003D69C (-_InitializeWnf@CDesktopManager@@AEAAJXZ.c)
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x18003D7A0 (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 *     ?CreateRootVisual@CWindowList@@AEAAJXZ @ 0x18003DA28 (-CreateRootVisual@CWindowList@@AEAAJXZ.c)
 *     ??0CProjectionBorderManager@@QEAA@PEAUIDwmChannel@@@Z @ 0x18003DAD0 (--0CProjectionBorderManager@@QEAA@PEAUIDwmChannel@@@Z.c)
 *     ?Create@CLivePreview@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003DB70 (-Create@CLivePreview@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x18003DEB8 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0d @ 0x1800779F8 (McTemplateU0d.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800793D0 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 */

__int64 __fastcall CDesktopManager::Initialize(
        CDesktopManager *this,
        const struct StartupInfo *a2,
        struct CompositionInfo *a3)
{
  HANDLE EventW; // r15
  char v6; // r13
  char v7; // r12
  CWindowList *v8; // rax
  CWindowList *v9; // rbx
  CWindowList *v10; // rax
  CContactManager *v11; // rax
  CContactManager *v12; // rax
  _QWORD *v13; // rax
  CTransitionVisualController *v14; // rax
  CTransitionVisualController *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  CDesktopManager *v19; // rax
  int v20; // eax
  signed int v21; // ebx
  struct IDwmChannel **v22; // r14
  int Channel; // eax
  _QWORD *v24; // rax
  _QWORD *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  CProjectionBorderManager *v29; // rax
  CProjectionBorderManager *v30; // rax
  CWindowList *v31; // rbp
  int RootVisual; // eax
  int v33; // eax
  HANDLE Thread; // rax
  int v36; // r9d
  signed int v37; // eax
  signed int LastError; // eax
  signed int v39; // eax
  DWORD dwCreationFlags; // [rsp+20h] [rbp-48h]
  DWORD dwCreationFlagsa; // [rsp+20h] [rbp-48h]
  DWORD dwCreationFlagsb; // [rsp+20h] [rbp-48h]
  DWORD dwCreationFlagsc; // [rsp+20h] [rbp-48h]
  HANDLE Handles[2]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int pvParam; // [rsp+70h] [rbp+8h] BYREF
  int v47; // [rsp+74h] [rbp+Ch]

  *((_BYTE *)this + 20) = 0;
  *((_BYTE *)this + 24) = 0;
  EventW = 0LL;
  v6 = 0;
  *((_QWORD *)this + 8) = *(_QWORD *)a2;
  v7 = 0;
  *((_QWORD *)this + 6) = *(_QWORD *)a3;
  v8 = (CWindowList *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        608LL);
  v9 = v8;
  if ( v8 )
  {
    memset_0(v8, 0, 0x260uLL);
    v10 = CWindowList::CWindowList(v9);
  }
  else
  {
    v10 = 0LL;
  }
  *((_QWORD *)this + 61) = v10;
  if ( !v10 )
  {
    dwCreationFlagsa = 342;
LABEL_63:
    v21 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800BDD94, 1u, -2147024882, dwCreationFlagsa);
    return (unsigned int)v21;
  }
  v11 = (CContactManager *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                             WPF::g_pProcessHeap,
                             328LL);
  if ( v11 )
    v12 = CContactManager::CContactManager(v11);
  else
    v12 = 0LL;
  *((_QWORD *)this + 23) = v12;
  if ( !v12 )
  {
    dwCreationFlagsa = 345;
    goto LABEL_63;
  }
  v13 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                    WPF::g_pProcessHeap,
                    8LL);
  if ( v13 )
    *v13 = 0LL;
  else
    v13 = 0LL;
  *((_QWORD *)this + 36) = v13;
  if ( !v13 )
  {
    dwCreationFlagsa = 348;
    goto LABEL_63;
  }
  v14 = (CTransitionVisualController *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 16LL))(
                                         WPF::g_pProcessHeap,
                                         192LL);
  if ( v14 )
    v15 = CTransitionVisualController::CTransitionVisualController(v14);
  else
    v15 = 0LL;
  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31) = v15;
  if ( !v15 )
  {
    dwCreationFlagsa = 351;
    goto LABEL_63;
  }
  v16 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          88LL);
  v17 = v16;
  if ( v16 )
  {
    *(_QWORD *)v16 = &CAnimationScheduler::`vftable'{for `IAnimationListener'};
    *(_QWORD *)(v16 + 8) = &CAnimationScheduler::`vftable'{for `IAnimationClockEventListener'};
    *(_QWORD *)(v16 + 16) = 0LL;
    *(_QWORD *)(v16 + 24) = 0LL;
    *(_QWORD *)(v16 + 32) = 0LL;
    *(_DWORD *)(v16 + 40) = 0;
    *(_QWORD *)(v16 + 48) = 0LL;
    *(_QWORD *)(v16 + 56) = 0LL;
    *(_QWORD *)(v16 + 64) = 0LL;
    *(_DWORD *)(v16 + 72) = 0;
    *(_BYTE *)(v16 + 80) = 0;
  }
  else
  {
    v17 = 0LL;
  }
  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) = v17;
  if ( !v17 )
  {
    dwCreationFlagsa = 354;
    goto LABEL_63;
  }
  v18 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          88LL);
  if ( v18 )
  {
    *(_QWORD *)v18 = &CAnimationClockCoordinator::`vftable';
    InitializeCriticalSection((LPCRITICAL_SECTION)(v18 + 8));
    *(_QWORD *)(v18 + 48) = 0LL;
    *(_QWORD *)(v18 + 56) = 0LL;
    *(_QWORD *)(v18 + 64) = 0LL;
    *(_QWORD *)(v18 + 72) = 0LL;
    *(_DWORD *)(v18 + 80) = 0;
  }
  else
  {
    v18 = 0LL;
  }
  v19 = CDesktopManager::s_pDesktopManagerInstance;
  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) = v18;
  if ( !v18 )
  {
    dwCreationFlagsa = 357;
    goto LABEL_63;
  }
  v20 = CAnimationClockCoordinator::SetEventCallback(
          (CAnimationClockCoordinator *)v18,
          (struct IAnimationClockEventListener *)((*((_QWORD *)v19 + 30) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)v19 + 30) >> 64)));
  v21 = v20;
  if ( v20 < 0 )
  {
    dwCreationFlagsb = 360;
LABEL_75:
    v36 = v20;
LABEL_112:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800BDD94, 1u, v36, dwCreationFlagsb);
    goto LABEL_56;
  }
  pvParam = 8;
  if ( SystemParametersInfoW(0x48u, 8u, &pvParam, 0) )
    CDesktopManager::SetWindowAnimation(v47 != 0);
  v20 = DwmRedirectionManagerInitialize(
          a3,
          *((struct IDwmRedirectionClient **)this + 61),
          (struct IDwmRedirectionManager **)this + 7);
  v21 = v20;
  if ( v20 < 0 )
  {
    dwCreationFlagsb = 376;
    goto LABEL_75;
  }
  v22 = (struct IDwmChannel **)((char *)this + 40);
  v6 = 1;
  Channel = MilConnection_CreateChannel(*((struct HMIL_CONNECTION__ **)this + 6), (struct IDwmChannel **)this + 5);
  v21 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsb = 380;
    goto LABEL_78;
  }
  v7 = 1;
  Channel = (*(__int64 (__fastcall **)(struct IDwmChannel *, __int64))(*(_QWORD *)*v22 + 160LL))(*v22, 1LL);
  v21 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsb = 384;
    goto LABEL_78;
  }
  v7 = 0;
  v24 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    128LL);
  v25 = v24;
  if ( v24 )
  {
    memset_0(v24, 0, 0x80uLL);
    *v25 = &CTextCache::`vftable';
    memset_0(v25 + 1, 0, 0x5CuLL);
    v25[13] = 0LL;
    v25[14] = 0LL;
    v25[15] = 0LL;
  }
  else
  {
    v25 = 0LL;
  }
  *((_QWORD *)this + 33) = v25;
  if ( v25 )
  {
    Channel = CTextCache::Init((CTextCache *)v25);
    v21 = Channel;
    if ( Channel < 0 )
    {
      dwCreationFlagsb = 393;
      goto LABEL_78;
    }
    v26 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            112LL);
    if ( v26 )
    {
      *(_QWORD *)v26 = &CIconicBitmapRegistry::`vftable';
      *(_QWORD *)(v26 + 16) = 0LL;
      *(_QWORD *)(v26 + 24) = 0LL;
      *(_QWORD *)(v26 + 32) = 0LL;
      *(_DWORD *)(v26 + 40) = 0;
      *(_QWORD *)(v26 + 48) = 0LL;
      *(_QWORD *)(v26 + 56) = 0LL;
      *(_QWORD *)(v26 + 64) = 0LL;
      *(_DWORD *)(v26 + 72) = 0;
      *(_QWORD *)(v26 + 96) = 0LL;
    }
    else
    {
      v26 = 0LL;
    }
    *((_QWORD *)this + 37) = v26;
    if ( v26 )
    {
      Channel = CIconicBitmapRegistry::Init((CIconicBitmapRegistry *)v26);
      v21 = Channel;
      if ( Channel < 0 )
      {
        dwCreationFlagsb = 397;
        goto LABEL_78;
      }
      v27 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
              WPF::g_pProcessHeap,
              88LL);
      if ( v27 )
      {
        *(_QWORD *)v27 = &CImmersiveIconicBitmapRegistry::`vftable';
        *(_QWORD *)(v27 + 16) = 0LL;
        *(_QWORD *)(v27 + 24) = 0LL;
        *(_QWORD *)(v27 + 32) = 0LL;
        *(_DWORD *)(v27 + 40) = 0;
        *(_QWORD *)(v27 + 48) = 0LL;
        *(_QWORD *)(v27 + 56) = 0LL;
        *(_QWORD *)(v27 + 64) = 0LL;
        *(_DWORD *)(v27 + 72) = 0;
        *(_QWORD *)(v27 + 80) = 0LL;
      }
      else
      {
        v27 = 0LL;
      }
      *((_QWORD *)this + 38) = v27;
      if ( v27 )
      {
        Channel = CImmersiveIconicBitmapRegistry::Init((CImmersiveIconicBitmapRegistry *)v27);
        v21 = Channel;
        if ( Channel < 0 )
        {
          dwCreationFlagsb = 401;
          goto LABEL_78;
        }
        CDesktopManager::SetupDPIValues(this);
        *((_DWORD *)this + 132) = -1;
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0d(v28, &UdwmStartup_Info, 1LL);
        CDesktopManager::UpdateRemotingMode(this);
        Channel = WICCreateImagingFactory_Proxy(567LL, (char *)this + 312);
        v21 = Channel;
        if ( Channel < 0 )
        {
          dwCreationFlagsb = 412;
          goto LABEL_78;
        }
        Channel = CDesktopManager::UpdateSettings(this, 13);
        v21 = Channel;
        if ( Channel < 0 )
        {
          dwCreationFlagsb = 425;
          goto LABEL_78;
        }
        Channel = CLivePreview::Create(*v22, (struct CLivePreview **)this + 64);
        v21 = Channel;
        if ( Channel < 0 )
        {
          dwCreationFlagsb = 427;
          goto LABEL_78;
        }
        v29 = (CProjectionBorderManager *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                            WPF::g_pProcessHeap,
                                            592LL);
        if ( v29 )
          v30 = CProjectionBorderManager::CProjectionBorderManager(v29, *v22);
        else
          v30 = 0LL;
        *((_QWORD *)this + 65) = v30;
        if ( *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65) )
        {
          Channel = DCompositionCreateDevice3(0LL, &GUID_25682ec4_73a4_4022_a04f_1bbe6dc3e1f0, (char *)this + 208);
          v21 = Channel;
          if ( Channel < 0 )
          {
            dwCreationFlagsb = 432;
          }
          else
          {
            Channel = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                        + 248LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 5));
            v21 = Channel;
            if ( Channel >= 0 )
            {
              v31 = (CWindowList *)*((_QWORD *)this + 61);
              RootVisual = CWindowList::CreateRootVisual(v31);
              v21 = RootVisual;
              if ( RootVisual < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x701,
                  (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
                  (const char *)(unsigned int)RootVisual,
                  dwCreationFlags);
              }
              else
              {
                v33 = CWindowList::RegisterTransparencySystemPolicyChangeEvent(v31);
                v21 = v33;
                if ( v33 < 0 )
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x702,
                    (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
                    (const char *)(unsigned int)v33,
                    dwCreationFlags);
                else
                  v21 = 0;
              }
              if ( v21 < 0 )
              {
                dwCreationFlagsb = 436;
              }
              else
              {
                SetLastError(0);
                EventW = CreateEventW(0LL, 1, 0, 0LL);
                if ( EventW )
                {
                  SetLastError(0);
                  Thread = CreateThread(0LL, 0LL, CDesktopManager::DwmEventThreadProc, EventW, 0, (LPDWORD)this + 164);
                  *((_QWORD *)this + 83) = Thread;
                  if ( Thread )
                  {
                    Handles[0] = EventW;
                    Handles[1] = Thread;
                    SetLastError(0);
                    if ( !WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF) )
                    {
                      Channel = CDesktopManager::_InitializeWnf(this);
                      v21 = Channel;
                      if ( Channel >= 0 )
                      {
                        CDesktopManager::ReadProductType(this);
                        *((_BYTE *)this + 24) = 1;
LABEL_56:
                        if ( v21 >= 0 )
                          goto LABEL_57;
                        if ( v7 )
                        {
                          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 40LL))(*((_QWORD *)this + 5));
                          *((_QWORD *)this + 5) = 0LL;
                        }
                        if ( !v6 )
                          goto LABEL_57;
                        goto LABEL_116;
                      }
                      dwCreationFlagsb = 474;
                      goto LABEL_78;
                    }
                    LastError = GetLastError();
                    v21 = LastError;
                    if ( LastError > 0 )
                      v21 = (unsigned __int16)LastError | 0x80070000;
                    dwCreationFlagsb = 469;
                  }
                  else
                  {
                    v39 = GetLastError();
                    v21 = v39;
                    if ( v39 > 0 )
                      v21 = (unsigned __int16)v39 | 0x80070000;
                    dwCreationFlagsb = 453;
                  }
                }
                else
                {
                  v37 = GetLastError();
                  v21 = v37;
                  if ( v37 > 0 )
                    v21 = (unsigned __int16)v37 | 0x80070000;
                  dwCreationFlagsb = 444;
                }
                if ( v21 >= 0 )
                  v21 = -2003304445;
              }
              v36 = v21;
              goto LABEL_112;
            }
            dwCreationFlagsb = 434;
          }
LABEL_78:
          v36 = Channel;
          goto LABEL_112;
        }
        dwCreationFlagsc = 430;
      }
      else
      {
        dwCreationFlagsc = 400;
      }
    }
    else
    {
      dwCreationFlagsc = 396;
    }
  }
  else
  {
    dwCreationFlagsc = 392;
  }
  v21 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800BDD94, 1u, -2147024882, dwCreationFlagsc);
LABEL_116:
  CDesktopManager::NotifyRedirectionShutdown(this);
  DwmRedirectionManagerShutdown();
LABEL_57:
  if ( EventW )
    CloseHandle(EventW);
  return (unsigned int)v21;
}
