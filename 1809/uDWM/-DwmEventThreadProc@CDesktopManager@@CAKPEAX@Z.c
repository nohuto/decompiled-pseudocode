/*
 * XREFs of ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18003E6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x18000C3A0 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x18000EA78 (-GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18001BF90 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800308F0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180030FEC (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x1800310E4 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180034960 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003852C (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x180038D50 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x18003FD78 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18003FF84 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z @ 0x18004028C (-CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z.c)
 *     ?RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z @ 0x180040318 (-RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x18004E28A (memcpy_0.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180073834 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     McTemplateU0 @ 0x1800779B8 (McTemplateU0.c)
 *     ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ @ 0x180078984 (-AbandonActiveAnimations@CDesktopManager@@AEAAXXZ.c)
 *     ?CheckDXGIAdapter@CDesktopManager@@AEAAJPEA_N@Z @ 0x1800789C4 (-CheckDXGIAdapter@CDesktopManager@@AEAAJPEA_N@Z.c)
 *     ?Cleanup@CWaitForService@@QEAAXXZ @ 0x180078BEC (-Cleanup@CWaitForService@@QEAAXXZ.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x180079140 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?WaitFor@CWaitForService@@QEAA_NPEBG@Z @ 0x180079C48 (-WaitFor@CWaitForService@@QEAA_NPEBG@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x18007BAE4 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x18009DADC (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 */

__int64 __fastcall CDesktopManager::DwmEventThreadProc(PVOID Parameter)
{
  LARGE_INTEGER v1; // rbx
  bool v3; // r13
  HANDLE v4; // rsi
  int v5; // r15d
  __int64 (*v6)(HWND, unsigned int, unsigned __int64, __int64); // rdx
  const unsigned __int16 *v7; // rcx
  int v8; // eax
  signed int v9; // r12d
  HRESULT v10; // eax
  int Instance; // eax
  const unsigned __int16 *v12; // rdx
  DWORD v13; // r15d
  bool v14; // si
  CDesktopManager *v15; // rdi
  __int64 v16; // rsi
  bool v17; // si
  bool v18; // zf
  char v19; // al
  DWORD v20; // r8d
  bool v21; // di
  char v22; // r13
  DWORD v23; // eax
  int v24; // r15d
  double v25; // xmm6_8
  CDesktopManager *v26; // rdi
  unsigned int v27; // esi
  const void *v28; // r9
  int v29; // eax
  __int64 v30; // rsi
  bool v31; // si
  CWindowList *v32; // rsi
  CDesktopManager *v33; // rdi
  int updated; // eax
  CAnimationEngine *v35; // rcx
  unsigned int v36; // edx
  signed int LastError; // eax
  int v38; // r9d
  signed int v39; // eax
  CDesktopManager *v40; // rcx
  int v41; // eax
  void *v42; // rdx
  signed int v43; // eax
  int v44; // eax
  int v45; // eax
  CAnimationEngine *v46; // rax
  CAnimationEngine *v47; // r15
  bool v48; // di
  struct _RTL_CRITICAL_SECTION **v49; // rcx
  CDesktopManager *v50; // rcx
  CDesktopManager *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rdx
  int v55; // [rsp+28h] [rbp-E0h]
  unsigned int v56; // [rsp+28h] [rbp-E0h]
  unsigned int v57; // [rsp+28h] [rbp-E0h]
  bool v58[8]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE hObject; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v60[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct _RTL_CRITICAL_SECTION *v61; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v63; // [rsp+60h] [rbp-A8h] BYREF
  LARGE_INTEGER Frequency; // [rsp+68h] [rbp-A0h] BYREF
  tagMSG Msg; // [rsp+70h] [rbp-98h] BYREF
  HANDLE pHandles[3]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE *v67; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE *v68; // [rsp+C0h] [rbp-48h]
  int v69; // [rsp+C8h] [rbp-40h]
  __int64 v70; // [rsp+CCh] [rbp-3Ch]
  _BYTE v71[80]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v72[12]; // [rsp+128h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v1.QuadPart = 0LL;
  v3 = 0;
  v4 = 0LL;
  hObject = 0LL;
  v5 = -2147221008;
  *(_WORD *)&v58[4] = 0;
  v72[0] = 0LL;
  Frequency.QuadPart = 0LL;
  v58[0] = 0;
  v58[2] = 0;
  v58[3] = 0;
  *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 164) = GetCurrentThreadId();
  SetLastError(0);
  if ( !QueryPerformanceFrequency(&Frequency) )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    v56 = 2142;
    goto LABEL_91;
  }
  v8 = CDesktopManager::RegisterWindowClass(v7, v6, (unsigned __int16 *)&v58[4]);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x860u);
    goto LABEL_135;
  }
  v10 = CoInitializeEx(0LL, 0);
  v60[1] = v10;
  v5 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x867u);
  v9 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x868u);
    goto LABEL_135;
  }
  Instance = CAnimationEngine::CreateInstance((struct CAnimationEngine **)CDesktopManager::s_pDesktopManagerInstance + 25);
  v9 = Instance;
  if ( Instance < 0 )
  {
    v56 = 2154;
    v38 = Instance;
LABEL_95:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, v56);
    goto LABEL_135;
  }
  if ( (int)CDesktopManager::InitializeComObjects(CDesktopManager::s_pDesktopManagerInstance) < 0 )
    CWaitForService::WaitFor((CWaitForService *)v72, v12);
  SetLastError(0);
  if ( !SetEvent(Parameter) )
  {
    v39 = GetLastError();
    v9 = v39;
    if ( v39 > 0 )
      v9 = (unsigned __int16)v39 | 0x80070000;
    v56 = 2166;
LABEL_91:
    if ( v9 >= 0 )
      v9 = -2003304445;
    v38 = v9;
    goto LABEL_95;
  }
  v60[0] = 0;
  v58[3] = 1;
  while ( 1 )
  {
    if ( !v4
      && (int)MilCompositionEngine_GetComposedEventId(
                *((struct HMIL_CONNECTION__ **)CDesktopManager::s_pDesktopManagerInstance + 6),
                v60) >= 0 )
    {
      OpenComposedEvent(v60[0], v36, &hObject);
      v4 = hObject;
    }
    memset_0(&Msg, 0, sizeof(Msg));
    v13 = 2;
    pHandles[0] = *((HANDLE *)CDesktopManager::s_pDesktopManagerInstance + 34);
    pHandles[1] = v4;
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
      v58[2] = !v18 && v14 | *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 23);
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
    if ( !v58[2] && v3 )
    {
      v19 = 1;
LABEL_72:
      v13 = 1;
      v21 = 0;
      v20 = 64;
      goto LABEL_73;
    }
    v19 = 0;
    v20 = 64;
    if ( !v58[2] )
      goto LABEL_72;
    v21 = v58[0];
    if ( v58[0] )
      goto LABEL_27;
    v1.QuadPart = -1LL;
    v20 = 0;
    v21 = 1;
