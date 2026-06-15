/*
 * XREFs of ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180019494
 * Callers:
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180005980 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     PbmRegisterPlaybackManagerNotifications @ 0x180020620 (PbmRegisterPlaybackManagerNotifications.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x1800206E0 (PbmUnregisterPlaybackManagerNotifications.c)
 *     PbmSetSmtcSubscriptionState @ 0x1800207F0 (PbmSetSmtcSubscriptionState.c)
 *     PbmGetSoundLevel @ 0x180020960 (PbmGetSoundLevel.c)
 *     PbmIsPlaying @ 0x180020A90 (PbmIsPlaying.c)
 *     PbmRegisterAppManagerNotification @ 0x180020BA0 (PbmRegisterAppManagerNotification.c)
 *     PbmUnregisterAppManagerNotification @ 0x180020C40 (PbmUnregisterAppManagerNotification.c)
 *     PbmRegisterAppClosureNotification @ 0x180020CD0 (PbmRegisterAppClosureNotification.c)
 *     PbmUnregisterAppClosureNotification @ 0x180020D70 (PbmUnregisterAppClosureNotification.c)
 *     PbmPlayToStreamStateChanged @ 0x180020E40 (PbmPlayToStreamStateChanged.c)
 *     PbmCastingAppStateChanged @ 0x180020F80 (PbmCastingAppStateChanged.c)
 *     PbmSetScreenReaderState @ 0x180021230 (PbmSetScreenReaderState.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002D18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ??I?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVCProcess@@XZ @ 0x1800077D8 (--I-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVCProcess@@XZ.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007838 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800086B8 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHHHH_NHHPEAPEAV1@@Z @ 0x18001126C (-CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHHHH_NHHPEAPEAV1@@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x180015528 (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x18001862C (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x1800188C0 (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x1800191B0 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180019308 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x18001AF40 (-ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z @ 0x18001B090 (-TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18001EAFC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x18001EB20 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18001EC4C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     GetAssignedAccessTypeForUser @ 0x1800329CC (GetAssignedAccessTypeForUser.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=192
__int64 __fastcall CApplicationManager::RpcGetProcess(CApplicationManager *this, void *a2, struct CProcess **a3)
{
  CApplicationManager *v3; // r13
  unsigned int v4; // eax
  int ProcessFromProcessId; // eax
  unsigned int LastError; // esi
  struct CProcess *v8; // rbx
  struct CProcess *v9; // rax
  struct _RTL_CRITICAL_SECTION *v10; // r14
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
  void *v22; // rsi
  DWORD v23; // edi
  const char *v24; // r9
  struct CProcess *v25; // rbx
  int v26; // eax
  void *v27; // rdx
  unsigned int v28; // r8d
  unsigned int v29; // eax
  int v30; // eax
  signed int v31; // r9d
  int v32; // eax
  signed int v33; // r9d
  int v34; // eax
  int v35; // eax
  signed int v36; // r9d
  int v37; // eax
  int v38; // eax
  signed int v39; // r9d
  HLOCAL v40; // rdi
  int AssignedAccessTypeForUser; // eax
  CApplicationManager *v42; // rcx
  int v43; // eax
  struct CProcess *v44; // rbx
  const char *v45; // r9
  const char *v46; // r9
  struct CProcess *v47; // rbx
  PSID *v48; // r15
  const char *v49; // r9
  unsigned int v50; // r15d
  signed int v51; // eax
  signed int v52; // edx
  signed int v53; // eax
  signed int v54; // edx
  BOOL v55; // r14d
  struct CProcess **v56; // rax
  HLOCAL v57; // r14
  unsigned __int16 *v58; // r15
  int Instance; // eax
  int v60; // eax
  int ReturnLength; // [rsp+20h] [rbp-218h]
  int v62; // [rsp+98h] [rbp-1A0h]
  struct CProcess *v63; // [rsp+B8h] [rbp-180h] BYREF
  HANDLE hObject; // [rsp+C0h] [rbp-178h] BYREF
  char v65; // [rsp+C8h] [rbp-170h] BYREF
  char v66; // [rsp+C9h] [rbp-16Fh] BYREF
  char v67; // [rsp+CAh] [rbp-16Eh] BYREF
  bool v68; // [rsp+CBh] [rbp-16Dh]
  void *TokenHandle; // [rsp+D0h] [rbp-168h] BYREF
  HLOCAL hMem; // [rsp+D8h] [rbp-160h] BYREF
  unsigned __int16 *v71; // [rsp+E0h] [rbp-158h] BYREF
  int v72; // [rsp+E8h] [rbp-150h] BYREF
  DWORD dwProcessId; // [rsp+ECh] [rbp-14Ch] BYREF
  unsigned int v74; // [rsp+F0h] [rbp-148h]
  HLOCAL v75; // [rsp+F8h] [rbp-140h] BYREF
  DWORD TokenInformationLength; // [rsp+100h] [rbp-138h] BYREF
  int v77; // [rsp+104h] [rbp-134h]
  unsigned int v78; // [rsp+108h] [rbp-130h] BYREF
  HANDLE v79; // [rsp+110h] [rbp-128h]
  CApplicationManager *v80; // [rsp+118h] [rbp-120h]
  LPVOID pv; // [rsp+120h] [rbp-118h] BYREF
  int TokenInformation; // [rsp+128h] [rbp-110h] BYREF
  int v83; // [rsp+12Ch] [rbp-10Ch] BYREF
  int v84; // [rsp+130h] [rbp-108h]
  int v85; // [rsp+134h] [rbp-104h] BYREF
  int v86; // [rsp+138h] [rbp-100h]
  int v87; // [rsp+13Ch] [rbp-FCh]
  BOOL v88; // [rsp+140h] [rbp-F8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+148h] [rbp-F0h]
  __int128 v90; // [rsp+150h] [rbp-E8h]
  int v91; // [rsp+160h] [rbp-D8h] BYREF
  unsigned int v92; // [rsp+164h] [rbp-D4h] BYREF
  DWORD v93; // [rsp+168h] [rbp-D0h] BYREF
  int v94; // [rsp+16Ch] [rbp-CCh] BYREF
  CApplicationManager *v95; // [rsp+170h] [rbp-C8h]
  HANDLE v96; // [rsp+178h] [rbp-C0h]
  __int64 v97; // [rsp+180h] [rbp-B8h] BYREF
  HLOCAL v98; // [rsp+188h] [rbp-B0h]
  unsigned __int64 v99; // [rsp+190h] [rbp-A8h] BYREF
  struct CProcess *v100; // [rsp+198h] [rbp-A0h] BYREF
  HANDLE v101; // [rsp+1A0h] [rbp-98h]
  __int128 v102; // [rsp+1A8h] [rbp-90h]
  char v103; // [rsp+1B8h] [rbp-80h]
  __int64 v104; // [rsp+1C0h] [rbp-78h]
  _BYTE v105[8]; // [rsp+1C8h] [rbp-70h] BYREF
  _BYTE v106[8]; // [rsp+1D0h] [rbp-68h] BYREF
  int v107; // [rsp+1D8h] [rbp-60h] BYREF
  _BYTE v108[8]; // [rsp+1E0h] [rbp-58h] BYREF
  ATL::CAtlException *v109[10]; // [rsp+1E8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+0h]
  unsigned __int8 v111; // [rsp+240h] [rbp+8h]
  unsigned int v112; // [rsp+240h] [rbp+8h]
  unsigned int v115; // [rsp+250h] [rbp+18h]
  char v116; // [rsp+258h] [rbp+20h] BYREF

  v104 = -2LL;
  v3 = g_ApplicationManager;
  v80 = g_ApplicationManager;
  *a3 = 0LL;
  v4 = I_RpcBindingInqLocalClientPID(a2, &dwProcessId);
  if ( v4 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x3B2,
             (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
             (const char *)v4);
  v63 = 0LL;
  ProcessFromProcessId = CApplicationManager::TryFindProcessFromProcessId(v3, dwProcessId, &v63);
  LastError = ProcessFromProcessId;
  if ( ProcessFromProcessId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B7,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)ProcessFromProcessId);
LABEL_5:
    v8 = v63;
    if ( v63 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v63 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v8 + 32LL))(v8);
        (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
      }
    }
    return LastError;
  }
  v9 = v63;
  if ( v63 )
    goto LABEL_338;
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)v3 + 32);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v3 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 32));
  v109[1] = (CApplicationManager *)((char *)v3 + 32);
  v11 = (volatile signed __int32 *)v63;
  v63 = 0LL;
  if ( v11 && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 32LL))(v11);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
  }
  v12 = CApplicationManager::TryFindProcessFromProcessId(v3, dwProcessId, &v63);
  LastError = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3BF,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v12);
    if ( v3 != (CApplicationManager *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 32));
    goto LABEL_5;
  }
  if ( v63 )
  {
LABEL_335:
    if ( v10 )
      LeaveCriticalSection(v10);
    v9 = v63;
LABEL_338:
    v63 = 0LL;
    *a3 = v9;
    v50 = 0;
    goto LABEL_339;
  }
  v13 = RpcImpersonateClient(a2);
  if ( v13 )
  {
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x3C3,
                  (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  (const char *)v13);
    if ( v3 != (CApplicationManager *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 32));
    goto LABEL_5;
  }
  hObject = 0LL;
  CurrentThread = GetCurrentThread();
  if ( !OpenThreadToken(CurrentThread, 8u, 1, &hObject) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x3C7,
                  (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  v15);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    RpcRevertToSelf();
    if ( v3 != (CApplicationManager *)-32LL )
      LeaveCriticalSection(v10);
    goto LABEL_5;
  }
  hMem = 0LL;
  v75 = 0LL;
  v16 = GetTokenInformation(hObject, (unsigned __int16 **)&v75, &v78, (unsigned __int16 **)&hMem, &v92);
  if ( v16 )
  {
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x3CD,
                  (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  (const char *)v16);
    if ( hMem )
      LocalFree(hMem);
    if ( v75 )
      LocalFree(v75);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    RpcRevertToSelf();
    if ( v3 != (CApplicationManager *)-32LL )
      LeaveCriticalSection(v10);
    goto LABEL_5;
  }
  v17 = (char *)OpenProcess(0x101000u, 0, dwProcessId);
  v96 = v17;
  if ( !v17 && GetLastError() == 5 )
  {
    v17 = (char *)OpenProcess(0x100400u, 0, dwProcessId);
    v96 = v17;
    if ( (unsigned __int64)(v17 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      wil::details::in1diag3::_Log_GetLastError(retaddr, v18, v19, v20);
  }
  v88 = 0;
  TokenInformation = 0;
  v93 = 0;
  if ( GetTokenInformation(hObject, TokenUIAccess, &TokenInformation, 4u, &v93) )
    v88 = TokenInformation != 0;
  v99 = -1LL;
  pv = 0LL;
  v71 = 0LL;
  ProcessModuleNameAndAppId = GetProcessModuleNameAndAppId(v17, &v71, (unsigned __int16 **)&pv);
  LastError = ProcessModuleNameAndAppId;
  if ( ProcessModuleNameAndAppId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F3,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)ProcessModuleNameAndAppId);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v71 )
      CoTaskMemFree(v71);
    if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v17);
    if ( hMem )
      LocalFree(hMem);
    if ( v75 )
      LocalFree(v75);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    RpcRevertToSelf();
    if ( v3 != (CApplicationManager *)-32LL )
      LeaveCriticalSection(v10);
    goto LABEL_5;
  }
  TokenHandle = 0LL;
  if ( (int)AppModelPolicy_GetPolicy_Internal(-6LL, 1LL, &v91, v106, v105) < 0
    || (v87 = 1, (unsigned int)(v91 - 65537) > 1) )
  {
    v87 = 0;
  }
  if ( (int)AppModelPolicy_GetPolicy_Internal(-6LL, 14LL, &v94, v108, &v107) < 0 || (v111 = 1, v94 != 917505) )
    v111 = 0;
  v86 = 0;
  v72 = 0;
  v85 = 0;
  v77 = 0;
  v84 = 0;
  v68 = 0;
  v22 = pv;
  if ( *(_WORD *)pv )
  {
    v79 = TokenHandle;
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      v23 = GetLastError();
      CloseHandle(v79);
      SetLastError(v23);
    }
    TokenHandle = 0LL;
    if ( !OpenProcessToken(v17, 8u, &TokenHandle) )
    {
      v115 = wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x40F,
               (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
               v24);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v22);
      if ( v71 )
        CoTaskMemFree(v71);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v75 )
        LocalFree(v75);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      RpcRevertToSelf();
      if ( v3 != (CApplicationManager *)-32LL )
        LeaveCriticalSection(v10);
      goto LABEL_84;
    }
    v26 = RtlQueryTokenHostIdAsUlong64(TokenHandle, &v99);
    if ( v26 < 0 )
    {
      v115 = wil::details::in1diag3::Return_NtStatus(retaddr, v27, v28, (const char *)(unsigned int)v26, ReturnLength);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v22);
      if ( v71 )
        CoTaskMemFree(v71);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v75 )
        LocalFree(v75);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      RpcRevertToSelf();
      if ( v3 != (CApplicationManager *)-32LL )
        LeaveCriticalSection(v10);
      goto LABEL_84;
    }
  }
  if ( v111 && v78 )
  {
    v97 = 0LL;
    v29 = RtlQueryPackageClaims(-6LL, 0LL, 0LL, 0LL, 0LL, 0LL, &v97, 0LL);
    if ( v29 )
    {
      v115 = wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x417,
               (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
               (const char *)v29);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v22);
      if ( v71 )
        CoTaskMemFree(v71);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v75 )
        LocalFree(v75);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      RpcRevertToSelf();
      if ( v3 != (CApplicationManager *)-32LL )
        LeaveCriticalSection(v10);
LABEL_84:
      v25 = v63;
      if ( !v63 || _InterlockedExchangeAdd((volatile signed __int32 *)v63 + 2, 0xFFFFFFFF) != 1 )
        return v115;
      goto LABEL_86;
    }
    v68 = (v97 & 0x10) != 0;
    v116 = 0;
    v30 = CapabilityCheck(-6LL, L"voipCall", &v116);
    v31 = (unsigned __int16)v30 | 0x80070000;
    if ( v30 <= 0 )
      v31 = v30;
    if ( v31 < 0
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, &WPP_48f5b41a97d23634bb345404f49671c8_Traceguids, v31);
    }
    v86 = v116 != 0;
    v65 = 0;
    v32 = CapabilityCheck(-6LL, L"backgroundMediaPlayback", &v65);
    v33 = (unsigned __int16)v32 | 0x80070000;
    if ( v32 <= 0 )
      v33 = v32;
    if ( v33 < 0
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_48f5b41a97d23634bb345404f49671c8_Traceguids, v33);
    }
    v34 = v72;
    if ( v65 )
      v34 = 1;
    v72 = v34;
    v66 = 0;
    v77 = 0;
    v35 = CapabilityCheck(-6LL, L"backgroundMediaRecording", &v66);
    v36 = (unsigned __int16)v35 | 0x80070000;
    if ( v35 <= 0 )
      v36 = v35;
    if ( v36 < 0
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Cu, &WPP_48f5b41a97d23634bb345404f49671c8_Traceguids, v36);
    }
    v37 = v77;
    if ( v66 )
      v37 = 1;
    v77 = v37;
    v67 = 0;
    v38 = CapabilityCheck(-6LL, L"userSigninSupport", &v67);
    v39 = (unsigned __int16)v38 | 0x80070000;
    if ( v38 <= 0 )
      v39 = v38;
    if ( v39 < 0
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, &WPP_48f5b41a97d23634bb345404f49671c8_Traceguids, v39);
    }
    v84 = v67 != 0;
  }
  RpcRevertToSelf();
  v40 = v75;
  AssignedAccessTypeForUser = GetAssignedAccessTypeForUser((unsigned __int16 *)v75);
  v42 = 0LL;
  if ( AssignedAccessTypeForUser >= 0 )
    v42 = (CApplicationManager *)(unsigned int)v95;
  LODWORD(v79) = (_DWORD)v42 == 1;
  if ( !v111 || v72 )
  {
    v72 = 1;
  }
  else
  {
    v43 = CApplicationManager::ReadBackgroundAudioTaskCapability(v42, TokenHandle, &v72, &v85);
    v74 = v43;
    if ( v43 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43D,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v43);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v22);
      if ( v71 )
        CoTaskMemFree(v71);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v40 )
        LocalFree(v40);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v3 != (CApplicationManager *)-32LL )
        LeaveCriticalSection(v10);
      v44 = v63;
      if ( v63 && _InterlockedExchangeAdd((volatile signed __int32 *)v63 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v44 + 32LL))(v44);
        (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v44 + 24LL))(v44, 1LL);
      }
      return v74;
    }
  }
  v83 = 0;
  if ( v78 && !(unsigned int)CheckTokenCapability(hObject, *((_QWORD *)v80 + 2), &v83) )
  {
    v115 = wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x449,
             (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
             v45);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    CoTaskMemFree(v22);
    if ( v71 )
      CoTaskMemFree(v71);
    if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v17);
    if ( hMem )
      LocalFree(hMem);
    if ( v40 )
      LocalFree(v40);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    if ( v3 != (CApplicationManager *)-32LL )
      LeaveCriticalSection(v10);
    goto LABEL_195;
  }
  TokenInformationLength = 0;
  GetTokenInformation(hObject, TokenIntegrityLevel, 0LL, 0, &TokenInformationLength);
  if ( GetLastError() != 122 )
  {
    v115 = wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x451,
             (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
             v46);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    CoTaskMemFree(v22);
    if ( v71 )
      CoTaskMemFree(v71);
    if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v17);
    if ( hMem )
      LocalFree(hMem);
    if ( v40 )
      LocalFree(v40);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    if ( v3 != (CApplicationManager *)-32LL )
      LeaveCriticalSection(v10);
LABEL_195:
    v25 = v63;
    if ( !v63 || _InterlockedExchangeAdd((volatile signed __int32 *)v63 + 2, 0xFFFFFFFF) != 1 )
      return v115;
LABEL_86:
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v25 + 32LL))(v25);
    (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v25 + 24LL))(v25, 1LL);
    return v115;
  }
  v98 = LocalAlloc(0x40u, TokenInformationLength);
  if ( v98 )
  {
    v48 = (PSID *)v98;
    if ( !GetTokenInformation(hObject, TokenIntegrityLevel, v98, TokenInformationLength, &TokenInformationLength) )
    {
      v50 = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x456,
              (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
              v49);
      LocalFree(v98);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v22);
      if ( v71 )
        CoTaskMemFree(v71);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v40 )
        LocalFree(v40);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v3 != (CApplicationManager *)-32LL )
        LeaveCriticalSection(v10);
      goto LABEL_339;
    }
    *(_QWORD *)&v90 = GetSidSubAuthorityCount(*v48);
    v51 = GetLastError();
    v52 = (unsigned __int16)v51 | 0x80070000;
    if ( v51 <= 0 )
      v52 = v51;
    v74 = v52;
    if ( v52 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45B,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v52);
      LocalFree(v48);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v22);
      if ( v71 )
        CoTaskMemFree(v71);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v40 )
        LocalFree(v40);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v3 != (CApplicationManager *)-32LL )
        LeaveCriticalSection(v10);
LABEL_266:
      v50 = v74;
LABEL_339:
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v63);
      return v50;
    }
    if ( !(_QWORD)v90 || !*(_BYTE *)v90 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45C,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)0x8000FFFFLL);
      LocalFree(v48);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v22);
      if ( v71 )
        CoTaskMemFree(v71);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v40 )
        LocalFree(v40);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v3 != (CApplicationManager *)-32LL )
        LeaveCriticalSection(v10);
      v50 = -2147418113;
      goto LABEL_339;
    }
    LODWORD(v90) = *GetSidSubAuthority(*v48, (unsigned __int8)(*(_BYTE *)v90 - 1));
    v53 = GetLastError();
    v54 = (unsigned __int16)v53 | 0x80070000;
    if ( v53 <= 0 )
      v54 = v53;
    v74 = v54;
    if ( v54 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x461,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v54);
      LocalFree(v48);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v22);
      if ( v71 )
        CoTaskMemFree(v71);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( hMem )
        LocalFree(hMem);
      if ( v40 )
        LocalFree(v40);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( v3 != (CApplicationManager *)-32LL )
        LeaveCriticalSection(v10);
      goto LABEL_266;
    }
    v55 = (unsigned int)v90 < 0x2000;
    LocalFree(v48);
    v56 = (struct CProcess **)wil::com_ptr_t<CProcess,wil::err_returncode_policy>::operator&((volatile signed __int32 **)&v63);
    v62 = v55;
    v57 = hMem;
    v58 = v71;
    Instance = CProcess::CreateInstance(
                 v17,
                 dwProcessId,
                 v92,
                 v71,
                 (const unsigned __int16 *)v22,
                 v99,
                 (const unsigned __int16 *)v40,
                 v78 != 0,
                 (const unsigned __int16 *)hMem,
                 v87,
                 v111,
                 v86,
                 v72,
                 v85,
                 v77,
                 v84,
                 (int)v79,
                 v68,
                 v83,
                 v62,
                 v56);
    v112 = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47B,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)Instance);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v22);
      if ( v58 )
        CoTaskMemFree(v58);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( v57 )
        LocalFree(v57);
      if ( v40 )
        LocalFree(v40);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
LABEL_302:
      v50 = v112;
      goto LABEL_339;
    }
    *((_DWORD *)v63 + 125) = v88;
    v60 = CApplicationManager::Register(v80, v63);
    v112 = v60;
    if ( v60 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47F,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v60);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      CoTaskMemFree(v22);
      if ( v58 )
        CoTaskMemFree(v58);
      if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v17);
      if ( v57 )
        LocalFree(v57);
      if ( v40 )
        LocalFree(v40);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_302;
    }
    *(_QWORD *)&v90 = v80;
    *((_QWORD *)&v90 + 1) = &v63;
    v102 = v90;
    v103 = 1;
    v79 = (char *)v80 + 120;
    AcquireSRWLockExclusive((PSRWLOCK)v80 + 15);
    v101 = v79;
    try
    {
      v100 = v63;
      ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
        (__int64 *)v80 + 16,
        &v100);
    }
    catch ( ATL::CAtlException *v109 )
    {
      if ( *(_DWORD *)v109[0] == -1073741571 )
        _o__resetstkoflw();
      v80 = (CApplicationManager *)v90;
    }
    if ( v79 )
    {
      ReleaseSRWLockExclusive((PSRWLOCK)v79);
      v101 = 0LL;
    }
    _InterlockedIncrement((volatile signed __int32 *)v63 + 2);
    v103 = 0;
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    CoTaskMemFree(pv);
    if ( v71 )
      CoTaskMemFree(v71);
    if ( (char *)v96 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(v96);
    if ( hMem )
      LocalFree(hMem);
    if ( v75 )
      LocalFree(v75);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    v10 = lpCriticalSection;
    goto LABEL_335;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x454,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
    (const char *)0x8007000ELL);
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(TokenHandle);
  CoTaskMemFree(v22);
  if ( v71 )
    CoTaskMemFree(v71);
  if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v17);
  if ( hMem )
    LocalFree(hMem);
  if ( v40 )
    LocalFree(v40);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  if ( v3 != (CApplicationManager *)-32LL )
    LeaveCriticalSection(v10);
  v47 = v63;
  if ( v63 && _InterlockedExchangeAdd((volatile signed __int32 *)v63 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v47 + 32LL))(v47);
    (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v47 + 24LL))(v47, 1LL);
  }
  return 2147942414LL;
}
