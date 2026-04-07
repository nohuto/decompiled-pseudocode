/*
 * XREFs of ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180040D20
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180005D48 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180006610 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x1800113E4 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x180011AA0 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x18001271C (-GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x1800156C0 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x1800220B0 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 *     ?FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z @ 0x180036BBC (-FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z.c)
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x180039D98 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z @ 0x180040BA0 (-RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z.c)
 *     ?CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z @ 0x180040C94 (-CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x1800422FC (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x180043058 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18004FB12 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180079EF4 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     McTemplateU0 @ 0x18007DF78 (McTemplateU0.c)
 *     ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ @ 0x18007EC64 (-AbandonActiveAnimations@CDesktopManager@@AEAAXXZ.c)
 *     ?CheckDXGIAdapter@CDesktopManager@@AEAAJPEA_N@Z @ 0x18007ECA4 (-CheckDXGIAdapter@CDesktopManager@@AEAAJPEA_N@Z.c)
 *     ?Cleanup@CWaitForService@@QEAAXXZ @ 0x18007EECC (-Cleanup@CWaitForService@@QEAAXXZ.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x18007F428 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?WaitFor@CWaitForService@@QEAA_NPEBG@Z @ 0x1800800C4 (-WaitFor@CWaitForService@@QEAA_NPEBG@Z.c)
 *     ?Shutdown@CDisplayBroker@@QEAAXXZ @ 0x180080330 (-Shutdown@CDisplayBroker@@QEAAXXZ.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x1800A1F18 (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 */

__int64 __fastcall CDesktopManager::DwmEventThreadProc(PVOID Parameter)
{
  LARGE_INTEGER v1; // rbx
  int v3; // r12d
  bool v4; // r13
  HANDLE v5; // r14
  __int64 (*v6)(HWND, unsigned int, unsigned __int64, __int64); // rdx
  const unsigned __int16 *v7; // rcx
  int v8; // eax
  signed int v9; // r15d
  HRESULT v10; // eax
  int Instance; // eax
  const unsigned __int16 *v12; // rdx
  DWORD v13; // r12d
  bool v14; // r14
  CDesktopManager *v15; // rdi
  __int64 v16; // r14
  bool v17; // r14
  bool v18; // zf
  char v19; // al
  DWORD v20; // r8d
  bool v21; // cl
  bool v22; // di
  DWORD v23; // eax
  double v24; // xmm6_8
  CDesktopManager *v25; // rdi
  int v26; // eax
  __int64 v27; // r14
  bool v28; // r14
  CWindowList *v29; // r14
  CDesktopManager *v30; // rdi
  int updated; // eax
  CAnimationEngine *v32; // rcx
  unsigned int v33; // edx
  signed int LastError; // eax
  int v35; // r9d
  signed int v36; // eax
  CDesktopManager *v37; // rcx
  int v38; // eax
  void *v39; // rdx
  signed int v40; // eax
  CAnimationEngine *v41; // rax
  CAnimationEngine *v42; // r15
  bool v43; // di
  struct _RTL_CRITICAL_SECTION **v44; // rcx
  CDesktopManager *v45; // rcx
  CDesktopManager *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rdx
  int v50; // [rsp+28h] [rbp-E0h]
  unsigned int v51; // [rsp+28h] [rbp-E0h]
  unsigned int v52; // [rsp+28h] [rbp-E0h]
  void *v53; // [rsp+30h] [rbp-D8h]
  bool v54[8]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE hObject; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v56[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct _RTL_CRITICAL_SECTION *v57; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v59; // [rsp+60h] [rbp-A8h] BYREF
  LARGE_INTEGER Frequency; // [rsp+68h] [rbp-A0h] BYREF
  tagMSG Msg; // [rsp+70h] [rbp-98h] BYREF
  HANDLE pHandles[3]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v63[12]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v1.QuadPart = 0LL;
  v3 = -2147221008;
  v4 = 0;
  v5 = 0LL;
  hObject = 0LL;
  Frequency.QuadPart = 0LL;
  v54[1] = 0;
  v54[3] = 0;
  *(_WORD *)&v54[4] = 0;
  v63[0] = 0LL;
  *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 164) = GetCurrentThreadId();
  SetLastError(0);
  if ( !QueryPerformanceFrequency(&Frequency) )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    v51 = 2091;
    goto LABEL_83;
  }
  v8 = CDesktopManager::RegisterWindowClass(v7, v6, (unsigned __int16 *)&v54[4]);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x82Du, v53);
    goto LABEL_119;
  }
  v10 = CoInitializeEx(0LL, 0);
  v56[1] = v10;
  v3 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x834u, v53);
  v9 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x835u, v53);
    goto LABEL_119;
  }
  Instance = CAnimationEngine::CreateInstance((struct CAnimationEngine **)CDesktopManager::s_pDesktopManagerInstance + 25);
  v9 = Instance;
  if ( Instance < 0 )
  {
    v51 = 2103;
    v35 = Instance;
LABEL_87:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, v51, v53);
    goto LABEL_119;
  }
  if ( (int)CDesktopManager::InitializeComObjects(CDesktopManager::s_pDesktopManagerInstance) < 0 )
    CWaitForService::WaitFor((CWaitForService *)v63, v12);
  SetLastError(0);
  if ( !SetEvent(Parameter) )
  {
    v36 = GetLastError();
    v9 = v36;
    if ( v36 > 0 )
      v9 = (unsigned __int16)v36 | 0x80070000;
    v51 = 2115;
LABEL_83:
    if ( v9 >= 0 )
      v9 = -2003304445;
    v35 = v9;
    goto LABEL_87;
  }
  v56[0] = 0;
  v54[3] = 1;
  while ( 1 )
  {
    if ( !v5
      && (int)MilCompositionEngine_GetComposedEventId(
                *((struct HMIL_CONNECTION__ **)CDesktopManager::s_pDesktopManagerInstance + 6),
                v56) >= 0 )
    {
      OpenComposedEvent(v56[0], v33, &hObject);
      v5 = hObject;
    }
    memset_0(&Msg, 0, sizeof(Msg));
    v13 = 2;
    pHandles[0] = *((HANDLE *)CDesktopManager::s_pDesktopManagerInstance + 34);
    pHandles[1] = v5;
    v14 = 0;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v15 = CDesktopManager::s_pDesktopManagerInstance;
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      v16 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v17 = !*(_DWORD *)(v16 + 64) || !*(_BYTE *)(v16 + 120);
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      v14 = !v17 || (CDesktopManager::s_fTimelineDirty || *((_DWORD *)v15 + 150)) && !*((_BYTE *)v15 + 19);
      v18 = hObject == 0LL;
      *((_BYTE *)v15 + 18) = v14;
      v4 = !v18 && v14 | *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 23);
      if ( (unsigned __int8)EtwEventEnabled(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmAllAnimationFinished_Info) )
      {
        if ( v14 )
        {
          CDesktopManager::s_fFireAnimationFinished = 1;
        }
        else if ( CDesktopManager::s_fFireAnimationFinished == 1 )
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmAllAnimationFinished_Info);
          CDesktopManager::s_fFireAnimationFinished = 0;
        }
      }
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v4 && v54[1] )
    {
      v19 = 1;
LABEL_64:
      v13 = 1;
      v21 = 0;
      v20 = 64;
      goto LABEL_65;
    }
    v19 = 0;
    v20 = 64;
    if ( !v4 )
      goto LABEL_64;
    v21 = v54[1];
    if ( v54[1] )
      goto LABEL_27;
    v1.QuadPart = -1LL;
    v20 = 0;
    v21 = 1;