LABEL_73:
    v58[0] = v21;
LABEL_27:
    v22 = 0;
    if ( v19 )
    {
      v22 = v14;
      goto LABEL_57;
    }
    if ( !v21 )
      v20 = -1;
    v23 = MsgWaitForMultipleObjectsEx(v13, pHandles, v20, 0x1CFFu, 6u);
    if ( v23 == v13 )
      break;
    if ( v23 )
    {
      if ( !v21 || v23 != 1 && v23 != 258 )
        goto LABEL_57;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v24 = 0;
      v9 = 0;
      if ( !CDesktopManager::s_pDesktopManagerInstance )
        goto LABEL_56;
      PerformanceCount.QuadPart = 0LL;
      SetLastError(0);
      if ( !QueryPerformanceCounter(&PerformanceCount) )
      {
        v43 = GetLastError();
        v9 = v43;
        if ( v43 > 0 )
          v9 = (unsigned __int16)v43 | 0x80070000;
        v57 = 1961;
        if ( v9 >= 0 )
          v9 = -2003304445;
        goto LABEL_114;
      }
      if ( v1.QuadPart == -1 )
        v1 = PerformanceCount;
      v25 = (double)(PerformanceCount.LowPart - v1.LowPart) / (double)(int)Frequency.LowPart;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmAnimation_Info);
      v26 = CDesktopManager::s_pDesktopManagerInstance;
      CDesktopManager::AdvanceTimelines(CDesktopManager::s_pDesktopManagerInstance, v25);
      v27 = *((_DWORD *)v26 + 150);
      if ( v27 )
      {
        v28 = (const void *)*((_QWORD *)v26 + 72);
        v67 = v71;
        v68 = v71;
        v22 = 1;
        v69 = 10;
        v70 = 10LL;
        if ( v27 > 0xA )
        {
          v44 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v67, 8u, v27, v28);
          v9 = v44;
          if ( v44 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0xC0u);
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x76Eu);
            DynArrayImpl<0>::~DynArrayImpl<0>(&v67);
            goto LABEL_49;
          }
          v27 = HIDWORD(v70);
        }
        else
        {
          memcpy_0(v71, v28, 8LL * v27);
          HIDWORD(v70) = v27;
        }
        if ( v27 )
        {
          while ( 1 )
          {
            v29 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v67[8 * v24] + 144LL))(*(_QWORD *)&v67[8 * v24]);
            v9 = v29;
            if ( v29 < 0 )
              break;
            if ( (unsigned int)++v24 >= HIDWORD(v70) )
              goto LABEL_46;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x772u);
          DynArrayImpl<0>::~DynArrayImpl<0>(&v67);
          goto LABEL_49;
        }
