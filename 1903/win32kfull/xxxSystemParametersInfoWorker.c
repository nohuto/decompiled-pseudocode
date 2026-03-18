/*
 * XREFs of xxxSystemParametersInfoWorker @ 0x1C00BA614
 * Callers:
 *     EditionxxxSystemParametersInfoWorker @ 0x1C00BA600 (EditionxxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     PostShellHookMessages @ 0x1C0017CBC (PostShellHookMessages.c)
 *     xxxSendNotifyMessage @ 0x1C001CE70 (xxxSendNotifyMessage.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C0026FDC (IsWindowUnderActiveLockScreen.c)
 *     ?EqualRectInl@@YAKPEBUtagRECT@@0@Z @ 0x1C0028DB8 (-EqualRectInl@@YAKPEBUtagRECT@@0@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00318B0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     GreExtGetObjectW @ 0x1C00338F8 (GreExtGetObjectW.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     SetMouseTrails @ 0x1C0081ACC (SetMouseTrails.c)
 *     SetPointer @ 0x1C0082DE0 (SetPointer.c)
 *     ClearKeyboardStates @ 0x1C0083154 (ClearKeyboardStates.c)
 *     CheckWinstaAttributeAccess @ 0x1C0089140 (CheckWinstaAttributeAccess.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     GetMonitorRect @ 0x1C0090E1C (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C0090E5C (GetMonitorWorkRect.c)
 *     GetWindowNCMetrics @ 0x1C00911AC (GetWindowNCMetrics.c)
 *     GetDPIMetrics @ 0x1C00912E8 (GetDPIMetrics.c)
 *     GetDPIServerInfo @ 0x1C0091344 (GetDPIServerInfo.c)
 *     GetProcessDpiServerInfo @ 0x1C0091370 (GetProcessDpiServerInfo.c)
 *     _MonitorFromRect @ 0x1C0091E40 (_MonitorFromRect.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     IsRemoteConnection @ 0x1C00AC240 (IsRemoteConnection.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00B88F0 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     ReadPointerDeviceSettings @ 0x1C00BA1D4 (ReadPointerDeviceSettings.c)
 *     CheckGrantedAccess @ 0x1C00BE534 (CheckGrantedAccess.c)
 *     xxxInternalInvalidate @ 0x1C00C3B70 (xxxInternalInvalidate.c)
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00DF460 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     SetKeyboardRate @ 0x1C00E0414 (SetKeyboardRate.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C00E1130 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 *     GreSetFontEnumeration @ 0x1C00E2B20 (GreSetFontEnumeration.c)
 *     GreSetLCDOrientation @ 0x1C00E2B84 (GreSetLCDOrientation.c)
 *     GetEasTimeout @ 0x1C00E2CB8 (GetEasTimeout.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00E2E38 (xxxUpdateSystemIconsFromRegistry.c)
 *     ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C00E3040 (-RefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     GetKbdLangSwitch @ 0x1C00E3D2C (GetKbdLangSwitch.c)
 *     CreateBitmapStrip @ 0x1C00E5B90 (CreateBitmapStrip.c)
 *     ?UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z @ 0x1C00E6484 (-UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z.c)
 *     UpdateDesktopThresholds @ 0x1C00E64F0 (UpdateDesktopThresholds.c)
 *     bSetDevDragWidth @ 0x1C00E6964 (bSetDevDragWidth.c)
 *     SetDesktopPattern @ 0x1C0108934 (SetDesktopPattern.c)
 *     xxxDesktopRecalc @ 0x1C0115E7C (xxxDesktopRecalc.c)
 *     _GetIMEShowStatus @ 0x1C0126EC0 (_GetIMEShowStatus.c)
 *     _SetDoubleClickTime @ 0x1C012FAE0 (_SetDoubleClickTime.c)
 *     GetPrimaryMonitor @ 0x1C0139884 (GetPrimaryMonitor.c)
 *     ?PostWindowArrangementCheck@@YAXK@Z @ 0x1C0139E28 (-PostWindowArrangementCheck@@YAXK@Z.c)
 *     xxxSetDeskWallpaper @ 0x1C013A660 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C013A9CC (LoadWallpaperFilenameFromRegistry.c)
 *     UIntSub @ 0x1C013D020 (UIntSub.c)
 *     xxxSetIMEShowStatus @ 0x1C01403AC (xxxSetIMEShowStatus.c)
 *     ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x1C01406A0 (-TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C0141284 (xxxInvalidateWallpaperWindow.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?NotifyISMPenButtonYieldSettingChange@@YAXXZ @ 0x1C0163ACC (-NotifyISMPenButtonYieldSettingChange@@YAXXZ.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?_SwapMouseButton@@YAHH@Z @ 0x1C01CCA00 (-_SwapMouseButton@@YAHH@Z.c)
 *     ?TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z @ 0x1C01CE050 (-TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1C01CF090 (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1C01CF158 (-TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z @ 0x1C01CF220 (-TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z.c)
 *     ?SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z @ 0x1C01D98A0 (-SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D9A04 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x1C01D9C48 (-SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x1C01D9D48 (-SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01D9E48 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01DA188 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C01DA420 (EditionxxxBroadcastSPIChange.c)
 *     UpdateWinIniInt @ 0x1C01DA754 (UpdateWinIniInt.c)
 *     xxxMetricsRecalc @ 0x1C01DA8E4 (xxxMetricsRecalc.c)
 *     GetUserHandedness @ 0x1C01EF790 (GetUserHandedness.c)
 *     WritePointerDeviceSettings @ 0x1C01F9054 (WritePointerDeviceSettings.c)
 *     ?GetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C023E744 (-GetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?SetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C023E76C (-SetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     GetMonitorMenuRect @ 0x1C0259D74 (GetMonitorMenuRect.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x1C027267C (DwmAsyncNotifyWindowShadowChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSystemParametersInfoWorker(__int64 a1, __int64 a2, void *a3, __int16 a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // r13
  __int64 CurrentProcessWin32Process; // r8
  __int64 v7; // r9
  int v8; // r15d
  __int64 v9; // r12
  unsigned int v10; // r14d
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // ebx
  unsigned int DpiForSystem; // eax
  __int64 v22; // rcx
  int UserHandedness; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // r15d
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned int v31; // ebx
  unsigned int v32; // r15d
  unsigned int v33; // ebx
  __int64 v34; // rcx
  int Next_high; // ecx
  unsigned int v36; // ebx
  struct _UNICODE_STRING *ProfileUserName; // rax
  struct _UNICODE_STRING *v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 ProcessDpiServerInfo; // rax
  __int64 v42; // rcx
  __int64 v43; // rdi
  int v44; // r14d
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // r12d
  unsigned __int8 v49; // al
  void *v50; // rcx
  __int64 DeferredRoutine_low; // rcx
  int v52; // ecx
  int v53; // edx
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned int v56; // r15d
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  unsigned int v61; // ebx
  unsigned int v62; // r15d
  __int64 v63; // rbx
  __int64 v64; // rax
  struct tagWND *v65; // rcx
  int v66; // ebx
  signed int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  int v74; // eax
  struct _UNICODE_STRING *v75; // rdi
  int v76; // ebx
  int PointerDeviceSettings; // eax
  __int64 DPIMetrics; // rax
  char *v79; // r8
  _DWORD *v80; // rbx
  unsigned int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  unsigned int v86; // eax
  _DWORD *v87; // r9
  struct tagMOUSEKEYS *v88; // rbx
  int v89; // edx
  unsigned int v90; // edx
  struct _UNICODE_STRING *v91; // r14
  unsigned int v92; // r9d
  __int64 v93; // rdx
  _DWORD *v94; // rbx
  int v95; // ecx
  int v96; // edx
  unsigned int *v97; // rbx
  int v98; // r9d
  unsigned int v99; // r9d
  char *v100; // rbx
  size_t v101; // r8
  struct tagFILTERKEYS *v102; // rdx
  struct tagFILTERKEYS *v103; // rbx
  unsigned int v104; // r8d
  int v105; // edx
  unsigned int v106; // edx
  struct _UNICODE_STRING *v107; // rdi
  __int64 v108; // rax
  _OWORD *MonitorWorkRect; // rax
  __int64 PrimaryMonitor; // rax
  const struct tagRECT *v111; // r14
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // r14
  __int64 v117; // rdx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rdx
  __int64 v121; // r9
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r9
  __int64 v125; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // r9
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // r9
  int v134; // eax
  _QWORD *v135; // rdx
  _OWORD *v136; // rax
  unsigned __int16 *v137; // rcx
  UINT v138; // eax
  struct tagSOUNDSENTRYW *v139; // rbx
  int v140; // edx
  unsigned int v141; // edx
  struct _UNICODE_STRING *v142; // rdi
  __int64 v143; // rdi
  int v144; // eax
  unsigned int *v145; // rdx
  unsigned int v146; // r9d
  unsigned int v147; // r9d
  _DWORD *v148; // r14
  unsigned int v149; // ebx
  unsigned int v150; // ecx
  int v151; // eax
  _DWORD *v152; // rdx
  const wchar_t *v153; // r9
  const wchar_t *v154; // r9
  int v155; // edx
  __int64 v156; // rcx
  bool v157; // zf
  unsigned int i; // ebx
  __int64 v159; // rax
  __int64 v160; // rdi
  const wchar_t *v161; // rbx
  const wchar_t *v162; // r9
  int v163; // eax
  unsigned int *v164; // rax
  int *v165; // rax
  __int64 v166; // r9
  unsigned int v167; // ebx
  unsigned int v168; // ecx
  __int64 v169; // rax
  const struct tagRECT *v170; // rdi
  __int64 v171; // rcx
  __int64 v172; // rdx
  __int64 v173; // r8
  __int64 v174; // r9
  __int64 v175; // rdx
  __int64 v176; // r8
  __int64 v177; // r9
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  unsigned int v182; // eax
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // rcx
  _DWORD *v186; // rcx
  int v187; // ecx
  bool v188; // zf
  int v189; // ecx
  int *v190; // rax
  int v191; // ecx
  __int64 v192; // rax
  __int64 v193; // rbx
  unsigned __int64 v194; // rcx
  unsigned int v195; // ebx
  unsigned int v196; // eax
  unsigned int v197; // ecx
  __int64 v198; // r14
  unsigned __int64 v199; // r8
  __int64 v200; // rdx
  __int64 v201; // r8
  int v202; // edx
  int v203; // ecx
  __int64 v204; // rax
  struct tagWND *v205; // rcx
  void *v206; // rax
  __int64 v207; // rax
  __int64 v208; // rbx
  __int64 v209; // rax
  unsigned int v210; // r15d
  int v211; // ebx
  unsigned int *v212; // rax
  _DWORD *v213; // rax
  int v214; // ecx
  BOOL v215; // edx
  int v216; // [rsp+28h] [rbp-4D0h]
  UINT v217; // [rsp+40h] [rbp-4B8h]
  int v218; // [rsp+44h] [rbp-4B4h] BYREF
  int updated; // [rsp+48h] [rbp-4B0h] BYREF
  void *Src; // [rsp+50h] [rbp-4A8h] BYREF
  unsigned int v221; // [rsp+58h] [rbp-4A0h]
  __int64 v222; // [rsp+60h] [rbp-498h] BYREF
  UINT puResult; // [rsp+68h] [rbp-490h] BYREF
  _QWORD v224[3]; // [rsp+70h] [rbp-488h] BYREF
  UINT v225; // [rsp+88h] [rbp-470h] BYREF
  UINT v226; // [rsp+90h] [rbp-468h] BYREF
  UINT v227; // [rsp+98h] [rbp-460h] BYREF
  __int64 v228; // [rsp+A0h] [rbp-458h] BYREF
  UINT v229[2]; // [rsp+A8h] [rbp-450h] BYREF
  UINT v230; // [rsp+B0h] [rbp-448h] BYREF
  UINT v231; // [rsp+B4h] [rbp-444h] BYREF
  UINT v232; // [rsp+B8h] [rbp-440h] BYREF
  BOOL v233; // [rsp+BCh] [rbp-43Ch] BYREF
  void *v234; // [rsp+C0h] [rbp-438h]
  __int64 v235; // [rsp+C8h] [rbp-430h]
  _QWORD v236[4]; // [rsp+D0h] [rbp-428h] BYREF
  __int128 v237; // [rsp+F0h] [rbp-408h]
  __int128 v238; // [rsp+110h] [rbp-3E8h] BYREF
  __int128 v239; // [rsp+120h] [rbp-3D8h] BYREF
  __int128 v240; // [rsp+130h] [rbp-3C8h] BYREF
  __int128 v241; // [rsp+140h] [rbp-3B8h] BYREF
  __int128 v242; // [rsp+150h] [rbp-3A8h] BYREF
  char v243[16]; // [rsp+160h] [rbp-398h] BYREF
  struct tagRECT v244; // [rsp+170h] [rbp-388h] BYREF
  struct tagRECT v245; // [rsp+180h] [rbp-378h] BYREF
  _QWORD v246[2]; // [rsp+190h] [rbp-368h] BYREF
  int v247; // [rsp+1A0h] [rbp-358h]
  unsigned int v248; // [rsp+1A4h] [rbp-354h]
  __int128 v249; // [rsp+1A8h] [rbp-350h] BYREF
  __int128 v250; // [rsp+1B8h] [rbp-340h] BYREF
  _DWORD v251[8]; // [rsp+1C8h] [rbp-330h] BYREF
  struct tagRECT v252; // [rsp+1E8h] [rbp-310h] BYREF
  wchar_t Dest[40]; // [rsp+200h] [rbp-2F8h] BYREF
  _WORD v254[40]; // [rsp+250h] [rbp-2A8h] BYREF
  _BYTE v255[528]; // [rsp+2A0h] [rbp-258h] BYREF

  LOWORD(v221) = a4;
  v4 = a2;
  v5 = (unsigned int)a1;
  v226 = a1;
  Src = a3;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v222 = CurrentProcessWin32Process;
  updated = 0;
  v8 = 1;
  v9 = 2LL;
  v217 = v221 & 2;
  puResult = v217;
  v10 = v221 & 1;
  v218 = v10 == 0;
  v11 = (unsigned __int16)v221 & 0x8000;
  v221 &= 0x8000u;
  memset(v224, 0, sizeof(v224));
  v254[0] = 0;
  if ( (unsigned int)v5 <= 0x50 )
  {
    if ( (unsigned int)v5 < 0x4F )
    {
      if ( (unsigned int)v5 <= 0x3F )
      {
        v12 = 0xC002018000001180uLL;
        if ( _bittest64((const __int64 *)&v12, v5) )
          goto LABEL_5;
      }
LABEL_13:
      v15 = gpepCSRSS;
      if ( *(_QWORD *)CurrentProcessWin32Process == gpepCSRSS )
      {
        v20 = 10;
        goto LABEL_44;
      }
      if ( (unsigned int)v5 <= 0x3B )
      {
        if ( (_DWORD)v5 != 59 )
        {
          v11 = 0x1C0000000uLL;
          switch ( (int)v5 )
          {
            case 2:
            case 4:
            case 6:
            case 11:
            case 15:
            case 17:
            case 19:
            case 20:
            case 21:
            case 23:
            case 26:
            case 28:
            case 29:
            case 30:
            case 32:
            case 33:
            case 34:
            case 36:
            case 37:
            case 42:
            case 44:
            case 46:
            case 47:
            case 51:
            case 53:
            case 55:
            case 57:
              goto LABEL_24;
            case 13:
            case 24:
              if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) != 0 )
              {
                v16 = 2;
                goto LABEL_26;
              }
              if ( v4 )
                goto LABEL_40;
              return 1LL;
            default:
              goto LABEL_39;
          }
        }
        goto LABEL_24;
      }
      if ( (unsigned int)v5 > 0x63 )
      {
        if ( (_DWORD)v5 == 101
          || (_DWORD)v5 == 103
          || (_DWORD)v5 == 105
          || (_DWORD)v5 == 107
          || (_DWORD)v5 == 109
          || (_DWORD)v5 == 119
          || (_DWORD)v5 == 161
          || (_DWORD)v5 == 163
          || (_DWORD)v5 == 4135 )
        {
          goto LABEL_24;
        }
      }
      else
      {
        v17 = (unsigned int)(v5 - 61);
        if ( (unsigned int)v17 <= 0x26 )
        {
          v18 = 0x486C01D551LL;
          if ( _bittest64(&v18, v17) )
          {
LABEL_24:
            v16 = 16;
            goto LABEL_25;
          }
        }
      }
LABEL_39:
      if ( (v5 & 0x3000) != 0 && (v5 & 1) != 0 )
      {
LABEL_40:
        v16 = 16;
        goto LABEL_41;
      }
      v16 = 2;
LABEL_25:
      if ( v16 == 2 )
      {
LABEL_26:
        v19 = CheckGrantedAccess(*(unsigned int *)(CurrentProcessWin32Process + 680), 2LL);
        goto LABEL_27;
      }
LABEL_41:
      v19 = CheckWinstaAttributeAccess(16LL, v11);
LABEL_27:
      if ( !v19 )
        return 0LL;
      v11 = v221;
      CurrentProcessWin32Process = v222;
      v157 = v16 == 2;
      v20 = 10;
      if ( !v157 )
      {
LABEL_45:
        if ( (unsigned int)v5 > 0x1026 )
        {
          if ( (_DWORD)v5 == 4135 )
          {
            if ( (unsigned int)CheckDesktopPolicy(0LL, 112LL) )
            {
              v10 = 0;
              v218 = 0;
            }
            if ( v10 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 112LL, v4 != 0);
              v218 = updated;
            }
            if ( v218 )
              gbBlockSendInputResets = v4 != 0;
            goto LABEL_990;
          }
          if ( (_DWORD)v5 == 8228 )
          {
            UserHandedness = GetUserHandedness(v15, v11, CurrentProcessWin32Process);
            goto LABEL_67;
          }
          if ( (_DWORD)v5 != 8229 )
            goto LABEL_874;
          v4 = 0;
          if ( (unsigned int)RIMIsDefaultUILanguageRTL(v15, v11, CurrentProcessWin32Process) )
            LOBYTE(v4) = (_DWORD)Src == 0;
          else
            LOBYTE(v4) = (_DWORD)Src != 0;
          goto LABEL_979;
        }
        if ( (_DWORD)v5 == 4134 )
        {
          v157 = gbBlockSendInputResets == 0;
          goto LABEL_649;
        }
        if ( (unsigned int)v5 <= 0x62 )
        {
          if ( (_DWORD)v5 == 98 )
          {
            Next_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next);
            goto LABEL_88;
          }
          if ( (unsigned int)v5 <= 0x2E )
          {
            if ( (_DWORD)v5 != 46 )
            {
              if ( (unsigned int)v5 <= 0x19 )
              {
                if ( (_DWORD)v5 == 25 )
                {
                  v52 = gdwPUDFlags >> 21;
                  goto LABEL_123;
                }
                if ( (unsigned int)v5 <= 0xE )
                {
                  if ( (_DWORD)v5 == 14 )
                  {
                    v53 = (int)abs32(giScreenSaveTimeOutMs) / 1000;
                    goto LABEL_125;
                  }
                  if ( (_DWORD)v5 != 1 )
                  {
                    if ( (_DWORD)v5 == 2 )
                    {
                      if ( v10 )
                      {
                        RtlLoadStringOrError(105 - (unsigned int)(v4 != 0), Dest, 10LL);
                        updated = FastUpdateWinIni(0LL, 11LL, 9LL, Dest);
                        v218 = updated;
                      }
                      if ( v218 )
                      {
                        if ( v4 )
                          gdwPUDFlags |= 0x80000u;
                        else
                          gdwPUDFlags &= ~0x80000u;
                      }
                      goto LABEL_990;
                    }
                    if ( (_DWORD)v5 == 3 )
                    {
                      *(_DWORD *)Src = HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine);
                      DeferredRoutine_low = LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine);
                      *((_DWORD *)Src + 1) = WPP_MAIN_CB.Dpc.DeferredRoutine;
                      *((_DWORD *)Src + 2) = (unsigned __int8)MouseAccelerationEnabled(
                                                                DeferredRoutine_low,
                                                                v11,
                                                                CurrentProcessWin32Process);
                      goto LABEL_990;
                    }
                    if ( (_DWORD)v5 != 4 )
                    {
                      if ( (_DWORD)v5 == 5 )
                      {
                        Next_high = *(_DWORD *)(GetDPIServerInfo() + 4);
                        goto LABEL_88;
                      }
                      if ( (_DWORD)v5 != 6 )
                      {
                        if ( (_DWORD)v5 != 10 )
                        {
                          if ( (_DWORD)v5 != 11 )
                          {
                            if ( (_DWORD)v5 == 13 )
                            {
                              if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) == 0 )
                              {
                                if ( v4 )
                                {
                                  if ( (W32GetCurrentThreadDpiAwarenessContext(v15, v11, CurrentProcessWin32Process, v7) & 0xF) != 0 )
                                  {
                                    v27 = PsGetCurrentProcessWin32Process(v25, v24);
                                    v26 = EngMulDiv(
                                            v4,
                                            *(unsigned __int16 *)(gpsi + 6998LL),
                                            *(unsigned __int16 *)(v27 + 284));
                                    v30 = PsGetCurrentProcessWin32Process(v29, v28);
                                    v4 = EngMulDiv(v26, 96, *(unsigned __int16 *)(v30 + 284));
                                  }
                                  else
                                  {
                                    v26 = EngMulDiv(v4, *(unsigned __int16 *)(gpsi + 6998LL), 96);
                                  }
                                  v31 = *(_DWORD *)(gpsi + 2304LL);
                                  if ( v26 > v31 )
                                    v31 = v26;
                                  v32 = *(_DWORD *)(gpsi + 2424LL);
                                  if ( v4 > v32 )
                                    v32 = v4;
                                  if ( v10 )
                                  {
                                    updated = SetWindowMetricInt(0LL, 0x40u, v31);
                                    v218 = updated;
                                  }
                                  if ( v218 )
                                  {
                                    SetDpiDepSysMet(18LL, v31);
                                    *(_DWORD *)(gpsi + 2476LL) = v32;
                                  }
                                }
                                goto LABEL_990;
                              }
                              DpiForSystem = GetDpiForSystem(v15, v11, CurrentProcessWin32Process, v7);
                              v22 = 18LL;
                              goto LABEL_66;
                            }
                            goto LABEL_874;
                          }
                          v33 = 31;
                          if ( v4 <= 0x1F )
                            v33 = v4;
                          if ( v10 )
                          {
                            updated = UpdateWinIniInt(0LL, 13LL, 13LL, v33);
                            v218 = updated;
                          }
                          if ( !v218 )
                            goto LABEL_990;
                          v34 = v33 | gnKeyboardSpeed & 0xFFFFFFE0;
                          gnKeyboardSpeed = v33 | gnKeyboardSpeed & 0xFFFFFFE0;
                          goto LABEL_86;
                        }
                        Next_high = gnKeyboardSpeed & 0x1F;
                        goto LABEL_88;
                      }
                      v36 = 1;
                      if ( (int)v4 > 1 )
                        v36 = v4;
                      if ( v36 >= 0x32 )
                        v36 = 50;
                      if ( v36 != (__int64)*(int *)(GetDPIServerInfo() + 4) )
                      {
                        ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v224);
                        v38 = ProfileUserName;
                        if ( v10 )
                        {
                          updated = SetWindowMetricInt(ProfileUserName, 0x88u, v36);
                          v218 = updated;
                        }
                        if ( v218 )
                        {
                          xxxSetAndDrawNCMetrics(v38, v36, 0LL);
                          ProcessDpiServerInfo = GetProcessDpiServerInfo(v40, v39);
                          bSetDevDragWidth(
                            *(_QWORD *)(gpDispInfo + 40LL),
                            (unsigned int)(*(_DWORD *)(ProcessDpiServerInfo + 4) + 3));
                        }
                        v42 = (__int64)v38;
                        goto LABEL_100;
                      }
LABEL_94:
                      v218 = 1;
                      goto LABEL_990;
                    }
                    if ( !v10 )
                    {
LABEL_113:
                      if ( v218 )
                      {
                        v50 = Src;
                        HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) = *(_DWORD *)Src;
                        LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) = *((_DWORD *)Src + 1);
                        LOBYTE(v50) = *((_DWORD *)Src + 2) != 0;
                        EnableMouseAcceleration(v50, v11, CurrentProcessWin32Process);
                      }
                      goto LABEL_990;
                    }
                    v43 = CreateProfileUserName(v224);
                    v221 = UpdateWinIniInt(v43, 12LL, 10LL, *(unsigned int *)Src);
                    v44 = UpdateWinIniInt(v43, 12LL, 11LL, *((unsigned int *)Src + 1));
                    v48 = UpdateWinIniInt(v43, 12LL, 12LL, *((unsigned int *)Src + 2));
                    if ( v221 )
                    {
                      if ( v44 && v48 )
                      {
                        updated = 1;
LABEL_112:
                        v218 = updated;
                        FreeProfileUserName(v43, v224);
                        goto LABEL_113;
                      }
                      UpdateWinIniInt(v43, 12LL, 10LL, HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine));
                    }
                    if ( v44 )
                      UpdateWinIniInt(v43, 12LL, 11LL, LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine));
                    if ( v48 )
                    {
                      v49 = MouseAccelerationEnabled(v46, v45, v47);
                      UpdateWinIniInt(v43, 12LL, 12LL, v49);
                    }
                    goto LABEL_112;
                  }
                  v52 = gdwPUDFlags >> 19;
LABEL_123:
                  Next_high = v52 & 1;
                  goto LABEL_88;
                }
                if ( (_DWORD)v5 != 15 )
                {
                  if ( (_DWORD)v5 == 16 )
                  {
                    Next_high = giScreenSaveTimeOutMs > 0;
                    goto LABEL_88;
                  }
                  if ( (_DWORD)v5 != 17 )
                  {
                    switch ( (_DWORD)v5 )
                    {
                      case 0x14:
                        v63 = CreateProfileUserName(v224);
                        if ( (unsigned int)CheckDesktopPolicy(v63, 67LL) )
                        {
                          v10 = 0;
                          v218 = 0;
                        }
                        if ( v10 )
                        {
                          if ( v4 == -1 )
                          {
                            v218 = 1;
                          }
                          else
                          {
                            FastGetProfileStringFromIDW(v63, 4LL, 67LL, &word_1C02DAB68, v255, 260, 8);
                            updated = FastUpdateWinIni(v63, 4LL, 67LL, Src);
                            v218 = updated;
                          }
                        }
                        if ( !v218 )
                          break;
                        if ( (unsigned int)xxxSetDeskWallpaper(v63, Src) )
                        {
                          xxxInvalidateWallpaperWindow();
                        }
                        else
                        {
                          if ( v10 )
                          {
                            if ( v4 == -1 )
                              break;
                            FastUpdateWinIni(v63, 4LL, 67LL, v255);
                          }
                          v218 = 0;
                          updated = 0;
                        }
                        break;
                      case 0x15:
                        if ( v4 == -1 && Src )
                        {
LABEL_5:
                          v13 = 87LL;
LABEL_6:
                          UserSetLastError(v13, v11, CurrentProcessWin32Process, v7);
                          return 0LL;
                        }
                        v63 = CreateProfileUserName(v224);
                        if ( (unsigned int)CheckDesktopPolicy(v63, 2LL) )
                        {
                          v10 = 0;
                          v218 = 0;
                        }
                        if ( v10 && Src )
                        {
                          FastGetProfileStringFromIDW(v63, 4LL, 2LL, &word_1C02DAB68, v255, 260, 0);
                          updated = FastUpdateWinIni(v63, 4LL, 2LL, Src);
                          v218 = updated;
                        }
                        if ( v218 )
                        {
                          if ( !(unsigned int)SetDesktopPattern(v63, Src) )
                          {
                            if ( v10 && Src )
                              FastUpdateWinIni(v63, 4LL, 2LL, v255);
                            FreeProfileUserName(v63, v224);
                            return 0LL;
                          }
                          xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x15u, 0LL, 0LL, 1);
                          v64 = *(_QWORD *)(gptiCurrent + 448LL);
                          if ( v64 )
                            v65 = *(struct tagWND **)(*(_QWORD *)(v64 + 8) + 24LL);
                          else
                            v65 = 0LL;
                          xxxInternalInvalidate(v65, (HRGN)1, 0x10485u);
                        }
                        break;
                      case 0x16:
                        Next_high = (gnKeyboardSpeed >> 5) & 3;
LABEL_88:
                        *(_DWORD *)Src = Next_high;
                        goto LABEL_990;
                      case 0x17:
                        if ( v10 )
                        {
                          updated = UpdateWinIniInt(0LL, 13LL, 106LL, v4);
                          v218 = updated;
                        }
                        if ( !v218 )
                          goto LABEL_990;
                        gnKeyboardSpeed = gnKeyboardSpeed & 0xFFFFFF9F | (32 * v4);
                        v34 = (unsigned int)gnKeyboardSpeed;
LABEL_86:
                        SetKeyboardRate(v34, v11, CurrentProcessWin32Process);
                        goto LABEL_990;
                      case 0x18:
                        if ( ((unsigned __int64)Src & 0xFFFFFFFFFFFF0000uLL) == 0 )
                        {
                          if ( v4 )
                          {
                            if ( (W32GetCurrentThreadDpiAwarenessContext(v15, v11, CurrentProcessWin32Process, v7) & 0xF) != 0 )
                            {
                              v57 = PsGetCurrentProcessWin32Process(v55, v54);
                              v56 = EngMulDiv(
                                      v4,
                                      *(unsigned __int16 *)(gpsi + 6998LL),
                                      *(unsigned __int16 *)(v57 + 284));
                              v60 = PsGetCurrentProcessWin32Process(v59, v58);
                              v4 = EngMulDiv(v56, 96, *(unsigned __int16 *)(v60 + 284));
                            }
                            else
                            {
                              v56 = EngMulDiv(v4, *(unsigned __int16 *)(gpsi + 6998LL), 96);
                            }
                            v61 = *(_DWORD *)(gpsi + 2308LL);
                            if ( v56 > v61 )
                              v61 = v56;
                            v62 = *(_DWORD *)(gpsi + 2428LL);
                            if ( v4 > v62 )
                              v62 = v4;
                            if ( v10 )
                            {
                              updated = SetWindowMetricInt(0LL, 0x41u, v61);
                              v218 = updated;
                            }
                            if ( v218 )
                            {
                              SetDpiDepSysMet(19LL, v61);
                              *(_DWORD *)(gpsi + 2480LL) = v62;
                            }
                          }
                          goto LABEL_990;
                        }
                        DpiForSystem = GetDpiForSystem(v15, v11, CurrentProcessWin32Process, v7);
                        v22 = 19LL;
LABEL_66:
                        UserHandedness = GetDpiDependentMetric(v22, DpiForSystem);
LABEL_67:
                        *(_DWORD *)Src = UserHandedness;
LABEL_990:
                        v138 = v217;
                        goto LABEL_991;
                      default:
LABEL_874:
                        if ( (unsigned int)v5 < 0xAE )
                        {
                          v13 = 1439LL;
                          goto LABEL_6;
                        }
                        if ( (v5 & 1) == 0 )
                        {
                          if ( (v5 & 0x3000) != 0x1000 )
                          {
                            v190 = (int *)UPDWORDPointer((unsigned int)v5);
                            v191 = *v190;
                            *(_DWORD *)Src = *v190;
                            if ( (_DWORD)v5 != 8204 || v191 )
                              goto LABEL_990;
                            Next_high = gulGamma;
                            goto LABEL_88;
                          }
                          v53 = 0;
                          v187 = 0;
                          if ( (unsigned int)v5 >= 0x103E )
                            goto LABEL_900;
                          if ( (int)gpdwCPUserPreferencesMask < 0 )
                          {
                            switch ( (_DWORD)v5 )
                            {
                              case 0x1008:
                                goto LABEL_898;
                              case 0x100A:
                                v53 = (gdwPUDFlags >> 17) & 1;
                                v187 = v53;
                                goto LABEL_900;
                              case 0x1012:
                              case 0x1014:
                              case 0x1018:
                              case 0x101A:
LABEL_898:
                                if ( gbDisableAlpha )
                                  v187 = 1;
                                goto LABEL_900;
                            }
                            if ( (_DWORD)v5 != 4132 )
                              goto LABEL_900;
                            if ( !gbDisableAlpha )
                            {
                              v188 = gcOverlays == 0;
LABEL_895:
                              if ( v188 )
                                goto LABEL_900;
                            }
                          }
                          else
                          {
                            if ( (_DWORD)v5 == 4096 )
                              goto LABEL_900;
                            if ( (_DWORD)v5 != 4106 )
                            {
                              if ( (_DWORD)v5 != 4108 && (_DWORD)v5 != 4124 )
                              {
                                v188 = (_DWORD)v5 == 4126;
                                goto LABEL_895;
                              }
LABEL_900:
                              if ( !v187 )
                              {
                                if ( (_DWORD)v5 == 4158 && IsRemoteConnection() )
                                {
                                  v157 = ((unsigned __int16)gpdwCPUserPreferencesMask & 0x3A0E) == 0;
                                  goto LABEL_649;
                                }
                                v189 = *((_DWORD *)&gpdwCPUserPreferencesMask
                                       + ((unsigned __int64)(unsigned int)(v5 - 4096) >> 6));
                                v53 = _bittest(
                                        &v189,
                                        (unsigned __int8)(((unsigned int)(v5 - 4096) >> 1)
                                                        - 32 * ((unsigned int)(v5 - 4096) >> 6)));
                              }
LABEL_125:
                              *(_DWORD *)Src = v53;
                              goto LABEL_990;
                            }
                            v53 = 1;
                          }
                          v187 = 1;
                          goto LABEL_900;
                        }
                        v192 = CreateProfileUserName(v224);
                        v193 = v192;
                        v222 = v192;
                        v194 = v5 & 0x3000;
                        if ( (_DWORD)v194 != 4096 )
                        {
                          if ( *(_DWORD *)(UPDWORDPointer((unsigned int)v5) + 4) == 4 )
                          {
                            v207 = UPDWORDPointer((unsigned int)v5);
                            if ( (unsigned int)CheckDesktopPolicy(v193, *(_QWORD *)(v207 + 8)) )
                            {
                              v10 = 0;
                              v218 = 0;
                            }
                          }
                          if ( v10 )
                          {
                            v208 = UPDWORDPointer((unsigned int)v5);
                            v209 = UPDWORDPointer((unsigned int)v5);
                            v198 = v222;
                            updated = FastWriteProfileValue(
                                        v222,
                                        *(unsigned int *)(v209 + 4),
                                        *(_QWORD *)(v208 + 8),
                                        4LL,
                                        &Src,
                                        4);
                            v218 = updated;
                          }
                          else
                          {
                            v198 = v193;
                          }
                          v210 = *(_DWORD *)UPDWORDPointer((unsigned int)v5);
                          if ( v218 )
                          {
                            v211 = (int)Src;
                            *(_DWORD *)UPDWORDPointer((unsigned int)v5) = v211;
                            switch ( (_DWORD)v5 )
                            {
                              case 0x2007:
                                *(_DWORD *)(gpsi + 7008LL) = *(_DWORD *)UPDWORDPointer(8199LL);
                                break;
                              case 0x200B:
                                v213 = (_DWORD *)UPDWORDPointer(8203LL);
                                GreSetFontEnumeration(8 * (*v213 & 2 | 4u));
                                break;
                              case 0x200D:
                                gulGamma = *(_DWORD *)UPDWORDPointer(8205LL);
                                break;
                              case 0x200F:
                                if ( *(_DWORD *)UPDWORDPointer(8207LL) )
                                  *(_DWORD *)(gpsi + 2228LL) = *(_DWORD *)UPDWORDPointer(8207LL);
                                break;
                              case 0x2011:
                                if ( *(_DWORD *)UPDWORDPointer(8209LL) )
                                  *(_DWORD *)(gpsi + 2232LL) = *(_DWORD *)UPDWORDPointer(8209LL);
                                break;
                              case 0x2013:
                                v212 = (unsigned int *)UPDWORDPointer(8211LL);
                                GreSetLCDOrientation(*v212);
                                break;
                              case 0x201D:
                                TraceLoggingMouseWheelRoutingModeChange((unsigned int)Src);
                                break;
                              case 0x201F:
                                TraceLoggingSPISetPenVisualizationEvent(v210, (unsigned int)Src);
                                break;
                              case 0x2029:
                                CCursorSizes::RefreshSizes(gpCursorSizes);
                                break;
                            }
                          }
                          goto LABEL_975;
                        }
                        if ( *((_DWORD *)&gpviCPUserPreferences + 1) == 4
                          && (unsigned int)CheckDesktopPolicy(v192, *((_QWORD *)&gpviCPUserPreferences + 1)) )
                        {
                          v10 = 0;
                          v218 = 0;
                        }
                        if ( v10 )
                        {
                          updated = FastGetProfileValue(
                                      v193,
                                      *((unsigned int *)&gpviCPUserPreferences + 1),
                                      *((_QWORD *)&gpviCPUserPreferences + 1),
                                      0LL,
                                      v229,
                                      8,
                                      0);
                          memmove(
                            (char *)v229 + (unsigned int)updated,
                            (char *)&gpdwCPUserPreferencesMask + (unsigned int)updated,
                            8LL - (unsigned int)updated);
                          v195 = v5 - 4096;
                          v196 = v5 - 4096;
                          v197 = v5 - 4096;
                          if ( Src )
                            v229[(unsigned __int64)v195 >> 6] |= 1 << ((v197 >> 1) - 32 * (v196 >> 6));
                          else
                            v229[(unsigned __int64)v195 >> 6] &= ~(1 << ((v196 >> 1) - 32 * (v197 >> 6)));
                          v198 = v222;
                          updated = FastWriteProfileValue(
                                      v222,
                                      *((unsigned int *)&gpviCPUserPreferences + 1),
                                      *((_QWORD *)&gpviCPUserPreferences + 1),
                                      3LL,
                                      v229,
                                      8);
                          v218 = updated;
                        }
                        else
                        {
                          v195 = v5 - 4096;
                          v198 = v222;
                        }
                        if ( !v218 )
                        {
LABEL_975:
                          v42 = v198;
                          goto LABEL_100;
                        }
                        v199 = (unsigned __int64)(unsigned int)(v5 - 4096) >> 6;
                        if ( Src )
                        {
                          LOBYTE(v194) = (v195 >> 1) - 32 * (v195 >> 6);
                          v200 = (unsigned int)(1 << v194);
                          *((_DWORD *)&gpdwCPUserPreferencesMask + v199) |= v200;
                        }
                        else
                        {
                          v194 = 32 * (v195 >> 6);
                          LOBYTE(v194) = (v195 >> 1) - 32 * (v195 >> 6);
                          v200 = (unsigned int)~(1 << v194);
                          *((_DWORD *)&gpdwCPUserPreferencesMask + v199) &= v200;
                        }
                        if ( (unsigned int)v5 <= 0x1023 )
                        {
                          if ( (_DWORD)v5 == 4131 )
                          {
LABEL_943:
                            v204 = *(_QWORD *)(gptiCurrent + 448LL);
                            if ( v204 )
                              v205 = *(struct tagWND **)(*(_QWORD *)(v204 + 8) + 24LL);
                            else
                              v205 = 0LL;
                            xxxInternalInvalidate(v205, (HRGN)1, 0x10485u);
                            goto LABEL_975;
                          }
                          if ( (_DWORD)v5 == 4101 )
                          {
                            v201 = gpsi;
                            v202 = *(_DWORD *)(gpsi + 7004LL);
                            v203 = ((unsigned __int8)v202 ^ (unsigned __int8)gpdwCPUserPreferencesMask) & 4;
                          }
                          else
                          {
                            if ( (_DWORD)v5 != 4103 )
                            {
                              if ( (_DWORD)v5 != 4105 )
                              {
                                if ( (_DWORD)v5 != 4107 )
                                {
                                  if ( (_DWORD)v5 == 4123 )
                                    SetPointer(1LL);
                                  goto LABEL_975;
                                }
                                v201 = gpsi;
                                v202 = *(_DWORD *)(gpsi + 7004LL);
                                v203 = ((unsigned __int8)v202 ^ (unsigned __int8)gpdwCPUserPreferencesMask) & 0x20;
                                goto LABEL_933;
                              }
                              goto LABEL_942;
                            }
                            v201 = gpsi;
                            v202 = *(_DWORD *)(gpsi + 7004LL);
                            v203 = ((unsigned __int8)v202 ^ (unsigned __int8)gpdwCPUserPreferencesMask) & 8;
                          }
LABEL_933:
                          *(_DWORD *)(v201 + 7004) = v202 ^ v203;
                          goto LABEL_975;
                        }
                        if ( (_DWORD)v5 == 4133 )
                        {
                          v206 = (void *)ReferenceDwmApiPort(v194, v200, v199);
                          DwmAsyncNotifyWindowShadowChange(v206);
                          goto LABEL_975;
                        }
                        if ( (_DWORD)v5 != 4159 )
                        {
                          if ( (_DWORD)v5 == 4175 || (_DWORD)v5 == 4177 )
                          {
                            xxxWindowEvent(0x80000007, 0LL, (unsigned int)v5, Src != 0LL, 0);
                          }
                          else if ( (_DWORD)v5 == 4179 )
                          {
                            NotifyISMPenButtonYieldSettingChange();
                          }
                          goto LABEL_975;
                        }
                        *(_DWORD *)(gpsi + 7004LL) ^= (*(_DWORD *)(gpsi + 7004LL) ^ (unsigned int)gpdwCPUserPreferencesMask) & 0x80000000;
                        SetPointer(1LL);
LABEL_942:
                        CreateBitmapStrip();
                        goto LABEL_943;
                    }
LABEL_166:
                    v42 = v63;
LABEL_100:
                    FreeProfileUserName(v42, v224);
                    goto LABEL_990;
                  }
                  if ( v4 - 2 <= 0xFFFFFFFC )
                    return 0LL;
                  if ( !gdwRITdemonLockState || (_DWORD)v11 )
                  {
                    gbLockConsoleActive = v4 == -1;
                    if ( gfSwitchInProgress )
                      return 0LL;
                    if ( (unsigned int)CheckDesktopPolicy(0LL, 100LL) )
                    {
                      v10 = 0;
                      v218 = 0;
                    }
                    if ( v10 )
                    {
                      updated = UpdateWinIniInt(0LL, 4LL, 100LL, v4);
                      v218 = updated;
                    }
                    if ( !v218 )
                      goto LABEL_990;
                    if ( !gbBlockSendInputResets )
                    {
                      v235 = MEMORY[0xFFFFF78000000320];
                      CInputGlobals::UpdateLastInputTime(
                        gpInputGlobals,
                        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                        6LL);
                    }
                    if ( giScreenSaveTimeOutMs < 0 )
                    {
                      if ( v4 )
                        goto LABEL_200;
                      if ( giScreenSaveTimeOutMs < 0 )
                        goto LABEL_990;
                    }
                    if ( v4 )
                      goto LABEL_990;
LABEL_200:
                    giScreenSaveTimeOutMs = -giScreenSaveTimeOutMs;
                    goto LABEL_990;
                  }
LABEL_205:
                  v13 = 329LL;
                  goto LABEL_6;
                }
                v222 = giScreenSaveTimeOutMs;
                if ( gfSwitchInProgress )
                  return 0LL;
                if ( gdwRITdemonLockState && !(_DWORD)v11 )
                  goto LABEL_205;
                v66 = 1000 * v4;
                v67 = 1000 * GetEasTimeout(v15, v11, CurrentProcessWin32Process);
                puResult = v67;
                if ( v67 )
                {
                  if ( *(int *)v222 > 0 && v67 < v66 || v66 <= 0 )
                  {
                    UserSetLastError(1260LL, v68, v69, v70);
                    v10 = 0;
                    v218 = 0;
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
                    v221 = 0;
                    if ( !(unsigned int)FastGetProfileIntFromID(0LL, 4LL, 99LL) )
                      goto LABEL_221;
                    v74 = 1000 * v221;
                    v221 = v74;
                    if ( !v74 || v74 >= (int)puResult || *(int *)v222 <= 0 || v74 >= v66 )
                      goto LABEL_221;
                    UserSetLastError(1260LL, v71, v72, v73);
                  }
                  v218 = 0;
                  v10 = 0;
                }
LABEL_221:
                if ( v10 )
                {
                  updated = UpdateWinIniInt(0LL, 4LL, 99LL, v66 / 0x3E8u);
                  v218 = updated;
                }
                if ( v218 )
                {
                  if ( !gbBlockSendInputResets )
                  {
                    v234 = (void *)MEMORY[0xFFFFF78000000320];
                    CInputGlobals::UpdateLastInputTime(
                      gpInputGlobals,
                      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                      6LL);
                  }
                  if ( *(int *)v222 < 0 && !v8 )
                    v66 = -1000 * v4;
                  *(_DWORD *)v222 = v66;
                }
                goto LABEL_990;
              }
              if ( (unsigned int)v5 <= 0x23 )
              {
                switch ( (_DWORD)v5 )
                {
                  case 0x23:
                    *(_DWORD *)Src = 1;
                    goto LABEL_990;
                  case 0x1A:
                    if ( v10 )
                    {
                      updated = SetWindowMetricInt(0LL, 0x42u, v4 != 0);
                      v218 = updated;
                    }
                    if ( v218 )
                    {
                      if ( v4 )
                        gdwPUDFlags |= 0x200000u;
                      else
                        gdwPUDFlags &= ~0x200000u;
                      xxxMetricsRecalc(2, 0, 0, 0, 0, 0, 0);
                    }
                    goto LABEL_990;
                  case 0x1B:
                    v53 = *(_DWORD *)(gpsi + 2056LL);
                    goto LABEL_125;
                }
                if ( (_DWORD)v5 != 28 )
                {
                  if ( (_DWORD)v5 == 29 )
                  {
                    if ( v10 )
                    {
                      updated = UpdateWinIniInt(0LL, 12LL, 97LL, v4);
                      v218 = updated;
                    }
                    if ( v218 )
                      *(_DWORD *)(gpsi + 2040LL) = v4;
                    goto LABEL_990;
                  }
                  if ( (_DWORD)v5 == 30 )
                  {
                    if ( v10 )
                    {
                      updated = UpdateWinIniInt(0LL, 12LL, 98LL, v4);
                      v218 = updated;
                    }
                    if ( v218 )
                      *(_DWORD *)(gpsi + 2044LL) = v4;
                    goto LABEL_990;
                  }
                  if ( (_DWORD)v5 != 31 )
                  {
                    if ( (_DWORD)v5 == 32 )
                    {
                      if ( v10 )
                      {
                        updated = UpdateWinIniInt(0LL, 12LL, 6LL, v4);
                        v218 = updated;
                      }
                      if ( v218 )
                        SetDoubleClickTime(v4, v11, CurrentProcessWin32Process);
                      goto LABEL_990;
                    }
                    if ( (_DWORD)v5 == 33 )
                    {
                      if ( v10 )
                      {
                        updated = UpdateWinIniInt(0LL, 12LL, 5LL, v4);
                        v218 = updated;
                      }
                      if ( v218 )
                        _SwapMouseButton(v4 != 0);
                      goto LABEL_990;
                    }
                    if ( Src )
                    {
                      if ( v4 != 92 )
                        return 0LL;
                    }
                    else if ( v4 )
                    {
                      return 0LL;
                    }
                    v75 = (struct _UNICODE_STRING *)CreateProfileUserName(v224);
                    v76 = xxxSetSPIMetrics(v75, 0x22u, Src, v10, &updated);
                    FreeProfileUserName(v75, v224);
                    if ( !v76 )
                    {
                      v218 = 0;
                      goto LABEL_990;
                    }
                    if ( !v10 )
                      goto LABEL_990;
                    PointerDeviceSettings = updated;
                    goto LABEL_249;
                  }
                  DPIMetrics = GetDPIMetrics();
                  v79 = (char *)Src;
LABEL_259:
                  GreExtGetObjectW(*(HBRUSH *)(DPIMetrics + 64), 92LL, v79);
                  goto LABEL_990;
                }
LABEL_979:
                if ( v10 )
                {
                  updated = UpdateWinIniInt(0LL, 3LL, 96LL, v4);
                  v218 = updated;
                }
                if ( v218 )
                {
                  v214 = *(_DWORD *)(gpsi + 2056LL);
                  v215 = v4 != 0;
                  *(_DWORD *)(gpsi + 2056LL) = v215;
                  TraceLoggingSPISetMenuDropAlignmentEvent(v214, v215);
                }
                goto LABEL_990;
              }
              switch ( (_DWORD)v5 )
              {
                case '$':
                  goto LABEL_990;
                case '%':
                  if ( (unsigned int)CheckDesktopPolicy(0LL, 107LL) )
                  {
                    v10 = 0;
                    v218 = 0;
                  }
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 4LL, 107LL, v4 == 1);
                    v218 = updated;
                  }
                  if ( v218 )
                  {
                    if ( v4 == 1 )
                      gdwPUDFlags |= 0x100000u;
                    else
                      gdwPUDFlags &= ~0x100000u;
                  }
                  goto LABEL_990;
                case '&':
                  v52 = gdwPUDFlags >> 20;
                  goto LABEL_123;
                case ')':
                  if ( !Src )
                    return 0LL;
                  GetWindowNCMetrics((__int64)Src, v11);
                  goto LABEL_990;
              }
              if ( (_DWORD)v5 != 42 )
              {
                if ( (_DWORD)v5 == 43 )
                {
                  v87 = Src;
                  *(_DWORD *)Src = 20;
                  v87[1] = *(_DWORD *)(gpsi + 2124LL) - 6;
                  v87[2] = *(_DWORD *)(gpsi + 2084LL) - *(_DWORD *)(gpsi + 2124LL);
                  v87[3] = *(_DWORD *)(gpsi + 2088LL) - *(_DWORD *)(gpsi + 2128LL);
                  v87[4] = *(_DWORD *)(gpsi + 2120LL);
                  goto LABEL_990;
                }
                if ( (_DWORD)v5 != 44 )
                {
                  if ( (_DWORD)v5 != 45 )
                    goto LABEL_874;
                  v80 = Src;
                  *(_DWORD *)Src = 108;
                  v81 = GetDpiForSystem(v15, v11, CurrentProcessWin32Process, v7);
                  v80[1] = GetDpiDependentMetric(18LL, v81);
                  v86 = GetDpiForSystem(v83, v82, v84, v85);
                  v80[2] = GetDpiDependentMetric(19LL, v86);
                  v80[3] = (gdwPUDFlags >> 21) & 1;
                  DPIMetrics = GetDPIMetrics();
                  v79 = (char *)(v80 + 4);
                  goto LABEL_259;
                }
              }
            }
LABEL_528:
            if ( (unsigned int)xxxSetSPIMetrics(0LL, v5, Src, v10, &updated) )
            {
              v151 = v218;
              if ( v10 )
                v151 = updated;
              v218 = v151;
            }
            else
            {
              v218 = 0;
            }
            RtlLoadStringOrError(135LL, v254, 40LL);
            goto LABEL_990;
          }
          if ( (unsigned int)v5 <= 0x44 )
          {
            if ( (_DWORD)v5 == 68 )
            {
              v52 = gdwPUDFlags >> 17;
              goto LABEL_123;
            }
            if ( (unsigned int)v5 <= 0x39 )
            {
              if ( (_DWORD)v5 == 57 )
              {
                if ( v10 )
                {
                  RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", v4 == 1);
                  updated = FastWriteProfileStringW(0LL, 20LL, L"On", Dest);
                  v218 = updated;
                }
                if ( v218 )
                {
                  if ( v4 == 1 )
                    gdwPUDFlags |= 0x8000u;
                  else
                    gdwPUDFlags &= ~0x8000u;
                  SetAccessEnabledFlag();
                  *(_DWORD *)(gpsi + 2176LL) = (gdwPUDFlags >> 15) & 1;
                }
                goto LABEL_990;
              }
              if ( (_DWORD)v5 == 47 )
              {
                *(_QWORD *)&v244.left = 0LL;
                *(_QWORD *)&v244.right = 0LL;
                if ( Src )
                {
                  if ( *((_DWORD *)Src + 2) < *(_DWORD *)Src || *((_DWORD *)Src + 3) < *((_DWORD *)Src + 1) )
                    return 0LL;
                  PrimaryMonitor = MonitorFromRect((struct tagRECT *)Src, 1u, 0);
                }
                else
                {
                  PrimaryMonitor = GetPrimaryMonitor(v15, v11, CurrentProcessWin32Process);
                }
                v228 = PrimaryMonitor;
                v249 = *GetMonitorRect(&v240, PrimaryMonitor);
                v111 = (const struct tagRECT *)&v249;
                if ( Src )
                  v111 = (const struct tagRECT *)Src;
                if ( !(unsigned int)IntersectRect(&v244, v111, &v249) || !EqualRectInl(&v244, v111) )
                  goto LABEL_5;
                v252 = (struct tagRECT)*GetMonitorWorkRect(&v241, v228);
                if ( !EqualRectInl(&v252, &v244) )
                {
                  v116 = 0LL;
                  if ( v4 )
                  {
                    v116 = SnapshotMonitorRects();
                    if ( !v116 )
                      return 0LL;
                  }
                  if ( (W32GetCurrentThreadDpiAwarenessContext(v113, v112, v114, v115) & 0xF) != 2
                    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v117, v118, v119) + 448)
                    && (v123 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v120,
                                                           v118,
                                                           v121)
                                                       + 448)
                                           + 8LL),
                        (*(_DWORD *)(v123 + 64) & 1) != 0) )
                  {
                    v125 = *(_QWORD *)(v228 + 40);
                    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v123, v122, v118, v124);
                    LogicalToPhysicalDPIRect(v125 + 44, &v244, CurrentThreadDpiAwarenessContext, &v228);
                  }
                  else
                  {
                    v127 = v228;
                    *(_DWORD *)(*(_QWORD *)(v228 + 40) + 44LL) = v244.left;
                    *(_DWORD *)(*(_QWORD *)(v127 + 40) + 48LL) = v244.top;
                    *(_DWORD *)(*(_QWORD *)(v127 + 40) + 52LL) = v244.right;
                    v128 = *(_QWORD *)(v127 + 40);
                    *(_DWORD *)(v128 + 56) = v244.bottom;
                  }
                  v129 = GetPrimaryMonitor(v128, v127, v118);
                  if ( v228 == v129 )
                    UpdateDesktopThresholds();
                  if ( v4 )
                  {
                    memset(v236, 0, 24);
                    PushW32ThreadLock(v116, v236, (__int64)Win32FreePool, v130);
                    xxxDesktopRecalc(*(_QWORD *)(gptiCurrent + 448LL), v116);
                    PopAndFreeAlwaysW32ThreadLock((__int64)v236, v131, v132, v133);
                  }
                  updated = 1;
                }
                goto LABEL_94;
              }
              if ( (_DWORD)v5 != 48 )
              {
                switch ( (_DWORD)v5 )
                {
                  case '2':
                    v100 = (char *)Src;
                    if ( v4 && v4 != 24 || !Src || *(_DWORD *)Src != 24 )
                      return 0LL;
                    if ( UIntSub(0x18u, 4u, &v226) < 0 )
                      goto LABEL_5;
                    v101 = v226;
                    v102 = gFilterKeys;
                    break;
                  case '3':
                    v103 = (struct tagFILTERKEYS *)Src;
                    if ( v4 && v4 != 24 )
                      return 0LL;
                    if ( !Src )
                      return 0LL;
                    if ( *(_DWORD *)Src != 24 )
                      return 0LL;
                    v104 = *((_DWORD *)Src + 2);
                    if ( v104 )
                    {
                      if ( *((_DWORD *)Src + 5) )
                        return 0LL;
                    }
                    v105 = *((_DWORD *)Src + 1);
                    if ( (v105 & 0x7F) != v105 )
                      return 0LL;
                    v106 = (HIDWORD(gFilterKeys) & 2) != 0 ? v105 | 2 : v105 & 0xFFFFFFFD;
                    *((_DWORD *)Src + 1) = v106;
                    if ( v104 > 0x4E20
                      || *((_DWORD *)v103 + 3) > 0x4E20u
                      || *((_DWORD *)v103 + 4) > 0x4E20u
                      || *((_DWORD *)v103 + 5) > 0x4E20u )
                    {
                      return 0LL;
                    }
                    if ( v10 )
                    {
                      v107 = (struct _UNICODE_STRING *)CreateProfileUserName(v224);
                      updated = SetFilterKeys(v107, v103);
                      v218 = updated;
                      if ( !updated )
                        SetFilterKeys(v107, gFilterKeys);
                      FreeProfileUserName(v107, v224);
                    }
                    if ( !v218 )
                      goto LABEL_990;
                    memmove(gFilterKeys, v103, *(unsigned int *)v103);
                    LODWORD(gFilterKeys) = 24;
                    if ( (HIDWORD(gFilterKeys) & 1) == 0 )
                      StopFilterKeysTimers();
                    SetAccessEnabledFlag();
                    if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0 )
                      xxxCallHook(11, 2uLL, 0LL, 10);
                    v93 = 2LL;
                    goto LABEL_333;
                  case '4':
                    v100 = (char *)Src;
                    if ( (v4 & 0xFFFFFFF7) != 0 || !Src || *(_DWORD *)Src != 8 || UIntSub(8u, 4u, &v225) < 0 )
                      return 0LL;
                    v101 = v225;
                    v102 = (struct tagFILTERKEYS *)gToggleKeys;
                    break;
                  case '5':
                    v97 = (unsigned int *)Src;
                    if ( (v4 & 0xFFFFFFF7) != 0 )
                      return 0LL;
                    if ( !Src )
                      return 0LL;
                    if ( *(_DWORD *)Src != 8 )
                      return 0LL;
                    v98 = *((_DWORD *)Src + 1);
                    if ( (v98 & 0x3F) != v98 )
                      return 0LL;
                    if ( (HIDWORD(gToggleKeys) & 2) != 0 )
                      v99 = v98 | 2;
                    else
                      v99 = v98 & 0xFFFFFFFD;
                    *((_DWORD *)Src + 1) = v99;
                    if ( v10 )
                    {
                      RtlStringCchPrintfW(Dest, 0x28uLL, L"%d");
                      updated = FastWriteProfileStringW(0LL, 17LL, L"Flags", Dest);
                      v218 = updated;
                    }
                    if ( !v218 )
                      goto LABEL_990;
                    memmove(gToggleKeys, v97, *v97);
                    LODWORD(gToggleKeys) = 8;
LABEL_353:
                    SetAccessEnabledFlag();
                    goto LABEL_990;
                  case '6':
                    v94 = Src;
                    if ( v4 && v4 != 28 || !Src || *(_DWORD *)Src != 28 || UIntSub(0x1Cu, 4u, &puResult) < 0 )
                      return 0LL;
                    memmove((char *)Src + 4, (char *)&gMouseKeys + 4, puResult);
                    v95 = *((_DWORD *)Src + 1) & 0x4CFFFFFF;
                    *((_DWORD *)Src + 1) = v95;
                    if ( gbMKMouseMode )
                    {
                      v95 |= 0x80000000;
                      v94[1] = v95;
                    }
                    v96 = v95 | ((gwMKButtonState & 3) << 24);
                    v94[1] = v96;
                    v94[1] = v96 | ((gwMKCurrentButton & 3) << 28);
                    goto LABEL_990;
                  case '7':
                    v88 = (struct tagMOUSEKEYS *)Src;
                    if ( v4 && v4 != 28 )
                      return 0LL;
                    if ( !Src )
                      return 0LL;
                    if ( *(_DWORD *)Src != 28 )
                      return 0LL;
                    v89 = *((_DWORD *)Src + 1) & 0x4CFFFFFF;
                    *((_DWORD *)Src + 1) = v89;
                    if ( (unsigned __int8)v89 != v89 )
                      return 0LL;
                    v90 = (HIDWORD(gMouseKeys) & 2) != 0 ? v89 | 2 : v89 & 0xFFFFFFFD;
                    *((_DWORD *)v88 + 1) = v90;
                    if ( (unsigned int)(*((_DWORD *)v88 + 2) - 10) > 0x15E
                      || (unsigned int)(*((_DWORD *)v88 + 3) - 1000) > 0xFA0 )
                    {
                      return 0LL;
                    }
                    if ( v10 )
                    {
                      v91 = (struct _UNICODE_STRING *)CreateProfileUserName(v224);
                      updated = SetMouseKeys(v91, v88);
                      v218 = updated;
                      if ( !updated )
                        SetMouseKeys(v91, gMouseKeys);
                      FreeProfileUserName(v91, v224);
                    }
                    if ( !v218 )
                      goto LABEL_990;
                    memmove(gMouseKeys, v88, *(unsigned int *)v88);
                    LODWORD(gMouseKeys) = 28;
                    CalculateMouseTable();
                    v92 = HIDWORD(gMouseKeys);
                    if ( (v92 & 1) != 0 )
                    {
                      gbMKMouseMode = ((v92 >> 7) & 1) != (((unsigned __int8)(1 << (2 * (gNumLockVk & 3) + 1)) & gafAsyncKeyState[(unsigned __int64)gNumLockVk >> 2]) != 0);
                      MKShowMouseCursor();
                    }
                    else
                    {
                      MKHideMouseCursor();
                    }
                    SetAccessEnabledFlag();
                    if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0 )
                      xxxCallHook(11, 3uLL, 0LL, 10);
                    v93 = 3LL;
LABEL_333:
                    PostShellHookMessages(0xBuLL, v93);
                    goto LABEL_990;
                  case '8':
                    v52 = gdwPUDFlags >> 15;
                    goto LABEL_123;
                  default:
                    goto LABEL_874;
                }
LABEL_359:
                memmove(v100 + 4, (char *)v102 + 4, v101);
                goto LABEL_990;
              }
              v108 = GetPrimaryMonitor(v15, v11, CurrentProcessWin32Process);
              MonitorWorkRect = GetMonitorWorkRect(&v239, v108);
LABEL_391:
              *(_OWORD *)Src = *MonitorWorkRect;
              goto LABEL_990;
            }
            switch ( (_DWORD)v5 )
            {
              case ':':
                v148 = Src;
                if ( (v4 & 0xFFFFFFF7) != 0 || !Src || *(_DWORD *)Src != 8 || UIntSub(8u, 4u, &v231) < 0 )
                  return 0LL;
                memmove((char *)Src + 4, (char *)&gStickyKeys + 4, v231);
                *((_WORD *)Src + 3) = 0;
                v148[1] |= gLatchBits << 24;
                v148[1] |= gLockBits << 16;
                goto LABEL_990;
              case ';':
                v145 = (unsigned int *)Src;
                v234 = Src;
                v227 = HIDWORD(gStickyKeys) & 1;
                if ( (v4 & 0xFFFFFFF7) != 0 )
                  return 0LL;
                if ( !Src )
                  return 0LL;
                if ( *(_DWORD *)Src != 8 )
                  return 0LL;
                *((_WORD *)Src + 3) = 0;
                v146 = v145[1];
                if ( (v146 & 0x1FF) != v146 )
                  return 0LL;
                if ( (HIDWORD(gStickyKeys) & 2) != 0 )
                  v147 = v146 | 2;
                else
                  v147 = v146 & 0xFFFFFFFD;
                v145[1] = v147;
                if ( v10 )
                {
                  RtlStringCchPrintfW(Dest, 0x28uLL, L"%d");
                  updated = FastWriteProfileStringW(0LL, 14LL, L"Flags", Dest);
                  v218 = updated;
                  v145 = (unsigned int *)v234;
                }
                if ( !v218 )
                  goto LABEL_990;
                memmove(gStickyKeys, v145, *v145);
                LODWORD(gStickyKeys) = 8;
                if ( (HIDWORD(gStickyKeys) & 1) == 0 && v227 )
                  xxxTurnOffStickyKeys();
                SetAccessEnabledFlag();
                if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0 )
                  xxxCallHook(11, 1uLL, 0LL, 10);
                v93 = 1LL;
                goto LABEL_333;
              case '<':
                v100 = (char *)Src;
                if ( v4 && v4 != 12 || !Src || *(_DWORD *)Src != 12 || UIntSub(0xCu, 4u, &v227) < 0 )
                  return 0LL;
                v101 = v227;
                v102 = (struct tagFILTERKEYS *)gAccessTimeOut;
                goto LABEL_359;
              case '=':
                if ( v4 && v4 != 12
                  || !Src
                  || *(_DWORD *)Src != 12
                  || (*((_DWORD *)Src + 1) & 3) != *((_DWORD *)Src + 1)
                  || *((_DWORD *)Src + 2) > 0x36EE80u )
                {
                  return 0LL;
                }
                if ( v10 )
                {
                  v143 = CreateProfileUserName(v224);
                  RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", *((unsigned int *)Src + 1));
                  updated = FastWriteProfileStringW(v143, 18LL, L"Flags", Dest);
                  RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", *((unsigned int *)Src + 2));
                  v144 = FastWriteProfileStringW(v143, 18LL, L"TimeToWait", Dest);
                  v157 = (v144 & updated) == 0;
                  updated &= v144;
                  v218 = updated;
                  if ( v157 )
                  {
                    RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", HIDWORD(gAccessTimeOut));
                    FastWriteProfileStringW(v143, 18LL, L"Flags", Dest);
                    RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", *((unsigned int *)&gAccessTimeOut + 2));
                    FastWriteProfileStringW(v143, 18LL, L"TimeToWait", Dest);
                  }
                  FreeProfileUserName(v143, v224);
                }
                if ( v218 )
                {
                  memmove(gAccessTimeOut, Src, *(unsigned int *)Src);
                  LODWORD(gAccessTimeOut) = 12;
                  SetAccessEnabledFlag();
                  AccessTimeOutReset();
                }
                goto LABEL_990;
              case '@':
                v100 = (char *)Src;
                if ( v4 && v4 != 56 || !Src || *(_DWORD *)Src != 56 || UIntSub(0x38u, 4u, &v230) < 0 )
                  return 0LL;
                v101 = v230;
                v102 = gSoundSentry;
                goto LABEL_359;
              case 'A':
                v139 = (struct tagSOUNDSENTRYW *)Src;
                if ( v4 && v4 != 56 )
                  return 0LL;
                if ( !Src )
                  return 0LL;
                if ( *(_DWORD *)Src != 56 )
                  return 0LL;
                v140 = *((_DWORD *)Src + 1);
                if ( (v140 & 7) != v140 || *((_DWORD *)Src + 8) > 3u || *((_DWORD *)Src + 2) || *((_DWORD *)Src + 5) )
                  return 0LL;
                if ( (HIDWORD(gSoundSentry) & 2) != 0 )
                  v141 = v140 | 2;
                else
                  v141 = v140 & 0xFFFFFFFD;
                *((_DWORD *)Src + 1) = v141;
                if ( v10 )
                {
                  v142 = (struct _UNICODE_STRING *)CreateProfileUserName(v224);
                  updated = SetSoundSentry(v142, v139);
                  v218 = updated;
                  if ( !updated )
                    SetSoundSentry(v142, gSoundSentry);
                  FreeProfileUserName(v142, v224);
                }
                if ( !v218 )
                  goto LABEL_990;
                memmove(gSoundSentry, v139, *(unsigned int *)v139);
                LODWORD(gSoundSentry) = 56;
                goto LABEL_353;
            }
            if ( (_DWORD)v5 != 66 )
            {
              if ( (_DWORD)v5 != 67 )
                goto LABEL_874;
              v134 = SetHighContrastWorker((struct tagINTERNALSETHIGHCONTRAST *)Src, v10, &v218);
LABEL_430:
              updated = v134;
              goto LABEL_990;
            }
            v135 = Src;
            *((_DWORD *)Src + 1) = gHighContrast[1];
            v136 = (_OWORD *)v135[1];
            v137 = gHighContrastDefaultScheme;
            do
            {
              *v136 = *(_OWORD *)v137;
              v136[1] = *((_OWORD *)v137 + 1);
              v136[2] = *((_OWORD *)v137 + 2);
              v136[3] = *((_OWORD *)v137 + 3);
              v136[4] = *((_OWORD *)v137 + 4);
              v136[5] = *((_OWORD *)v137 + 5);
              v136[6] = *((_OWORD *)v137 + 6);
              v136 += 8;
              *(v136 - 1) = *((_OWORD *)v137 + 7);
              v137 += 64;
              --v9;
            }
            while ( v9 );
            v138 = v217;
LABEL_991:
            if ( updated )
            {
LABEL_992:
              if ( v138 )
                EditionxxxBroadcastSPIChange((unsigned int)v5, v254);
              return (unsigned int)v218;
            }
            return (unsigned int)v218;
          }
          if ( (unsigned int)v5 <= 0x57 )
          {
            switch ( (_DWORD)v5 )
            {
              case 'W':
                v63 = CreateProfileUserName(v224);
                xxxUpdateSystemCursorsFromRegistry(v63, 2u);
                goto LABEL_166;
              case 'E':
                if ( v10 )
                {
                  v154 = L"1";
                  if ( !v4 )
                    v154 = L"0";
                  updated = FastWriteProfileStringW(0LL, 27LL, L"On", v154);
                  v218 = updated;
                }
                if ( v218 )
                {
                  if ( v4 )
                    gdwPUDFlags |= 0x20000u;
                  else
                    gdwPUDFlags &= ~0x20000u;
                }
                goto LABEL_990;
              case 'F':
                v52 = gdwPUDFlags >> 18;
                goto LABEL_123;
              case 'G':
                if ( v10 )
                {
                  v153 = L"1";
                  if ( !v4 )
                    v153 = L"0";
                  updated = FastWriteProfileStringW(0LL, 28LL, L"On", v153);
                  v218 = updated;
                }
                if ( v218 )
                {
                  if ( v4 )
                    gdwPUDFlags |= 0x40000u;
                  else
                    gdwPUDFlags &= ~0x40000u;
                }
                goto LABEL_990;
              case 'H':
                v152 = Src;
                if ( !Src || v4 != 8 )
                  return 0LL;
                *(_DWORD *)Src = 8;
                v152[1] = *((_WORD *)&gdwPUDFlags + 1) & 1;
                goto LABEL_990;
              case 'I':
                goto LABEL_528;
            }
            if ( (_DWORD)v5 != 74 )
            {
              switch ( (_DWORD)v5 )
              {
                case 'K':
                  if ( (unsigned int)CheckDesktopPolicy(0LL, 200LL) )
                  {
                    v10 = 0;
                    v218 = 0;
                  }
                  v149 = v4 != 0 ? 2 : 0;
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 4LL, 200LL, v149);
                    v218 = updated;
                  }
                  if ( v218 )
                    GreSetFontEnumeration(v149 | 4);
                  goto LABEL_990;
                case 'L':
                  if ( (unsigned int)CheckDesktopPolicy(0LL, 198LL) )
                  {
                    v10 = 0;
                    v218 = 0;
                  }
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 4LL, 198LL, v4);
                    v218 = updated;
                  }
                  if ( v218 )
                    *(_DWORD *)(gpsi + 2168LL) = v4;
                  goto LABEL_990;
                case 'M':
                  if ( (unsigned int)CheckDesktopPolicy(0LL, 199LL) )
                  {
                    v10 = 0;
                    v218 = 0;
                  }
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 4LL, 199LL, v4);
                    v218 = updated;
                  }
                  if ( v218 )
                    *(_DWORD *)(gpsi + 2172LL) = v4;
                  goto LABEL_990;
              }
              goto LABEL_874;
            }
            v150 = gulFontInformation;
LABEL_527:
            v52 = v150 >> 1;
            goto LABEL_123;
          }
          switch ( (_DWORD)v5 )
          {
            case 'X':
              v63 = CreateProfileUserName(v224);
              xxxUpdateSystemIconsFromRegistry(v63);
              goto LABEL_166;
            case 'Y':
              if ( !gspklBaseLayout )
              {
                v13 = 21LL;
                goto LABEL_6;
              }
              *(_QWORD *)Src = *(_QWORD *)(gspklBaseLayout + 40LL);
              goto LABEL_990;
            case 'Z':
              v156 = HKLtoPKL(gptiCurrent, *(_QWORD *)Src, CurrentProcessWin32Process);
              if ( !v156 )
                return 0LL;
              if ( v218 )
              {
                *(_QWORD *)&v237 = gspklBaseLayout;
                *((_QWORD *)&v237 + 1) = v156;
                v238 = v237;
                HMAssignmentLock(&v238);
              }
              goto LABEL_990;
            case '[':
              return GetKbdLangSwitch(0LL, v11, CurrentProcessWin32Process);
            case ']':
              if ( v10 )
              {
                RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", v4);
                updated = FastUpdateWinIni(0LL, 12LL, 613LL, Dest);
                v218 = updated;
              }
              if ( v218 )
                SetMouseTrails(v4);
              goto LABEL_990;
            case '^':
              Next_high = LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) + 1;
              if ( !LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
                Next_high = 0;
              goto LABEL_88;
          }
          if ( (_DWORD)v5 != 95 )
          {
            if ( v10 )
            {
              updated = UpdateWinIniInt(0LL, 12LL, 7LL, v4 != 0);
              v218 = updated;
            }
            if ( !v218 )
              goto LABEL_990;
            v138 = v217;
            if ( v4 )
              *(_DWORD *)(gpsi + 7004LL) |= 2u;
            else
              *(_DWORD *)(gpsi + 7004LL) &= ~2u;
            goto LABEL_991;
          }
          v155 = *(_DWORD *)(gpsi + 7004LL) >> 1;
LABEL_569:
          v53 = v155 & 1;
          goto LABEL_125;
        }
        if ( (unsigned int)v5 <= 0x88 )
        {
          if ( (_DWORD)v5 == 136 )
          {
            Next_high = dword_1C03223B0;
            goto LABEL_88;
          }
          if ( (unsigned int)v5 <= 0x75 )
          {
            if ( (_DWORD)v5 == 117 )
            {
              if ( v4 && v4 != 12 || !Src || *(_DWORD *)Src != 12 )
                return 0LL;
              if ( v10 )
              {
                v159 = CreateProfileUserName(v224);
                v160 = v159;
                v161 = L"1";
                v162 = L"1";
                if ( !*((_DWORD *)Src + 1) )
                  v162 = L"0";
                updated = FastWriteProfileStringW(v159, 48LL, L"On", v162);
                RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", *((unsigned int *)Src + 2));
                v163 = FastWriteProfileStringW(v160, 48LL, L"Locale", Dest);
                v157 = (v163 & updated) == 0;
                updated &= v163;
                v218 = updated;
                if ( v157 )
                {
                  if ( !HIDWORD(gAudioDescription) )
                    v161 = L"0";
                  FastWriteProfileStringW(v160, 48LL, L"On", v161);
                  RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", *((unsigned int *)&gAudioDescription + 2));
                  FastWriteProfileStringW(v160, 48LL, L"Locale", Dest);
                }
                FreeProfileUserName(v160, v224);
              }
              if ( v218 )
              {
                memmove(gAudioDescription, Src, *(unsigned int *)Src);
                LODWORD(gAudioDescription) = 12;
              }
              goto LABEL_990;
            }
            if ( (unsigned int)v5 <= 0x6C )
            {
              switch ( (_DWORD)v5 )
              {
                case 'l':
                  v53 = *(_DWORD *)(gpsi + 4992LL);
                  goto LABEL_125;
                case 'c':
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 12LL, 91LL, v4);
                    v218 = updated;
                  }
                  v138 = v217;
                  if ( v218 )
                    HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) = v4;
                  break;
                case 'd':
                  Next_high = (int)WPP_MAIN_CB.Dpc.DpcListEntry.Next;
                  goto LABEL_88;
                case 'e':
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 12LL, 92LL, v4);
                    v218 = updated;
                  }
                  v138 = v217;
                  if ( v218 )
                    LODWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) = v4;
                  break;
                case 'f':
                  Next_high = *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1);
                  goto LABEL_88;
                case 'g':
                  if ( v4 >= 0xA )
                    v20 = v4;
                  if ( v20 > 0x7FFFFFFF )
                    v20 = 0x7FFFFFFF;
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 12LL, 93LL, v20);
                    v218 = updated;
                  }
                  v138 = v217;
                  if ( v218 )
                    *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) = v20;
                  break;
                case 'h':
                  v53 = *(_DWORD *)(gpsi + 4988LL);
                  goto LABEL_125;
                case 'i':
                  if ( (unsigned int)CheckDesktopPolicy(0LL, 14LL) )
                  {
                    v10 = 0;
                    v218 = 0;
                  }
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 4LL, 14LL, v4);
                    v218 = updated;
                  }
                  if ( v218 )
                    *(_DWORD *)(gpsi + 4988LL) = v4;
                  goto LABEL_990;
                case 'j':
                  Next_high = (int)WPP_MAIN_CB.Dpc.SystemArgument1;
                  goto LABEL_88;
                default:
                  if ( (unsigned int)CheckDesktopPolicy(0LL, 94LL) )
                  {
                    v10 = 0;
                    v218 = 0;
                  }
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 4LL, 94LL, v4);
                    v218 = updated;
                  }
                  v138 = v217;
                  if ( v218 )
                    LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = v4;
                  break;
              }
              goto LABEL_991;
            }
            switch ( (_DWORD)v5 )
            {
              case 'm':
                if ( (unsigned int)CheckDesktopPolicy(0LL, 15LL) )
                {
                  v10 = 0;
                  v218 = 0;
                }
                if ( v10 )
                {
                  updated = UpdateWinIniInt(0LL, 4LL, 15LL, v4);
                  v218 = updated;
                }
                if ( v218 )
                  *(_DWORD *)(gpsi + 4992LL) = v4;
                goto LABEL_990;
              case 'n':
                UserHandedness = GetIMEShowStatus(136LL, v11, CurrentProcessWin32Process);
                goto LABEL_67;
              case 'o':
                PointerDeviceSettings = xxxSetIMEShowStatus(v4 != 0, v10, &updated);
                goto LABEL_249;
              case 'p':
                UserHandedness = GetMouseSensitivity(0LL, v11, CurrentProcessWin32Process);
                goto LABEL_67;
              case 'q':
                if ( !(unsigned __int8)IsValidMouseSensitivity((unsigned int)Src, v11, CurrentProcessWin32Process) )
                  return 0LL;
                if ( v10 )
                {
                  RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", Src);
                  updated = FastUpdateWinIni(0LL, 12LL, 608LL, Dest);
                  v218 = updated;
                }
                if ( v218 )
                {
                  UpdateMouseSensitivity((unsigned int)Src);
                  for ( i = 0; i < 2; ++i )
                    ResetAccelerationCurves(i);
                }
                goto LABEL_990;
            }
            if ( (_DWORD)v5 != 114 )
            {
              if ( (_DWORD)v5 == 115 )
              {
                if ( g_pWallpaperSettings )
                {
                  RtlStringCchCopyW((char *)Src, 260LL, (char *)(g_pWallpaperSettings + 4LL));
                  goto LABEL_990;
                }
                v63 = CreateProfileUserName(v224);
                LoadWallpaperFilenameFromRegistry(v63, Src, 260LL);
                goto LABEL_166;
              }
              v100 = (char *)Src;
              if ( v4 && v4 != 12 || !Src || *(_DWORD *)Src != 12 || UIntSub(0xCu, 4u, &v232) < 0 )
                return 0LL;
              v101 = v232;
              v102 = (struct tagFILTERKEYS *)gAudioDescription;
              goto LABEL_359;
            }
            v157 = gppiScreenSaver == 0LL;
LABEL_649:
            Next_high = !v157;
            goto LABEL_88;
          }
          if ( (unsigned int)v5 <= 0x7F )
          {
            if ( (_DWORD)v5 != 127 )
            {
              switch ( (_DWORD)v5 )
              {
                case 'v':
                  v155 = *gpsi >> 9;
                  goto LABEL_569;
                case 'w':
                  if ( gdwRITdemonLockState && !(_DWORD)v11 )
                    goto LABEL_205;
                  if ( (unsigned int)CheckDesktopPolicy(0LL, 618LL) )
                  {
                    v10 = 0;
                    v218 = 0;
                  }
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 4LL, 618LL, v4 != 0);
                    v218 = updated;
                  }
                  if ( !v218 )
                    goto LABEL_990;
                  v138 = v217;
                  if ( v4 )
                    _InterlockedOr(gpsi, 0x200u);
                  else
                    _InterlockedAnd(gpsi, 0xFFFFFDFF);
                  goto LABEL_991;
                case 'x':
                  v165 = (int *)gdwHungAppTimeout;
                  break;
                case 'y':
                  if ( (unsigned int)CheckDesktopPolicy(0LL, 621LL) )
                  {
                    v10 = 0;
                    v218 = 0;
                  }
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 4LL, 621LL, v4);
                    v218 = updated;
                  }
                  if ( !v218 )
                    goto LABEL_990;
                  v164 = (unsigned int *)gdwHungAppTimeout;
                  goto LABEL_697;
                case 'z':
                  Next_high = gdwWaitToKillTimeout;
                  goto LABEL_88;
                case '{':
                  if ( (unsigned int)CheckDesktopPolicy(0LL, 622LL) )
                  {
                    v10 = 0;
                    v218 = 0;
                  }
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 4LL, 622LL, v4);
                    v218 = updated;
                  }
                  v138 = v217;
                  if ( v218 )
                    gdwWaitToKillTimeout = v4;
                  goto LABEL_991;
                case '|':
                  v165 = (int *)gdwWaitToKillServiceTimeout;
                  break;
                case '}':
                  if ( (unsigned int)CheckDesktopPolicy(0LL, 623LL) )
                  {
                    v10 = 0;
                    v218 = 0;
                  }
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 52LL, 623LL, v4);
                    v218 = updated;
                  }
                  if ( !v218 )
                    goto LABEL_990;
                  v164 = (unsigned int *)gdwWaitToKillServiceTimeout;
LABEL_697:
                  *v164 = v4;
                  goto LABEL_990;
                default:
                  Next_high = gWinArrGlobal;
                  goto LABEL_88;
              }
LABEL_699:
              Next_high = *v165;
              goto LABEL_88;
            }
            if ( v4 > *(_DWORD *)(gpDispInfo + 136LL)
              || v4 > dword_1C03223A4
              || v4 > dword_1C03223A8
              || v4 > dword_1C03223B0 )
            {
              goto LABEL_990;
            }
            v216 = 0;
            v166 = 16LL;
LABEL_730:
            UpdateThresholdFromMetric(v10, &updated, &v218, v166, (_BYTE)v4, v216);
            goto LABEL_990;
          }
          switch ( (_DWORD)v5 )
          {
            case 0x80:
              Next_high = dword_1C03223A4;
              goto LABEL_88;
            case 0x81:
              if ( v4 > *(_DWORD *)(gpDispInfo + 136LL)
                || v4 < gWinArrGlobal
                || v4 > dword_1C03223AC
                || v4 > dword_1C03223B4 )
              {
                goto LABEL_990;
              }
              v216 = 1;
              v166 = 17LL;
              goto LABEL_730;
            case 0x82:
              LOBYTE(v52) = dword_1C03223BC;
              goto LABEL_123;
          }
          if ( (_DWORD)v5 != 131 )
          {
            switch ( (_DWORD)v5 )
            {
              case 0x84:
                Next_high = dword_1C03223A8;
                goto LABEL_88;
              case 0x85:
                if ( v4 > *(_DWORD *)(gpDispInfo + 136LL) || v4 > dword_1C03223AC || v4 < gWinArrGlobal )
                  goto LABEL_990;
                v216 = 2;
                v166 = 19LL;
                break;
              case 0x86:
                Next_high = dword_1C03223AC;
                goto LABEL_88;
              default:
                if ( v4 > *(_DWORD *)(gpDispInfo + 136LL) || v4 < dword_1C03223A8 || v4 < dword_1C03223A4 )
                  goto LABEL_990;
                v216 = 3;
                v166 = 20LL;
                break;
            }
            goto LABEL_730;
          }
          v167 = 18;
LABEL_774:
          if ( (unsigned int)CheckDesktopPolicy(0LL, v167) )
          {
            v10 = 0;
            v218 = 0;
          }
          if ( v10 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, v167, v4);
            v218 = updated;
          }
          if ( v218 )
          {
            v168 = dword_1C03223BC;
            if ( v4 )
              dword_1C03223BC |= v8;
            else
              dword_1C03223BC &= ~v8;
            PostWindowArrangementCheck(v168);
          }
          goto LABEL_990;
        }
        if ( (unsigned int)v5 <= 0x9B )
        {
          if ( (_DWORD)v5 != 155 )
          {
            if ( (unsigned int)v5 <= 0x92 )
            {
              if ( (_DWORD)v5 != 146 )
              {
                switch ( (_DWORD)v5 )
                {
                  case 0x89:
                    if ( v4 > *(_DWORD *)(gpDispInfo + 136LL) || v4 > dword_1C03223B4 || v4 < gWinArrGlobal )
                      goto LABEL_990;
                    v216 = 4;
                    v166 = 21LL;
                    goto LABEL_730;
                  case 0x8A:
                    Next_high = dword_1C03223B4;
                    goto LABEL_88;
                  case 0x8B:
                    if ( v4 > *(_DWORD *)(gpDispInfo + 136LL) || v4 < dword_1C03223B0 || v4 < dword_1C03223A4 )
                      goto LABEL_990;
                    v216 = 5;
                    v166 = 22LL;
                    goto LABEL_730;
                  case 0x8C:
                    v150 = dword_1C03223BC;
                    goto LABEL_527;
                  case 0x8D:
                    v167 = 624;
                    v8 = 2;
                    break;
                  case 0x8E:
                    v52 = dword_1C03223BC >> 2;
                    goto LABEL_123;
                  case 0x8F:
                    v167 = 626;
                    v8 = 4;
                    break;
                  case 0x90:
                    v52 = dword_1C03223BC >> 3;
                    goto LABEL_123;
                  default:
                    v167 = 625;
                    v8 = 8;
                    break;
                }
                goto LABEL_774;
              }
LABEL_799:
              PointerDeviceSettings = ReadPointerDeviceSettings(
                                        v5,
                                        (__int64)Src,
                                        (unsigned __int16 *)CurrentProcessWin32Process,
                                        v7);
              goto LABEL_249;
            }
            if ( (_DWORD)v5 != 147
              && ((_DWORD)v5 == 148 || (_DWORD)v5 != 149
                                    && ((_DWORD)v5 == 150 || (_DWORD)v5 != 151 && (_DWORD)v5 != 153)) )
            {
              goto LABEL_799;
            }
          }
LABEL_827:
          v134 = WritePointerDeviceSettings((unsigned int)v5, Src, v10);
          goto LABEL_430;
        }
        if ( (unsigned int)v5 > 0xA5 )
        {
          if ( (_DWORD)v5 == 166 )
            goto LABEL_859;
          if ( (_DWORD)v5 != 167 )
          {
            if ( (_DWORD)v5 == 168 )
            {
              Next_high = gbLockScreenAutoLockActive;
              goto LABEL_88;
            }
            if ( (_DWORD)v5 == 169 )
            {
              if ( gfSwitchInProgress )
                return 0LL;
              if ( gdwRITdemonLockState && !(_DWORD)v11 )
                goto LABEL_205;
              gbLockScreenAutoLockActive = v4 != 0;
              if ( !v10 )
                goto LABEL_990;
              PointerDeviceSettings = UpdateWinIniInt(0LL, 4LL, 205LL, v4);
              updated = PointerDeviceSettings;
LABEL_249:
              v218 = PointerDeviceSettings;
              goto LABEL_990;
            }
            if ( (_DWORD)v5 != 170 )
            {
              switch ( (_DWORD)v5 )
              {
                case 0xAB:
                  if ( *(_DWORD *)(CurrentProcessWin32Process + 56) != gpidLogonUI )
                    return 0LL;
                  gbLockScreenActive = v4 != 0;
                  if ( gbLockScreenActive )
                  {
                    if ( !gptiForeground
                      || (v184 = *(_QWORD *)(gptiForeground + 424LL)) == 0
                      || (v185 = *(_QWORD *)(v184 + 128)) == 0
                      || (unsigned int)IsWindowUnderActiveLockScreen(v185) )
                    {
                      xxxSetForegroundWindow2(0LL, 0LL, 0);
                    }
                    ClearKeyboardStates();
                  }
                  GreLddmProcessLockScreen(gbLockScreenActive, v11);
                  goto LABEL_990;
                case 0xAC:
                  v218 = (int)GetInteractiveControlParameters((struct tagINTERACTIVECTRL_PARAMETERS *)Src) >= 0;
                  goto LABEL_990;
                case 0xAD:
                  if ( (int)SetInteractiveControlParameters((struct tagINTERACTIVECTRL_PARAMETERS *)Src, v10) >= 0 )
                  {
                    updated = 1;
                    v138 = v217;
                    goto LABEL_992;
                  }
                  return (unsigned int)v218;
              }
              goto LABEL_874;
            }
            v165 = (int *)gbLockScreenActive;
            goto LABEL_699;
          }
        }
        else if ( (_DWORD)v5 != 165 )
        {
          if ( (_DWORD)v5 == 156 )
            goto LABEL_799;
          if ( (_DWORD)v5 == 157 )
            goto LABEL_827;
          if ( (_DWORD)v5 != 158 )
          {
            if ( (_DWORD)v5 != 159 )
            {
              if ( (_DWORD)v5 == 160 )
              {
                *(_DWORD *)Src = 6;
                goto LABEL_990;
              }
              if ( (_DWORD)v5 == 161 )
              {
                updated = 0;
                goto LABEL_94;
              }
              if ( (_DWORD)v5 != 162 )
              {
                if ( (_DWORD)v5 == 163 )
                {
                  *(_QWORD *)&v245.left = 0LL;
                  *(_QWORD *)&v245.right = 0LL;
                  if ( Src )
                  {
                    if ( *((_DWORD *)Src + 2) < *(_DWORD *)Src || *((_DWORD *)Src + 3) < *((_DWORD *)Src + 1) )
                      return 0LL;
                    v169 = MonitorFromRect((struct tagRECT *)Src, 1u, 0);
                  }
                  else
                  {
                    v169 = GetPrimaryMonitor(136LL, v11, CurrentProcessWin32Process);
                  }
                  v222 = v169;
                  v250 = *GetMonitorRect(&v242, v169);
                  v170 = (const struct tagRECT *)&v250;
                  if ( Src )
                    v170 = (const struct tagRECT *)Src;
                  if ( !(unsigned int)IntersectRect(&v245, v170, &v250) || !EqualRectInl(&v245, v170) )
                    goto LABEL_5;
                  if ( (W32GetCurrentThreadDpiAwarenessContext(v171, v11, CurrentProcessWin32Process, v7) & 0xF) != 2
                    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v172, v173, v174) + 448)
                    && (v179 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v175,
                                                           v176,
                                                           v177)
                                                       + 448)
                                           + 8LL),
                        (*(_DWORD *)(v179 + 64) & 1) != 0) )
                  {
                    v182 = W32GetCurrentThreadDpiAwarenessContext(v179, v178, v180, v181);
                    LogicalToPhysicalDPIRect(v222 + 296, &v245, v182, &v222);
                  }
                  else
                  {
                    *(struct tagRECT *)(v222 + 296) = v245;
                  }
                  goto LABEL_990;
                }
                goto LABEL_874;
              }
              v183 = GetPrimaryMonitor(136LL, v11, CurrentProcessWin32Process);
              MonitorWorkRect = (_OWORD *)GetMonitorMenuRect(v243, v183);
              goto LABEL_391;
            }
LABEL_859:
            if ( v4 + 11 > 0x16 )
              return 0LL;
            if ( (unsigned int)CheckDesktopPolicy(0LL, 628LL) )
            {
              v10 = 0;
              v218 = 0;
            }
            if ( v10 )
            {
              v246[0] = 0LL;
              v246[1] = 0LL;
              v247 = 0;
              v248 = v4;
              v233 = v4 != 159;
              if ( (int)DrvDisplayConfigSetScaleFactorOverride(v246, &v233) < 0 )
              {
                v218 = 0;
              }
              else
              {
                if ( v4 == 159 )
                  TraceLoggingSPISetModernDPIOverrideEvent(0xFFFF, 159);
                else
                  TraceLoggingSPISetDesktopDPIOverrideEvent(0xFFFF, v4);
                v218 = 1;
              }
              updated = 0;
            }
            goto LABEL_990;
          }
        }
        memset(v251, 0, sizeof(v251));
        if ( (int)DrvDisplayConfigGetScaleFactorOverrides(v251, 1LL) < 0 )
          return 0LL;
        if ( v4 != 158 )
        {
          v186 = Src;
          *(_QWORD *)Src = *(_QWORD *)&v251[5];
          v186[2] = v251[7];
          goto LABEL_990;
        }
        Next_high = v251[6];
        goto LABEL_88;
      }
LABEL_44:
      v218 = 1;
      goto LABEL_45;
    }
    goto LABEL_995;
  }
  if ( (unsigned int)v5 > 0x52 )
  {
    if ( (unsigned int)v5 <= 0x54 )
    {
LABEL_995:
      *(_DWORD *)Src = 0;
      return 1LL;
    }
    if ( (unsigned int)v5 > 0x56 )
    {
      if ( (_DWORD)v5 == 92 || (_DWORD)v5 == 97 )
        goto LABEL_5;
      goto LABEL_13;
    }
  }
  return 1LL;
}
