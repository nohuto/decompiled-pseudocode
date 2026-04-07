/*
 * XREFs of ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180043F80
 * Callers:
 *     ?Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z @ 0x1800438C4 (-Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateRemotingMode@CDesktopManager@@AEAA_NXZ @ 0x18002CBC8 (-UpdateRemotingMode@CDesktopManager@@AEAA_NXZ.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18002CC58 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ??0CWindowList@@QEAA@XZ @ 0x180043974 (--0CWindowList@@QEAA@XZ.c)
 *     ??0CContactManager@@QEAA@XZ @ 0x180043AE4 (--0CContactManager@@QEAA@XZ.c)
 *     ??0CTransitionVisualController@@QEAA@XZ @ 0x180043BE8 (--0CTransitionVisualController@@QEAA@XZ.c)
 *     ?SetEventCallback@CAnimationClockCoordinator@@QEAAJPEAUIAnimationClockEventListener@@@Z @ 0x180043C74 (-SetEventCallback@CAnimationClockCoordinator@@QEAAJPEAUIAnimationClockEventListener@@@Z.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x180043CD4 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?Create@CCompositor@@SAJPEAUHMIL_CONNECTION__@@PEAPEAV1@@Z @ 0x180043D08 (-Create@CCompositor@@SAJPEAUHMIL_CONNECTION__@@PEAPEAV1@@Z.c)
 *     ?Init@CTextCache@@QEAAJXZ @ 0x180043DF4 (-Init@CTextCache@@QEAAJXZ.c)
 *     ?Init@CIconicBitmapRegistry@@QEAAJXZ @ 0x180043E40 (-Init@CIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?Init@CImmersiveIconicBitmapRegistry@@QEAAJXZ @ 0x180043EE0 (-Init@CImmersiveIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?ReadProductType@CDesktopManager@@AEAAXXZ @ 0x1800445C4 (-ReadProductType@CDesktopManager@@AEAAXXZ.c)
 *     ?_InitializeWnf@CDesktopManager@@AEAAJXZ @ 0x180044628 (-_InitializeWnf@CDesktopManager@@AEAAJXZ.c)
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x18004472C (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 *     ?CreateRootVisual@CWindowList@@AEAAJXZ @ 0x180044988 (-CreateRootVisual@CWindowList@@AEAAJXZ.c)
 *     ??0CProjectionBorderManager@@QEAA@XZ @ 0x180044A28 (--0CProjectionBorderManager@@QEAA@XZ.c)
 *     ?Create@CLivePreview@@SAJPEAPEAV1@@Z @ 0x180044AC0 (-Create@CLivePreview@@SAJPEAPEAV1@@Z.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x180046374 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18004FB12 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0d @ 0x18007DFB8 (McTemplateU0d.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x18007F7D0 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 */

__int64 __fastcall CDesktopManager::Initialize(
        CDesktopManager *this,
        const struct StartupInfo *a2,
        struct CompositionInfo *a3)
{
  HANDLE EventW; // r14
  char v6; // r15
  CWindowList *v7; // rax
  CWindowList *v8; // rbx
  CWindowList *v9; // rax
  CContactManager *v10; // rax
  CContactManager *v11; // rax
  _QWORD *v12; // rax
  CTransitionVisualController *v13; // rax
  CTransitionVisualController *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  CDesktopManager *v18; // rax
  int v19; // eax
  signed int v20; // ebx
  CBaseObject *v21; // rcx
  int updated; // eax
  __int64 v23; // rax
  CTextCache *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  CProjectionBorderManager *v28; // rax
  CProjectionBorderManager *v29; // rax
  CWindowList *v30; // rbp
  int RootVisual; // eax
  HANDLE Thread; // rax
  int v34; // r9d
  __int64 v35; // rdx
  signed int LastError; // eax
  signed int v37; // eax
  signed int v38; // eax
  DWORD dwCreationFlags; // [rsp+20h] [rbp-48h]
  DWORD dwCreationFlagsa; // [rsp+20h] [rbp-48h]
  DWORD dwCreationFlagsb; // [rsp+20h] [rbp-48h]
  DWORD dwCreationFlagsc; // [rsp+20h] [rbp-48h]
  LPDWORD lpThreadId; // [rsp+28h] [rbp-40h]
  HANDLE Handles[2]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int pvParam; // [rsp+70h] [rbp+8h] BYREF
  int v47; // [rsp+74h] [rbp+Ch]