LABEL_65:
    v54[1] = v21;
LABEL_27:
    v22 = 0;
    v54[0] = 0;
    if ( v19 )
    {
      v22 = v14;
      goto LABEL_48;
    }
    if ( !v21 )
      v20 = -1;
    v23 = MsgWaitForMultipleObjectsEx(v13, pHandles, v20, 0x1CFFu, 6u);
    if ( v23 == v13 )
      break;
    if ( v23 )
    {
      if ( !v54[1] || v23 != 1 && v23 != 258 )
        goto LABEL_48;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v9 = 0;
      if ( !CDesktopManager::s_pDesktopManagerInstance )
        goto LABEL_47;
      PerformanceCount.QuadPart = 0LL;
      SetLastError(0);
      if ( !QueryPerformanceCounter(&PerformanceCount) )
      {
        v40 = GetLastError();
        v9 = v40;
        if ( v40 > 0 )
          v9 = (unsigned __int16)v40 | 0x80070000;
        v52 = 1910;
        if ( v9 >= 0 )
          v9 = -2003304445;
        goto LABEL_106;
      }
      if ( v1.QuadPart == -1 )
        v1 = PerformanceCount;
      v24 = (double)(PerformanceCount.LowPart - v1.LowPart) / (double)(int)Frequency.LowPart;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmAnimation_Info);
      v25 = CDesktopManager::s_pDesktopManagerInstance;
      CDesktopManager::AdvanceTimelines(CDesktopManager::s_pDesktopManagerInstance, v24);
      v26 = CDesktopManager::FireTimeEvents(v25, v54);
      v9 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x756u, v53);
      }
      else
      {
        v27 = *((_QWORD *)v25 + 25);
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v28 = !*(_DWORD *)(v27 + 64) || !*(_BYTE *)(v27 + 120);
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        if ( !v28 )
        {
          v32 = (CAnimationEngine *)*((_QWORD *)v25 + 25);
          v54[2] = 0;
          CAnimationEngine::OnTick(v32, *((double *)CDesktopManager::s_pDesktopManagerInstance + 40), &v54[2]);
          v22 = v54[2] || v54[0];
          goto LABEL_45;
        }
      }
      v22 = v54[0];
