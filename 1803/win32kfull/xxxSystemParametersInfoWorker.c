/*
 * XREFs of xxxSystemParametersInfoWorker @ 0x1C00675F4
 * Callers:
 *     EditionxxxSystemParametersInfoWorker @ 0x1C00675E0 (EditionxxxSystemParametersInfoWorker.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C0015490 (RtlStringCchCopyW.c)
 *     GreExtGetObjectW @ 0x1C0017838 (GreExtGetObjectW.c)
 *     GetWindowNCMetrics @ 0x1C0017EC8 (GetWindowNCMetrics.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxInternalInvalidate @ 0x1C002AC50 (xxxInternalInvalidate.c)
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C0050598 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 *     GreSetFontEnumeration @ 0x1C0051C08 (GreSetFontEnumeration.c)
 *     GetEasTimeout @ 0x1C0051D58 (GetEasTimeout.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C0051E94 (xxxUpdateSystemIconsFromRegistry.c)
 *     GetKbdLangSwitch @ 0x1C0053898 (GetKbdLangSwitch.c)
 *     CreateBitmapStrip @ 0x1C0054A80 (CreateBitmapStrip.c)
 *     bSetDevDragWidth @ 0x1C0055238 (bSetDevDragWidth.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     xxxSendNotifyMessage @ 0x1C0060D20 (xxxSendNotifyMessage.c)
 *     ?PostWindowArrangementCheck@@YAXK@Z @ 0x1C006504C (-PostWindowArrangementCheck@@YAXK@Z.c)
 *     ?UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z @ 0x1C00650D8 (-UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z.c)
 *     UpdateDesktopThresholds @ 0x1C0065140 (UpdateDesktopThresholds.c)
 *     GetDPIMetrics @ 0x1C0065818 (GetDPIMetrics.c)
 *     GetMonitorRect @ 0x1C0066BB4 (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C0066BF8 (GetMonitorWorkRect.c)
 *     ReadPointerDeviceSettings @ 0x1C0069000 (ReadPointerDeviceSettings.c)
 *     CheckWinstaAttributeAccess @ 0x1C006A910 (CheckWinstaAttributeAccess.c)
 *     xxxUpdateSystemCursorsFromRegistry @ 0x1C006AF00 (xxxUpdateSystemCursorsFromRegistry.c)
 *     PostShellHookMessagesEx @ 0x1C006E9A8 (PostShellHookMessagesEx.c)
 *     _MonitorFromRect @ 0x1C0072BA0 (_MonitorFromRect.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00749EC (IsWindowUnderActiveLockScreen.c)
 *     SetKeyboardRate @ 0x1C00B42F0 (SetKeyboardRate.c)
 *     RtlStringCchPrintfW @ 0x1C00B9E50 (RtlStringCchPrintfW.c)
 *     ClearKeyboardStates @ 0x1C00BCF50 (ClearKeyboardStates.c)
 *     SetMouseTrails @ 0x1C00BFDA4 (SetMouseTrails.c)
 *     SetPointer @ 0x1C00C09D0 (SetPointer.c)
 *     SetDesktopPattern @ 0x1C00E9288 (SetDesktopPattern.c)
 *     xxxDesktopRecalc @ 0x1C00F2340 (xxxDesktopRecalc.c)
 *     GetDPIServerInfo @ 0x1C00FB01C (GetDPIServerInfo.c)
 *     GetProcessDpiServerInfo @ 0x1C00FB044 (GetProcessDpiServerInfo.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0103948 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     _SetDoubleClickTime @ 0x1C0104970 (_SetDoubleClickTime.c)
 *     xxxSetDeskWallpaper @ 0x1C010CF94 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C010D2E0 (LoadWallpaperFilenameFromRegistry.c)
 *     xxxSetIMEShowStatus @ 0x1C0112334 (xxxSetIMEShowStatus.c)
 *     ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x1C0112BD4 (-TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C0112F84 (xxxInvalidateWallpaperWindow.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     _SwapMouseButton @ 0x1C01980F0 (_SwapMouseButton.c)
 *     ?TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z @ 0x1C0198DF8 (-TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1C0199C2C (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1C0199CE4 (-TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z @ 0x1C0199D9C (-TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z.c)
 *     ?SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z @ 0x1C01A4210 (-SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01A4354 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x1C01A4554 (-SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x1C01A4640 (-SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01A472C (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01A4C48 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C01A4EC0 (EditionxxxBroadcastSPIChange.c)
 *     UpdateWinIniInt @ 0x1C01A51C0 (UpdateWinIniInt.c)
 *     xxxMetricsRecalc @ 0x1C01A55FC (xxxMetricsRecalc.c)
 *     GetUserHandedness @ 0x1C01B7660 (GetUserHandedness.c)
 *     WritePointerDeviceSettings @ 0x1C01D1FF8 (WritePointerDeviceSettings.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C020C174 (-GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C020D550 (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     GetMonitorMenuRect @ 0x1C022B034 (GetMonitorMenuRect.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x1C0241344 (DwmAsyncNotifyWindowShadowChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSystemParametersInfoWorker(__int64 a1, unsigned int a2, wchar_t *a3, __int16 a4)
{
  unsigned int v5; // ebx
  __int64 CurrentProcessWin32Process; // r9
  int updated; // r15d
  int v8; // r13d
  unsigned int v9; // r12d
  __int64 v10; // rdx
  unsigned int v11; // r14d
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  bool v14; // zf
  int v15; // eax
  unsigned int v16; // r10d
  NTSTRSAFE_PWSTR v17; // r8
  _OWORD *v18; // rax
  NTSTRSAFE_PWSTR v19; // rcx
  unsigned int v20; // edi
  int v21; // eax
  __int64 v23; // rcx
  int v24; // edi
  int v25; // ecx
  int v26; // ecx
  int v27; // edx
  unsigned int PointerDeviceSettings; // eax
  int *v29; // rax
  int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  int v34; // ecx
  bool v35; // zf
  int *v36; // rax
  unsigned int v37; // ebx
  __int64 v38; // rax
  _OWORD *MonitorMenuRect; // rax
  __int64 v40; // rax
  NTSTRSAFE_PWSTR v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 DPIMetrics; // rax
  char *v45; // r8
  struct _UNICODE_STRING *v46; // rdi
  __int64 v47; // r8
  __int64 v48; // r9
  NTSTRSAFE_PWSTR v49; // rbx
  unsigned int v50; // eax
  unsigned int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // rdx
  NTSTRSAFE_PWSTR v54; // rcx
  NTSTRSAFE_PWSTR v55; // rdx
  int v56; // ecx
  unsigned int v57; // ebx
  int v58; // ecx
  int v59; // ebx
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  int *v64; // rdi
  int v65; // ecx
  int v66; // edx
  int v67; // ecx
  BOOL v68; // edx
  int v69; // eax
  __int64 v70; // rax
  NTSTRSAFE_PWSTR v71; // r14
  char *v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // r14
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rcx
  NTSTRSAFE_PWSTR v87; // rcx
  unsigned int DpiForSystem; // eax
  __int64 v89; // rcx
  int UserHandedness; // eax
  __int64 v91; // rcx
  unsigned int v92; // r13d
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rax
  unsigned int v96; // ebx
  unsigned int v97; // r13d
  unsigned int v98; // ebx
  __int64 v99; // rdx
  struct _UNICODE_STRING *v100; // rax
  __int64 ProcessDpiServerInfo; // rax
  struct tagWND *v102; // rcx
  __int64 v103; // rdi
  int v104; // r14d
  int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rcx
  unsigned __int8 v110; // al
  NTSTRSAFE_PWSTR v111; // rcx
  __int64 v112; // rcx
  __int64 v113; // rcx
  unsigned int v114; // r13d
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rax
  unsigned int v118; // ebx
  unsigned int v119; // r13d
  __int64 v120; // rax
  __int64 v121; // rdx
  int v122; // eax
  struct _UNICODE_STRING *v123; // rdi
  int v124; // ebx
  NTSTRSAFE_PWSTR v125; // rbx
  int v126; // r8d
  struct _UNICODE_STRING *v127; // rdi
  unsigned int v128; // r9d
  __int64 v129; // rdx
  NTSTRSAFE_PWSTR v130; // rbx
  int v131; // r9d
  NTSTRSAFE_PWSTR v132; // rbx
  int v133; // r8d
  struct _UNICODE_STRING *v134; // rdi
  __int64 v135; // rdx
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // rbx
  unsigned int v139; // eax
  struct tagSOUNDSENTRYW *v140; // rbx
  int v141; // r8d
  struct _UNICODE_STRING *v142; // rdi
  __int64 v143; // rdi
  int v144; // r15d
  NTSTRSAFE_PWSTR v145; // rcx
  char *v146; // rax
  NTSTRSAFE_PWSTR v147; // rbx
  int v148; // r9d
  unsigned int v149; // ebx
  const wchar_t *v150; // r9
  const wchar_t *v151; // r9
  int v152; // edx
  __int64 v153; // rcx
  unsigned int i; // ebx
  __int64 ProfileUserName; // rax
  __int64 v156; // rdi
  const wchar_t *v157; // rbx
  const wchar_t *v158; // r9
  int v159; // r15d
  unsigned int *v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rdx
  __int64 v163; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 DispInfo; // rax
  InteractiveControlManager *v166; // rax
  InteractiveControlManager *v167; // rax
  __int64 v168; // rax
  __int64 v169; // rcx
  NTSTRSAFE_PWSTR v170; // rcx
  int v171; // eax
  int v172; // ecx
  bool v173; // zf
  __int64 v174; // rcx
  __int64 v175; // r8
  int v176; // eax
  unsigned int ProfileValue; // eax
  unsigned int v178; // edi
  int v179; // edx
  unsigned __int64 v180; // rax
  __int64 v181; // rdx
  unsigned __int64 v182; // rcx
  unsigned int v183; // ebx
  unsigned int v184; // ebx
  unsigned int v185; // ebx
  unsigned int v186; // ebx
  __int64 v187; // r8
  int v188; // edx
  int v189; // ecx
  __int64 v190; // rax
  struct tagWND *v191; // rcx
  void *v192; // rax
  __int64 v193; // rax
  __int64 v194; // r8
  __int64 v195; // r9
  __int64 v196; // rbx
  __int64 v197; // rax
  int v198; // ebx
  int *v199; // rax
  _BYTE *v200; // rax
  unsigned int v201; // [rsp+40h] [rbp-478h]
  int v202; // [rsp+44h] [rbp-474h]
  NTSTRSAFE_PWSTR pszDest; // [rsp+48h] [rbp-470h] BYREF
  int v204; // [rsp+50h] [rbp-468h] BYREF
  int v205; // [rsp+54h] [rbp-464h] BYREF
  unsigned int v206; // [rsp+58h] [rbp-460h] BYREF
  __int64 v207; // [rsp+60h] [rbp-458h] BYREF
  unsigned int v208[2]; // [rsp+68h] [rbp-450h] BYREF
  __int64 v209; // [rsp+70h] [rbp-448h] BYREF
  _BYTE v210[24]; // [rsp+78h] [rbp-440h] BYREF
  _DWORD v211[4]; // [rsp+90h] [rbp-428h] BYREF
  __int128 v212; // [rsp+A0h] [rbp-418h]
  __int128 v213; // [rsp+C0h] [rbp-3F8h] BYREF
  _QWORD v214[3]; // [rsp+D0h] [rbp-3E8h] BYREF
  __int128 v215; // [rsp+E8h] [rbp-3D0h] BYREF
  __int128 v216; // [rsp+F8h] [rbp-3C0h] BYREF
  __int128 v217; // [rsp+108h] [rbp-3B0h] BYREF
  __int128 v218; // [rsp+118h] [rbp-3A0h] BYREF
  char v219[16]; // [rsp+128h] [rbp-390h] BYREF
  int *v220; // [rsp+138h] [rbp-380h] BYREF
  __int64 v221; // [rsp+140h] [rbp-378h]
  __int128 v222; // [rsp+148h] [rbp-370h] BYREF
  __int128 v223; // [rsp+158h] [rbp-360h] BYREF
  __int128 v224; // [rsp+168h] [rbp-350h] BYREF
  __int128 v225; // [rsp+178h] [rbp-340h]
  char v226[20]; // [rsp+188h] [rbp-330h] BYREF
  __int64 v227; // [rsp+19Ch] [rbp-31Ch]
  int v228; // [rsp+1A4h] [rbp-314h]
  char v229[20]; // [rsp+1A8h] [rbp-310h] BYREF
  unsigned int v230; // [rsp+1BCh] [rbp-2FCh]
  wchar_t v231[40]; // [rsp+1C0h] [rbp-2F8h] BYREF
  _WORD v232[40]; // [rsp+210h] [rbp-2A8h] BYREF
  _BYTE v233[528]; // [rsp+260h] [rbp-258h] BYREF

  LOWORD(v206) = a4;
  v5 = a1;
  v201 = a1;
  v211[0] = a1;
  pszDest = a3;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v220 = (int *)CurrentProcessWin32Process;
  updated = 0;
  v204 = 0;
  v8 = 1;
  v9 = v206 & 1;
  v10 = 2LL;
  v202 = v206 & 2;
  v208[0] = v202;
  v11 = !(v206 & 1);
  v205 = v11;
  v12 = (unsigned __int16)v206 & 0x8000;
  v206 &= 0x8000u;
  v232[0] = 0;
  if ( v5 > 0x50 )
  {
    if ( v5 > 0x52 )
    {
      if ( v5 <= 0x54 )
        goto LABEL_1022;
      if ( v5 > 0x56 )
      {
        if ( v5 == 92 || v5 == 97 )
          goto LABEL_54;
        goto LABEL_11;
      }
    }
    return 1LL;
  }
  if ( v5 >= 0x4F )
  {
LABEL_1022:
    *(_DWORD *)pszDest = 0;
    return 1LL;
  }
  if ( v5 >= 7 && (v5 <= 8 || v5 == 12 || v5 > 0x26 && (v5 <= 0x28 || v5 == 49 || v5 > 0x3D && v5 <= 0x3F)) )
    goto LABEL_54;
LABEL_11:
  v13 = gpepCSRSS;
  if ( *(_QWORD *)CurrentProcessWin32Process != gpepCSRSS )
  {
    if ( v5 <= 0x3B )
    {
      if ( v5 != 59 )
      {
        switch ( v5 )
        {
          case 2u:
          case 4u:
          case 6u:
          case 0xBu:
          case 0xFu:
          case 0x11u:
          case 0x13u:
          case 0x14u:
          case 0x15u:
          case 0x17u:
          case 0x1Au:
          case 0x1Cu:
          case 0x1Du:
          case 0x1Eu:
          case 0x20u:
          case 0x21u:
          case 0x22u:
          case 0x24u:
          case 0x25u:
          case 0x2Au:
          case 0x2Cu:
          case 0x2Eu:
          case 0x2Fu:
          case 0x33u:
          case 0x35u:
          case 0x37u:
          case 0x39u:
            goto LABEL_65;
          case 0xDu:
          case 0x18u:
            if ( ((unsigned __int64)pszDest & 0xFFFFFFFFFFFF0000uLL) != 0 )
            {
              LODWORD(v209) = 2;
              goto LABEL_26;
            }
            if ( a2 )
              goto LABEL_173;
            return 1LL;
          default:
            goto LABEL_23;
        }
      }
      goto LABEL_65;
    }
    if ( v5 > 0x63 )
    {
      if ( v5 != 101
        && v5 != 103
        && v5 != 105
        && v5 != 107
        && v5 != 109
        && v5 != 119
        && v5 != 161
        && v5 != 163
        && v5 != 4135 )
      {
        goto LABEL_23;
      }
      goto LABEL_65;
    }
    if ( v5 == 99 )
      goto LABEL_65;
    if ( v5 > 0x49 )
    {
      if ( v5 < 0x4B )
        goto LABEL_23;
      if ( v5 <= 0x4D )
        goto LABEL_65;
      if ( v5 <= 0x56 )
        goto LABEL_23;
      if ( v5 <= 0x58 )
        goto LABEL_65;
      if ( v5 <= 0x59 )
        goto LABEL_23;
      if ( v5 <= 0x5B )
      {
LABEL_65:
        v15 = 16;
        goto LABEL_25;
      }
      v14 = v5 == 96;
    }
    else
    {
      if ( v5 == 73 || v5 == 61 || v5 == 65 || v5 == 67 || v5 == 69 )
        goto LABEL_65;
      v14 = v5 == 71;
    }
    if ( !v14 )
    {
LABEL_23:
      if ( (v5 & 0x3000) != 0 && (v5 & 1) != 0 )
      {
LABEL_173:
        LODWORD(v209) = 16;
        goto LABEL_174;
      }
      v15 = 2;
LABEL_25:
      LODWORD(v209) = v15;
      if ( v15 == 2 )
      {
LABEL_26:
        if ( !RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), 2u) )
        {
          v23 = 5LL;
          goto LABEL_55;
        }
LABEL_27:
        v10 = 2LL;
        v16 = 10;
        v12 = v206;
        CurrentProcessWin32Process = (__int64)v220;
        if ( (_DWORD)v209 != 2 )
          goto LABEL_29;
        goto LABEL_28;
      }
LABEL_174:
      if ( !(unsigned int)CheckWinstaAttributeAccess(0x10u) )
        return 0LL;
      goto LABEL_27;
    }
    goto LABEL_65;
  }
  v16 = 10;
LABEL_28:
  v205 = 1;
  v11 = 1;
LABEL_29:
  if ( v5 > 0x1026 )
  {
    if ( v5 == 4135 )
    {
      if ( (unsigned int)CheckDesktopPolicy(0LL, 112LL, v12, CurrentProcessWin32Process) )
      {
        v9 = 0;
        v11 = 0;
      }
      if ( v9 )
      {
        updated = UpdateWinIniInt(0LL, 4LL, 112LL, a2 != 0);
        v11 = updated;
      }
      if ( v11 )
        gbBlockSendInputResets = a2 != 0;
      goto LABEL_77;
    }
    if ( v5 != 8228 )
    {
      if ( v5 != 8229 )
        goto LABEL_69;
      a2 = 0;
      if ( (unsigned int)RIMIsDefaultUILanguageRTL(v13, 2LL, v12, CurrentProcessWin32Process) )
        LOBYTE(a2) = (_DWORD)pszDest == 0;
      else
        LOBYTE(a2) = (_DWORD)pszDest != 0;
      goto LABEL_445;
    }
    UserHandedness = GetUserHandedness(v13, 2LL, v12, CurrentProcessWin32Process);
    goto LABEL_532;
  }
  if ( v5 == 4134 )
  {
    v173 = gbBlockSendInputResets == 0;
    goto LABEL_255;
  }
  if ( v5 > 0x62 )
  {
    if ( v5 > 0x88 )
    {
      if ( v5 <= 0x9B )
      {
        if ( v5 == 155 )
          goto LABEL_927;
        if ( v5 > 0x92 )
        {
          if ( v5 != 147 && (v5 == 148 || v5 != 149 && (v5 == 150 || v5 != 151 && (v5 == 152 || v5 != 153))) )
            goto LABEL_89;
LABEL_927:
          updated = WritePointerDeviceSettings(v5, pszDest, v9, CurrentProcessWin32Process);
          goto LABEL_77;
        }
        if ( v5 != 146 )
        {
          switch ( v5 )
          {
            case 0x89u:
              if ( a2 > *(_DWORD *)(gpDispInfo + 136LL) || a2 > dword_1C031D78C || a2 < gWinArrGlobal[0] )
                goto LABEL_77;
              UpdateThresholdFromMetric(v9, &v204, &v205, 0x15u, a2, 4);
              break;
            case 0x8Au:
              v34 = dword_1C031D78C;
              goto LABEL_130;
            case 0x8Bu:
              if ( a2 > *(_DWORD *)(gpDispInfo + 136LL) || a2 < dword_1C031D788 || a2 < dword_1C031D77C )
                goto LABEL_77;
              UpdateThresholdFromMetric(v9, &v204, &v205, 0x16u, a2, 5);
              break;
            default:
              switch ( v5 )
              {
                case 0x8Cu:
                  v32 = dword_1C031D794;
                  goto LABEL_128;
                case 0x8Du:
                  v37 = 624;
                  v8 = 2;
                  break;
                case 0x8Eu:
                  v33 = dword_1C031D794 >> 2;
                  goto LABEL_129;
                case 0x8Fu:
                  v37 = 626;
                  v8 = 4;
                  break;
                case 0x90u:
                  v33 = dword_1C031D794 >> 3;
                  goto LABEL_129;
                default:
                  v37 = 625;
                  v8 = 8;
                  break;
              }
LABEL_325:
              if ( (unsigned int)CheckDesktopPolicy(0LL, v37, v12, CurrentProcessWin32Process) )
              {
                v9 = 0;
                v11 = 0;
              }
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, v37, a2);
                v11 = updated;
              }
              if ( v11 )
              {
                v58 = dword_1C031D794;
                if ( a2 )
                  dword_1C031D794 |= v8;
                else
                  dword_1C031D794 &= ~v8;
                PostWindowArrangementCheck(v58);
              }
              goto LABEL_77;
          }
          goto LABEL_321;
        }
LABEL_89:
        PointerDeviceSettings = ReadPointerDeviceSettings(v5, pszDest);
        goto LABEL_90;
      }
      if ( v5 <= 0xA5 )
      {
        switch ( v5 )
        {
          case 0xA5u:
            goto LABEL_934;
          case 0x9Cu:
            goto LABEL_89;
          case 0x9Du:
            goto LABEL_927;
          case 0x9Eu:
            goto LABEL_934;
        }
        if ( v5 != 159 )
        {
          switch ( v5 )
          {
            case 0xA0u:
              *(_DWORD *)pszDest = 6;
              goto LABEL_77;
            case 0xA1u:
              goto LABEL_487;
            case 0xA2u:
              DispInfo = GetDispInfo(v13, 2LL, v12, CurrentProcessWin32Process);
              MonitorMenuRect = (_OWORD *)GetMonitorMenuRect(v219, *(_QWORD *)(DispInfo + 96));
              goto LABEL_193;
          }
          if ( v5 != 163 )
            goto LABEL_69;
          if ( pszDest )
          {
            if ( *((_DWORD *)pszDest + 2) < *(_DWORD *)pszDest || *((_DWORD *)pszDest + 3) < *((_DWORD *)pszDest + 1) )
              return 0LL;
            v40 = MonitorFromRect((struct tagRECT *)pszDest);
          }
          else
          {
            v40 = *(_QWORD *)(GetDispInfo(v13, 2LL, v12, CurrentProcessWin32Process) + 96);
          }
          v209 = v40;
          v224 = *GetMonitorRect(&v218, v40);
          v41 = (NTSTRSAFE_PWSTR)&v224;
          if ( pszDest )
            v41 = pszDest;
          if ( !(unsigned int)IntersectRect(&v222, (int *)v41, (int *)&v224) )
            goto LABEL_54;
          v42 = v222 - *(_QWORD *)v41;
          if ( (_QWORD)v222 == *(_QWORD *)v41 )
            v42 = *((_QWORD *)&v222 + 1) - *((_QWORD *)v41 + 1);
          if ( v42 )
            goto LABEL_54;
          if ( (W32GetCurrentThreadDpiAwarenessContext(0LL, v10) & 0xF) != 2 )
          {
            if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43) + 448) )
            {
              v163 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v161) + 448) + 8LL);
              if ( (*(_DWORD *)(v163 + 52) & 1) != 0 )
              {
                CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v163, v162);
                LogicalToPhysicalDPIRect(v209 + 584, &v222, CurrentThreadDpiAwarenessContext, &v209);
                goto LABEL_321;
              }
            }
            updated = v204;
            v11 = v205;
          }
          *(_OWORD *)(v209 + 584) = v222;
          goto LABEL_77;
        }
      }
      else if ( v5 != 166 )
      {
        if ( v5 != 167 )
        {
          if ( v5 == 168 )
          {
            v34 = gbLockScreenAutoLockActive;
            goto LABEL_130;
          }
          if ( v5 == 169 )
          {
            if ( gfSwitchInProgress )
              return 0LL;
            if ( gdwRITdemonLockState && !(_DWORD)v12 )
              goto LABEL_613;
            gbLockScreenAutoLockActive = a2 != 0;
            if ( !v9 )
              goto LABEL_77;
            PointerDeviceSettings = UpdateWinIniInt(0LL, 4LL, 205LL, a2);
            updated = PointerDeviceSettings;
LABEL_90:
            v11 = PointerDeviceSettings;
            goto LABEL_77;
          }
          if ( v5 != 170 )
          {
            switch ( v5 )
            {
              case 0xABu:
                if ( *(_DWORD *)(CurrentProcessWin32Process + 56) == gpidLogonUI )
                {
                  gbLockScreenActive = a2 != 0;
                  if ( a2 )
                  {
                    if ( !gptiForeground
                      || (v168 = *(_QWORD *)(gptiForeground + 424LL)) == 0
                      || (v169 = *(_QWORD *)(v168 + 120)) == 0
                      || (unsigned int)IsWindowUnderActiveLockScreen(v169) )
                    {
                      xxxSetForegroundWindow2(0LL, 0LL, 0, 0);
                    }
                    ClearKeyboardStates();
                  }
                  GreLddmProcessLockScreen(gbLockScreenActive, v10, v12);
                  goto LABEL_77;
                }
                return 0LL;
              case 0xACu:
                v167 = InteractiveControlManager::Instance();
                v11 = (int)InteractiveControlManager::GetExternalParameters(
                             v167,
                             (struct tagINTERACTIVECTRL_PARAMETERS *)pszDest) >= 0;
                goto LABEL_77;
              case 0xADu:
                v166 = InteractiveControlManager::Instance();
                LOBYTE(updated) = (int)InteractiveControlManager::SetExternalParameters(
                                         v166,
                                         (struct tagINTERACTIVECTRL_PARAMETERS *)pszDest,
                                         v9) >= 0;
                goto LABEL_77;
            }
            goto LABEL_69;
          }
          v36 = (int *)gbLockScreenActive;
LABEL_167:
          v34 = *v36;
          goto LABEL_130;
        }
LABEL_934:
        if ( (int)DrvDisplayConfigGetScaleFactorOverrides(v226, 1LL, v12, CurrentProcessWin32Process) < 0 )
          return 0LL;
        v14 = a2 == 158;
        v20 = v201;
        if ( !v14 )
        {
          v170 = pszDest;
          *(_QWORD *)pszDest = v227;
          *((_DWORD *)v170 + 2) = v228;
          goto LABEL_78;
        }
        v31 = HIDWORD(v227);
        goto LABEL_94;
      }
      if ( a2 + 11 > 0x16 )
        return 0LL;
      if ( (unsigned int)CheckDesktopPolicy(0LL, 628LL, v12, CurrentProcessWin32Process) )
      {
        v9 = 0;
        v11 = 0;
      }
      if ( !v9 )
        goto LABEL_77;
      v230 = a2;
      v208[0] = a2 != 159;
      v171 = DrvDisplayConfigSetScaleFactorOverride(v229, v208);
      if ( v171 < 0 )
      {
        v11 = 0;
        goto LABEL_77;
      }
      if ( a2 == 159 )
        TraceLoggingSPISetModernDPIOverrideEvent(v172, 159);
      else
        TraceLoggingSPISetDesktopDPIOverrideEvent(v172, a2);
LABEL_487:
      v11 = 1;
      goto LABEL_77;
    }
    if ( v5 == 136 )
    {
      v34 = dword_1C031D788;
      goto LABEL_130;
    }
    if ( v5 > 0x75 )
    {
      if ( v5 > 0x7F )
      {
        switch ( v5 )
        {
          case 0x80u:
            v34 = dword_1C031D77C;
            goto LABEL_130;
          case 0x81u:
            if ( a2 > *(_DWORD *)(gpDispInfo + 136LL)
              || a2 < gWinArrGlobal[0]
              || a2 > dword_1C031D784
              || a2 > dword_1C031D78C )
            {
              goto LABEL_77;
            }
            UpdateThresholdFromMetric(v9, &v204, &v205, 0x11u, a2, 1);
            break;
          case 0x82u:
            LOBYTE(v33) = dword_1C031D794;
            goto LABEL_129;
          case 0x83u:
            v37 = 18;
            goto LABEL_325;
          case 0x84u:
            v34 = dword_1C031D780;
            goto LABEL_130;
          case 0x85u:
            if ( a2 > *(_DWORD *)(gpDispInfo + 136LL) || a2 > dword_1C031D784 || a2 < gWinArrGlobal[0] )
              goto LABEL_77;
            UpdateThresholdFromMetric(v9, &v204, &v205, 0x13u, a2, 2);
            break;
          case 0x86u:
            v34 = dword_1C031D784;
            goto LABEL_130;
          default:
            if ( a2 > *(_DWORD *)(gpDispInfo + 136LL) || a2 < dword_1C031D780 || a2 < dword_1C031D77C )
              goto LABEL_77;
            UpdateThresholdFromMetric(v9, &v204, &v205, 0x14u, a2, 3);
            break;
        }
LABEL_321:
        updated = v204;
LABEL_322:
        v11 = v205;
        goto LABEL_77;
      }
      switch ( v5 )
      {
        case '\x7F':
          if ( a2 > *(_DWORD *)(gpDispInfo + 136LL)
            || a2 > dword_1C031D77C
            || a2 > dword_1C031D780
            || a2 > dword_1C031D788 )
          {
            goto LABEL_77;
          }
          UpdateThresholdFromMetric(v9, &v204, &v205, 0x10u, a2, 0);
          goto LABEL_321;
        case 'v':
          v152 = *gpsi >> 9;
LABEL_809:
          v27 = v152 & 1;
          goto LABEL_76;
        case 'w':
          if ( !gdwRITdemonLockState || (_DWORD)v12 )
          {
            if ( (unsigned int)CheckDesktopPolicy(0LL, 618LL, v12, CurrentProcessWin32Process) )
            {
              v9 = 0;
              v11 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 618LL, a2 != 0);
              v11 = updated;
            }
            if ( v11 )
            {
              v21 = v202;
              v14 = a2 == 0;
              v20 = v201;
              if ( v14 )
                *gpsi &= ~0x200u;
              else
                *gpsi |= 0x200u;
              goto LABEL_47;
            }
            goto LABEL_77;
          }
          goto LABEL_613;
        case 'x':
          v36 = (int *)gdwHungAppTimeout;
          goto LABEL_167;
        case 'y':
          if ( (unsigned int)CheckDesktopPolicy(0LL, 621LL, v12, CurrentProcessWin32Process) )
          {
            v9 = 0;
            v11 = 0;
          }
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 621LL, a2);
            v11 = updated;
          }
          if ( !v11 )
            goto LABEL_77;
          v160 = (unsigned int *)gdwHungAppTimeout;
          break;
        case 'z':
          v34 = gdwWaitToKillTimeout;
          goto LABEL_130;
        case '{':
          if ( (unsigned int)CheckDesktopPolicy(0LL, 622LL, v12, CurrentProcessWin32Process) )
          {
            v9 = 0;
            v11 = 0;
          }
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 622LL, a2);
            v11 = updated;
          }
          v21 = v202;
          if ( v11 )
            gdwWaitToKillTimeout = a2;
          goto LABEL_849;
        case '|':
          v36 = (int *)gdwWaitToKillServiceTimeout;
          goto LABEL_167;
        case '}':
          if ( (unsigned int)CheckDesktopPolicy(0LL, 623LL, v12, CurrentProcessWin32Process) )
          {
            v9 = 0;
            v11 = 0;
          }
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 52LL, 623LL, a2);
            v11 = updated;
          }
          if ( !v11 )
            goto LABEL_77;
          v160 = (unsigned int *)gdwWaitToKillServiceTimeout;
          break;
        default:
          v34 = gWinArrGlobal[0];
          goto LABEL_130;
      }
      *v160 = a2;
      goto LABEL_77;
    }
    if ( v5 == 117 )
    {
      if ( (!a2 || a2 == 12) && pszDest && *(_DWORD *)pszDest == 12 )
      {
        if ( v9 )
        {
          ProfileUserName = CreateProfileUserName(v210, 2LL, v12, CurrentProcessWin32Process);
          v156 = ProfileUserName;
          v157 = L"1";
          v158 = L"1";
          if ( !*((_DWORD *)pszDest + 1) )
            v158 = L"0";
          v159 = FastWriteProfileStringW(ProfileUserName, 48LL, L"On", v158);
          RtlStringCchPrintfW(v231, 0x28uLL, L"%d", *((unsigned int *)pszDest + 2));
          updated = FastWriteProfileStringW(v156, 48LL, L"Locale", v231) & v159;
          v11 = updated;
          if ( !updated )
          {
            if ( !HIDWORD(gAudioDescription) )
              v157 = L"0";
            FastWriteProfileStringW(v156, 48LL, L"On", v157);
            RtlStringCchPrintfW(v231, 0x28uLL, L"%d", *((unsigned int *)&gAudioDescription + 2));
            FastWriteProfileStringW(v156, 48LL, L"Locale", v231);
          }
          FreeProfileUserName(v156, v210);
        }
        if ( v11 )
        {
          memmove(gAudioDescription, pszDest, *(unsigned int *)pszDest);
          LODWORD(gAudioDescription) = 12;
        }
        goto LABEL_77;
      }
      return 0LL;
    }
    if ( v5 == 108 )
    {
      v27 = *(_DWORD *)(gpsi + 4992LL);
      goto LABEL_76;
    }
    if ( v5 <= 0x6C )
    {
      switch ( v5 )
      {
        case 'c':
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 91LL, a2);
            v11 = updated;
          }
          v21 = v202;
          if ( v11 )
            gcxMouseHover = a2;
          break;
        case 'd':
          v34 = gcyMouseHover;
          goto LABEL_130;
        case 'e':
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 92LL, a2);
            v11 = updated;
          }
          v21 = v202;
          if ( v11 )
            gcyMouseHover = a2;
          break;
        case 'f':
          v34 = gdtMouseHover;
          goto LABEL_130;
        case 'g':
          if ( a2 >= 0xA )
            v16 = a2;
          if ( v16 > 0x7FFFFFFF )
            v16 = 0x7FFFFFFF;
          v208[0] = v16;
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 93LL, v16);
            v11 = updated;
            v16 = v208[0];
          }
          v20 = v201;
          v21 = v202;
          if ( v11 )
            gdtMouseHover = v16;
          goto LABEL_47;
        case 'h':
          v27 = *(_DWORD *)(gpsi + 4988LL);
          goto LABEL_76;
        case 'i':
          if ( (unsigned int)CheckDesktopPolicy(0LL, 14LL, v12, CurrentProcessWin32Process) )
          {
            v9 = 0;
            v11 = 0;
          }
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 14LL, a2);
            v11 = updated;
          }
          if ( v11 )
            *(_DWORD *)(gpsi + 4988LL) = a2;
          goto LABEL_77;
        case 'j':
          v34 = gdtMNDropDown;
          goto LABEL_130;
        default:
          if ( (unsigned int)CheckDesktopPolicy(0LL, 94LL, v12, CurrentProcessWin32Process) )
          {
            v9 = 0;
            v11 = 0;
          }
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 94LL, a2);
            v11 = updated;
          }
          v21 = v202;
          if ( v11 )
            gdtMNDropDown = a2;
          break;
      }
      goto LABEL_849;
    }
    switch ( v5 )
    {
      case 'm':
        if ( (unsigned int)CheckDesktopPolicy(0LL, 15LL, v12, CurrentProcessWin32Process) )
        {
          v9 = 0;
          v11 = 0;
        }
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 4LL, 15LL, a2);
          v11 = updated;
        }
        if ( v11 )
          *(_DWORD *)(gpsi + 4992LL) = a2;
        goto LABEL_77;
      case 'n':
        v173 = gfIMEShowStatus == 0;
        goto LABEL_255;
      case 'o':
        v11 = xxxSetIMEShowStatus(a2 != 0, v9, &v204, CurrentProcessWin32Process);
        goto LABEL_364;
    }
    if ( v5 != 112 )
    {
      if ( v5 == 113 )
      {
        if ( (unsigned __int8)IsValidMouseSensitivity((unsigned int)pszDest, 2LL, v12, CurrentProcessWin32Process) )
        {
          if ( v9 )
          {
            RtlStringCchPrintfW(v231, 0x28uLL, L"%d", pszDest);
            updated = FastUpdateWinIni(0LL, 12LL, 608LL, v231);
            v11 = updated;
          }
          if ( v11 )
          {
            UpdateMouseSensitivity((unsigned int)pszDest);
            for ( i = 0; i < 2; ++i )
              ResetAccelerationCurves(i);
          }
          goto LABEL_77;
        }
        return 0LL;
      }
      if ( v5 == 114 )
      {
        v173 = gppiScreenSaver == 0LL;
        goto LABEL_255;
      }
      if ( v5 != 115 )
      {
        if ( a2 && a2 != 12 )
          return 0LL;
        v145 = pszDest;
        if ( !pszDest || *(_DWORD *)pszDest != 12 )
          return 0LL;
        v146 = (char *)gAudioDescription;
        goto LABEL_765;
      }
      if ( g_pWallpaperSettings )
      {
        RtlStringCchCopyW(pszDest, 0x104uLL, (NTSTRSAFE_PCWSTR)(g_pWallpaperSettings + 4LL));
        goto LABEL_77;
      }
      v83 = CreateProfileUserName(v210, 2LL, 0LL, CurrentProcessWin32Process);
      LoadWallpaperFilenameFromRegistry(v83, pszDest, 260LL);
      goto LABEL_496;
    }
    UserHandedness = GetMouseSensitivity(0LL, 2LL, v12, CurrentProcessWin32Process);
LABEL_532:
    *(_DWORD *)pszDest = UserHandedness;
    goto LABEL_77;
  }
  if ( v5 == 98 )
  {
    v34 = gcxMouseHover;
    goto LABEL_130;
  }
  if ( v5 > 0x2E )
  {
    if ( v5 <= 0x44 )
    {
      if ( v5 != 68 )
      {
        if ( v5 > 0x39 )
        {
          if ( v5 == 58 )
          {
            v12 = (unsigned __int64)pszDest;
            if ( (a2 & 0xFFFFFFF7) == 0 && pszDest && *(_DWORD *)pszDest == 8 )
            {
              *((_DWORD *)pszDest + 1) = HIDWORD(gStickyKeys);
              *(_WORD *)(v12 + 6) = 0;
              *(_DWORD *)(v12 + 4) |= gLatchBits << 24;
              *(_DWORD *)(v12 + 4) |= gLockBits << 16;
              goto LABEL_77;
            }
            return 0LL;
          }
          if ( v5 != 59 )
          {
            if ( v5 != 60 )
            {
              switch ( v5 )
              {
                case '=':
                  if ( (!a2 || a2 == 12)
                    && pszDest
                    && *(_DWORD *)pszDest == 12
                    && (*((_DWORD *)pszDest + 1) & 3) == *((_DWORD *)pszDest + 1)
                    && *((_DWORD *)pszDest + 2) <= 0x36EE80u )
                  {
                    if ( v9 )
                    {
                      v143 = CreateProfileUserName(v210, 2LL, v12, CurrentProcessWin32Process);
                      RtlStringCchPrintfW(v231, 0x28uLL, L"%d", *((unsigned int *)pszDest + 1));
                      v144 = FastWriteProfileStringW(v143, 18LL, L"Flags", v231);
                      RtlStringCchPrintfW(v231, 0x28uLL, L"%d", *((unsigned int *)pszDest + 2));
                      updated = FastWriteProfileStringW(v143, 18LL, L"TimeToWait", v231) & v144;
                      v11 = updated;
                      if ( !updated )
                      {
                        RtlStringCchPrintfW(v231, 0x28uLL, L"%d", HIDWORD(gAccessTimeOut));
                        FastWriteProfileStringW(v143, 18LL, L"Flags", v231);
                        RtlStringCchPrintfW(v231, 0x28uLL, L"%d", *((unsigned int *)&gAccessTimeOut + 2));
                        FastWriteProfileStringW(v143, 18LL, L"TimeToWait", v231);
                      }
                      FreeProfileUserName(v143, v210);
                    }
                    if ( v11 )
                    {
                      memmove(gAccessTimeOut, pszDest, *(unsigned int *)pszDest);
                      LODWORD(gAccessTimeOut) = 12;
                      SetAccessEnabledFlag();
                      AccessTimeOutReset();
                    }
                    goto LABEL_77;
                  }
                  break;
                case '@':
                  if ( !a2 || a2 == 56 )
                  {
                    v87 = pszDest;
                    if ( pszDest )
                    {
                      if ( *(_DWORD *)pszDest == 56 )
                      {
                        *(_OWORD *)(pszDest + 2) = *(_OWORD *)((char *)&gSoundSentry + 4);
                        *(_OWORD *)(v87 + 10) = *(_OWORD *)((char *)&gSoundSentry + 20);
                        *(_OWORD *)(v87 + 18) = *(_OWORD *)((char *)&gSoundSentry + 36);
                        *((_DWORD *)v87 + 13) = *((_DWORD *)&gSoundSentry + 13);
                        goto LABEL_77;
                      }
                    }
                  }
                  break;
                case 'A':
                  v140 = (struct tagSOUNDSENTRYW *)pszDest;
                  if ( !a2 || a2 == 56 )
                  {
                    if ( pszDest )
                    {
                      if ( *(_DWORD *)pszDest == 56 )
                      {
                        v141 = *((_DWORD *)pszDest + 1);
                        if ( (v141 & 7) == v141
                          && *((_DWORD *)pszDest + 8) <= 3u
                          && !*((_DWORD *)pszDest + 2)
                          && !*((_DWORD *)pszDest + 5) )
                        {
                          if ( (HIDWORD(gSoundSentry) & 2) != 0 )
                            v12 = v141 | 2u;
                          else
                            v12 = v141 & 0xFFFFFFFD;
                          *((_DWORD *)pszDest + 1) = v12;
                          if ( v9 )
                          {
                            v142 = (struct _UNICODE_STRING *)CreateProfileUserName(
                                                               v210,
                                                               2LL,
                                                               v12,
                                                               CurrentProcessWin32Process);
                            updated = SetSoundSentry(v142, v140);
                            v11 = updated;
                            if ( !updated )
                              SetSoundSentry(v142, gSoundSentry);
                            FreeProfileUserName(v142, v210);
                          }
                          if ( !v11 )
                            goto LABEL_77;
                          memmove(gSoundSentry, v140, *(unsigned int *)v140);
                          LODWORD(gSoundSentry) = 56;
                          goto LABEL_694;
                        }
                      }
                    }
                  }
                  break;
                case 'B':
                  v17 = pszDest;
                  *((_DWORD *)pszDest + 1) = gHighContrast[1];
                  v18 = (_OWORD *)*((_QWORD *)v17 + 1);
                  v19 = gHighContrastDefaultScheme;
                  v12 = 128LL;
                  do
                  {
                    *v18 = *(_OWORD *)v19;
                    v18[1] = *((_OWORD *)v19 + 1);
                    v18[2] = *((_OWORD *)v19 + 2);
                    v18[3] = *((_OWORD *)v19 + 3);
                    v18[4] = *((_OWORD *)v19 + 4);
                    v18[5] = *((_OWORD *)v19 + 5);
                    v18[6] = *((_OWORD *)v19 + 6);
                    v18 += 8;
                    *(v18 - 1) = *((_OWORD *)v19 + 7);
                    v19 += 64;
                    --v10;
                  }
                  while ( v10 );
                  v20 = v201;
                  v21 = v202;
                  goto LABEL_47;
                default:
                  updated = SetHighContrastWorker((struct tagINTERNALSETHIGHCONTRAST *)pszDest, v9, &v205);
                  goto LABEL_322;
              }
              return 0LL;
            }
            if ( a2 && a2 != 12 )
              return 0LL;
            v145 = pszDest;
            if ( !pszDest || *(_DWORD *)pszDest != 12 )
              return 0LL;
            v146 = (char *)gAccessTimeOut;
LABEL_765:
            *(_QWORD *)(v145 + 2) = *(_QWORD *)(v146 + 4);
            goto LABEL_77;
          }
          v147 = pszDest;
          v208[0] = HIDWORD(gStickyKeys) & 1;
          if ( (a2 & 0xFFFFFFF7) != 0 )
            return 0LL;
          if ( !pszDest )
            return 0LL;
          if ( *(_DWORD *)pszDest != 8 )
            return 0LL;
          pszDest[3] = 0;
          v148 = *((_DWORD *)v147 + 1);
          if ( (v148 & 0x1FF) != v148 )
            return 0LL;
          if ( (HIDWORD(gStickyKeys) & 2) != 0 )
            CurrentProcessWin32Process = v148 | 2u;
          else
            CurrentProcessWin32Process = v148 & 0xFFFFFFFD;
          *((_DWORD *)v147 + 1) = CurrentProcessWin32Process;
          if ( v9 )
          {
            RtlStringCchPrintfW(v231, 0x28uLL, L"%d");
            updated = FastWriteProfileStringW(0LL, 14LL, L"Flags", v231);
            v11 = updated;
          }
          if ( !v11 )
            goto LABEL_77;
          memmove(gStickyKeys, v147, *(unsigned int *)v147);
          LODWORD(gStickyKeys) = 8;
          if ( (HIDWORD(gStickyKeys) & 1) == 0 && v208[0] )
            xxxTurnOffStickyKeys();
          SetAccessEnabledFlag();
          if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0 )
            xxxCallHook(11, 1uLL, 0LL, 10);
          v129 = 1LL;
LABEL_682:
          PostShellHookMessagesEx(0xBuLL, v129, 0LL);
          goto LABEL_77;
        }
        if ( v5 == 57 )
        {
          if ( v9 )
          {
            RtlStringCchPrintfW(v231, 0x28uLL, L"%d", a2 == 1);
            updated = FastWriteProfileStringW(0LL, 20LL, L"On", v231);
            v11 = updated;
          }
          if ( v11 )
          {
            if ( a2 == 1 )
              gdwPUDFlags |= 0x8000u;
            else
              gdwPUDFlags &= ~0x8000u;
            SetAccessEnabledFlag();
            *(_DWORD *)(gpsi + 2176LL) = (gdwPUDFlags >> 15) & 1;
          }
          goto LABEL_77;
        }
        if ( v5 != 47 )
        {
          switch ( v5 )
          {
            case '0':
              v38 = GetDispInfo(v13, 2LL, v12, CurrentProcessWin32Process);
              MonitorMenuRect = GetMonitorWorkRect(&v215, *(_QWORD *)(v38 + 96));
LABEL_193:
              *(_OWORD *)pszDest = *MonitorMenuRect;
              goto LABEL_77;
            case '2':
              if ( a2 && a2 != 24 )
                return 0LL;
              v54 = pszDest;
              if ( !pszDest || *(_DWORD *)pszDest != 24 )
                return 0LL;
              *(_OWORD *)(pszDest + 2) = *(_OWORD *)((char *)&gFilterKeys + 4);
              *((_DWORD *)v54 + 5) = *((_DWORD *)&gFilterKeys + 5);
              goto LABEL_77;
            case '3':
              v132 = pszDest;
              if ( a2 && a2 != 24 )
                return 0LL;
              if ( !pszDest )
                return 0LL;
              if ( *(_DWORD *)pszDest != 24 )
                return 0LL;
              CurrentProcessWin32Process = *((unsigned int *)pszDest + 2);
              if ( (_DWORD)CurrentProcessWin32Process )
              {
                if ( *((_DWORD *)pszDest + 5) )
                  return 0LL;
              }
              v133 = *((_DWORD *)pszDest + 1);
              if ( (v133 & 0x7F) != v133 )
                return 0LL;
              v12 = (HIDWORD(gFilterKeys) & 2) != 0 ? v133 | 2u : v133 & 0xFFFFFFFD;
              *((_DWORD *)pszDest + 1) = v12;
              if ( (unsigned int)CurrentProcessWin32Process > 0x4E20
                || *((_DWORD *)v132 + 3) > 0x4E20u
                || *((_DWORD *)v132 + 4) > 0x4E20u
                || *((_DWORD *)v132 + 5) > 0x4E20u )
              {
                return 0LL;
              }
              if ( v9 )
              {
                v134 = (struct _UNICODE_STRING *)CreateProfileUserName(v210, 2LL, v12, CurrentProcessWin32Process);
                updated = SetFilterKeys(v134, (struct tagFILTERKEYS *)v132);
                v11 = updated;
                if ( !updated )
                  SetFilterKeys(v134, gFilterKeys);
                FreeProfileUserName(v134, v210);
              }
              if ( !v11 )
                goto LABEL_77;
              memmove(gFilterKeys, v132, *(unsigned int *)v132);
              LODWORD(gFilterKeys) = 24;
              if ( (HIDWORD(gFilterKeys) & 1) == 0 )
                StopFilterKeysTimers();
              SetAccessEnabledFlag();
              if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0 )
                xxxCallHook(11, 2uLL, 0LL, 10);
              v129 = 2LL;
              goto LABEL_682;
          }
          if ( v5 != 52 )
          {
            switch ( v5 )
            {
              case '5':
                v130 = pszDest;
                if ( (a2 & 0xFFFFFFF7) == 0 )
                {
                  if ( pszDest )
                  {
                    if ( *(_DWORD *)pszDest == 8 )
                    {
                      v131 = *((_DWORD *)pszDest + 1);
                      if ( (v131 & 0x3F) == v131 )
                      {
                        if ( (HIDWORD(gToggleKeys) & 2) != 0 )
                          CurrentProcessWin32Process = v131 | 2u;
                        else
                          CurrentProcessWin32Process = v131 & 0xFFFFFFFD;
                        *((_DWORD *)pszDest + 1) = CurrentProcessWin32Process;
                        if ( v9 )
                        {
                          RtlStringCchPrintfW(v231, 0x28uLL, L"%d");
                          updated = FastWriteProfileStringW(0LL, 17LL, L"Flags", v231);
                          v11 = updated;
                        }
                        if ( !v11 )
                          goto LABEL_77;
                        memmove(gToggleKeys, v130, *(unsigned int *)v130);
                        LODWORD(gToggleKeys) = 8;
LABEL_694:
                        SetAccessEnabledFlag();
                        goto LABEL_77;
                      }
                    }
                  }
                }
                return 0LL;
              case '6':
                if ( !a2 || a2 == 28 )
                {
                  v12 = (unsigned __int64)pszDest;
                  if ( pszDest )
                  {
                    if ( *(_DWORD *)pszDest == 28 )
                    {
                      *(_OWORD *)(pszDest + 2) = *(_OWORD *)((char *)&gMouseKeys + 4);
                      *(struct tagMOUSEKEYS **)(v12 + 20) = *(struct tagMOUSEKEYS *const *)((char *)&gMouseKeys + 20);
                      v65 = *(_DWORD *)(v12 + 4) & 0x4CFFFFFF;
                      *(_DWORD *)(v12 + 4) = v65;
                      if ( gbMKMouseMode )
                      {
                        v65 |= 0x80000000;
                        *(_DWORD *)(v12 + 4) = v65;
                      }
                      v66 = v65 | ((gwMKButtonState & 3) << 24);
                      *(_DWORD *)(v12 + 4) = v66;
                      *(_DWORD *)(v12 + 4) = v66 | ((gwMKCurrentButton & 3) << 28);
                      goto LABEL_77;
                    }
                  }
                }
                return 0LL;
              case '7':
                v125 = pszDest;
                if ( a2 && a2 != 28 )
                  return 0LL;
                if ( !pszDest )
                  return 0LL;
                if ( *(_DWORD *)pszDest != 28 )
                  return 0LL;
                v126 = *((_DWORD *)pszDest + 1) & 0x4CFFFFFF;
                *((_DWORD *)pszDest + 1) = v126;
                if ( (unsigned __int8)v126 != v126 )
                  return 0LL;
                v12 = (HIDWORD(gMouseKeys) & 2) != 0 ? v126 | 2u : v126 & 0xFFFFFFFD;
                *((_DWORD *)v125 + 1) = v12;
                if ( (unsigned int)(*((_DWORD *)v125 + 2) - 10) > 0x15E
                  || (unsigned int)(*((_DWORD *)v125 + 3) - 1000) > 0xFA0 )
                {
                  return 0LL;
                }
                if ( v9 )
                {
                  v127 = (struct _UNICODE_STRING *)CreateProfileUserName(v210, 2LL, v12, CurrentProcessWin32Process);
                  updated = SetMouseKeys(v127, (struct tagMOUSEKEYS *)v125);
                  v11 = updated;
                  if ( !updated )
                    SetMouseKeys(v127, gMouseKeys);
                  FreeProfileUserName(v127, v210);
                }
                if ( !v11 )
                  goto LABEL_77;
                memmove(gMouseKeys, v125, *(unsigned int *)v125);
                LODWORD(gMouseKeys) = 28;
                CalculateMouseTable();
                v128 = HIDWORD(gMouseKeys);
                if ( (v128 & 1) != 0 )
                {
                  gbMKMouseMode = ((v128 >> 7) & 1) != (((unsigned __int8)(1 << (2 * (gNumLockVk & 3) + 1)) & gafAsyncKeyState[(unsigned __int64)gNumLockVk >> 2]) != 0);
                  MKShowMouseCursor();
                }
                else
                {
                  MKHideMouseCursor();
                }
                SetAccessEnabledFlag();
                if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0 )
                  xxxCallHook(11, 3uLL, 0LL, 10);
                v129 = 3LL;
                goto LABEL_682;
            }
            v33 = gdwPUDFlags >> 15;
            goto LABEL_129;
          }
          if ( (a2 & 0xFFFFFFF7) != 0 )
            return 0LL;
          v55 = pszDest;
          if ( !pszDest || *(_DWORD *)pszDest != 8 )
            return 0LL;
          v56 = HIDWORD(gToggleKeys);
LABEL_280:
          *((_DWORD *)v55 + 1) = v56;
          goto LABEL_77;
        }
        if ( pszDest )
        {
          if ( *((_DWORD *)pszDest + 2) < *(_DWORD *)pszDest || *((_DWORD *)pszDest + 3) < *((_DWORD *)pszDest + 1) )
            return 0LL;
          v70 = MonitorFromRect((struct tagRECT *)pszDest);
        }
        else
        {
          v70 = *(_QWORD *)(GetDispInfo(v13, 2LL, v12, CurrentProcessWin32Process) + 96);
        }
        v207 = v70;
        v223 = *GetMonitorRect(&v216, v70);
        v71 = (NTSTRSAFE_PWSTR)&v223;
        if ( pszDest )
          v71 = pszDest;
        if ( (unsigned int)IntersectRect(&v220, (int *)v71, (int *)&v223) )
        {
          v72 = (char *)v220 - *(_QWORD *)v71;
          if ( v220 == *(int **)v71 )
            v72 = (char *)(v221 - *((_QWORD *)v71 + 1));
          if ( !v72 )
          {
            v225 = *GetMonitorWorkRect(&v217, v207);
            v75 = v225 - (_QWORD)v220;
            if ( (int *)v225 == v220 )
              v75 = *((_QWORD *)&v225 + 1) - v221;
            if ( v75 )
            {
              v76 = 0LL;
              if ( a2 )
              {
                v76 = SnapshotMonitorRects();
                if ( !v76 )
                  return 0LL;
              }
              if ( (W32GetCurrentThreadDpiAwarenessContext(v74, v73) & 0xF) != 2
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v77) + 448)
                && (v137 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v135) + 448)
                                       + 8LL),
                    (*(_DWORD *)(v137 + 52) & 1) != 0) )
              {
                v138 = *(_QWORD *)(v207 + 40);
                v139 = W32GetCurrentThreadDpiAwarenessContext(v137, v136);
                LogicalToPhysicalDPIRect(v138 + 44, &v220, v139, &v207);
              }
              else
              {
                v80 = v207;
                *(_QWORD *)(*(_QWORD *)(v207 + 40) + 44LL) = v220;
                *(_DWORD *)(*(_QWORD *)(v80 + 40) + 52LL) = v221;
                v81 = *(_QWORD *)(v80 + 40);
                *(_DWORD *)(v81 + 56) = HIDWORD(v221);
              }
              v82 = GetDispInfo(v81, v80, v78, v79);
              if ( v207 == *(_QWORD *)(v82 + 96) )
                UpdateDesktopThresholds();
              if ( a2 )
              {
                PushW32ThreadLock(v76, v214, (__int64)Win32FreePool);
                xxxDesktopRecalc(*(_QWORD *)(gptiCurrent + 448LL), v76);
                PopAndFreeAlwaysW32ThreadLock((__int64)v214);
              }
              updated = 1;
            }
            goto LABEL_487;
          }
        }
        goto LABEL_54;
      }
      v33 = gdwPUDFlags >> 17;
LABEL_129:
      v34 = v33 & 1;
LABEL_130:
      *(_DWORD *)pszDest = v34;
      goto LABEL_77;
    }
    if ( v5 <= 0x57 )
    {
      if ( v5 != 87 )
      {
        switch ( v5 )
        {
          case 'E':
            if ( v9 )
            {
              v151 = L"1";
              if ( !a2 )
                v151 = L"0";
              updated = FastWriteProfileStringW(0LL, 27LL, L"On", v151);
              v11 = updated;
            }
            if ( v11 )
            {
              v14 = a2 == 0;
              v20 = v201;
              if ( v14 )
                gdwPUDFlags &= ~0x20000u;
              else
                gdwPUDFlags |= 0x20000u;
              goto LABEL_78;
            }
            goto LABEL_77;
          case 'F':
            v33 = gdwPUDFlags >> 18;
            goto LABEL_129;
          case 'G':
            if ( v9 )
            {
              v150 = L"1";
              if ( !a2 )
                v150 = L"0";
              updated = FastWriteProfileStringW(0LL, 28LL, L"On", v150);
              v11 = updated;
            }
            if ( v11 )
            {
              v14 = a2 == 0;
              v20 = v201;
              if ( v14 )
                gdwPUDFlags &= ~0x40000u;
              else
                gdwPUDFlags |= 0x40000u;
              goto LABEL_78;
            }
            goto LABEL_77;
          case 'H':
            v55 = pszDest;
            if ( !pszDest || a2 != 8 )
              return 0LL;
            *(_DWORD *)pszDest = 8;
            v56 = *((_WORD *)&gdwPUDFlags + 1) & 1;
            goto LABEL_280;
        }
        if ( v5 != 73 )
        {
          switch ( v5 )
          {
            case 'J':
              v32 = gulFontInformation;
LABEL_128:
              v33 = v32 >> 1;
              goto LABEL_129;
            case 'K':
              if ( (unsigned int)CheckDesktopPolicy(0LL, 200LL, v12, CurrentProcessWin32Process) )
              {
                v9 = 0;
                v11 = 0;
              }
              v149 = a2 != 0 ? 2 : 0;
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 200LL, v149);
                v11 = updated;
              }
              if ( v11 )
                GreSetFontEnumeration(v149 | 4);
              goto LABEL_77;
            case 'L':
              if ( (unsigned int)CheckDesktopPolicy(0LL, 198LL, v12, CurrentProcessWin32Process) )
              {
                v9 = 0;
                v11 = 0;
              }
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 198LL, a2);
                v11 = updated;
              }
              if ( v11 )
                *(_DWORD *)(gpsi + 2168LL) = a2;
              goto LABEL_77;
            case 'M':
              if ( (unsigned int)CheckDesktopPolicy(0LL, 199LL, v12, CurrentProcessWin32Process) )
              {
                v9 = 0;
                v11 = 0;
              }
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 199LL, a2);
                v11 = updated;
              }
              if ( v11 )
                *(_DWORD *)(gpsi + 2172LL) = a2;
              goto LABEL_77;
          }
LABEL_69:
          if ( v5 < 0xAE )
          {
            v23 = 1439LL;
            goto LABEL_55;
          }
          v24 = v5 & 0x3000;
          if ( (v5 & 1) == 0 )
          {
            CurrentProcessWin32Process = 4096LL;
            if ( v24 == 4096 )
            {
              v12 = 0LL;
              v25 = 0;
              if ( v5 >= 0x103E )
                goto LABEL_73;
              if ( (int)gpdwCPUserPreferencesMask >= 0 )
              {
                switch ( v5 )
                {
                  case 0x1000u:
                    goto LABEL_73;
                  case 0x100Au:
                    v12 = 1LL;
                    goto LABEL_951;
                  case 0x100Cu:
                  case 0x101Cu:
                    goto LABEL_73;
                }
                v35 = v5 == 4126;
              }
              else
              {
                switch ( v5 )
                {
                  case 0x1008u:
                    goto LABEL_186;
                  case 0x100Au:
                    v12 = (gdwPUDFlags >> 17) & 1;
                    v25 = (gdwPUDFlags >> 17) & 1;
                    goto LABEL_73;
                  case 0x1012u:
                  case 0x1014u:
                  case 0x1018u:
                  case 0x101Au:
LABEL_186:
                    if ( gbDisableAlpha )
                      v25 = 1;
                    goto LABEL_73;
                }
                if ( v5 != 4132 )
                {
LABEL_73:
                  if ( v25 )
                  {
                    *(_DWORD *)pszDest = v12;
                    goto LABEL_77;
                  }
                  if ( v5 == 4158 && gProtocolType )
                  {
                    v173 = ((unsigned __int16)gpdwCPUserPreferencesMask & 0x3A0E) == 0;
LABEL_255:
                    v34 = !v173;
                    goto LABEL_130;
                  }
                  v12 = (unsigned __int8)(((v5 - 4096) >> 1) - 32 * ((v5 - 4096) >> 6));
                  v26 = *((_DWORD *)&gpdwCPUserPreferencesMask + ((unsigned __int64)(v5 - 4096) >> 6));
                  v27 = _bittest(&v26, v12);
LABEL_76:
                  *(_DWORD *)pszDest = v27;
                  goto LABEL_77;
                }
                if ( gbDisableAlpha )
                {
LABEL_951:
                  v25 = 1;
                  goto LABEL_73;
                }
                v35 = gcOverlays == 0;
              }
              if ( v35 )
                goto LABEL_73;
              goto LABEL_951;
            }
            v29 = (int *)UPDWORDPointer(v5);
            v30 = *v29;
            *(_DWORD *)pszDest = *v29;
            if ( v5 != 8204 )
              goto LABEL_77;
            v20 = v201;
            if ( v30 )
              goto LABEL_78;
            v31 = gulGamma;
LABEL_94:
            *(_DWORD *)pszDest = v31;
            goto LABEL_78;
          }
          v174 = CreateProfileUserName(v210, 2LL, v12, CurrentProcessWin32Process);
          v207 = v174;
          if ( v24 != 4096 )
          {
            if ( *(_DWORD *)(UPDWORDPointer(v5) + 4) == 4 )
            {
              v193 = UPDWORDPointer(v5);
              if ( (unsigned int)CheckDesktopPolicy(v207, *(_QWORD *)(v193 + 8), v194, v195) )
              {
                v9 = 0;
                v11 = 0;
              }
            }
            if ( v9 )
            {
              v196 = UPDWORDPointer(v5);
              v197 = UPDWORDPointer(v201);
              updated = FastWriteProfileValue(
                          v207,
                          *(unsigned int *)(v197 + 4),
                          *(_QWORD *)(v196 + 8),
                          4LL,
                          &pszDest,
                          4);
              v11 = updated;
              v5 = v201;
            }
            v208[0] = *(_DWORD *)UPDWORDPointer(v5);
            if ( v11 )
            {
              v198 = (int)pszDest;
              v20 = v201;
              *(_DWORD *)UPDWORDPointer(v201) = v198;
              switch ( v201 )
              {
                case 0x2007u:
                  *(_DWORD *)(gpsi + 7008LL) = *(_DWORD *)UPDWORDPointer(8199LL);
                  break;
                case 0x200Bu:
                  v200 = (_BYTE *)UPDWORDPointer(8203LL);
                  GreSetFontEnumeration(8 * (*v200 & 2 | 4));
                  break;
                case 0x200Du:
                  gulGamma = *(_DWORD *)UPDWORDPointer(8205LL);
                  break;
                case 0x200Fu:
                  if ( *(_DWORD *)UPDWORDPointer(8207LL) )
                    *(_DWORD *)(gpsi + 2228LL) = *(_DWORD *)UPDWORDPointer(8207LL);
                  break;
                case 0x2011u:
                  if ( *(_DWORD *)UPDWORDPointer(8209LL) )
                    *(_DWORD *)(gpsi + 2232LL) = *(_DWORD *)UPDWORDPointer(8209LL);
                  break;
                case 0x2013u:
                  v14 = (*(_DWORD *)UPDWORDPointer(8211LL) & 1) == 0;
                  v199 = &dword_1C02D5B60;
                  if ( v14 )
                    v199 = (int *)&unk_1C02E49B0;
                  off_1C031C100 = v199;
                  break;
                case 0x201Du:
                  TraceLoggingMouseWheelRoutingModeChange((unsigned int)pszDest);
                  break;
                case 0x201Fu:
                  TraceLoggingSPISetPenVisualizationEvent(v208[0], (unsigned int)pszDest);
                  break;
              }
              goto LABEL_976;
            }
LABEL_975:
            v20 = v201;
LABEL_976:
            FreeProfileUserName(v207, v210);
            goto LABEL_78;
          }
          if ( *((_DWORD *)&gpviCPUserPreferences + 1) == 4 )
          {
            v176 = CheckDesktopPolicy(v174, *((_QWORD *)&gpviCPUserPreferences + 1), v175, 4096LL);
            v174 = v207;
            if ( v176 )
            {
              v9 = 0;
              v11 = 0;
            }
          }
          if ( v9 )
          {
            ProfileValue = FastGetProfileValue(
                             v174,
                             *((unsigned int *)&gpviCPUserPreferences + 1),
                             *((_QWORD *)&gpviCPUserPreferences + 1),
                             0LL,
                             v211,
                             8,
                             0);
            memmove((char *)v211 + ProfileValue, (char *)&gpdwCPUserPreferencesMask + ProfileValue, 8LL - ProfileValue);
            v178 = v5 - 4096;
            v179 = 1 << (((v5 - 4096) >> 1) - 32 * ((v5 - 4096) >> 6));
            v180 = (unsigned __int64)(v5 - 4096) >> 6;
            if ( pszDest )
              v211[v180] |= v179;
            else
              v211[v180] &= ~v179;
            updated = FastWriteProfileValue(
                        v207,
                        *((unsigned int *)&gpviCPUserPreferences + 1),
                        *((_QWORD *)&gpviCPUserPreferences + 1),
                        3LL,
                        v211,
                        8);
            v11 = updated;
          }
          else
          {
            v178 = v5 - 4096;
          }
          if ( !v11 )
            goto LABEL_975;
          v181 = (unsigned int)(1 << ((v178 >> 1) - 32 * (v178 >> 6)));
          v182 = (unsigned __int64)v178 >> 6;
          if ( pszDest )
          {
            *((_DWORD *)&gpdwCPUserPreferencesMask + v182) |= v181;
          }
          else
          {
            v181 = (unsigned int)~(_DWORD)v181;
            *((_DWORD *)&gpdwCPUserPreferencesMask + v182) &= v181;
          }
          if ( v5 <= 0x1023 )
          {
            if ( v5 == 4131 )
            {
LABEL_983:
              v190 = *(_QWORD *)(gptiCurrent + 448LL);
              if ( v190 )
                v191 = *(struct tagWND **)(*(_QWORD *)(v190 + 8) + 24LL);
              else
                v191 = 0LL;
              xxxInternalInvalidate(v191, (HRGN)1, 0x10485u);
              goto LABEL_975;
            }
            v183 = v5 - 4101;
            if ( v183 )
            {
              v184 = v183 - 2;
              if ( v184 )
              {
                v185 = v184 - 2;
                if ( v185 )
                {
                  v186 = v185 - 2;
                  if ( v186 )
                  {
                    if ( v186 == 16 )
                      SetPointer(1LL);
                    goto LABEL_975;
                  }
                  v187 = gpsi;
                  v188 = *(_DWORD *)(gpsi + 7004LL);
                  v189 = ((unsigned __int8)v188 ^ (unsigned __int8)gpdwCPUserPreferencesMask) & 0x20;
                  goto LABEL_979;
                }
                goto LABEL_982;
              }
              v187 = gpsi;
              v188 = *(_DWORD *)(gpsi + 7004LL);
              v189 = ((unsigned __int8)v188 ^ (unsigned __int8)gpdwCPUserPreferencesMask) & 8;
            }
            else
            {
              v187 = gpsi;
              v188 = *(_DWORD *)(gpsi + 7004LL);
              v189 = ((unsigned __int8)v188 ^ (unsigned __int8)gpdwCPUserPreferencesMask) & 4;
            }
LABEL_979:
            *(_DWORD *)(v187 + 7004) = v188 ^ v189;
            goto LABEL_975;
          }
          if ( v5 == 4133 )
          {
            v192 = (void *)ReferenceDwmApiPort(v182, v181, v175);
            DwmAsyncNotifyWindowShadowChange(v192);
            goto LABEL_975;
          }
          if ( v5 != 4159 )
          {
            if ( v5 == 4175 || v5 == 4177 )
              xxxWindowEvent(0x80000007, 0LL, v5, pszDest != 0LL, 0);
            goto LABEL_975;
          }
          *(_DWORD *)(gpsi + 7004LL) ^= (*(_DWORD *)(gpsi + 7004LL) ^ (unsigned int)gpdwCPUserPreferencesMask) & 0x80000000;
          SetPointer(1LL);
LABEL_982:
          CreateBitmapStrip();
          goto LABEL_983;
        }
LABEL_460:
        v69 = xxxSetSPIMetrics(0LL, v5, (struct tagMINIMIZEDMETRICS *)pszDest, v9, &v204);
        updated = v204;
        if ( v69 )
        {
          if ( v9 )
            v11 = v204;
        }
        else
        {
          v11 = 0;
        }
        RtlLoadStringOrError(135LL, v232, 40LL);
        goto LABEL_77;
      }
      v83 = CreateProfileUserName(v210, 2LL, v12, CurrentProcessWin32Process);
      xxxUpdateSystemCursorsFromRegistry(v83);
      goto LABEL_496;
    }
    if ( v5 != 88 )
    {
      switch ( v5 )
      {
        case 'Y':
          if ( gspklBaseLayout )
          {
            *(_QWORD *)pszDest = *(_QWORD *)(gspklBaseLayout + 40LL);
            goto LABEL_77;
          }
          v23 = 21LL;
LABEL_55:
          UserSetLastError(v23, v10);
          return 0LL;
        case 'Z':
          v153 = HKLtoPKL(gptiCurrent, *(_QWORD *)pszDest, v12, CurrentProcessWin32Process);
          if ( v153 )
          {
            if ( v11 )
            {
              *(_QWORD *)&v212 = gspklBaseLayout;
              *((_QWORD *)&v212 + 1) = v153;
              v213 = v212;
              HMAssignmentLock(&v213);
            }
            goto LABEL_77;
          }
          return 0LL;
        case '[':
          return GetKbdLangSwitch(0LL);
        case ']':
          if ( v9 )
          {
            RtlStringCchPrintfW(v231, 0x28uLL, L"%d", a2);
            updated = FastUpdateWinIni(0LL, 12LL, 613LL, v231);
            v11 = updated;
          }
          if ( v11 )
            SetMouseTrails(a2);
          goto LABEL_77;
        case '^':
          v34 = gMouseTrails + 1;
          if ( !gMouseTrails )
            v34 = 0;
          goto LABEL_130;
      }
      if ( v5 != 95 )
      {
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 12LL, 7LL, a2 != 0);
          v11 = updated;
        }
        if ( v11 )
        {
          v21 = v202;
          v14 = a2 == 0;
          v20 = v201;
          if ( v14 )
            *(_DWORD *)(gpsi + 7004LL) &= ~2u;
          else
            *(_DWORD *)(gpsi + 7004LL) |= 2u;
          goto LABEL_47;
        }
        goto LABEL_77;
      }
      v152 = *(_DWORD *)(gpsi + 7004LL) >> 1;
      goto LABEL_809;
    }
    v83 = CreateProfileUserName(v210, 2LL, v12, CurrentProcessWin32Process);
    xxxUpdateSystemIconsFromRegistry(v83);
    goto LABEL_496;
  }
  if ( v5 == 46 )
    goto LABEL_460;
  if ( v5 <= 0x19 )
  {
    if ( v5 == 25 )
    {
      v33 = gdwPUDFlags >> 21;
      goto LABEL_129;
    }
    if ( v5 > 0xE )
    {
      if ( v5 != 15 )
      {
        if ( v5 == 16 )
        {
          v34 = giScreenSaveTimeOutMs > 0;
          goto LABEL_130;
        }
        if ( v5 != 17 )
        {
          switch ( v5 )
          {
            case 0x14u:
              v83 = CreateProfileUserName(v210, 2LL, v12, CurrentProcessWin32Process);
              if ( (unsigned int)CheckDesktopPolicy(v83, 67LL, v84, v85) )
              {
                v9 = 0;
                v11 = 0;
              }
              if ( v9 )
              {
                if ( a2 == -1 )
                {
                  v11 = 1;
                }
                else
                {
                  FastGetProfileStringFromIDW(v83, 4LL, 67LL, &pwsz, v233, 260, 8);
                  updated = FastUpdateWinIni(v83, 4LL, 67LL, pszDest);
                  v11 = updated;
                }
              }
              if ( !v11 )
                goto LABEL_496;
              if ( (unsigned int)xxxSetDeskWallpaper(v83, pszDest) )
              {
                xxxInvalidateWallpaperWindow();
              }
              else
              {
                if ( v9 )
                {
                  if ( a2 == -1 )
                    goto LABEL_496;
                  FastUpdateWinIni(v83, 4LL, 67LL, v233);
                }
                v11 = 0;
                updated = 0;
              }
LABEL_496:
              v86 = v83;
LABEL_497:
              FreeProfileUserName(v86, v210);
              goto LABEL_77;
            case 0x15u:
              *(_QWORD *)v208 = pszDest;
              if ( a2 != -1 || !pszDest )
              {
                v46 = (struct _UNICODE_STRING *)CreateProfileUserName(v210, 2LL, v12, CurrentProcessWin32Process);
                if ( (unsigned int)CheckDesktopPolicy(v46, 2LL, v47, v48) )
                {
                  v9 = 0;
                  v11 = 0;
                }
                if ( v9 && *(_QWORD *)v208 )
                {
                  FastGetProfileStringFromIDW(v46, 4LL, 2LL, &pwsz, v233, 260, 0);
                  updated = FastUpdateWinIni(v46, 4LL, 2LL, *(_QWORD *)v208);
                  v11 = updated;
                }
                if ( v11 )
                {
                  if ( !(unsigned int)SetDesktopPattern(v46, *(_QWORD *)v208) )
                  {
                    if ( v9 && *(_QWORD *)v208 )
                      FastUpdateWinIni(v46, 4LL, 2LL, v233);
                    FreeProfileUserName(v46, v210);
                    return 0LL;
                  }
                  xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x15u, 0LL, 0LL, 1);
                  v120 = *(_QWORD *)(gptiCurrent + 448LL);
                  if ( v120 )
                    v102 = *(struct tagWND **)(*(_QWORD *)(v120 + 8) + 24LL);
                  else
                    v102 = 0LL;
                  xxxInternalInvalidate(v102, (HRGN)1, 0x10485u);
                }
LABEL_557:
                v86 = (__int64)v46;
                goto LABEL_497;
              }
LABEL_54:
              v23 = 87LL;
              goto LABEL_55;
            case 0x16u:
              v34 = (gnKeyboardSpeed >> 5) & 3;
              goto LABEL_130;
            case 0x17u:
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 13LL, 106LL, a2);
                v11 = updated;
              }
              if ( !v11 )
                goto LABEL_77;
              gnKeyboardSpeed = gnKeyboardSpeed & 0xFFFFFF9F | (32 * a2);
              goto LABEL_315;
          }
          if ( v5 != 24 )
            goto LABEL_69;
          if ( ((unsigned __int64)pszDest & 0xFFFFFFFFFFFF0000uLL) == 0 )
          {
            if ( a2 )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v13, 2LL) & 0xF) != 0 )
              {
                v115 = PsGetCurrentProcessWin32Process(v113);
                v114 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), *(unsigned __int16 *)(v115 + 284));
                v117 = PsGetCurrentProcessWin32Process(v116);
                a2 = EngMulDiv(v114, 96, *(unsigned __int16 *)(v117 + 284));
              }
              else
              {
                v114 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), 96);
              }
              v12 = gpsi;
              v118 = *(_DWORD *)(gpsi + 2308LL);
              if ( v114 > v118 )
                v118 = v114;
              v119 = *(_DWORD *)(gpsi + 2428LL);
              if ( a2 > v119 )
                v119 = a2;
              if ( v9 )
              {
                updated = SetWindowMetricInt(0LL, 0x41u, v118);
                v11 = updated;
              }
              if ( v11 )
              {
                SetDpiDepSysMet(19LL);
                *(_DWORD *)(gpsi + 2480LL) = v119;
              }
            }
            goto LABEL_77;
          }
          DpiForSystem = GetDpiForSystem();
          v89 = 19LL;
          goto LABEL_530;
        }
        if ( a2 - 2 <= 0xFFFFFFFC )
          return 0LL;
        if ( gdwRITdemonLockState && !(_DWORD)v12 )
        {
LABEL_613:
          v23 = 329LL;
          goto LABEL_55;
        }
        gbLockConsoleActive = a2 == -1;
        if ( gfSwitchInProgress )
          return 0LL;
        if ( (unsigned int)CheckDesktopPolicy(0LL, 100LL, v12, CurrentProcessWin32Process) )
        {
          v9 = 0;
          v11 = 0;
          v205 = 0;
        }
        if ( v9 )
        {
          updated = UpdateWinIniInt(0LL, 4LL, 100LL, a2);
          v204 = updated;
          v11 = updated;
          v205 = updated;
        }
        if ( !v11 )
          goto LABEL_77;
        if ( !gbBlockSendInputResets )
        {
          CInputGlobals::UpdateLastInputTime(
            gpInputGlobals,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
            6LL);
          updated = v204;
          v11 = v205;
        }
        if ( giScreenSaveTimeOutMs < 0 )
        {
          if ( a2 )
            goto LABEL_345;
          if ( giScreenSaveTimeOutMs < 0 )
            goto LABEL_77;
        }
        if ( a2 )
          goto LABEL_77;
LABEL_345:
        giScreenSaveTimeOutMs = -giScreenSaveTimeOutMs;
        goto LABEL_77;
      }
      v220 = (int *)giScreenSaveTimeOutMs;
      if ( gfSwitchInProgress )
        return 0LL;
      if ( gdwRITdemonLockState && !(_DWORD)v12 )
        goto LABEL_613;
      v59 = 1000 * a2;
      v60 = 1000 * GetEasTimeout();
      LODWORD(v209) = v60;
      v64 = v220;
      if ( v60 )
      {
        if ( *v220 > 0 && v60 < v59 || v59 <= 0 )
        {
          UserSetLastError(1260LL, v61);
          v9 = 0;
          v11 = 0;
          v205 = 0;
        }
      }
      else
      {
        v8 = 0;
      }
      if ( (unsigned int)CheckDesktopPolicy(0LL, 99LL, v62, v63) )
      {
        if ( v8 )
        {
          v206 = 0;
          if ( !(unsigned int)FastGetProfileIntFromID(0LL, 4LL, 99LL, 0LL, &v206, 2) )
            goto LABEL_351;
          v122 = 1000 * v206;
          v206 = v122;
          if ( !v122 || v122 >= (int)v209 || *v64 <= 0 || v122 >= v59 )
            goto LABEL_351;
          UserSetLastError(1260LL, v121);
        }
        v205 = 0;
        v11 = 0;
        v9 = 0;
      }
LABEL_351:
      if ( v9 )
      {
        updated = UpdateWinIniInt(0LL, 4LL, 99LL, v59 / 0x3E8u);
        v204 = updated;
        v11 = updated;
        v205 = updated;
      }
      if ( v11 )
      {
        if ( !gbBlockSendInputResets )
        {
          CInputGlobals::UpdateLastInputTime(
            gpInputGlobals,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
            6LL);
          updated = v204;
          v11 = v205;
        }
        if ( *v64 < 0 && !v8 )
          v59 = -v59;
        *v64 = v59;
      }
      goto LABEL_77;
    }
    switch ( v5 )
    {
      case 0xEu:
        v27 = (int)abs32(giScreenSaveTimeOutMs) / 1000;
        goto LABEL_76;
      case 1u:
        v33 = gdwPUDFlags >> 19;
        goto LABEL_129;
      case 2u:
        if ( v9 )
        {
          RtlLoadStringOrError(105 - (unsigned int)(a2 != 0), v231, 10LL);
          updated = FastUpdateWinIni(0LL, 11LL, 9LL, v231);
          v11 = updated;
        }
        if ( v11 )
        {
          v14 = a2 == 0;
          v20 = v201;
          if ( v14 )
            gdwPUDFlags &= ~0x80000u;
          else
            gdwPUDFlags |= 0x80000u;
          goto LABEL_78;
        }
        goto LABEL_77;
      case 3u:
        *(_DWORD *)pszDest = gMouseThresh1;
        v112 = (unsigned int)gMouseThresh2;
        *((_DWORD *)pszDest + 1) = gMouseThresh2;
        *((_DWORD *)pszDest + 2) = (unsigned __int8)MouseAccelerationEnabled(v112, 2LL, v12, CurrentProcessWin32Process);
        goto LABEL_77;
    }
    if ( v5 != 4 )
    {
      switch ( v5 )
      {
        case 5u:
          v34 = *(_DWORD *)(GetDPIServerInfo(v13, 2LL, v12, CurrentProcessWin32Process) + 4);
          goto LABEL_130;
        case 6u:
          v98 = 1;
          if ( (int)a2 > 1 )
            v98 = a2;
          if ( v98 >= 0x32 )
            v98 = 50;
          if ( v98 == (__int64)*(int *)(GetDPIServerInfo(v13, 2LL, v12, CurrentProcessWin32Process) + 4) )
            goto LABEL_487;
          v100 = (struct _UNICODE_STRING *)CreateProfileUserName(v210, v99, v12, CurrentProcessWin32Process);
          v46 = v100;
          if ( v9 )
          {
            updated = SetWindowMetricInt(v100, 0x88u, v98);
            v11 = updated;
          }
          if ( v11 )
          {
            xxxSetAndDrawNCMetrics(v46, v98, 0LL);
            ProcessDpiServerInfo = GetProcessDpiServerInfo();
            bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), *(_DWORD *)(ProcessDpiServerInfo + 4) + 3);
          }
          goto LABEL_557;
        case 0xAu:
          v34 = gnKeyboardSpeed & 0x1F;
          goto LABEL_130;
        case 0xBu:
          v57 = 31;
          if ( a2 <= 0x1F )
            v57 = a2;
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 13LL, 13LL, v57);
            v11 = updated;
          }
          if ( !v11 )
            goto LABEL_77;
          gnKeyboardSpeed = v57 | gnKeyboardSpeed & 0xFFFFFFE0;
LABEL_315:
          SetKeyboardRate(v13, v10, v12, CurrentProcessWin32Process);
          goto LABEL_77;
      }
      if ( v5 != 13 )
        goto LABEL_69;
      if ( ((unsigned __int64)pszDest & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        DpiForSystem = GetDpiForSystem();
        v89 = 18LL;
LABEL_530:
        UserHandedness = GetDpiDependentMetric(v89, DpiForSystem);
        goto LABEL_532;
      }
      if ( !a2 )
        goto LABEL_77;
      if ( (W32GetCurrentThreadDpiAwarenessContext(v13, 2LL) & 0xF) != 0 )
      {
        v93 = PsGetCurrentProcessWin32Process(v91);
        v92 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), *(unsigned __int16 *)(v93 + 284));
        v95 = PsGetCurrentProcessWin32Process(v94);
        a2 = EngMulDiv(v92, 96, *(unsigned __int16 *)(v95 + 284));
      }
      else
      {
        v92 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), 96);
      }
      v96 = *(_DWORD *)(gpsi + 2304LL);
      if ( v92 > v96 )
        v96 = v92;
      v97 = *(_DWORD *)(gpsi + 2424LL);
      if ( a2 > v97 )
        v97 = a2;
      if ( v9 )
      {
        updated = SetWindowMetricInt(0LL, 0x40u, v96);
        v11 = updated;
      }
      if ( v11 )
      {
        SetDpiDepSysMet(18LL);
        *(_DWORD *)(gpsi + 2476LL) = v97;
        goto LABEL_77;
      }
      v21 = v202;
LABEL_849:
      v20 = v201;
      goto LABEL_47;
    }
    if ( !v9 )
    {
LABEL_570:
      if ( v11 )
      {
        v111 = pszDest;
        gMouseThresh1 = *(_DWORD *)pszDest;
        gMouseThresh2 = *((_DWORD *)pszDest + 1);
        LOBYTE(v111) = *((_DWORD *)pszDest + 2) != 0;
        EnableMouseAcceleration(v111);
      }
      goto LABEL_77;
    }
    v103 = CreateProfileUserName(v210, 2LL, v12, CurrentProcessWin32Process);
    v206 = UpdateWinIniInt(v103, 12LL, 10LL, *(unsigned int *)pszDest);
    v104 = UpdateWinIniInt(v103, 12LL, 11LL, *((unsigned int *)pszDest + 1));
    v105 = UpdateWinIniInt(v103, 12LL, 12LL, *((unsigned int *)pszDest + 2));
    LODWORD(v209) = v105;
    v109 = v206;
    if ( v206 )
    {
      if ( v104 && v105 )
      {
        updated = 1;
LABEL_569:
        v11 = updated;
        FreeProfileUserName(v103, v210);
        goto LABEL_570;
      }
      UpdateWinIniInt(v103, 12LL, 10LL, (unsigned int)gMouseThresh1);
    }
    if ( v104 )
      UpdateWinIniInt(v103, 12LL, 11LL, (unsigned int)gMouseThresh2);
    if ( (_DWORD)v209 )
    {
      v110 = MouseAccelerationEnabled(v109, v106, v107, v108);
      UpdateWinIniInt(v103, 12LL, 12LL, v110);
    }
    goto LABEL_569;
  }
  if ( v5 <= 0x23 )
  {
    switch ( v5 )
    {
      case 0x23u:
        *(_DWORD *)pszDest = 1;
        goto LABEL_77;
      case 0x1Au:
        if ( v9 )
        {
          updated = SetWindowMetricInt(0LL, 0x42u, a2 != 0);
          v11 = updated;
        }
        if ( v11 )
        {
          if ( a2 )
            gdwPUDFlags |= 0x200000u;
          else
            gdwPUDFlags &= ~0x200000u;
          xxxMetricsRecalc(2, 0, 0, 0, 0, 0, 0);
        }
        goto LABEL_77;
      case 0x1Bu:
        v27 = *(_DWORD *)(gpsi + 2056LL);
        goto LABEL_76;
    }
    if ( v5 != 28 )
    {
      switch ( v5 )
      {
        case 0x1Du:
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 97LL, a2);
            v11 = updated;
          }
          if ( v11 )
            *(_DWORD *)(gpsi + 2040LL) = a2;
          goto LABEL_77;
        case 0x1Eu:
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 98LL, a2);
            v11 = updated;
          }
          if ( v11 )
            *(_DWORD *)(gpsi + 2044LL) = a2;
          goto LABEL_77;
        case 0x1Fu:
          DPIMetrics = GetDPIMetrics(v13, 2LL);
          v45 = (char *)pszDest;
          goto LABEL_221;
        case 0x20u:
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 6LL, a2);
            v11 = updated;
          }
          if ( v11 )
            SetDoubleClickTime(a2, v10, v12, CurrentProcessWin32Process);
          goto LABEL_77;
        case 0x21u:
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 12LL, 5LL, a2);
            v11 = updated;
          }
          if ( v11 )
            SwapMouseButton(a2 != 0, v10, v12, CurrentProcessWin32Process);
          goto LABEL_77;
      }
      if ( pszDest )
      {
        if ( a2 != 92 )
          return 0LL;
      }
      else if ( a2 )
      {
        return 0LL;
      }
      v123 = (struct _UNICODE_STRING *)CreateProfileUserName(v210, 2LL, v12, CurrentProcessWin32Process);
      v124 = xxxSetSPIMetrics(v123, 34LL, (struct tagMINIMIZEDMETRICS *)pszDest, v9, &v204);
      FreeProfileUserName(v123, v210);
      if ( v124 )
      {
        updated = v204;
        v20 = v201;
        v21 = v202;
        if ( v9 )
          v11 = v204;
        goto LABEL_47;
      }
      v11 = 0;
LABEL_364:
      updated = v204;
      goto LABEL_77;
    }
LABEL_445:
    if ( v9 )
    {
      updated = UpdateWinIniInt(0LL, 3LL, 96LL, a2);
      v11 = updated;
    }
    if ( v11 )
    {
      v67 = *(_DWORD *)(gpsi + 2056LL);
      v68 = a2 != 0;
      *(_DWORD *)(gpsi + 2056LL) = v68;
      TraceLoggingSPISetMenuDropAlignmentEvent(v67, v68);
    }
    goto LABEL_77;
  }
  switch ( v5 )
  {
    case '$':
      goto LABEL_77;
    case '%':
      if ( (unsigned int)CheckDesktopPolicy(0LL, 107LL, v12, CurrentProcessWin32Process) )
      {
        v9 = 0;
        v11 = 0;
      }
      if ( v9 )
      {
        updated = UpdateWinIniInt(0LL, 4LL, 107LL, a2 == 1);
        v11 = updated;
      }
      if ( v11 )
      {
        v14 = a2 == 1;
        v20 = v201;
        if ( v14 )
          gdwPUDFlags |= 0x100000u;
        else
          gdwPUDFlags &= ~0x100000u;
        goto LABEL_78;
      }
      goto LABEL_77;
    case '&':
      v33 = gdwPUDFlags >> 20;
      goto LABEL_129;
  }
  if ( v5 != 41 )
  {
    switch ( v5 )
    {
      case '*':
        goto LABEL_460;
      case '+':
        CurrentProcessWin32Process = (__int64)pszDest;
        *(_DWORD *)pszDest = 20;
        v12 = gpsi;
        *(_DWORD *)(CurrentProcessWin32Process + 4) = *(_DWORD *)(gpsi + 2124LL) - 6;
        *(_DWORD *)(CurrentProcessWin32Process + 8) = *(_DWORD *)(gpsi + 2084LL) - *(_DWORD *)(gpsi + 2124LL);
        *(_DWORD *)(CurrentProcessWin32Process + 12) = *(_DWORD *)(gpsi + 2088LL) - *(_DWORD *)(gpsi + 2128LL);
        *(_DWORD *)(CurrentProcessWin32Process + 16) = *(_DWORD *)(gpsi + 2120LL);
        goto LABEL_77;
      case ',':
        goto LABEL_460;
    }
    v49 = pszDest;
    *(_DWORD *)pszDest = 108;
    v50 = GetDpiForSystem();
    *((_DWORD *)v49 + 1) = GetDpiDependentMetric(18LL, v50);
    v51 = GetDpiForSystem();
    *((_DWORD *)v49 + 2) = GetDpiDependentMetric(19LL, v51);
    v52 = (gdwPUDFlags >> 21) & 1;
    *((_DWORD *)v49 + 3) = v52;
    DPIMetrics = GetDPIMetrics(v52, v53);
    v45 = (char *)(v49 + 8);
LABEL_221:
    GreExtGetObjectW(*(HBRUSH *)(DPIMetrics + 64), 92LL, v45);
    goto LABEL_77;
  }
  if ( !pszDest )
    return 0LL;
  GetWindowNCMetrics((__int64)pszDest);
LABEL_77:
  v20 = v201;
LABEL_78:
  v21 = v202;
LABEL_47:
  if ( updated )
  {
    if ( v21 )
      EditionxxxBroadcastSPIChange(v20, v232, v12, CurrentProcessWin32Process);
  }
  return v11;
}
