/*
 * XREFs of ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001C620
 * Callers:
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x1800091F0 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     PbmRegisterPlaybackManagerNotifications @ 0x180023F90 (PbmRegisterPlaybackManagerNotifications.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x180024050 (PbmUnregisterPlaybackManagerNotifications.c)
 *     PbmSetSmtcSubscriptionState @ 0x180024160 (PbmSetSmtcSubscriptionState.c)
 *     PbmGetSoundLevel @ 0x1800242D0 (PbmGetSoundLevel.c)
 *     PbmIsPlaying @ 0x180024400 (PbmIsPlaying.c)
 *     PbmRegisterAppManagerNotification @ 0x180024510 (PbmRegisterAppManagerNotification.c)
 *     PbmUnregisterAppManagerNotification @ 0x1800245B0 (PbmUnregisterAppManagerNotification.c)
 *     PbmRegisterAppClosureNotification @ 0x180024640 (PbmRegisterAppClosureNotification.c)
 *     PbmUnregisterAppClosureNotification @ 0x1800246E0 (PbmUnregisterAppClosureNotification.c)
 *     PbmPlayToStreamStateChanged @ 0x1800247B0 (PbmPlayToStreamStateChanged.c)
 *     PbmCastingAppStateChanged @ 0x1800248F0 (PbmCastingAppStateChanged.c)
 *     PbmSetScreenReaderState @ 0x180024BA0 (PbmSetScreenReaderState.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F84 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002FB8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     WPP_SF_d @ 0x180008188 (WPP_SF_d.c)
 *     ??I?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVCProcess@@XZ @ 0x18000AA20 (--I-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVCProcess@@XZ.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000AA80 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000B398 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHHH_NHHPEAPEAV1@@Z @ 0x180014400 (-CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHHH_NHHPEAPEAV1@@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x1800186B8 (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x18001B7C0 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x18001BA54 (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001C350 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001C494 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x18001E060 (-ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z @ 0x18001E1B0 (-TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180021B4C (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x1800223D4 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180022580 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     GetAssignedAccessTypeForUser @ 0x180035AD4 (GetAssignedAccessTypeForUser.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=184
__int64 __fastcall CApplicationManager::RpcGetProcess(CApplicationManager *this, void *a2, struct CProcess **a3)
{
  CApplicationManager *v3; // r13
  unsigned int v4; // eax
  int ProcessFromProcessId; // eax
  unsigned int LastError; // edi
  struct CProcess *v8; // rbx
  struct CProcess *v9; // rax
  struct _RTL_CRITICAL_SECTION *v10; // rsi
  volatile signed __int32 *v11; // rbx
  int v12; // eax
  unsigned int v13; // eax
  HANDLE CurrentThread; // rax
  const char *v15; // r9
  unsigned int v16; // eax
  char *v17; // rbx
  void *v18; // rdx
  unsigned int v19; // r8d
  const char *v20; // r9
  int ProcessModuleNameAndAppId; // eax
  char v22; // al
  unsigned int PackageClaims; // eax
  int v24; // eax
  signed int v25; // r9d
  int v26; // eax
  signed int v27; // r9d
  int v28; // eax
  signed int v29; // r9d
  int v30; // eax
  DWORD v31; // edi
  const char *v32; // r9
  int v33; // eax
  void *v34; // rdx
  unsigned int v35; // r8d
  HLOCAL v36; // rdi
  __int64 v37; // rdx
  int AssignedAccessTypeForUser; // eax
  CApplicationManager *v39; // rcx
  int v40; // eax
  struct CProcess *v41; // rbx
  const char *v42; // r9
  struct CProcess *v43; // rbx
  const char *v44; // r9
  HLOCAL v45; // rax
  struct CProcess *v46; // rbx
  const char *v47; // r9
  signed int v48; // eax
  unsigned int v49; // r14d
  HLOCAL v50; // r14
  signed int v51; // eax
  signed int v52; // r15d
  BOOL v53; // esi
  struct CProcess **v54; // rax
  HLOCAL v55; // r15
  void *v56; // rsi
  unsigned __int16 *v57; // r14
  int Instance; // eax
  int v59; // eax
  int v60; // [rsp+90h] [rbp-188h]
  struct CProcess *v61; // [rsp+A0h] [rbp-178h] BYREF
  char v62; // [rsp+A9h] [rbp-16Fh]
  HANDLE hObject; // [rsp+B0h] [rbp-168h] BYREF
  char v64; // [rsp+B8h] [rbp-160h] BYREF
  char v65; // [rsp+B9h] [rbp-15Fh] BYREF
  bool v66; // [rsp+BAh] [rbp-15Eh]
  HANDLE TokenHandle; // [rsp+C0h] [rbp-158h] BYREF
  HLOCAL hMem; // [rsp+C8h] [rbp-150h] BYREF
  unsigned __int16 *v69; // [rsp+D0h] [rbp-148h] BYREF
  LPVOID pv; // [rsp+D8h] [rbp-140h] BYREF
  int v71; // [rsp+E0h] [rbp-138h] BYREF
  DWORD dwProcessId; // [rsp+E4h] [rbp-134h] BYREF
  HLOCAL v73; // [rsp+E8h] [rbp-130h] BYREF
  int v74; // [rsp+F0h] [rbp-128h]
  int v75; // [rsp+F4h] [rbp-124h] BYREF
  DWORD TokenInformationLength; // [rsp+F8h] [rbp-120h] BYREF
  unsigned int v77; // [rsp+FCh] [rbp-11Ch] BYREF
  HANDLE v78; // [rsp+100h] [rbp-118h]
  CApplicationManager *v79; // [rsp+108h] [rbp-110h]
  int TokenInformation; // [rsp+110h] [rbp-108h] BYREF
  int v81; // [rsp+114h] [rbp-104h] BYREF
  int v82; // [rsp+118h] [rbp-100h]
  int v83; // [rsp+11Ch] [rbp-FCh]
  BOOL v84; // [rsp+120h] [rbp-F8h]
  HLOCAL v85; // [rsp+128h] [rbp-F0h]
  __int128 v86; // [rsp+130h] [rbp-E8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+140h] [rbp-D8h]
  DWORD ReturnLength; // [rsp+148h] [rbp-D0h] BYREF
  int v89; // [rsp+14Ch] [rbp-CCh] BYREF
  unsigned int v90; // [rsp+150h] [rbp-C8h] BYREF
  unsigned int v91; // [rsp+154h] [rbp-C4h] BYREF
  int v92; // [rsp+158h] [rbp-C0h] BYREF
  HANDLE v93; // [rsp+160h] [rbp-B8h]
  __int64 v94; // [rsp+168h] [rbp-B0h]
  unsigned __int64 v95; // [rsp+170h] [rbp-A8h] BYREF
  struct CProcess *v96; // [rsp+178h] [rbp-A0h] BYREF
  HANDLE v97; // [rsp+180h] [rbp-98h]
  __int128 v98; // [rsp+188h] [rbp-90h]
  char v99; // [rsp+198h] [rbp-80h]
  __int64 v100; // [rsp+1A0h] [rbp-78h]
  char *v101; // [rsp+1A8h] [rbp-70h]
  _BYTE v102[8]; // [rsp+1B0h] [rbp-68h] BYREF
  int v103; // [rsp+1B8h] [rbp-60h] BYREF
  _BYTE v104[8]; // [rsp+1C0h] [rbp-58h] BYREF
  ATL::CAtlException *v105; // [rsp+1C8h] [rbp-50h] BYREF
  _BYTE v106[72]; // [rsp+1D0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+0h]
  unsigned __int8 v108; // [rsp+220h] [rbp+8h]
  unsigned int v109; // [rsp+220h] [rbp+8h]
  unsigned int v112; // [rsp+230h] [rbp+18h]
  char v113; // [rsp+238h] [rbp+20h] BYREF

  v100 = -2LL;
  v3 = g_ApplicationManager;
  v79 = g_ApplicationManager;
  *a3 = 0LL;
  v4 = I_RpcBindingInqLocalClientPID(a2, &dwProcessId);
  if ( v4 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x3B1,
             (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
             (const char *)v4);
  v61 = 0LL;
  ProcessFromProcessId = CApplicationManager::TryFindProcessFromProcessId(v3, dwProcessId, &v61);
  LastError = ProcessFromProcessId;
  if ( ProcessFromProcessId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B6,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)ProcessFromProcessId);
LABEL_5:
    v8 = v61;
    if ( v61 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v61 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v8 + 32LL))(v8);
        (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
      }
    }
    return LastError;
  }
  v9 = v61;
  if ( v61 )
    goto LABEL_353;
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)v3 + 32);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v3 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 32));
  v101 = (char *)v3 + 32;
  v11 = (volatile signed __int32 *)v61;
  v61 = 0LL;
  if ( v11 && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 32LL))(v11);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
  }
  v12 = CApplicationManager::TryFindProcessFromProcessId(v3, dwProcessId, &v61);
  LastError = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BE,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v12);
    if ( v3 != (CApplicationManager *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 32));
    goto LABEL_5;
  }
  if ( v61 )
  {
LABEL_350:
    if ( v10 )
      LeaveCriticalSection(v10);
    v9 = v61;
LABEL_353:
    v61 = 0LL;
    *a3 = v9;
    v49 = 0;
    goto LABEL_354;
  }
  v13 = RpcImpersonateClient(a2);
  if ( v13 )
  {
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x3C2,
                  (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  (const char *)v13);
    if ( v3 != (CApplicationManager *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 32));
    goto LABEL_5;
  }
  v62 = 1;
  hObject = 0LL;
  CurrentThread = GetCurrentThread();
  if ( !OpenThreadToken(CurrentThread, 8u, 1, &hObject) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x3C6,
                  (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  v15);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    v62 = 0;
    RpcRevertToSelf();
    if ( v3 != (CApplicationManager *)-32LL )
      LeaveCriticalSection(v10);
    goto LABEL_5;
  }
  hMem = 0LL;
  v73 = 0LL;
  v16 = GetTokenInformation(hObject, (unsigned __int16 **)&v73, &v77, (unsigned __int16 **)&hMem, &v90);
  if ( v16 )
  {
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x3CC,
                  (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  (const char *)v16);
    if ( hMem )
      LocalFree(hMem);
    if ( v73 )
      LocalFree(v73);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    v62 = 0;
    RpcRevertToSelf();
    if ( v3 != (CApplicationManager *)-32LL )
      LeaveCriticalSection(v10);
    goto LABEL_5;
  }
  v17 = (char *)OpenProcess(0x101000u, 0, dwProcessId);
  v93 = v17;
  if ( !v17 && GetLastError() == 5 )
  {
    v17 = (char *)OpenProcess(0x100400u, 0, dwProcessId);
    v93 = v17;
    if ( (unsigned __int64)(v17 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      wil::details::in1diag3::_Log_GetLastError(retaddr, v18, v19, v20);
  }
  v84 = 0;
  TokenInformation = 0;
  ReturnLength = 0;
  if ( GetTokenInformation(hObject, TokenUIAccess, &TokenInformation, 4u, &ReturnLength) )
    v84 = TokenInformation != 0;
  v95 = -1LL;
  pv = 0LL;
  v69 = 0LL;
  ProcessModuleNameAndAppId = GetProcessModuleNameAndAppId(v17, &v69, (unsigned __int16 **)&pv);
  LastError = ProcessModuleNameAndAppId;
  if ( ProcessModuleNameAndAppId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F2,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)ProcessModuleNameAndAppId);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v69 )
      CoTaskMemFree(v69);
    if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v17);
    if ( hMem )
      LocalFree(hMem);
    if ( v73 )
      LocalFree(v73);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    v62 = 0;
    RpcRevertToSelf();
    if ( v3 != (CApplicationManager *)-32LL )
      LeaveCriticalSection(v10);
    goto LABEL_5;
  }
  TokenHandle = 0LL;
  if ( (int)AppModelPolicy_GetPolicy_Internal(-6LL, 1LL, &v89, v102, v106) < 0
    || (v83 = 1, (unsigned int)(v89 - 65537) > 1) )
  {
    v83 = 0;
  }
  if ( (int)AppModelPolicy_GetPolicy_Internal(-6LL, 14LL, &v92, v104, &v103) < 0 || (v22 = 1, v92 != 917505) )
    v22 = 0;
  v108 = v22;
  v82 = 0;
  v71 = 0;
  v75 = 0;
  v74 = 0;
  v66 = 0;
  if ( v22 && v77 )
  {
    v94 = 0LL;
    PackageClaims = RtlQueryPackageClaims(-6LL, 0LL, 0LL, 0LL);
    if ( PackageClaims )
    {
      LastError = wil::details::in1diag3::Return_Win32(
                    retaddr,
                    (void *)0x40E,
                    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                    (const char *)PackageClaims);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      if ( pv )
        CoTaskMemFree(pv);
      if ( v69 )
        CoTaskMemFree(v69);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v73 )
        LocalFree(v73);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      v62 = 0;
      RpcRevertToSelf();
      if ( v3 != (CApplicationManager *)-32LL )
        LeaveCriticalSection(v10);
      goto LABEL_5;
    }
    v66 = (v94 & 0x10) != 0;
    v113 = 0;
    v24 = CapabilityCheck(-6LL, L"voipCall", &v113);
    v25 = (unsigned __int16)v24 | 0x80070000;
    if ( v24 <= 0 )
      v25 = v24;
    if ( v25 < 0
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, &WPP_923261a1bb273641e87551df4d2fda8d_Traceguids, v25);
    }
    v82 = v113 != 0;
    v64 = 0;
    v71 = 0;
    v75 = 0;
    v26 = CapabilityCheck(-6LL, L"backgroundMediaPlayback", &v64);
    v27 = (unsigned __int16)v26 | 0x80070000;
    if ( v26 <= 0 )
      v27 = v26;
    if ( v27 < 0
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_923261a1bb273641e87551df4d2fda8d_Traceguids, v27);
    }
    if ( v64 )
    {
      v71 = 1;
      v75 = 0;
    }
    v65 = 0;
    v74 = 0;
    v28 = CapabilityCheck(-6LL, L"backgroundMediaRecording", &v65);
    v29 = (unsigned __int16)v28 | 0x80070000;
    if ( v28 <= 0 )
      v29 = v28;
    if ( v29 < 0
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, &WPP_923261a1bb273641e87551df4d2fda8d_Traceguids, v29);
    }
    v30 = v74;
    if ( v65 )
      v30 = 1;
    v74 = v30;
    v78 = TokenHandle;
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      v31 = GetLastError();
      CloseHandle(v78);
      SetLastError(v31);
    }
    TokenHandle = 0LL;
    if ( !OpenProcessToken(v17, 8u, &TokenHandle) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x420,
                    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                    v32);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      if ( pv )
        CoTaskMemFree(pv);
      if ( v69 )
        CoTaskMemFree(v69);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v73 )
        LocalFree(v73);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      v62 = 0;
      RpcRevertToSelf();
      if ( v3 != (CApplicationManager *)-32LL )
        LeaveCriticalSection(v10);
      goto LABEL_5;
    }
    v33 = RtlQueryTokenHostIdAsUlong64(TokenHandle, &v95);
    if ( v33 < 0 )
    {
      LastError = wil::details::in1diag3::Return_NtStatus(retaddr, v34, v35, (const char *)(unsigned int)v33, 0);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      if ( pv )
        CoTaskMemFree(pv);
      if ( v69 )
        CoTaskMemFree(v69);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v73 )
        LocalFree(v73);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      v62 = 0;
      RpcRevertToSelf();
      if ( v3 != (CApplicationManager *)-32LL )
        LeaveCriticalSection(v10);
      goto LABEL_5;
    }
  }
  v62 = 0;
  RpcRevertToSelf();
  v36 = v73;
  AssignedAccessTypeForUser = GetAssignedAccessTypeForUser(v73, v37, &v91);
  v39 = 0LL;
  if ( AssignedAccessTypeForUser >= 0 )
    v39 = (CApplicationManager *)v91;
  LODWORD(v78) = (_DWORD)v39 == 1;
  if ( !v108 || v71 )
  {
    v71 = 1;
  }
  else
  {
    v40 = CApplicationManager::ReadBackgroundAudioTaskCapability(v39, TokenHandle, &v71, &v75);
    LODWORD(v86) = v40;
    if ( v40 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x436,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v40);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      if ( pv )
        CoTaskMemFree(pv);
      if ( v69 )
        CoTaskMemFree(v69);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v36 )
        LocalFree(v36);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v3 != (CApplicationManager *)-32LL )
        LeaveCriticalSection(v10);
      v41 = v61;
      if ( v61 && _InterlockedExchangeAdd((volatile signed __int32 *)v61 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v41 + 32LL))(v41);
        (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v41 + 24LL))(v41, 1LL);
      }
      return (unsigned int)v86;
    }
  }
  v81 = 0;
  if ( v77 && !(unsigned int)CheckTokenCapability(hObject, *((_QWORD *)v79 + 2), &v81) )
  {
    v112 = wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x442,
             (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
             v42);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v69 )
      CoTaskMemFree(v69);
    if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v17);
    if ( hMem )
      LocalFree(hMem);
    if ( v36 )
      LocalFree(v36);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    if ( v3 != (CApplicationManager *)-32LL )
      LeaveCriticalSection(v10);
LABEL_193:
    v43 = v61;
    if ( v61 && _InterlockedExchangeAdd((volatile signed __int32 *)v61 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v43 + 32LL))(v43);
      (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v43 + 24LL))(v43, 1LL);
    }
    return v112;
  }
  TokenInformationLength = 0;
  GetTokenInformation(hObject, TokenIntegrityLevel, 0LL, 0, &TokenInformationLength);
  if ( GetLastError() != 122 )
  {
    v112 = wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x44A,
             (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
             v44);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v69 )
      CoTaskMemFree(v69);
    if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v17);
    if ( hMem )
      LocalFree(hMem);
    if ( v36 )
      LocalFree(v36);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    if ( v3 != (CApplicationManager *)-32LL )
      LeaveCriticalSection(v10);
    goto LABEL_193;
  }
  v45 = LocalAlloc(0x40u, TokenInformationLength);
  v85 = v45;
  if ( v45 )
  {
    if ( !GetTokenInformation(hObject, TokenIntegrityLevel, v45, TokenInformationLength, &TokenInformationLength) )
    {
      v112 = wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x44F,
               (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
               v47);
      LocalFree(v85);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      if ( pv )
        CoTaskMemFree(pv);
      if ( v69 )
        CoTaskMemFree(v69);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v36 )
        LocalFree(v36);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v3 != (CApplicationManager *)-32LL )
        LeaveCriticalSection(v10);
      goto LABEL_193;
    }
    *(_QWORD *)&v86 = GetSidSubAuthorityCount(*(PSID *)v85);
    v48 = GetLastError();
    v49 = (unsigned __int16)v48 | 0x80070000;
    if ( v48 <= 0 )
      v49 = v48;
    if ( (v49 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x454,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)v49);
      LocalFree(v85);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      if ( pv )
        CoTaskMemFree(pv);
      if ( v69 )
        CoTaskMemFree(v69);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v36 )
        LocalFree(v36);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v3 != (CApplicationManager *)-32LL )
        LeaveCriticalSection(v10);
      goto LABEL_354;
    }
    if ( !(_QWORD)v86 || !*(_BYTE *)v86 )
    {
      v49 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x455,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)0x8000FFFFLL);
      LocalFree(v85);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      if ( pv )
        CoTaskMemFree(pv);
      if ( v69 )
        CoTaskMemFree(v69);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v36 )
        LocalFree(v36);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v3 != (CApplicationManager *)-32LL )
        LeaveCriticalSection(v10);
      goto LABEL_354;
    }
    v50 = v85;
    LODWORD(v86) = *GetSidSubAuthority(*(PSID *)v85, (unsigned __int8)(*(_BYTE *)v86 - 1));
    v51 = GetLastError();
    v52 = (unsigned __int16)v51 | 0x80070000;
    if ( v51 <= 0 )
      v52 = v51;
    if ( v52 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45A,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v52);
      LocalFree(v50);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      if ( pv )
        CoTaskMemFree(pv);
      if ( v69 )
        CoTaskMemFree(v69);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v36 )
        LocalFree(v36);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v3 != (CApplicationManager *)-32LL )
        LeaveCriticalSection(v10);
      v49 = v52;
      goto LABEL_354;
    }
    v53 = (unsigned int)v86 < 0x2000;
    LocalFree(v50);
    v54 = (struct CProcess **)wil::com_ptr_t<CProcess,wil::err_returncode_policy>::operator&((volatile signed __int32 **)&v61);
    v60 = v53;
    v55 = hMem;
    v56 = pv;
    v57 = v69;
    Instance = CProcess::CreateInstance(
                 v17,
                 dwProcessId,
                 v90,
                 v69,
                 (const unsigned __int16 *)pv,
                 (HANDLE)v95,
                 (const unsigned __int16 *)v36,
                 v77 != 0,
                 (const unsigned __int16 *)hMem,
                 v83,
                 v108,
                 v82,
                 v71,
                 v75,
                 v74,
                 (int)v78,
                 v66,
                 v81,
                 v60,
                 v54);
    v109 = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x473,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)Instance);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      if ( v56 )
        CoTaskMemFree(v56);
      if ( v57 )
        CoTaskMemFree(v57);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( v55 )
        LocalFree(v55);
      if ( v36 )
        LocalFree(v36);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
LABEL_313:
      v49 = v109;
LABEL_354:
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v61);
      return v49;
    }
    *((_DWORD *)v61 + 124) = v84;
    v59 = CApplicationManager::Register(v79, v61);
    v109 = v59;
    if ( v59 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x477,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v59);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      if ( v56 )
        CoTaskMemFree(v56);
      if ( v57 )
        CoTaskMemFree(v57);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( v55 )
        LocalFree(v55);
      if ( v36 )
        LocalFree(v36);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_313;
    }
    *(_QWORD *)&v86 = v79;
    *((_QWORD *)&v86 + 1) = &v61;
    v98 = v86;
    v99 = 1;
    v78 = (char *)v79 + 120;
    AcquireSRWLockExclusive((PSRWLOCK)v79 + 15);
    v97 = v78;
    try
    {
      v96 = v61;
      ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
        (__int64 *)v79 + 16,
        &v96);
    }
    catch ( ATL::CAtlException *v105 )
    {
      if ( *(_DWORD *)v105 == -1073741571 )
        _o__resetstkoflw();
      v79 = (CApplicationManager *)v86;
    }
    if ( v78 )
    {
      ReleaseSRWLockExclusive((PSRWLOCK)v78);
      v97 = 0LL;
    }
    _InterlockedIncrement((volatile signed __int32 *)v61 + 2);
    v99 = 0;
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v69 )
      CoTaskMemFree(v69);
    if ( (char *)v93 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(v93);
    if ( hMem )
      LocalFree(hMem);
    if ( v73 )
      LocalFree(v73);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    v10 = lpCriticalSection;
    goto LABEL_350;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x44D,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
    (const char *)0x8007000ELL);
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(TokenHandle);
  if ( pv )
    CoTaskMemFree(pv);
  if ( v69 )
    CoTaskMemFree(v69);
  if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v17);
  if ( hMem )
    LocalFree(hMem);
  if ( v36 )
    LocalFree(v36);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  if ( v3 != (CApplicationManager *)-32LL )
    LeaveCriticalSection(v10);
  v46 = v61;
  if ( v61 && _InterlockedExchangeAdd((volatile signed __int32 *)v61 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v46 + 32LL))(v46);
    (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v46 + 24LL))(v46, 1LL);
  }
  return 2147942414LL;
}