  *((_BYTE *)this + 20) = 0;
  *((_BYTE *)this + 24) = 0;
  EventW = 0LL;
  v6 = 0;
  *((_QWORD *)this + 8) = *(_QWORD *)a2;
  *((_QWORD *)this + 6) = *(_QWORD *)a3;
  v7 = (CWindowList *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        640LL);
  v8 = v7;
  if ( v7 )
  {
    memset_0(v7, 0, 0x280uLL);
    v9 = CWindowList::CWindowList(v8);
  }
  else
  {
    v9 = 0LL;
  }
  *((_QWORD *)this + 61) = v9;
  if ( !v9 )
  {
    dwCreationFlagsa = 331;
LABEL_64:
    v20 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C3ED4, 1u, -2147024882, dwCreationFlagsa, lpThreadId);
    return (unsigned int)v20;
  }
  v10 = (CContactManager *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                             WPF::g_pProcessHeap,
                             328LL);
  if ( v10 )
    v11 = CContactManager::CContactManager(v10);
  else
    v11 = 0LL;
  *((_QWORD *)this + 23) = v11;
  if ( !v11 )
  {
    dwCreationFlagsa = 334;
    goto LABEL_64;
  }
  v12 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                    WPF::g_pProcessHeap,
                    8LL);
  if ( v12 )
    *v12 = 0LL;
  else
    v12 = 0LL;
  *((_QWORD *)this + 36) = v12;
  if ( !v12 )
  {
    dwCreationFlagsa = 337;
    goto LABEL_64;
  }
  v13 = (CTransitionVisualController *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 16LL))(
                                         WPF::g_pProcessHeap,
                                         192LL);
  if ( v13 )
    v14 = CTransitionVisualController::CTransitionVisualController(v13);
  else
    v14 = 0LL;
  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31) = v14;
  if ( !v14 )
  {
    dwCreationFlagsa = 340;
    goto LABEL_64;
  }
  v15 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          88LL);
  v16 = v15;
  if ( v15 )
  {
    *(_QWORD *)v15 = &CAnimationScheduler::`vftable'{for `IAnimationListener'};
    *(_QWORD *)(v15 + 8) = &CAnimationScheduler::`vftable'{for `IAnimationClockEventListener'};
    *(_QWORD *)(v15 + 16) = 0LL;
    *(_QWORD *)(v15 + 24) = 0LL;
    *(_QWORD *)(v15 + 32) = 0LL;
    *(_DWORD *)(v15 + 40) = 0;
    *(_QWORD *)(v15 + 48) = 0LL;
    *(_QWORD *)(v15 + 56) = 0LL;
    *(_QWORD *)(v15 + 64) = 0LL;
    *(_DWORD *)(v15 + 72) = 0;
    *(_BYTE *)(v15 + 80) = 0;
  }
  else
  {
    v16 = 0LL;
  }
  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) = v16;
  if ( !v16 )
  {
    dwCreationFlagsa = 343;
    goto LABEL_64;
  }
  v17 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          88LL);
  if ( v17 )
  {
    *(_QWORD *)v17 = &CAnimationClockCoordinator::`vftable';
    InitializeCriticalSection((LPCRITICAL_SECTION)(v17 + 8));
    *(_QWORD *)(v17 + 48) = 0LL;
    *(_QWORD *)(v17 + 56) = 0LL;
    *(_QWORD *)(v17 + 64) = 0LL;
    *(_QWORD *)(v17 + 72) = 0LL;
    *(_DWORD *)(v17 + 80) = 0;
  }
  else
  {
    v17 = 0LL;
  }
  v18 = CDesktopManager::s_pDesktopManagerInstance;
  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) = v17;
  if ( !v17 )
  {
    dwCreationFlagsa = 346;
    goto LABEL_64;
  }
  v19 = CAnimationClockCoordinator::SetEventCallback(
          (CAnimationClockCoordinator *)v17,
          (struct IAnimationClockEventListener *)((*((_QWORD *)v18 + 30) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)v18 + 30) >> 64)));
  v20 = v19;
  if ( v19 < 0 )
  {
    dwCreationFlagsb = 349;
LABEL_76:
    v34 = v19;
LABEL_113:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C3ED4, 1u, v34, dwCreationFlagsb, lpThreadId);
    goto LABEL_57;
  }
  pvParam = 8;
  if ( SystemParametersInfoW(0x48u, 8u, &pvParam, 0) )
    CDesktopManager::SetWindowAnimation(v47 != 0);
  v19 = DwmRedirectionManagerInitialize(
          a3,
          *((struct IDwmRedirectionClient **)this + 61),
          (struct IDwmRedirectionManager **)this + 7);
  v20 = v19;
  if ( v19 < 0 )
  {
    dwCreationFlagsb = 365;
    goto LABEL_76;
  }
  v21 = (CBaseObject *)*((_QWORD *)this + 5);
  v6 = 1;
  *((_QWORD *)this + 5) = 0LL;
  if ( v21 )
    CBaseObject::Release(v21);
  updated = CCompositor::Create(*((struct HMIL_CONNECTION__ **)this + 6), (struct CCompositor **)this + 5);
  v20 = updated;
  if ( updated < 0 )
  {
    dwCreationFlagsb = 369;
LABEL_79:
    v34 = updated;
    goto LABEL_113;
  }
  v23 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          128LL);
  v24 = (CTextCache *)v23;
  if ( v23 )
  {
    *(_DWORD *)(v23 + 100) = 0;
    *(_QWORD *)v23 = &CTextCache::`vftable';
    memset_0((void *)(v23 + 8), 0, 0x5CuLL);
    *((_QWORD *)v24 + 13) = 0LL;
    *((_QWORD *)v24 + 14) = 0LL;
    *((_QWORD *)v24 + 15) = 0LL;
  }
  else
  {
    v24 = 0LL;
  }
  *((_QWORD *)this + 33) = v24;
  if ( !v24 )
  {
    dwCreationFlagsc = 377;
LABEL_83:
    v20 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C3ED4, 1u, -2147024882, dwCreationFlagsc, lpThreadId);