LABEL_46:
        if ( v67 != v68 )
        {
          (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
          v67 = 0LL;
        }
      }
      if ( *((_BYTE *)v26 + 23) )
      {
        v45 = CIconicBitmapRegistry::ProcessTick(*((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance
                                                 + 37));
        v9 = v45;
        if ( v45 >= 0 )
          goto LABEL_50;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0x778u);
      }
LABEL_49:
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x789u);
LABEL_54:
        if ( v9 >= 0 )
        {
          v1 = PerformanceCount;
          goto LABEL_56;
        }
        v57 = 1971;
LABEL_114:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v57);
LABEL_56:
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x8FBu);
          goto LABEL_132;
        }
        goto LABEL_57;
      }
LABEL_50:
      v30 = *((_QWORD *)v26 + 25);
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v31 = !*(_DWORD *)(v30 + 64) || !*(_BYTE *)(v30 + 120);
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( !v31 )
      {
        v35 = (CAnimationEngine *)*((_QWORD *)v26 + 25);
        v58[1] = 0;
        CAnimationEngine::OnTick(v35, *((double *)CDesktopManager::s_pDesktopManagerInstance + 40), &v58[1]);
        v22 |= v58[1];
      }
      goto LABEL_54;
    }
    v61 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v58[1] = 0;
    v41 = CDesktopManager::CheckDXGIAdapter(v40, &v58[1]);
    v9 = v41;
    if ( v41 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x8F2u);
      v49 = &v61;
LABEL_131:
      CGuard<CDwmCS>::~CGuard<CDwmCS>(v49);
      goto LABEL_132;
    }
    wil::details::ResetEvent(*((wil::details **)CDesktopManager::s_pDesktopManagerInstance + 34), v42);
    v22 = !v58[1];
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v61);
LABEL_57:
    if ( Msg.message == 18 )
      goto LABEL_132;
    v18 = v22 == 0;
    v3 = v58[0];
    if ( !v18 )
    {
      v63 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( CDesktopManager::s_pDesktopManagerInstance )
      {
        v32 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61);
        v61 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v33 = CDesktopManager::s_pDesktopManagerInstance;
        if ( GetCurrentThreadId() == *((_DWORD *)v33 + 164)
          || (int)CAnimationScheduler::GetActiveStoryboardCount(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 30)) <= 0
          || (v46 = CDesktopManager::AcquireAnimationEngine(), (v47 = v46) == 0LL)
          || (v48 = CAnimationEngine::IsIdle(v46) == 0, CAnimationEngine::Release(v47), v48) )
        {
          updated = CWindowList::ForceUpdateScene(v32);
          v9 = updated;
          if ( updated < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x16D6,
              (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
              (const char *)(unsigned int)updated,
              v55);
            CGuard<CDwmCS>::~CGuard<CDwmCS>(&v61);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x90Du);
            v49 = &v63;
            goto LABEL_131;
          }
        }
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        v9 = 0;
      }
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      v3 = v58[0];
    }
    v4 = hObject;
  }
  if ( !PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
    goto LABEL_57;
  while ( Msg.message != 18 )
  {
    DispatchMessageW(&Msg);
    if ( !Msg.hwnd )
      CDesktopManager::HandleThreadMessage(Msg.message, (HWND)Msg.wParam, Msg.lParam);
    if ( !PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
      goto LABEL_57;
  }
LABEL_132:
  if ( hObject )
    CloseHandle(hObject);
  v5 = v60[1];
LABEL_135:
  CWaitForService::Cleanup((CWaitForService *)v72);
  if ( v58[3] )
  {
    v63 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      CDesktopManager::EnableLivePreviewInputHooks(0, 0);
      if ( *(_WORD *)&v58[4] )
        UnregisterClassW((LPCWSTR)*(unsigned __int16 *)&v58[4], g_hInstance);
      CDesktopManager::AbandonActiveAnimations(v50);
      v51 = CDesktopManager::s_pDesktopManagerInstance;
      v52 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 41);
      if ( v52 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v52 + 16LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 41));
        v51 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 41) = 0LL;
      }
      v53 = *((_QWORD *)v51 + 42);
      if ( v53 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v53 + 16LL))(*((_QWORD *)v51 + 42));
        v51 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 42) = 0LL;
      }
      if ( *((_QWORD *)v51 + 25) )
      {
        CAnimationEngine::Cleanup(*((CAnimationEngine **)v51 + 25));
        v51 = CDesktopManager::s_pDesktopManagerInstance;
      }
      if ( *((_QWORD *)v51 + 25) )
      {
        CAnimationEngine::Release(*((CAnimationEngine **)v51 + 25));
        v51 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25) = 0LL;
      }
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(*((__int64 **)v51 + 36));
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v63);
  }
  if ( v5 >= 0 )
    CoUninitialize();
  if ( v9 >= 0 )
    return (unsigned int)v9;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003302654, 0x942u);
  return 2291664642LL;
}