LABEL_45:
      if ( v9 >= 0 )
      {
        v1 = PerformanceCount;
        goto LABEL_47;
      }
      v52 = 1920;
LABEL_106:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v52, v53);
LABEL_47:
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x8C8u, v53);
        goto LABEL_116;
      }
      goto LABEL_48;
    }
    v57 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v54[0] = 0;
    v38 = CDesktopManager::CheckDXGIAdapter(v37, v54);
    v9 = v38;
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x8BFu, v53);
      v44 = &v57;
LABEL_115:
      CGuard<CDwmCS>::~CGuard<CDwmCS>(v44);
      goto LABEL_116;
    }
    wil::details::ResetEvent(*((wil::details **)CDesktopManager::s_pDesktopManagerInstance + 34), v39);
    v22 = !v54[0];
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v57);
LABEL_48:
    if ( Msg.message == 18 )
      goto LABEL_116;
    if ( v22 )
    {
      v59 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( CDesktopManager::s_pDesktopManagerInstance )
      {
        v29 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61);
        v57 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v30 = CDesktopManager::s_pDesktopManagerInstance;
        if ( GetCurrentThreadId() == *((_DWORD *)v30 + 164)
          || (int)CAnimationScheduler::GetActiveStoryboardCount(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 30)) <= 0
          || (v41 = CDesktopManager::AcquireAnimationEngine(), (v42 = v41) == 0LL)
          || (v43 = CAnimationEngine::IsIdle(v41) == 0, CAnimationEngine::Release(v42), v43) )
        {
          updated = CWindowList::ForceUpdateScene(v29);
          v9 = updated;
          if ( updated < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1746,
              (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
              (const char *)(unsigned int)updated,
              v50);
            CGuard<CDwmCS>::~CGuard<CDwmCS>(&v57);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x8DAu, v53);
            v44 = &v59;
            goto LABEL_115;
          }
        }
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        v9 = 0;
      }
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    }
    v5 = hObject;
  }
  if ( !PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
    goto LABEL_48;
  while ( Msg.message != 18 )
  {
    DispatchMessageW(&Msg);
    if ( !Msg.hwnd )
      CDesktopManager::HandleThreadMessage(Msg.message, (HWND)Msg.wParam, Msg.lParam);
    if ( !PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
      goto LABEL_48;
  }
LABEL_116:
  if ( hObject )
    CloseHandle(hObject);
  v3 = v56[1];
LABEL_119:
  CWaitForService::Cleanup((CWaitForService *)v63);
  if ( v54[3] )
  {
    v59 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      CDesktopManager::EnableLivePreviewInputHooks(0, 0);
      if ( *(_WORD *)&v54[4] )
        UnregisterClassW((LPCWSTR)*(unsigned __int16 *)&v54[4], g_hInstance);
      CDesktopManager::AbandonActiveAnimations(v45);
      v46 = CDesktopManager::s_pDesktopManagerInstance;
      v47 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 41);
      if ( v47 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v47 + 16LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 41));
        v46 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 41) = 0LL;
      }
      v48 = *((_QWORD *)v46 + 42);
      if ( v48 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v48 + 16LL))(*((_QWORD *)v46 + 42));
        v46 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 42) = 0LL;
      }
      if ( *((_QWORD *)v46 + 25) )
      {
        CAnimationEngine::Cleanup(*((CAnimationEngine **)v46 + 25));
        v46 = CDesktopManager::s_pDesktopManagerInstance;
      }
      if ( *((_QWORD *)v46 + 25) )
      {
        CAnimationEngine::Release(*((CAnimationEngine **)v46 + 25));
        v46 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25) = 0LL;
      }
      CDisplayBroker::Shutdown(*((CDisplayBroker **)v46 + 36));
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v59);
  }
  if ( v3 >= 0 )
    CoUninitialize();
  if ( v9 >= 0 )
    return (unsigned int)v9;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003302654, 0x90Fu, v53);
  return 2291664642LL;
}