LABEL_115:
    CDesktopManager::NotifyRedirectionShutdown(this);
    DwmRedirectionManagerShutdown();
    goto LABEL_58;
  }
  updated = CTextCache::Init(v24);
  v20 = updated;
  if ( updated < 0 )
  {
    dwCreationFlagsb = 378;
    goto LABEL_79;
  }
  v25 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          112LL);
  if ( v25 )
  {
    *(_QWORD *)v25 = &CIconicBitmapRegistry::`vftable';
    *(_QWORD *)(v25 + 16) = 0LL;
    *(_QWORD *)(v25 + 24) = 0LL;
    *(_QWORD *)(v25 + 32) = 0LL;
    *(_DWORD *)(v25 + 40) = 0;
    *(_QWORD *)(v25 + 48) = 0LL;
    *(_QWORD *)(v25 + 56) = 0LL;
    *(_QWORD *)(v25 + 64) = 0LL;
    *(_DWORD *)(v25 + 72) = 0;
    *(_QWORD *)(v25 + 96) = 0LL;
  }
  else
  {
    v25 = 0LL;
  }
  *((_QWORD *)this + 37) = v25;
  if ( !v25 )
  {
    dwCreationFlagsc = 381;
    goto LABEL_83;
  }
  updated = CIconicBitmapRegistry::Init((CIconicBitmapRegistry *)v25);
  v20 = updated;
  if ( updated < 0 )
  {
    dwCreationFlagsb = 382;
    goto LABEL_79;
  }
  v26 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          88LL);
  if ( v26 )
  {
    *(_QWORD *)v26 = &CImmersiveIconicBitmapRegistry::`vftable';
    *(_QWORD *)(v26 + 16) = 0LL;
    *(_QWORD *)(v26 + 24) = 0LL;
    *(_QWORD *)(v26 + 32) = 0LL;
    *(_DWORD *)(v26 + 40) = 0;
    *(_QWORD *)(v26 + 48) = 0LL;
    *(_QWORD *)(v26 + 56) = 0LL;
    *(_QWORD *)(v26 + 64) = 0LL;
    *(_DWORD *)(v26 + 72) = 0;
    *(_QWORD *)(v26 + 80) = 0LL;
  }
  else
  {
    v26 = 0LL;
  }
  *((_QWORD *)this + 38) = v26;
  if ( !v26 )
  {
    dwCreationFlagsc = 385;
    goto LABEL_83;
  }
  updated = CImmersiveIconicBitmapRegistry::Init((CImmersiveIconicBitmapRegistry *)v26);
  v20 = updated;
  if ( updated < 0 )
  {
    dwCreationFlagsb = 386;
    goto LABEL_79;
  }
  CDesktopManager::SetupDPIValues(this);
  *((_DWORD *)this + 132) = -1;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0d(v27, &UdwmStartup_Info, 1LL);
  CDesktopManager::UpdateRemotingMode(this);
  updated = WICCreateImagingFactory_Proxy(567LL, (char *)this + 312);
  v20 = updated;
  if ( updated < 0 )
  {
    dwCreationFlagsb = 397;
    goto LABEL_79;
  }
  updated = CDesktopManager::UpdateSettings(this, 13);
  v20 = updated;
  if ( updated < 0 )
  {
    dwCreationFlagsb = 410;
    goto LABEL_79;
  }
  updated = CLivePreview::Create((struct CLivePreview **)this + 64);
  v20 = updated;
  if ( updated < 0 )
  {
    dwCreationFlagsb = 412;
    goto LABEL_79;
  }
  v28 = (CProjectionBorderManager *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                                      WPF::g_pProcessHeap,
                                      584LL);
  if ( v28 )
    v29 = CProjectionBorderManager::CProjectionBorderManager(v28);
  else
    v29 = 0LL;
  *((_QWORD *)this + 65) = v29;
  if ( !*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65) )
  {
    dwCreationFlagsc = 415;
    goto LABEL_83;
  }
  updated = DCompositionCreateDevice3(0LL, &GUID_25682ec4_73a4_4022_a04f_1bbe6dc3e1f0, (char *)this + 208);
  v20 = updated;
  if ( updated < 0 )
  {
    dwCreationFlagsb = 417;
    goto LABEL_79;
  }
  updated = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                            + 16LL)
                                              + 256LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 5)
                                                                  + 16LL));
  v20 = updated;
  if ( updated < 0 )
  {
    dwCreationFlagsb = 419;
    goto LABEL_79;
  }
  v30 = (CWindowList *)*((_QWORD *)this + 61);
  RootVisual = CWindowList::CreateRootVisual(v30);
  v20 = RootVisual;
  if ( RootVisual < 0 )
  {
    v35 = 1807LL;
  }
  else
  {
    RootVisual = CWindowList::RegisterTransparencySystemPolicyChangeEvent(v30);
    v20 = RootVisual;
    if ( RootVisual >= 0 )
    {
      v20 = 0;
      goto LABEL_51;
    }
    v35 = 1808LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v35,
    (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)RootVisual,
    dwCreationFlags);
