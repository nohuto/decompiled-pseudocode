/*
 * XREFs of xxxSystemParametersInfoWorker @ 0x1C00A8724
 * Callers:
 *     EditionxxxSystemParametersInfoWorker @ 0x1C00A8710 (EditionxxxSystemParametersInfoWorker.c)
 * Callees:
 *     IsRemoteConnection @ 0x1C0018210 (IsRemoteConnection.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxInternalInvalidate @ 0x1C0039F20 (xxxInternalInvalidate.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     GreExtGetObjectW @ 0x1C00549E8 (GreExtGetObjectW.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     RtlStringCchCopyW @ 0x1C006B110 (RtlStringCchCopyW.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C006F000 (IsWindowUnderActiveLockScreen.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?EqualRectInl@@YAKPEBUtagRECT@@0@Z @ 0x1C0079A6C (-EqualRectInl@@YAKPEBUtagRECT@@0@Z.c)
 *     _MonitorFromRect @ 0x1C007A8E0 (_MonitorFromRect.c)
 *     CheckWinstaAttributeAccess @ 0x1C00A56F0 (CheckWinstaAttributeAccess.c)
 *     CheckGrantedAccess @ 0x1C00AA204 (CheckGrantedAccess.c)
 *     ReadPointerDeviceSettings @ 0x1C00AA230 (ReadPointerDeviceSettings.c)
 *     GetWindowNCMetrics @ 0x1C00AA6A4 (GetWindowNCMetrics.c)
 *     GetDPIMetrics @ 0x1C00AB99C (GetDPIMetrics.c)
 *     GetDPIServerInfo @ 0x1C00AB9F8 (GetDPIServerInfo.c)
 *     GetProcessDpiServerInfo @ 0x1C00ABA24 (GetProcessDpiServerInfo.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     PostShellHookMessages @ 0x1C00B3920 (PostShellHookMessages.c)
 *     GetMonitorWorkRect @ 0x1C00B7058 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C00B709C (GetMonitorRect.c)
 *     xxxDesktopRecalc @ 0x1C00BCB48 (xxxDesktopRecalc.c)
 *     SetMouseTrails @ 0x1C00BD258 (SetMouseTrails.c)
 *     SetPointer @ 0x1C00BD490 (SetPointer.c)
 *     GreSetFontEnumeration @ 0x1C00BE788 (GreSetFontEnumeration.c)
 *     GreSetLCDOrientation @ 0x1C00BE7D4 (GreSetLCDOrientation.c)
 *     GetEasTimeout @ 0x1C00BE908 (GetEasTimeout.c)
 *     GetKbdLangSwitch @ 0x1C00BEDE0 (GetKbdLangSwitch.c)
 *     CreateBitmapStrip @ 0x1C00C0060 (CreateBitmapStrip.c)
 *     ?UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z @ 0x1C00C0944 (-UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z.c)
 *     UpdateDesktopThresholds @ 0x1C00C09B0 (UpdateDesktopThresholds.c)
 *     bSetDevDragWidth @ 0x1C00C0E1C (bSetDevDragWidth.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C00C14C4 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 *     ??4RedirectedRecttagMONITORrcWorkReal@tagMONITOR@@QEAAAEBUtagRECT@@AEBU2@@Z @ 0x1C00CDE2C (--4RedirectedRecttagMONITORrcWorkReal@tagMONITOR@@QEAAAEBUtagRECT@@AEBU2@@Z.c)
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SwapSystemCursorReason@@@Z @ 0x1C00DA894 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SwapSystemCursorReas.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00DBFCC (xxxUpdateSystemIconsFromRegistry.c)
 *     SetKeyboardRate @ 0x1C00EBF50 (SetKeyboardRate.c)
 *     RtlStringCchPrintfW @ 0x1C00F0EE8 (RtlStringCchPrintfW.c)
 *     SetDesktopPattern @ 0x1C0101590 (SetDesktopPattern.c)
 *     _GetIMEShowStatus @ 0x1C011D650 (_GetIMEShowStatus.c)
 *     ClearKeyboardStates @ 0x1C0121B00 (ClearKeyboardStates.c)
 *     _SetDoubleClickTime @ 0x1C0126440 (_SetDoubleClickTime.c)
 *     GetPrimaryMonitor @ 0x1C012D1D4 (GetPrimaryMonitor.c)
 *     ?PostWindowArrangementCheck@@YAXK@Z @ 0x1C012DF64 (-PostWindowArrangementCheck@@YAXK@Z.c)
 *     xxxSetDeskWallpaper @ 0x1C012E4C4 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C012E80C (LoadWallpaperFilenameFromRegistry.c)
 *     UIntSub @ 0x1C0132618 (UIntSub.c)
 *     xxxSetIMEShowStatus @ 0x1C0135574 (xxxSetIMEShowStatus.c)
 *     ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x1C0136210 (-TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C013684C (xxxInvalidateWallpaperWindow.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     _SwapMouseButton @ 0x1C01B90F0 (_SwapMouseButton.c)
 *     ?TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z @ 0x1C01B9EE8 (-TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1C01BAD40 (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1C01BADFC (-TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z @ 0x1C01BAEB8 (-TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z.c)
 *     ?SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z @ 0x1C01C64F0 (-SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01C6654 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x1C01C6884 (-SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x1C01C6984 (-SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01C6A84 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01C6DC4 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C01C7050 (EditionxxxBroadcastSPIChange.c)
 *     UpdateWinIniInt @ 0x1C01C7398 (UpdateWinIniInt.c)
 *     xxxMetricsRecalc @ 0x1C01C752C (xxxMetricsRecalc.c)
 *     GetUserHandedness @ 0x1C01D9EA0 (GetUserHandedness.c)
 *     WritePointerDeviceSettings @ 0x1C01F6960 (WritePointerDeviceSettings.c)
 *     ?GetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C02262A4 (-GetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?SetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C02262CC (-SetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     GetMonitorMenuRect @ 0x1C0240FB4 (GetMonitorMenuRect.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x1C0258CF4 (DwmAsyncNotifyWindowShadowChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSystemParametersInfoWorker(__int64 a1, unsigned int a2, wchar_t *a3, __int16 a4)
{
  unsigned int v5; // r15d
  __int64 v6; // r8
  __int64 CurrentProcessWin32Process; // r9
  int v8; // r12d
  unsigned int v9; // r14d
  __int64 v10; // r13
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // rcx
  bool v14; // zf
  UINT v15; // eax
  int v16; // eax
  NTSTRSAFE_PWSTR v17; // rdx
  _OWORD *v18; // rax
  NTSTRSAFE_PWSTR v19; // rcx
  UINT v20; // eax
  int v22; // ebx
  int v23; // edx
  int v24; // ecx
  int v25; // ecx
  int *v26; // rax
  int v27; // ecx
  int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  int PointerDeviceSettings; // eax
  bool v32; // zf
  int *v33; // rax
  __int64 DPIMetrics; // rax
  char *v35; // r8
  unsigned int v36; // ebx
  __int64 v37; // rax
  struct tagRECT *v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 ProfileUserName; // rbx
  __int64 v42; // rax
  _OWORD *MonitorMenuRect; // rax
  NTSTRSAFE_PWSTR v44; // rbx
  unsigned int DpiForSystem; // eax
  __int64 v46; // r8
  unsigned int v47; // eax
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  NTSTRSAFE_PWSTR v53; // rdx
  NTSTRSAFE_PWSTR v54; // rbx
  int v55; // ecx
  int v56; // edx
  __int64 v57; // r9
  int v58; // ebx
  signed int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  NTSTRSAFE_PWSTR v63; // rbx
  size_t v64; // r8
  struct tagFILTERKEYS *v65; // rdx
  void *v66; // rcx
  NTSTRSAFE_PWSTR v67; // r14
  unsigned int v68; // ecx
  __int64 v69; // rcx
  unsigned int v70; // ebx
  int v71; // eax
  BOOL v72; // edx
  int *v73; // rax
  int v74; // eax
  __int64 v75; // rax
  struct tagRECT *v76; // r14
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r14
  __int64 v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  unsigned int v88; // eax
  __int64 v89; // r8
  __int64 v90; // rcx
  int UserHandedness; // eax
  __int64 v92; // rcx
  unsigned int v93; // r12d
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rax
  unsigned int v97; // ebx
  unsigned int v98; // r12d
  unsigned int v99; // ebx
  __int64 v100; // rdx
  struct _UNICODE_STRING *v101; // rax
  struct _UNICODE_STRING *v102; // rdi
  __int64 ProcessDpiServerInfo; // rax
  __int64 v104; // r14
  int v105; // r13d
  UINT v106; // eax
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rcx
  unsigned __int8 v111; // al
  NTSTRSAFE_PWSTR v112; // rcx
  __int64 v113; // rcx
  __int64 v114; // rcx
  unsigned int v115; // r12d
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rax
  unsigned int v119; // ebx
  unsigned int v120; // r12d
  __int64 v121; // rax
  struct tagWND *v122; // rcx
  __int64 v123; // rdx
  int v124; // eax
  struct _UNICODE_STRING *v125; // rdi
  int v126; // ebx
  NTSTRSAFE_PWSTR v127; // rbx
  int v128; // edx
  __int64 v129; // rdx
  struct _UNICODE_STRING *v130; // rdi
  unsigned int v131; // r9d
  __int64 v132; // rdx
  NTSTRSAFE_PWSTR v133; // rbx
  int v134; // r9d
  unsigned int v135; // eax
  NTSTRSAFE_PWSTR v136; // rbx
  int v137; // edx
  unsigned int v138; // eax
  __int64 v139; // rdx
  struct _UNICODE_STRING *v140; // rdi
  __int64 v141; // rdx
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // rbx
  unsigned int v145; // eax
  int v146; // eax
  struct tagSOUNDSENTRYW *v147; // rbx
  int v148; // edx
  unsigned int v149; // eax
  __int64 v150; // rdx
  struct _UNICODE_STRING *v151; // rdi
  __int64 v152; // r14
  int v153; // eax
  NTSTRSAFE_PWSTR v154; // r14
  NTSTRSAFE_PWSTR v155; // rbx
  int v156; // r9d
  unsigned int v157; // eax
  unsigned int v158; // ebx
  const wchar_t *v159; // r9
  const wchar_t *v160; // r9
  int v161; // edx
  __int64 v162; // rax
  __int64 v163; // rcx
  unsigned int i; // ebx
  __int64 v165; // rax
  __int64 v166; // rdi
  const wchar_t *v167; // r14
  const wchar_t *v168; // r9
  int v169; // eax
  unsigned int *v170; // rax
  __int64 v171; // rdx
  __int64 v172; // rdx
  __int64 v173; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 PrimaryMonitor; // rax
  __int64 v176; // rax
  __int64 v177; // rcx
  NTSTRSAFE_PWSTR v178; // rcx
  int v179; // eax
  bool v180; // zf
  __int64 v181; // rax
  unsigned int v182; // ebx
  int v183; // edx
  unsigned __int64 v184; // rax
  __int64 v185; // rdx
  unsigned __int64 v186; // rcx
  __int64 v187; // r8
  int v188; // edx
  int v189; // ecx
  __int64 v190; // rax
  struct tagWND *v191; // rcx
  void *v192; // rax
  __int64 v193; // rax
  __int64 v194; // rbx
  __int64 v195; // rax
  unsigned int v196; // r14d
  int v197; // ebx
  unsigned int *v198; // rax
  _DWORD *v199; // rax
  int v200; // [rsp+28h] [rbp-4A0h]
  UINT v201; // [rsp+40h] [rbp-488h]
  int v202; // [rsp+44h] [rbp-484h] BYREF
  int updated; // [rsp+48h] [rbp-480h] BYREF
  NTSTRSAFE_PWSTR pszDest; // [rsp+50h] [rbp-478h] BYREF
  UINT v205; // [rsp+58h] [rbp-470h] BYREF
  unsigned int v206; // [rsp+5Ch] [rbp-46Ch]
  NTSTRSAFE_PWSTR v207; // [rsp+60h] [rbp-468h] BYREF
  _BYTE v208[24]; // [rsp+68h] [rbp-460h] BYREF
  UINT puResult; // [rsp+80h] [rbp-448h] BYREF
  UINT v210; // [rsp+88h] [rbp-440h] BYREF
  UINT v211; // [rsp+90h] [rbp-438h] BYREF
  UINT v212; // [rsp+94h] [rbp-434h] BYREF
  UINT v213; // [rsp+98h] [rbp-430h] BYREF
  _DWORD v214[2]; // [rsp+A0h] [rbp-428h] BYREF
  __int64 v215; // [rsp+A8h] [rbp-420h] BYREF
  UINT v216; // [rsp+B0h] [rbp-418h] BYREF
  BOOL v217[3]; // [rsp+B4h] [rbp-414h] BYREF
  __int128 v218; // [rsp+C0h] [rbp-408h] BYREF
  _BYTE v219[24]; // [rsp+D0h] [rbp-3F8h] BYREF
  _BYTE v220[16]; // [rsp+E8h] [rbp-3E0h] BYREF
  _BYTE v221[16]; // [rsp+F8h] [rbp-3D0h] BYREF
  _BYTE v222[16]; // [rsp+108h] [rbp-3C0h] BYREF
  _BYTE v223[16]; // [rsp+118h] [rbp-3B0h] BYREF
  _BYTE v224[24]; // [rsp+128h] [rbp-3A0h] BYREF
  __int128 v225; // [rsp+140h] [rbp-388h] BYREF
  struct tagRECT v226; // [rsp+150h] [rbp-378h] BYREF
  struct tagRECT v227; // [rsp+160h] [rbp-368h] BYREF
  __int128 v228; // [rsp+170h] [rbp-358h] BYREF
  struct tagRECT v229; // [rsp+180h] [rbp-348h] BYREF
  _BYTE v230[20]; // [rsp+190h] [rbp-338h] BYREF
  __int64 v231; // [rsp+1A4h] [rbp-324h]
  int v232; // [rsp+1ACh] [rbp-31Ch]
  _BYTE v233[20]; // [rsp+1B0h] [rbp-318h] BYREF
  unsigned int v234; // [rsp+1C4h] [rbp-304h]
  wchar_t v235[40]; // [rsp+1D0h] [rbp-2F8h] BYREF
  _WORD v236[40]; // [rsp+220h] [rbp-2A8h] BYREF
  _BYTE v237[528]; // [rsp+270h] [rbp-258h] BYREF

  LOWORD(v206) = a4;
  v5 = a1;
  v210 = a1;
  pszDest = a3;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v207 = (NTSTRSAFE_PWSTR)CurrentProcessWin32Process;
  updated = 0;
  v8 = 1;
  v9 = v206 & 1;
  v10 = 2LL;
  v201 = v206 & 2;
  v211 = v201;
  v202 = !(v206 & 1);
  v11 = (unsigned __int16)v206 & 0x8000;
  v206 &= 0x8000u;
  v236[0] = 0;
  if ( v5 > 0x50 )
  {
    if ( v5 > 0x52 )
    {
      if ( v5 <= 0x54 )
        goto LABEL_1009;
      if ( v5 > 0x56 )
      {
        if ( v5 == 92 || v5 == 97 )
          goto LABEL_1008;
        goto LABEL_55;
      }
    }
    return 1LL;
  }
  if ( v5 >= 0x4F )
  {
LABEL_1009:
    *(_DWORD *)pszDest = 0;
    return 1LL;
  }
  if ( v5 < 7 )
  {
LABEL_55:
    v12 = 12;
    goto LABEL_11;
  }
  if ( v5 <= 8 )
    goto LABEL_1008;
  v12 = 12;
  if ( v5 == 12 || v5 > 0x26 && (v5 <= 0x28 || v5 == 49 || v5 > 0x3D && v5 <= 0x3F) )
    goto LABEL_1008;
LABEL_11:
  v13 = gpepCSRSS;
  if ( *(_QWORD *)CurrentProcessWin32Process == gpepCSRSS )
  {
    v6 = 10LL;
LABEL_29:
    v202 = 1;
    goto LABEL_30;
  }
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
            v205 = 2;
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
    if ( v5 > 0x4D )
    {
      if ( v5 <= 0x56 )
        goto LABEL_23;
      if ( v5 > 0x58 )
      {
        if ( v5 <= 0x59 )
          goto LABEL_23;
        if ( v5 > 0x5B )
        {
          v14 = v5 == 96;
          goto LABEL_22;
        }
      }
    }
LABEL_65:
    v15 = 16;
    goto LABEL_25;
  }
  if ( v5 == 73 || v5 == 61 || v5 == 65 || v5 == 67 || v5 == 69 )
    goto LABEL_65;
  v14 = v5 == 71;
LABEL_22:
  if ( v14 )
    goto LABEL_65;
LABEL_23:
  if ( (v5 & 0x3000) != 0 && (v5 & 1) != 0 )
  {
LABEL_173:
    v205 = 16;
    goto LABEL_174;
  }
  v15 = 2;
LABEL_25:
  v205 = v15;
  if ( v15 == 2 )
  {
LABEL_26:
    v16 = CheckGrantedAccess(*(unsigned int *)(CurrentProcessWin32Process + 688), 2LL);
    goto LABEL_27;
  }
LABEL_174:
  v16 = CheckWinstaAttributeAccess(16LL);
LABEL_27:
  if ( !v16 )
    return 0LL;
  v6 = 10LL;
  v11 = v206;
  CurrentProcessWin32Process = (__int64)v207;
  if ( v205 == 2 )
    goto LABEL_29;
LABEL_30:
  if ( v5 > 0x1026 )
  {
    if ( v5 != 4135 )
    {
      if ( v5 == 8228 )
      {
        UserHandedness = GetUserHandedness(v13, v11, 10LL, CurrentProcessWin32Process);
        goto LABEL_527;
      }
      if ( v5 == 8229 )
      {
        a2 = 0;
        if ( (unsigned int)RIMIsDefaultUILanguageRTL(v13, v11, 10LL, CurrentProcessWin32Process) )
          LOBYTE(a2) = (_DWORD)pszDest == 0;
        else
          LOBYTE(a2) = (_DWORD)pszDest != 0;
        goto LABEL_451;
      }
      goto LABEL_69;
    }
    v12 = a2 != 0;
    if ( (unsigned int)CheckDesktopPolicy(0LL, 112LL) )
    {
      v9 = 0;
      v202 = 0;
    }
    if ( v9 )
    {
      updated = UpdateWinIniInt(0LL, 4LL, 112LL, a2 != 0);
      v202 = updated;
    }
    if ( !v202 )
      goto LABEL_77;
    v73 = (int *)gbBlockSendInputResets;
    goto LABEL_461;
  }
  if ( v5 == 4134 )
  {
    v180 = gbBlockSendInputResets == 0;
    goto LABEL_256;
  }
  if ( v5 > 0x62 )
  {
    if ( v5 > 0x88 )
    {
      if ( v5 > 0x9B )
      {
        if ( v5 > 0xA5 )
        {
          if ( v5 != 166 )
          {
            if ( v5 != 167 )
            {
              if ( v5 == 168 )
              {
                v28 = gbLockScreenAutoLockActive;
                goto LABEL_104;
              }
              if ( v5 == 169 )
              {
                if ( gfSwitchInProgress )
                  return 0LL;
                if ( !gdwRITdemonLockState || (_DWORD)v11 )
                {
                  gbLockScreenAutoLockActive = a2 != 0;
                  if ( !v9 )
                    goto LABEL_77;
                  PointerDeviceSettings = UpdateWinIniInt(0LL, 4LL, 205LL, a2);
                  updated = PointerDeviceSettings;
                  goto LABEL_122;
                }
                goto LABEL_924;
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
                          || (v176 = *(_QWORD *)(gptiForeground + 432LL)) == 0
                          || (v177 = *(_QWORD *)(v176 + 120)) == 0
                          || (unsigned int)IsWindowUnderActiveLockScreen(v177) )
                        {
                          xxxSetForegroundWindow2(0LL, 0LL, 0);
                        }
                        ClearKeyboardStates();
                      }
                      GreLddmProcessLockScreen(gbLockScreenActive, v11, v6);
                      goto LABEL_77;
                    }
                    return 0LL;
                  case 0xACu:
                    v202 = (int)GetInteractiveControlParameters((struct tagINTERACTIVECTRL_PARAMETERS *)pszDest) >= 0;
                    goto LABEL_77;
                  case 0xADu:
                    updated = (int)SetInteractiveControlParameters((struct tagINTERACTIVECTRL_PARAMETERS *)pszDest, v9) >= 0;
                    goto LABEL_77;
                }
                goto LABEL_69;
              }
              v33 = (int *)gbLockScreenActive;
LABEL_166:
              v28 = *v33;
              goto LABEL_104;
            }
LABEL_926:
            if ( (int)DrvDisplayConfigGetScaleFactorOverrides(v230, 1LL, 10LL, CurrentProcessWin32Process) < 0 )
              return 0LL;
            if ( a2 != 158 )
            {
              v178 = pszDest;
              *(_QWORD *)pszDest = v231;
              *((_DWORD *)v178 + 2) = v232;
              goto LABEL_77;
            }
            v28 = HIDWORD(v231);
            goto LABEL_104;
          }
LABEL_446:
          if ( a2 + 11 <= 0x16 )
          {
            if ( (unsigned int)CheckDesktopPolicy(0LL, 628LL) )
            {
              v9 = 0;
              v202 = 0;
            }
            if ( v9 )
            {
              v234 = a2;
              v217[0] = a2 != 159;
              v179 = DrvDisplayConfigSetScaleFactorOverride(v233, v217);
              if ( v179 < 0 )
              {
                v8 = 0;
              }
              else if ( a2 == 159 )
              {
                TraceLoggingSPISetModernDPIOverrideEvent(0xFFFF, 159);
              }
              else
              {
                TraceLoggingSPISetDesktopDPIOverrideEvent(0xFFFF, a2);
              }
              v202 = v8;
              updated = 0;
            }
            goto LABEL_77;
          }
          return 0LL;
        }
        if ( v5 == 165 )
          goto LABEL_926;
        if ( v5 != 156 )
        {
          if ( v5 != 157 )
          {
            if ( v5 == 158 )
              goto LABEL_926;
            if ( v5 != 159 )
            {
              if ( v5 == 160 )
              {
                *(_DWORD *)pszDest = 6;
                goto LABEL_77;
              }
              if ( v5 != 161 )
              {
                if ( v5 == 162 )
                {
                  PrimaryMonitor = GetPrimaryMonitor(v13, v11, 10LL, CurrentProcessWin32Process);
                  MonitorMenuRect = (_OWORD *)GetMonitorMenuRect(v224, PrimaryMonitor);
                  goto LABEL_235;
                }
                if ( v5 == 163 )
                {
                  if ( pszDest )
                  {
                    if ( *((_DWORD *)pszDest + 2) < *(_DWORD *)pszDest
                      || *((_DWORD *)pszDest + 3) < *((_DWORD *)pszDest + 1) )
                    {
                      return 0LL;
                    }
                    v37 = MonitorFromRect((struct tagRECT *)pszDest, 1u, 0);
                  }
                  else
                  {
                    v37 = GetPrimaryMonitor(v13, v11, 10LL, CurrentProcessWin32Process);
                  }
                  v207 = (NTSTRSAFE_PWSTR)v37;
                  v228 = *(_OWORD *)GetMonitorRect(v223, v37);
                  v38 = (struct tagRECT *)&v228;
                  if ( pszDest )
                    v38 = (struct tagRECT *)pszDest;
                  if ( (unsigned int)IntersectRect(&v227, &v38->left, (int *)&v228) && EqualRectInl(&v227, v38) )
                  {
                    if ( (W32GetCurrentThreadDpiAwarenessContext(v39, v11) & 0xF) != 2
                      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40) + 456)
                      && (v173 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v171)
                                                         + 456)
                                             + 8LL),
                          (*(_DWORD *)(v173 + 64) & 1) != 0) )
                    {
                      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v173, v172);
                      LogicalToPhysicalDPIRect(v207 + 148, &v227, CurrentThreadDpiAwarenessContext, &v207);
                    }
                    else
                    {
                      *(struct tagRECT *)(v207 + 148) = v227;
                    }
                    goto LABEL_77;
                  }
                  goto LABEL_1008;
                }
                goto LABEL_69;
              }
              updated = 0;
              goto LABEL_499;
            }
            goto LABEL_446;
          }
LABEL_724:
          v146 = WritePointerDeviceSettings(v5, pszDest, v9, CurrentProcessWin32Process);
LABEL_725:
          updated = v146;
          goto LABEL_77;
        }
LABEL_121:
        PointerDeviceSettings = ReadPointerDeviceSettings(v5, pszDest, 10LL, CurrentProcessWin32Process);
        goto LABEL_122;
      }
      if ( v5 == 155 )
        goto LABEL_724;
      if ( v5 > 0x92 )
      {
        if ( v5 == 147 || v5 != 148 && (v5 == 149 || v5 != 150 && (v5 == 151 || v5 == 153)) )
          goto LABEL_724;
        goto LABEL_121;
      }
      switch ( v5 )
      {
        case 0x92u:
          goto LABEL_121;
        case 0x89u:
          if ( a2 > *(_DWORD *)(gpDispInfo + 136LL) || a2 > dword_1C030D4AC || a2 < gWinArrGlobal )
            goto LABEL_77;
          v200 = 4;
          v57 = 21LL;
          break;
        case 0x8Au:
          v28 = dword_1C030D4AC;
          goto LABEL_104;
        case 0x8Bu:
          if ( a2 > *(_DWORD *)(gpDispInfo + 136LL) || a2 < dword_1C030D4A8 || a2 < dword_1C030D49C )
            goto LABEL_77;
          v200 = 5;
          v57 = 22LL;
          break;
        default:
          switch ( v5 )
          {
            case 0x8Cu:
              v29 = dword_1C030D4B4;
              goto LABEL_102;
            case 0x8Du:
              v36 = 624;
              v8 = 2;
              break;
            case 0x8Eu:
              v30 = dword_1C030D4B4 >> 2;
              goto LABEL_103;
            case 0x8Fu:
              v36 = 626;
              v8 = 4;
              break;
            case 0x90u:
              v30 = dword_1C030D4B4 >> 3;
              goto LABEL_103;
            default:
              v36 = 625;
              v8 = 8;
              break;
          }
LABEL_332:
          if ( (unsigned int)CheckDesktopPolicy(0LL, v36) )
          {
            v9 = 0;
            v202 = 0;
          }
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, v36, a2);
            v202 = updated;
          }
          if ( v202 )
          {
            v68 = dword_1C030D4B4;
            if ( a2 )
              dword_1C030D4B4 |= v8;
            else
              dword_1C030D4B4 &= ~v8;
            PostWindowArrangementCheck(v68);
          }
          goto LABEL_77;
      }
      goto LABEL_329;
    }
    if ( v5 == 136 )
    {
      v28 = dword_1C030D4A8;
      goto LABEL_104;
    }
    if ( v5 > 0x75 )
    {
      if ( v5 <= 0x7F )
      {
        if ( v5 != 127 )
        {
          switch ( v5 )
          {
            case 'v':
              v161 = *gpsi >> 9;
              goto LABEL_802;
            case 'w':
              if ( !gdwRITdemonLockState || (_DWORD)v11 )
              {
                if ( (unsigned int)CheckDesktopPolicy(0LL, 618LL) )
                {
                  v9 = 0;
                  v202 = 0;
                }
                if ( v9 )
                {
                  updated = UpdateWinIniInt(0LL, 4LL, 618LL, a2 != 0);
                  v202 = updated;
                }
                if ( v202 )
                {
                  v20 = v201;
                  if ( a2 )
                    *gpsi |= 0x200u;
                  else
                    *gpsi &= ~0x200u;
                  goto LABEL_48;
                }
                goto LABEL_77;
              }
              goto LABEL_924;
            case 'x':
              v33 = (int *)gdwHungAppTimeout;
              goto LABEL_166;
            case 'y':
              if ( (unsigned int)CheckDesktopPolicy(0LL, 621LL) )
              {
                v9 = 0;
                v202 = 0;
              }
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 621LL, a2);
                v202 = updated;
              }
              if ( !v202 )
                goto LABEL_77;
              v170 = (unsigned int *)gdwHungAppTimeout;
              break;
            case 'z':
              v28 = gdwWaitToKillTimeout;
              goto LABEL_104;
            case '{':
              if ( (unsigned int)CheckDesktopPolicy(0LL, 622LL) )
              {
                v9 = 0;
                v202 = 0;
              }
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 622LL, a2);
                v202 = updated;
              }
              v20 = v201;
              if ( v202 )
                gdwWaitToKillTimeout = a2;
              goto LABEL_48;
            case '|':
              v33 = (int *)gdwWaitToKillServiceTimeout;
              goto LABEL_166;
            case '}':
              if ( (unsigned int)CheckDesktopPolicy(0LL, 623LL) )
              {
                v9 = 0;
                v202 = 0;
              }
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 52LL, 623LL, a2);
                v202 = updated;
              }
              if ( !v202 )
                goto LABEL_77;
              v170 = (unsigned int *)gdwWaitToKillServiceTimeout;
              break;
            default:
              v28 = gWinArrGlobal;
              goto LABEL_104;
          }
          *v170 = a2;
          goto LABEL_77;
        }
        if ( a2 > *(_DWORD *)(gpDispInfo + 136LL)
          || a2 > dword_1C030D49C
          || a2 > dword_1C030D4A0
          || a2 > dword_1C030D4A8 )
        {
          goto LABEL_77;
        }
        v200 = 0;
        v57 = 16LL;
      }
      else
      {
        switch ( v5 )
        {
          case 0x80u:
            v28 = dword_1C030D49C;
            goto LABEL_104;
          case 0x81u:
            if ( a2 > *(_DWORD *)(gpDispInfo + 136LL)
              || a2 < gWinArrGlobal
              || a2 > dword_1C030D4A4
              || a2 > dword_1C030D4AC )
            {
              goto LABEL_77;
            }
            v200 = 1;
            v57 = 17LL;
            break;
          case 0x82u:
            LOBYTE(v30) = dword_1C030D4B4;
            goto LABEL_103;
          case 0x83u:
            v36 = 18;
            goto LABEL_332;
          case 0x84u:
            v28 = dword_1C030D4A0;
            goto LABEL_104;
          case 0x85u:
            if ( a2 > *(_DWORD *)(gpDispInfo + 136LL) || a2 > dword_1C030D4A4 || a2 < gWinArrGlobal )
              goto LABEL_77;
            v200 = 2;
            v57 = 19LL;
            break;
          case 0x86u:
            v28 = dword_1C030D4A4;
            goto LABEL_104;
          default:
            if ( a2 > *(_DWORD *)(gpDispInfo + 136LL) || a2 < dword_1C030D4A0 || a2 < dword_1C030D49C )
              goto LABEL_77;
            v200 = 3;
            v57 = 20LL;
            break;
        }
      }
LABEL_329:
      UpdateThresholdFromMetric(v9, &updated, &v202, v57, (_BYTE)a2, v200);
      goto LABEL_77;
    }
    if ( v5 != 117 )
    {
      if ( v5 == 108 )
      {
        v23 = *(_DWORD *)(gpsi + 4992LL);
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
              v202 = updated;
            }
            v20 = v201;
            if ( v202 )
              gcxMouseHover = a2;
            goto LABEL_48;
          case 'd':
            v28 = gcyMouseHover;
            goto LABEL_104;
          case 'e':
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 92LL, a2);
              v202 = updated;
            }
            v20 = v201;
            if ( v202 )
              gcyMouseHover = a2;
            goto LABEL_48;
          case 'f':
            v28 = gdtMouseHover;
            goto LABEL_104;
          case 'g':
            if ( a2 >= 0xA )
              v6 = a2;
            if ( (unsigned int)v6 > 0x7FFFFFFF )
              v6 = 0x7FFFFFFFLL;
            v213 = v6;
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 93LL, (unsigned int)v6);
              v202 = updated;
              v6 = v213;
            }
            v20 = v201;
            if ( v202 )
              gdtMouseHover = v6;
            goto LABEL_48;
        }
        if ( v5 != 104 )
        {
          if ( v5 == 105 )
          {
            if ( (unsigned int)CheckDesktopPolicy(0LL, 14LL) )
            {
              v9 = 0;
              v202 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 14LL, a2);
              v202 = updated;
            }
            if ( v202 )
              *(_DWORD *)(gpsi + 4988LL) = a2;
            goto LABEL_77;
          }
          if ( v5 != 106 )
          {
            if ( (unsigned int)CheckDesktopPolicy(0LL, 94LL) )
            {
              v9 = 0;
              v202 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 94LL, a2);
              v202 = updated;
            }
            v20 = v201;
            if ( v202 )
              gdtMNDropDown = a2;
            goto LABEL_48;
          }
          v28 = gdtMNDropDown;
          goto LABEL_104;
        }
        v23 = *(_DWORD *)(gpsi + 4988LL);
        goto LABEL_76;
      }
      switch ( v5 )
      {
        case 'm':
          if ( (unsigned int)CheckDesktopPolicy(0LL, 15LL) )
          {
            v9 = 0;
            v202 = 0;
          }
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 15LL, a2);
            v202 = updated;
          }
          if ( v202 )
            *(_DWORD *)(gpsi + 4992LL) = a2;
          goto LABEL_77;
        case 'n':
          UserHandedness = GetIMEShowStatus(v13, v11, 10LL, CurrentProcessWin32Process);
          break;
        case 'o':
          PointerDeviceSettings = xxxSetIMEShowStatus(a2 != 0, v9, &updated, CurrentProcessWin32Process);
          goto LABEL_122;
        case 'p':
          UserHandedness = GetMouseSensitivity(0LL, v11, 10LL, CurrentProcessWin32Process);
          break;
        case 'q':
          if ( (unsigned __int8)IsValidMouseSensitivity((unsigned int)pszDest, v11, 10LL, CurrentProcessWin32Process) )
          {
            if ( v9 )
            {
              RtlStringCchPrintfW(v235, 0x28uLL, L"%d", pszDest);
              updated = FastUpdateWinIni(0LL, 12LL, 608LL, v235);
              v202 = updated;
            }
            if ( v202 )
            {
              UpdateMouseSensitivity((unsigned int)pszDest);
              for ( i = 0; i < 2; ++i )
                ResetAccelerationCurves(i);
            }
            goto LABEL_77;
          }
          return 0LL;
        case 'r':
          v180 = gppiScreenSaver == 0LL;
          goto LABEL_256;
        case 's':
          if ( g_pWallpaperSettings )
          {
            RtlStringCchCopyW(pszDest, 0x104uLL, (NTSTRSAFE_PCWSTR)(g_pWallpaperSettings + 4LL));
            goto LABEL_77;
          }
          ProfileUserName = CreateProfileUserName(v208, v11, 0LL, CurrentProcessWin32Process);
          LoadWallpaperFilenameFromRegistry(ProfileUserName, pszDest, 260LL);
          goto LABEL_508;
        default:
          v154 = pszDest;
          if ( a2 && a2 != 12 || !pszDest || *(_DWORD *)pszDest != 12 || UIntSub(0xCu, 4u, &v216) < 0 )
            return 0LL;
          v64 = v216;
          v65 = (struct tagFILTERKEYS *)gAudioDescription;
          goto LABEL_759;
      }
LABEL_527:
      *(_DWORD *)pszDest = UserHandedness;
      goto LABEL_77;
    }
    if ( a2 && a2 != 12 || !pszDest || *(_DWORD *)pszDest != 12 )
      return 0LL;
    if ( v9 )
    {
      v165 = CreateProfileUserName(v208, v11, 10LL, CurrentProcessWin32Process);
      v166 = v165;
      v167 = L"1";
      v168 = L"1";
      if ( !*((_DWORD *)pszDest + 1) )
        v168 = L"0";
      updated = FastWriteProfileStringW(v165, 48LL, L"On", v168);
      RtlStringCchPrintfW(v235, 0x28uLL, L"%d", *((unsigned int *)pszDest + 2));
      v169 = FastWriteProfileStringW(v166, 48LL, L"Locale", v235);
      v14 = (v169 & updated) == 0;
      updated &= v169;
      v202 = updated;
      if ( v14 )
      {
        if ( !HIDWORD(gAudioDescription) )
          v167 = L"0";
        FastWriteProfileStringW(v166, 48LL, L"On", v167);
        RtlStringCchPrintfW(v235, 0x28uLL, L"%d", *((unsigned int *)&gAudioDescription + 2));
        FastWriteProfileStringW(v166, 48LL, L"Locale", v235);
      }
      FreeProfileUserName(v166, v208);
    }
    if ( !v202 )
      goto LABEL_77;
    memmove(gAudioDescription, pszDest, *(unsigned int *)pszDest);
    v73 = (int *)gAudioDescription;
LABEL_461:
    *v73 = v12;
    goto LABEL_77;
  }
  if ( v5 == 98 )
  {
    v28 = gcxMouseHover;
    goto LABEL_104;
  }
  if ( v5 <= 0x2E )
  {
    if ( v5 == 46 )
      goto LABEL_469;
    if ( v5 > 0x19 )
    {
      if ( v5 > 0x23 )
      {
        switch ( v5 )
        {
          case '$':
            goto LABEL_77;
          case '%':
            if ( (unsigned int)CheckDesktopPolicy(0LL, 107LL) )
            {
              v9 = 0;
              v202 = 0;
            }
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 107LL, a2 == 1);
              v202 = updated;
            }
            if ( v202 )
            {
              if ( a2 == 1 )
                gdwPUDFlags |= 0x100000u;
              else
                gdwPUDFlags &= ~0x100000u;
            }
            goto LABEL_77;
          case '&':
            v30 = gdwPUDFlags >> 20;
            goto LABEL_103;
          case ')':
            if ( !pszDest )
              return 0LL;
            GetWindowNCMetrics(pszDest, v11, 10LL, CurrentProcessWin32Process);
            goto LABEL_77;
          case '*':
            goto LABEL_469;
          case '+':
            CurrentProcessWin32Process = (__int64)pszDest;
            *(_DWORD *)pszDest = 20;
            v6 = gpsi;
            *(_DWORD *)(CurrentProcessWin32Process + 4) = *(_DWORD *)(gpsi + 2124LL) - 6;
            *(_DWORD *)(CurrentProcessWin32Process + 8) = *(_DWORD *)(gpsi + 2084LL) - *(_DWORD *)(gpsi + 2124LL);
            *(_DWORD *)(CurrentProcessWin32Process + 12) = *(_DWORD *)(gpsi + 2088LL) - *(_DWORD *)(gpsi + 2128LL);
            *(_DWORD *)(CurrentProcessWin32Process + 16) = *(_DWORD *)(gpsi + 2120LL);
            goto LABEL_77;
          case ',':
            goto LABEL_469;
        }
        v44 = pszDest;
        *(_DWORD *)pszDest = 108;
        DpiForSystem = GetDpiForSystem();
        *((_DWORD *)v44 + 1) = GetDpiDependentMetric(18LL, DpiForSystem, v46);
        v47 = GetDpiForSystem();
        *((_DWORD *)v44 + 2) = GetDpiDependentMetric(19LL, v47, v48);
        v49 = (gdwPUDFlags >> 21) & 1;
        *((_DWORD *)v44 + 3) = v49;
        DPIMetrics = GetDPIMetrics(v49, v50, v51, v52);
        v35 = (char *)(v44 + 8);
LABEL_180:
        GreExtGetObjectW(*(HSURF *)(DPIMetrics + 64), 92LL, v35);
        goto LABEL_77;
      }
      switch ( v5 )
      {
        case 0x23u:
          *(_DWORD *)pszDest = 1;
          goto LABEL_77;
        case 0x1Au:
          if ( v9 )
          {
            updated = SetWindowMetricInt(0LL, 0x42u, a2 != 0);
            v202 = updated;
          }
          if ( v202 )
          {
            if ( a2 )
              gdwPUDFlags |= 0x200000u;
            else
              gdwPUDFlags &= ~0x200000u;
            xxxMetricsRecalc(2, 0, 0, 0, 0, 0, 0);
          }
          goto LABEL_77;
        case 0x1Bu:
          v23 = *(_DWORD *)(gpsi + 2056LL);
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
              v202 = updated;
            }
            if ( v202 )
              *(_DWORD *)(gpsi + 2040LL) = a2;
            goto LABEL_77;
          case 0x1Eu:
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 98LL, a2);
              v202 = updated;
            }
            if ( v202 )
              *(_DWORD *)(gpsi + 2044LL) = a2;
            goto LABEL_77;
          case 0x1Fu:
            DPIMetrics = GetDPIMetrics(v13, v11, 10LL, CurrentProcessWin32Process);
            v35 = (char *)pszDest;
            goto LABEL_180;
          case 0x20u:
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 6LL, a2);
              v202 = updated;
            }
            if ( v202 )
              SetDoubleClickTime(a2, v11, v6, CurrentProcessWin32Process);
            goto LABEL_77;
          case 0x21u:
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 5LL, a2);
              v202 = updated;
            }
            if ( v202 )
              SwapMouseButton(a2 != 0, v11, v6, CurrentProcessWin32Process);
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
        v125 = (struct _UNICODE_STRING *)CreateProfileUserName(v208, v11, 10LL, CurrentProcessWin32Process);
        v126 = xxxSetSPIMetrics(v125, 0x22u, pszDest, v9, &updated);
        FreeProfileUserName(v125, v208);
        if ( !v126 )
        {
          v202 = 0;
          goto LABEL_77;
        }
        if ( !v9 )
          goto LABEL_77;
        PointerDeviceSettings = updated;
LABEL_122:
        v202 = PointerDeviceSettings;
        goto LABEL_77;
      }
LABEL_451:
      if ( v9 )
      {
        updated = UpdateWinIniInt(0LL, 3LL, 96LL, a2);
        v202 = updated;
      }
      if ( v202 )
      {
        v71 = *(_DWORD *)(gpsi + 2056LL);
        v72 = a2 != 0;
        *(_DWORD *)(gpsi + 2056LL) = v72;
        TraceLoggingSPISetMenuDropAlignmentEvent(v71, v72);
      }
      goto LABEL_77;
    }
    if ( v5 == 25 )
    {
      v30 = gdwPUDFlags >> 21;
      goto LABEL_103;
    }
    if ( v5 > 0xE )
    {
      if ( v5 != 15 )
      {
        if ( v5 == 16 )
        {
          v28 = giScreenSaveTimeOutMs > 0;
          goto LABEL_104;
        }
        if ( v5 != 17 )
        {
          switch ( v5 )
          {
            case 0x14u:
              ProfileUserName = CreateProfileUserName(v208, v11, 10LL, CurrentProcessWin32Process);
              if ( (unsigned int)CheckDesktopPolicy(ProfileUserName, 67LL) )
              {
                v9 = 0;
                v202 = 0;
              }
              if ( v9 )
              {
                if ( a2 == -1 )
                {
                  v202 = 1;
                }
                else
                {
                  FastGetProfileStringFromIDW(ProfileUserName, 4LL, 67LL, &pwsz, v237, 260, 8);
                  updated = FastUpdateWinIni(ProfileUserName, 4LL, 67LL, pszDest);
                  v202 = updated;
                }
              }
              if ( !v202 )
                goto LABEL_508;
              if ( (unsigned int)xxxSetDeskWallpaper(ProfileUserName, pszDest) )
              {
                xxxInvalidateWallpaperWindow();
              }
              else
              {
                if ( v9 )
                {
                  if ( a2 == -1 )
                    goto LABEL_508;
                  FastUpdateWinIni(ProfileUserName, 4LL, 67LL, v237);
                }
                v202 = 0;
                updated = 0;
              }
LABEL_508:
              v87 = ProfileUserName;
LABEL_509:
              FreeProfileUserName(v87, v208);
              goto LABEL_77;
            case 0x15u:
              if ( a2 == -1 && pszDest )
                goto LABEL_1008;
              ProfileUserName = CreateProfileUserName(v208, v11, 10LL, CurrentProcessWin32Process);
              if ( (unsigned int)CheckDesktopPolicy(ProfileUserName, 2LL) )
              {
                v9 = 0;
                v202 = 0;
              }
              if ( v9 && pszDest )
              {
                FastGetProfileStringFromIDW(ProfileUserName, 4LL, 2LL, &pwsz, v237, 260, 0);
                updated = FastUpdateWinIni(ProfileUserName, 4LL, 2LL, pszDest);
                v202 = updated;
              }
              if ( v202 )
              {
                if ( !(unsigned int)SetDesktopPattern(ProfileUserName, pszDest) )
                {
                  if ( v9 && pszDest )
                    FastUpdateWinIni(ProfileUserName, 4LL, 2LL, v237);
                  FreeProfileUserName(ProfileUserName, v208);
                  return 0LL;
                }
                xxxSendNotifyMessage(-1LL, 21LL, 0LL, 0LL, 1);
                v121 = *(_QWORD *)(gptiCurrent + 456LL);
                if ( v121 )
                  v122 = *(struct tagWND **)(*(_QWORD *)(v121 + 8) + 24LL);
                else
                  v122 = 0LL;
                xxxInternalInvalidate(v122, (HRGN)1, 0x10485u);
              }
              goto LABEL_508;
            case 0x16u:
              v28 = (gnKeyboardSpeed >> 5) & 3;
              goto LABEL_104;
            case 0x17u:
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 13LL, 106LL, a2);
                v202 = updated;
              }
              if ( !v202 )
                goto LABEL_77;
              gnKeyboardSpeed = gnKeyboardSpeed & 0xFFFFFF9F | (32 * a2);
              v69 = (unsigned int)gnKeyboardSpeed;
              goto LABEL_346;
            case 0x18u:
              if ( ((unsigned __int64)pszDest & 0xFFFFFFFFFFFF0000uLL) == 0 )
              {
                if ( a2 )
                {
                  if ( (W32GetCurrentThreadDpiAwarenessContext(v13, v11) & 0xF) != 0 )
                  {
                    v116 = PsGetCurrentProcessWin32Process(v114);
                    v115 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), *(unsigned __int16 *)(v116 + 284));
                    v118 = PsGetCurrentProcessWin32Process(v117);
                    a2 = EngMulDiv(v115, 96, *(unsigned __int16 *)(v118 + 284));
                  }
                  else
                  {
                    v115 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), 96);
                  }
                  v119 = *(_DWORD *)(gpsi + 2308LL);
                  if ( v115 > v119 )
                    v119 = v115;
                  v120 = *(_DWORD *)(gpsi + 2428LL);
                  if ( a2 > v120 )
                    v120 = a2;
                  if ( v9 )
                  {
                    updated = SetWindowMetricInt(0LL, 0x41u, v119);
                    v202 = updated;
                  }
                  if ( v202 )
                  {
                    SetDpiDepSysMet(19LL, v119);
                    *(_DWORD *)(gpsi + 2480LL) = v120;
                  }
                }
                goto LABEL_77;
              }
              v88 = GetDpiForSystem();
              v90 = 19LL;
              goto LABEL_525;
          }
          goto LABEL_69;
        }
        if ( a2 - 2 <= 0xFFFFFFFC )
          return 0LL;
        if ( !gdwRITdemonLockState || (_DWORD)v11 )
        {
          gbLockConsoleActive = a2 == -1;
          if ( gfSwitchInProgress )
            return 0LL;
          if ( (unsigned int)CheckDesktopPolicy(0LL, 100LL) )
          {
            v9 = 0;
            v202 = 0;
          }
          if ( v9 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, 100LL, a2);
            v202 = updated;
          }
          if ( !v202 )
            goto LABEL_77;
          if ( !gbBlockSendInputResets )
            CInputGlobals::UpdateLastInputTime(
              gpInputGlobals,
              (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
              6LL);
          if ( giScreenSaveTimeOutMs < 0 )
          {
            if ( a2 )
              goto LABEL_374;
            if ( giScreenSaveTimeOutMs < 0 )
              goto LABEL_77;
          }
          if ( a2 )
            goto LABEL_77;
LABEL_374:
          giScreenSaveTimeOutMs = -giScreenSaveTimeOutMs;
          goto LABEL_77;
        }
LABEL_924:
        v163 = 329LL;
        goto LABEL_815;
      }
      v207 = (NTSTRSAFE_PWSTR)giScreenSaveTimeOutMs;
      if ( gfSwitchInProgress )
        return 0LL;
      if ( gdwRITdemonLockState && !(_DWORD)v11 )
        goto LABEL_924;
      v58 = 1000 * a2;
      v59 = 1000 * GetEasTimeout(v13, v11, 10LL, CurrentProcessWin32Process);
      v205 = v59;
      if ( v59 )
      {
        if ( *(int *)v207 > 0 && v59 < v58 || v58 <= 0 )
        {
          UserSetLastError(1260LL, v60, v61, v62);
          v9 = 0;
          v202 = 0;
        }
      }
      else
      {
        v8 = 0;
      }
      if ( (unsigned int)CheckDesktopPolicy(0LL, 99LL) )
      {
        if ( v8 )
        {
          v206 = 0;
          if ( !(unsigned int)FastGetProfileIntFromID(0LL, 4LL, 99LL) )
            goto LABEL_291;
          v124 = 1000 * v206;
          v206 = v124;
          if ( !v124 || v124 >= (int)v205 || *(int *)v207 <= 0 || v124 >= v58 )
            goto LABEL_291;
          UserSetLastError(1260LL, v123, v6, CurrentProcessWin32Process);
        }
        v202 = 0;
        v9 = 0;
      }
LABEL_291:
      if ( v9 )
      {
        updated = UpdateWinIniInt(0LL, 4LL, 99LL, v58 / 0x3E8u);
        v202 = updated;
      }
      if ( v202 )
      {
        if ( !gbBlockSendInputResets )
          CInputGlobals::UpdateLastInputTime(
            gpInputGlobals,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
            6LL);
        if ( *(int *)v207 < 0 && !v8 )
          v58 = -1000 * a2;
        *(_DWORD *)v207 = v58;
      }
      goto LABEL_77;
    }
    switch ( v5 )
    {
      case 0xEu:
        v23 = (int)abs32(giScreenSaveTimeOutMs) / 1000;
        goto LABEL_76;
      case 1u:
        v30 = gdwPUDFlags >> 19;
        goto LABEL_103;
      case 2u:
        if ( v9 )
        {
          RtlLoadStringOrError(105 - (unsigned int)(a2 != 0), v235, 10LL, 0LL);
          updated = FastUpdateWinIni(0LL, 11LL, 9LL, v235);
          v202 = updated;
        }
        if ( v202 )
        {
          if ( a2 )
            gdwPUDFlags |= 0x80000u;
          else
            gdwPUDFlags &= ~0x80000u;
        }
        goto LABEL_77;
      case 3u:
        *(_DWORD *)pszDest = gMouseThresh1;
        v113 = (unsigned int)gMouseThresh2;
        *((_DWORD *)pszDest + 1) = gMouseThresh2;
        *((_DWORD *)pszDest + 2) = (unsigned __int8)MouseAccelerationEnabled(
                                                      v113,
                                                      v11,
                                                      10LL,
                                                      CurrentProcessWin32Process);
        goto LABEL_77;
    }
    if ( v5 != 4 )
    {
      if ( v5 == 5 )
      {
        v28 = *(_DWORD *)(GetDPIServerInfo(v13, v11, 10LL, CurrentProcessWin32Process) + 4);
        goto LABEL_104;
      }
      if ( v5 != 6 )
      {
        switch ( v5 )
        {
          case 0xAu:
            v28 = gnKeyboardSpeed & 0x1F;
            goto LABEL_104;
          case 0xBu:
            v70 = 31;
            if ( a2 <= 0x1F )
              v70 = a2;
            if ( v9 )
            {
              updated = UpdateWinIniInt(0LL, 13LL, 13LL, v70);
              v202 = updated;
            }
            if ( !v202 )
              goto LABEL_77;
            v69 = v70 | gnKeyboardSpeed & 0xFFFFFFE0;
            gnKeyboardSpeed = v70 | gnKeyboardSpeed & 0xFFFFFFE0;
LABEL_346:
            SetKeyboardRate(v69, v11, v6, CurrentProcessWin32Process);
            goto LABEL_77;
          case 0xDu:
            if ( ((unsigned __int64)pszDest & 0xFFFFFFFFFFFF0000uLL) == 0 )
            {
              if ( a2 )
              {
                if ( (W32GetCurrentThreadDpiAwarenessContext(v13, v11) & 0xF) != 0 )
                {
                  v94 = PsGetCurrentProcessWin32Process(v92);
                  v93 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), *(unsigned __int16 *)(v94 + 284));
                  v96 = PsGetCurrentProcessWin32Process(v95);
                  a2 = EngMulDiv(v93, 96, *(unsigned __int16 *)(v96 + 284));
                }
                else
                {
                  v93 = EngMulDiv(a2, *(unsigned __int16 *)(gpsi + 6998LL), 96);
                }
                v97 = *(_DWORD *)(gpsi + 2304LL);
                if ( v93 > v97 )
                  v97 = v93;
                v98 = *(_DWORD *)(gpsi + 2424LL);
                if ( a2 > v98 )
                  v98 = a2;
                if ( v9 )
                {
                  updated = SetWindowMetricInt(0LL, 0x40u, v97);
                  v202 = updated;
                }
                if ( v202 )
                {
                  SetDpiDepSysMet(18LL, v97);
                  *(_DWORD *)(gpsi + 2476LL) = v98;
                }
              }
              goto LABEL_77;
            }
            v88 = GetDpiForSystem();
            v90 = 18LL;
LABEL_525:
            UserHandedness = GetDpiDependentMetric(v90, v88, v89);
            goto LABEL_527;
        }
LABEL_69:
        if ( v5 >= 0xAE )
        {
          v22 = v5 & 0x3000;
          if ( (v5 & 1) == 0 )
          {
            CurrentProcessWin32Process = 4096LL;
            if ( v22 != 4096 )
            {
              v26 = (int *)UPDWORDPointer(v5);
              v27 = *v26;
              *(_DWORD *)pszDest = *v26;
              if ( v5 != 8204 || v27 )
                goto LABEL_77;
              v28 = gulGamma;
              goto LABEL_104;
            }
            v23 = 0;
            v24 = 0;
            if ( v5 >= 0x103E )
            {
LABEL_73:
              if ( !v24 )
              {
                if ( v5 == 4158 && IsRemoteConnection() )
                {
                  v180 = ((unsigned __int16)gpdwCPUserPreferencesMask & 0x3A0E) == 0;
LABEL_256:
                  v28 = !v180;
                  goto LABEL_104;
                }
                v6 = (unsigned __int8)(((v5 - 4096) >> 1) - 32 * ((v5 - 4096) >> 6));
                v25 = *((_DWORD *)&gpdwCPUserPreferencesMask + ((unsigned __int64)(v5 - 4096) >> 6));
                v23 = _bittest(&v25, v6);
              }
LABEL_76:
              *(_DWORD *)pszDest = v23;
              goto LABEL_77;
            }
            if ( (int)gpdwCPUserPreferencesMask >= 0 )
            {
              if ( v5 == 4096 )
                goto LABEL_73;
              if ( v5 != 4106 )
              {
                if ( v5 == 4108 || v5 == 4124 )
                  goto LABEL_73;
                v32 = v5 == 4126;
                goto LABEL_151;
              }
              v23 = 1;
            }
            else
            {
              switch ( v5 )
              {
                case 0x1008u:
                  goto LABEL_182;
                case 0x100Au:
                  v23 = (gdwPUDFlags >> 17) & 1;
                  v24 = v23;
                  goto LABEL_73;
                case 0x1012u:
                case 0x1014u:
                case 0x1018u:
                case 0x101Au:
LABEL_182:
                  if ( gbDisableAlpha )
                    v24 = 1;
                  goto LABEL_73;
              }
              if ( v5 != 4132 )
                goto LABEL_73;
              if ( !gbDisableAlpha )
              {
                v32 = gcOverlays == 0;
LABEL_151:
                if ( v32 )
                  goto LABEL_73;
              }
            }
            v24 = 1;
            goto LABEL_73;
          }
          v181 = CreateProfileUserName(v208, v11, 10LL, CurrentProcessWin32Process);
          v102 = (struct _UNICODE_STRING *)v181;
          if ( v22 != 4096 )
          {
            if ( *(_DWORD *)(UPDWORDPointer(v5) + 4) == 4 )
            {
              v193 = UPDWORDPointer(v5);
              if ( (unsigned int)CheckDesktopPolicy(v102, *(_QWORD *)(v193 + 8)) )
              {
                v9 = 0;
                v202 = 0;
              }
            }
            if ( v9 )
            {
              v194 = UPDWORDPointer(v5);
              v195 = UPDWORDPointer(v5);
              updated = FastWriteProfileValue(
                          v102,
                          *(unsigned int *)(v195 + 4),
                          *(_QWORD *)(v194 + 8),
                          4LL,
                          &pszDest,
                          4);
              v202 = updated;
            }
            v196 = *(_DWORD *)UPDWORDPointer(v5);
            if ( v202 )
            {
              v197 = (int)pszDest;
              *(_DWORD *)UPDWORDPointer(v5) = v197;
              switch ( v5 )
              {
                case 0x2007u:
                  *(_DWORD *)(gpsi + 7008LL) = *(_DWORD *)UPDWORDPointer(8199LL);
                  break;
                case 0x200Bu:
                  v199 = (_DWORD *)UPDWORDPointer(8203LL);
                  GreSetFontEnumeration(8 * (*v199 & 2 | 4u));
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
                  v198 = (unsigned int *)UPDWORDPointer(8211LL);
                  GreSetLCDOrientation(*v198);
                  break;
                case 0x201Du:
                  TraceLoggingMouseWheelRoutingModeChange((unsigned int)pszDest);
                  break;
                case 0x201Fu:
                  TraceLoggingSPISetPenVisualizationEvent(v196, (unsigned int)pszDest);
                  break;
              }
            }
            goto LABEL_551;
          }
          if ( *((_DWORD *)&gpviCPUserPreferences + 1) == 4
            && (unsigned int)CheckDesktopPolicy(v181, *((_QWORD *)&gpviCPUserPreferences + 1)) )
          {
            v9 = 0;
            v202 = 0;
          }
          if ( v9 )
          {
            updated = FastGetProfileValue(
                        v102,
                        *((unsigned int *)&gpviCPUserPreferences + 1),
                        *((_QWORD *)&gpviCPUserPreferences + 1),
                        0LL,
                        v214,
                        8);
            memmove(
              (char *)v214 + (unsigned int)updated,
              (char *)&gpdwCPUserPreferencesMask + (unsigned int)updated,
              8LL - (unsigned int)updated);
            v182 = v5 - 4096;
            v183 = 1 << (((v5 - 4096) >> 1) - 32 * ((v5 - 4096) >> 6));
            v184 = (unsigned __int64)(v5 - 4096) >> 6;
            if ( pszDest )
              v214[v184] |= v183;
            else
              v214[v184] &= ~v183;
            updated = FastWriteProfileValue(
                        v102,
                        *((unsigned int *)&gpviCPUserPreferences + 1),
                        *((_QWORD *)&gpviCPUserPreferences + 1),
                        3LL,
                        v214,
                        8);
            v202 = updated;
          }
          else
          {
            v182 = v5 - 4096;
          }
          if ( !v202 )
          {
LABEL_551:
            v87 = (__int64)v102;
            goto LABEL_509;
          }
          v185 = (unsigned int)(1 << ((v182 >> 1) - 32 * (v182 >> 6)));
          v186 = (unsigned __int64)v182 >> 6;
          if ( pszDest )
          {
            *((_DWORD *)&gpdwCPUserPreferencesMask + v186) |= v185;
          }
          else
          {
            v185 = (unsigned int)~(_DWORD)v185;
            *((_DWORD *)&gpdwCPUserPreferencesMask + v186) &= v185;
          }
          if ( v5 <= 0x1023 )
          {
            if ( v5 == 4131 )
            {
LABEL_977:
              v190 = *(_QWORD *)(gptiCurrent + 456LL);
              if ( v190 )
                v191 = *(struct tagWND **)(*(_QWORD *)(v190 + 8) + 24LL);
              else
                v191 = 0LL;
              xxxInternalInvalidate(v191, (HRGN)1, 0x10485u);
              goto LABEL_551;
            }
            if ( v5 == 4101 )
            {
              v187 = gpsi;
              v188 = *(_DWORD *)(gpsi + 7004LL);
              v189 = ((unsigned __int8)v188 ^ (unsigned __int8)gpdwCPUserPreferencesMask) & 4;
            }
            else
            {
              if ( v5 != 4103 )
              {
                if ( v5 != 4105 )
                {
                  if ( v5 != 4107 )
                  {
                    if ( v5 == 4123 )
                      SetPointer(1LL);
                    goto LABEL_551;
                  }
                  v187 = gpsi;
                  v188 = *(_DWORD *)(gpsi + 7004LL);
                  v189 = ((unsigned __int8)v188 ^ (unsigned __int8)gpdwCPUserPreferencesMask) & 0x20;
                  goto LABEL_969;
                }
                goto LABEL_976;
              }
              v187 = gpsi;
              v188 = *(_DWORD *)(gpsi + 7004LL);
              v189 = ((unsigned __int8)v188 ^ (unsigned __int8)gpdwCPUserPreferencesMask) & 8;
            }
LABEL_969:
            *(_DWORD *)(v187 + 7004) = v188 ^ v189;
            goto LABEL_551;
          }
          if ( v5 == 4133 )
          {
            v192 = (void *)ReferenceDwmApiPort(v186, v185);
            DwmAsyncNotifyWindowShadowChange(v192);
            goto LABEL_551;
          }
          if ( v5 != 4159 )
          {
            if ( v5 == 4175 || v5 == 4177 )
              xxxWindowEvent(0x80000007, 0LL, v5, pszDest != 0LL, 0);
            goto LABEL_551;
          }
          *(_DWORD *)(gpsi + 7004LL) ^= (*(_DWORD *)(gpsi + 7004LL) ^ (unsigned int)gpdwCPUserPreferencesMask) & 0x80000000;
          SetPointer(1LL);
LABEL_976:
          CreateBitmapStrip();
          goto LABEL_977;
        }
        v163 = 1439LL;
LABEL_815:
        UserSetLastError(v163, v11, v6, CurrentProcessWin32Process);
        return 0LL;
      }
      v99 = 1;
      if ( (int)a2 > 1 )
        v99 = a2;
      if ( v99 >= 0x32 )
        v99 = 50;
      if ( v99 != (__int64)*(int *)(GetDPIServerInfo(v13, v11, 10LL, CurrentProcessWin32Process) + 4) )
      {
        v101 = (struct _UNICODE_STRING *)CreateProfileUserName(v208, v100, v6, CurrentProcessWin32Process);
        v102 = v101;
        if ( v9 )
        {
          updated = SetWindowMetricInt(v101, 0x88u, v99);
          v202 = updated;
        }
        if ( v202 )
        {
          xxxSetAndDrawNCMetrics(v102, v99, 0LL);
          ProcessDpiServerInfo = GetProcessDpiServerInfo();
          bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), (unsigned int)(*(_DWORD *)(ProcessDpiServerInfo + 4) + 3));
        }
        goto LABEL_551;
      }
LABEL_499:
      v202 = 1;
      goto LABEL_77;
    }
    if ( !v9 )
    {
LABEL_564:
      if ( v202 )
      {
        v112 = pszDest;
        gMouseThresh1 = *(_DWORD *)pszDest;
        gMouseThresh2 = *((_DWORD *)pszDest + 1);
        LOBYTE(v112) = *((_DWORD *)pszDest + 2) != 0;
        EnableMouseAcceleration(v112, v11, v6, CurrentProcessWin32Process);
      }
      goto LABEL_77;
    }
    v104 = CreateProfileUserName(v208, v11, 10LL, CurrentProcessWin32Process);
    v206 = UpdateWinIniInt(v104, 12LL, 10LL, *(unsigned int *)pszDest);
    v105 = UpdateWinIniInt(v104, 12LL, 11LL, *((unsigned int *)pszDest + 1));
    v106 = UpdateWinIniInt(v104, 12LL, 12LL, *((unsigned int *)pszDest + 2));
    v205 = v106;
    v110 = v206;
    if ( v206 )
    {
      if ( v105 && v106 )
      {
        updated = 1;
LABEL_563:
        v202 = updated;
        FreeProfileUserName(v104, v208);
        goto LABEL_564;
      }
      UpdateWinIniInt(v104, 12LL, 10LL, (unsigned int)gMouseThresh1);
    }
    if ( v105 )
      UpdateWinIniInt(v104, 12LL, 11LL, (unsigned int)gMouseThresh2);
    if ( v205 )
    {
      v111 = MouseAccelerationEnabled(v110, v107, v108, v109);
      UpdateWinIniInt(v104, 12LL, 12LL, v111);
    }
    goto LABEL_563;
  }
  if ( v5 > 0x44 )
  {
    if ( v5 <= 0x57 )
    {
      if ( v5 != 87 )
      {
        switch ( v5 )
        {
          case 'E':
            if ( v9 )
            {
              v160 = L"1";
              if ( !a2 )
                v160 = L"0";
              updated = FastWriteProfileStringW(0LL, 27LL, L"On", v160);
              v202 = updated;
            }
            if ( v202 )
            {
              if ( a2 )
                gdwPUDFlags |= 0x20000u;
              else
                gdwPUDFlags &= ~0x20000u;
            }
            goto LABEL_77;
          case 'F':
            v30 = gdwPUDFlags >> 18;
            goto LABEL_103;
          case 'G':
            if ( v9 )
            {
              v159 = L"1";
              if ( !a2 )
                v159 = L"0";
              updated = FastWriteProfileStringW(0LL, 28LL, L"On", v159);
              v202 = updated;
            }
            if ( v202 )
            {
              if ( a2 )
                gdwPUDFlags |= 0x40000u;
              else
                gdwPUDFlags &= ~0x40000u;
            }
            goto LABEL_77;
          case 'H':
            v53 = pszDest;
            if ( !pszDest || a2 != 8 )
              return 0LL;
            *(_DWORD *)pszDest = 8;
            *((_DWORD *)v53 + 1) = *((_WORD *)&gdwPUDFlags + 1) & 1;
            goto LABEL_77;
        }
        if ( v5 != 73 )
        {
          switch ( v5 )
          {
            case 'J':
              v29 = gulFontInformation;
LABEL_102:
              v30 = v29 >> 1;
LABEL_103:
              v28 = v30 & 1;
LABEL_104:
              *(_DWORD *)pszDest = v28;
              goto LABEL_77;
            case 'K':
              if ( (unsigned int)CheckDesktopPolicy(0LL, 200LL) )
              {
                v9 = 0;
                v202 = 0;
              }
              v158 = a2 != 0 ? 2 : 0;
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 200LL, v158);
                v202 = updated;
              }
              if ( v202 )
                GreSetFontEnumeration(v158 | 4);
              goto LABEL_77;
            case 'L':
              if ( (unsigned int)CheckDesktopPolicy(0LL, 198LL) )
              {
                v9 = 0;
                v202 = 0;
              }
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 198LL, a2);
                v202 = updated;
              }
              if ( v202 )
                *(_DWORD *)(gpsi + 2168LL) = a2;
              goto LABEL_77;
            case 'M':
              if ( (unsigned int)CheckDesktopPolicy(0LL, 199LL) )
              {
                v9 = 0;
                v202 = 0;
              }
              if ( v9 )
              {
                updated = UpdateWinIniInt(0LL, 4LL, 199LL, a2);
                v202 = updated;
              }
              if ( v202 )
                *(_DWORD *)(gpsi + 2172LL) = a2;
              goto LABEL_77;
          }
          goto LABEL_69;
        }
LABEL_469:
        if ( (unsigned int)xxxSetSPIMetrics(0LL, v5, pszDest, v9, &updated) )
        {
          v74 = v202;
          if ( v9 )
            v74 = updated;
          v202 = v74;
        }
        else
        {
          v202 = 0;
        }
        RtlLoadStringOrError(135LL, v236, 40LL, 0LL);
        goto LABEL_77;
      }
      ProfileUserName = CreateProfileUserName(v208, v11, 10LL, CurrentProcessWin32Process);
      xxxUpdateSystemCursorsFromRegistry(ProfileUserName, 2LL);
      goto LABEL_508;
    }
    switch ( v5 )
    {
      case 'X':
        ProfileUserName = CreateProfileUserName(v208, v11, 10LL, CurrentProcessWin32Process);
        xxxUpdateSystemIconsFromRegistry(ProfileUserName);
        goto LABEL_508;
      case 'Y':
        if ( gspklBaseLayout )
        {
          *(_QWORD *)pszDest = *(_QWORD *)(gspklBaseLayout + 40LL);
          goto LABEL_77;
        }
        v163 = 21LL;
        goto LABEL_815;
      case 'Z':
        v162 = HKLtoPKL(gptiCurrent, *(_QWORD *)pszDest, 10LL, CurrentProcessWin32Process);
        if ( v162 )
        {
          if ( v202 )
          {
            *(_QWORD *)&v225 = gspklBaseLayout;
            *((_QWORD *)&v225 + 1) = v162;
            v218 = v225;
            HMAssignmentLock(&v218);
          }
          goto LABEL_77;
        }
        return 0LL;
      case '[':
        return GetKbdLangSwitch(0LL, v11, 10LL, CurrentProcessWin32Process);
      case ']':
        if ( v9 )
        {
          RtlStringCchPrintfW(v235, 0x28uLL, L"%d", a2);
          updated = FastUpdateWinIni(0LL, 12LL, 613LL, v235);
          v202 = updated;
        }
        if ( v202 )
          SetMouseTrails(a2, v11, v6, CurrentProcessWin32Process);
        goto LABEL_77;
      case '^':
        v28 = gMouseTrails + 1;
        if ( !gMouseTrails )
          v28 = 0;
        goto LABEL_104;
    }
    if ( v5 != 95 )
    {
      if ( v9 )
      {
        updated = UpdateWinIniInt(0LL, 12LL, 7LL, a2 != 0);
        v202 = updated;
      }
      if ( v202 )
      {
        v20 = v201;
        if ( a2 )
          *(_DWORD *)(gpsi + 7004LL) |= 2u;
        else
          *(_DWORD *)(gpsi + 7004LL) &= ~2u;
        goto LABEL_48;
      }
      goto LABEL_77;
    }
    v161 = *(_DWORD *)(gpsi + 7004LL) >> 1;
LABEL_802:
    v23 = v161 & 1;
    goto LABEL_76;
  }
  if ( v5 == 68 )
  {
    v30 = gdwPUDFlags >> 17;
    goto LABEL_103;
  }
  if ( v5 <= 0x39 )
  {
    if ( v5 == 57 )
    {
      if ( v9 )
      {
        RtlStringCchPrintfW(v235, 0x28uLL, L"%d", a2 == 1);
        updated = FastWriteProfileStringW(0LL, 20LL, L"On", v235);
        v202 = updated;
      }
      if ( v202 )
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
      if ( v5 == 48 )
      {
        v42 = GetPrimaryMonitor(v13, v11, 10LL, CurrentProcessWin32Process);
        MonitorMenuRect = (_OWORD *)GetMonitorWorkRect(v220, v42);
LABEL_235:
        *(_OWORD *)pszDest = *MonitorMenuRect;
        goto LABEL_77;
      }
      if ( v5 != 50 )
      {
        if ( v5 == 51 )
        {
          v136 = pszDest;
          if ( a2 && a2 != 24 )
            return 0LL;
          if ( !pszDest )
            return 0LL;
          if ( *(_DWORD *)pszDest != 24 )
            return 0LL;
          v6 = *((unsigned int *)pszDest + 2);
          if ( (_DWORD)v6 )
          {
            if ( *((_DWORD *)pszDest + 5) )
              return 0LL;
          }
          v137 = *((_DWORD *)pszDest + 1);
          if ( (v137 & 0x7F) != v137 )
            return 0LL;
          v138 = v137 & 0xFFFFFFFD;
          v139 = v137 | 2u;
          if ( (HIDWORD(gFilterKeys) & 2) == 0 )
            v139 = v138;
          *((_DWORD *)pszDest + 1) = v139;
          if ( (unsigned int)v6 > 0x4E20
            || *((_DWORD *)v136 + 3) > 0x4E20u
            || *((_DWORD *)v136 + 4) > 0x4E20u
            || *((_DWORD *)v136 + 5) > 0x4E20u )
          {
            return 0LL;
          }
          if ( v9 )
          {
            v140 = (struct _UNICODE_STRING *)CreateProfileUserName(v208, v139, v6, CurrentProcessWin32Process);
            updated = SetFilterKeys(v140, (struct tagFILTERKEYS *)v136);
            v202 = updated;
            if ( !updated )
              SetFilterKeys(v140, gFilterKeys);
            FreeProfileUserName(v140, v208);
          }
          if ( !v202 )
            goto LABEL_77;
          memmove(gFilterKeys, v136, *(unsigned int *)v136);
          LODWORD(gFilterKeys) = 24;
          if ( (HIDWORD(gFilterKeys) & 1) == 0 )
            StopFilterKeysTimers();
          SetAccessEnabledFlag();
          if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
            xxxCallHook(11, 2uLL, 0LL, 10);
          v132 = 2LL;
          goto LABEL_677;
        }
        if ( v5 != 52 )
        {
          switch ( v5 )
          {
            case '5':
              v133 = pszDest;
              if ( (a2 & 0xFFFFFFF7) == 0 )
              {
                if ( pszDest )
                {
                  if ( *(_DWORD *)pszDest == 8 )
                  {
                    v134 = *((_DWORD *)pszDest + 1);
                    if ( (v134 & 0x3F) == v134 )
                    {
                      v135 = v134 & 0xFFFFFFFD;
                      CurrentProcessWin32Process = v134 | 2u;
                      if ( (HIDWORD(gToggleKeys) & 2) == 0 )
                        CurrentProcessWin32Process = v135;
                      *((_DWORD *)pszDest + 1) = CurrentProcessWin32Process;
                      if ( v9 )
                      {
                        RtlStringCchPrintfW(v235, 0x28uLL, L"%d");
                        updated = FastWriteProfileStringW(0LL, 17LL, L"Flags", v235);
                        v202 = updated;
                      }
                      if ( !v202 )
                        goto LABEL_77;
                      memmove(gToggleKeys, v133, *(unsigned int *)v133);
                      LODWORD(gToggleKeys) = 8;
LABEL_688:
                      SetAccessEnabledFlag();
                      goto LABEL_77;
                    }
                  }
                }
              }
              return 0LL;
            case '6':
              v54 = pszDest;
              if ( (!a2 || a2 == 28) && pszDest && *(_DWORD *)pszDest == 28 && UIntSub(0x1Cu, 4u, &puResult) >= 0 )
              {
                memmove(pszDest + 2, (char *)&gMouseKeys + 4, puResult);
                v55 = *((_DWORD *)pszDest + 1) & 0x4CFFFFFF;
                *((_DWORD *)pszDest + 1) = v55;
                if ( gbMKMouseMode )
                {
                  v55 |= 0x80000000;
                  *((_DWORD *)v54 + 1) = v55;
                }
                v56 = v55 | ((gwMKButtonState & 3) << 24);
                *((_DWORD *)v54 + 1) = v56;
                *((_DWORD *)v54 + 1) = v56 | ((gwMKCurrentButton & 3) << 28);
                goto LABEL_77;
              }
              return 0LL;
            case '7':
              v127 = pszDest;
              if ( a2 && a2 != 28 )
                return 0LL;
              if ( !pszDest )
                return 0LL;
              if ( *(_DWORD *)pszDest != 28 )
                return 0LL;
              v128 = *((_DWORD *)pszDest + 1) & 0x4CFFFFFF;
              *((_DWORD *)pszDest + 1) = v128;
              if ( (unsigned __int8)v128 != v128 )
                return 0LL;
              v129 = (HIDWORD(gMouseKeys) & 2) != 0 ? v128 | 2u : v128 & 0xFFFFFFFD;
              *((_DWORD *)v127 + 1) = v129;
              if ( (unsigned int)(*((_DWORD *)v127 + 2) - 10) > 0x15E
                || (unsigned int)(*((_DWORD *)v127 + 3) - 1000) > 0xFA0 )
              {
                return 0LL;
              }
              if ( v9 )
              {
                v130 = (struct _UNICODE_STRING *)CreateProfileUserName(v208, v129, 10LL, CurrentProcessWin32Process);
                updated = SetMouseKeys(v130, (struct tagMOUSEKEYS *)v127);
                v202 = updated;
                if ( !updated )
                  SetMouseKeys(v130, gMouseKeys);
                FreeProfileUserName(v130, v208);
              }
              if ( !v202 )
                goto LABEL_77;
              memmove(gMouseKeys, v127, *(unsigned int *)v127);
              LODWORD(gMouseKeys) = 28;
              CalculateMouseTable();
              v131 = HIDWORD(gMouseKeys);
              if ( (v131 & 1) != 0 )
              {
                gbMKMouseMode = ((v131 >> 7) & 1) != (((unsigned __int8)(1 << (2 * (gNumLockVk & 3) + 1)) & gafAsyncKeyState[(unsigned __int64)gNumLockVk >> 2]) != 0);
                MKShowMouseCursor();
              }
              else
              {
                MKHideMouseCursor();
              }
              SetAccessEnabledFlag();
              if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
                xxxCallHook(11, 3uLL, 0LL, 10);
              v132 = 3LL;
              goto LABEL_677;
          }
          v30 = gdwPUDFlags >> 15;
          goto LABEL_103;
        }
        v63 = pszDest;
        if ( (a2 & 0xFFFFFFF7) != 0 || !pszDest || *(_DWORD *)pszDest != 8 || UIntSub(8u, 4u, &v205) < 0 )
          return 0LL;
        v64 = v205;
        v65 = (struct tagFILTERKEYS *)gToggleKeys;
LABEL_317:
        v66 = v63 + 2;
LABEL_318:
        memmove(v66, (char *)v65 + 4, v64);
        goto LABEL_77;
      }
      v63 = pszDest;
      if ( a2 && a2 != 24 || !pszDest || *(_DWORD *)pszDest != 24 )
        return 0LL;
      if ( UIntSub(0x18u, 4u, &v210) >= 0 )
      {
        v64 = v210;
        v65 = gFilterKeys;
        goto LABEL_317;
      }
      goto LABEL_1008;
    }
    if ( pszDest )
    {
      if ( *((_DWORD *)pszDest + 2) < *(_DWORD *)pszDest || *((_DWORD *)pszDest + 3) < *((_DWORD *)pszDest + 1) )
        return 0LL;
      v75 = MonitorFromRect((struct tagRECT *)pszDest, 1u, 0);
    }
    else
    {
      v75 = GetPrimaryMonitor(v13, v11, 10LL, CurrentProcessWin32Process);
    }
    v215 = v75;
    v225 = *(_OWORD *)GetMonitorRect(v221, v75);
    v76 = (struct tagRECT *)&v225;
    if ( pszDest )
      v76 = (struct tagRECT *)pszDest;
    if ( (unsigned int)IntersectRect(&v226, &v76->left, (int *)&v225) && EqualRectInl(&v226, v76) )
    {
      v229 = *(struct tagRECT *)GetMonitorWorkRect(v222, v215);
      if ( !EqualRectInl(&v229, &v226) )
      {
        v79 = 0LL;
        if ( a2 )
        {
          v79 = SnapshotMonitorRects();
          if ( !v79 )
            return 0LL;
        }
        if ( (W32GetCurrentThreadDpiAwarenessContext(v78, v77) & 0xF) != 2
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v80) + 456)
          && (v143 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v141) + 456) + 8LL),
              (*(_DWORD *)(v143 + 64) & 1) != 0) )
        {
          v144 = *(_QWORD *)(v215 + 40);
          v145 = W32GetCurrentThreadDpiAwarenessContext(v143, v142);
          LogicalToPhysicalDPIRect(v144 + 44, &v226, v145, &v215);
        }
        else
        {
          tagMONITOR::RedirectedRecttagMONITORrcWorkReal::operator=(v215 + 68, &v226);
        }
        v85 = GetPrimaryMonitor(v82, v81, v83, v84);
        if ( v215 == v85 )
          UpdateDesktopThresholds();
        if ( a2 )
        {
          PushW32ThreadLock(v79, v219, Win32FreePool);
          xxxDesktopRecalc(*(_QWORD *)(gptiCurrent + 456LL), v79);
          PopAndFreeAlwaysW32ThreadLock((__int64)v219, v86);
        }
        updated = 1;
      }
      goto LABEL_499;
    }
LABEL_1008:
    v163 = 87LL;
    goto LABEL_815;
  }
  if ( v5 != 58 )
  {
    if ( v5 != 59 )
    {
      if ( v5 != 60 )
      {
        if ( v5 == 61 )
        {
          if ( (!a2 || a2 == 12)
            && pszDest
            && __PAIR64__(*((_DWORD *)pszDest + 1) & 3, 12) == *(_QWORD *)pszDest
            && *((_DWORD *)pszDest + 2) <= 0x36EE80u )
          {
            if ( v9 )
            {
              v152 = CreateProfileUserName(v208, v11, 10LL, CurrentProcessWin32Process);
              RtlStringCchPrintfW(v235, 0x28uLL, L"%d", *((unsigned int *)pszDest + 1));
              updated = FastWriteProfileStringW(v152, 18LL, L"Flags", v235);
              RtlStringCchPrintfW(v235, 0x28uLL, L"%d", *((unsigned int *)pszDest + 2));
              v153 = FastWriteProfileStringW(v152, 18LL, L"TimeToWait", v235);
              v14 = (v153 & updated) == 0;
              updated &= v153;
              v202 = updated;
              if ( v14 )
              {
                RtlStringCchPrintfW(v235, 0x28uLL, L"%d", HIDWORD(gAccessTimeOut));
                FastWriteProfileStringW(v152, 18LL, L"Flags", v235);
                RtlStringCchPrintfW(v235, 0x28uLL, L"%d", *((unsigned int *)&gAccessTimeOut + 2));
                FastWriteProfileStringW(v152, 18LL, L"TimeToWait", v235);
              }
              FreeProfileUserName(v152, v208);
            }
            if ( v202 )
            {
              memmove(gAccessTimeOut, pszDest, *(unsigned int *)pszDest);
              LODWORD(gAccessTimeOut) = 12;
              SetAccessEnabledFlag();
              AccessTimeOutReset();
            }
            goto LABEL_77;
          }
          return 0LL;
        }
        if ( v5 != 64 )
        {
          if ( v5 != 65 )
          {
            if ( v5 == 66 )
            {
              v17 = pszDest;
              *((_DWORD *)pszDest + 1) = gHighContrast[1];
              v18 = (_OWORD *)*((_QWORD *)v17 + 1);
              v19 = gHighContrastDefaultScheme;
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
              goto LABEL_48;
            }
            v146 = SetHighContrastWorker((struct tagINTERNALSETHIGHCONTRAST *)pszDest, v9, &v202);
            goto LABEL_725;
          }
          v147 = (struct tagSOUNDSENTRYW *)pszDest;
          if ( !a2 || a2 == 56 )
          {
            if ( pszDest )
            {
              if ( *(_DWORD *)pszDest == 56 )
              {
                v148 = *((_DWORD *)pszDest + 1);
                if ( (v148 & 7) == v148
                  && *((_DWORD *)pszDest + 8) <= 3u
                  && !*((_DWORD *)pszDest + 2)
                  && !*((_DWORD *)pszDest + 5) )
                {
                  v149 = v148 & 0xFFFFFFFD;
                  v150 = v148 | 2u;
                  if ( (HIDWORD(gSoundSentry) & 2) == 0 )
                    v150 = v149;
                  *((_DWORD *)pszDest + 1) = v150;
                  if ( v9 )
                  {
                    v151 = (struct _UNICODE_STRING *)CreateProfileUserName(v208, v150, 10LL, CurrentProcessWin32Process);
                    updated = SetSoundSentry(v151, v147);
                    v202 = updated;
                    if ( !updated )
                      SetSoundSentry(v151, gSoundSentry);
                    FreeProfileUserName(v151, v208);
                  }
                  if ( !v202 )
                    goto LABEL_77;
                  memmove(gSoundSentry, v147, *(unsigned int *)v147);
                  LODWORD(gSoundSentry) = 56;
                  goto LABEL_688;
                }
              }
            }
          }
          return 0LL;
        }
        v63 = pszDest;
        if ( a2 && a2 != 56 || !pszDest || *(_DWORD *)pszDest != 56 || UIntSub(0x38u, 4u, &v211) < 0 )
          return 0LL;
        v64 = v211;
        v65 = gSoundSentry;
        goto LABEL_317;
      }
      v154 = pszDest;
      if ( a2 && a2 != 12 || !pszDest || *(_DWORD *)pszDest != 12 || UIntSub(0xCu, 4u, &v212) < 0 )
        return 0LL;
      v64 = v212;
      v65 = (struct tagFILTERKEYS *)gAccessTimeOut;
LABEL_759:
      v66 = v154 + 2;
      goto LABEL_318;
    }
    v155 = pszDest;
    v212 = HIDWORD(gStickyKeys) & 1;
    if ( (a2 & 0xFFFFFFF7) != 0 )
      return 0LL;
    if ( !pszDest )
      return 0LL;
    if ( *(_DWORD *)pszDest != 8 )
      return 0LL;
    pszDest[3] = 0;
    v156 = *((_DWORD *)v155 + 1);
    if ( (v156 & 0x1FF) != v156 )
      return 0LL;
    v157 = v156 & 0xFFFFFFFD;
    CurrentProcessWin32Process = v156 | 2u;
    if ( (HIDWORD(gStickyKeys) & 2) == 0 )
      CurrentProcessWin32Process = v157;
    *((_DWORD *)v155 + 1) = CurrentProcessWin32Process;
    if ( v9 )
    {
      RtlStringCchPrintfW(v235, 0x28uLL, L"%d");
      updated = FastWriteProfileStringW(0LL, 14LL, L"Flags", v235);
      v202 = updated;
    }
    if ( !v202 )
      goto LABEL_77;
    memmove(gStickyKeys, v155, *(unsigned int *)v155);
    LODWORD(gStickyKeys) = 8;
    if ( (HIDWORD(gStickyKeys) & 1) == 0 && v212 )
      xxxTurnOffStickyKeys();
    SetAccessEnabledFlag();
    if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
      xxxCallHook(11, 1uLL, 0LL, 10);
    v132 = 1LL;
LABEL_677:
    PostShellHookMessages(11LL, v132);
    goto LABEL_77;
  }
  v67 = pszDest;
  if ( (a2 & 0xFFFFFFF7) != 0 || !pszDest || *(_DWORD *)pszDest != 8 || UIntSub(8u, 4u, &v213) < 0 )
    return 0LL;
  memmove(pszDest + 2, (char *)&gStickyKeys + 4, v213);
  pszDest[3] = 0;
  *((_DWORD *)v67 + 1) |= gLatchBits << 24;
  *((_DWORD *)v67 + 1) |= gLockBits << 16;
LABEL_77:
  v20 = v201;
LABEL_48:
  if ( updated )
  {
    if ( v20 )
      EditionxxxBroadcastSPIChange(v5, v236, v6, CurrentProcessWin32Process);
  }
  return (unsigned int)v202;
}