LABEL_51:
  if ( v20 < 0 )
  {
    dwCreationFlagsb = 421;
LABEL_112:
    v34 = v20;
    goto LABEL_113;
  }
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  if ( !EventW )
  {
    LastError = GetLastError();
    v20 = LastError;
    if ( LastError > 0 )
      v20 = (unsigned __int16)LastError | 0x80070000;
    dwCreationFlagsb = 429;
    goto LABEL_110;
  }
  SetLastError(0);
  Thread = CreateThread(
             0LL,
             0LL,
             (LPTHREAD_START_ROUTINE)CDesktopManager::DwmEventThreadProc,
             EventW,
             0,
             (LPDWORD)this + 164);
  *((_QWORD *)this + 83) = Thread;
  if ( !Thread )
  {
    v38 = GetLastError();
    v20 = v38;
    if ( v38 > 0 )
      v20 = (unsigned __int16)v38 | 0x80070000;
    dwCreationFlagsb = 438;
    goto LABEL_110;
  }
  SetThreadDescription(Thread, L"uDWM Event Thread");
  Handles[1] = *((HANDLE *)this + 83);
  Handles[0] = EventW;
  SetLastError(0);
  if ( WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF) )
  {
    v37 = GetLastError();
    v20 = v37;
    if ( v37 > 0 )
      v20 = (unsigned __int16)v37 | 0x80070000;
    dwCreationFlagsb = 455;
LABEL_110:
    if ( v20 >= 0 )
      v20 = -2003304445;
    goto LABEL_112;
  }
  updated = CDesktopManager::_InitializeWnf(this);
  v20 = updated;
  if ( updated < 0 )
  {
    dwCreationFlagsb = 460;
    goto LABEL_79;
  }
  CDesktopManager::ReadProductType(this);
  *((_BYTE *)this + 24) = 1;
LABEL_57:
  if ( v20 < 0 && v6 )
    goto LABEL_115;
LABEL_58:
  if ( EventW )
    CloseHandle(EventW);
  return (unsigned int)v20;
}
