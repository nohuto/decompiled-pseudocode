/*
 * XREFs of xxxSystemParametersInfoWorker @ 0x1C005BCF4
 * Callers:
 *     EditionxxxSystemParametersInfoWorker @ 0x1C005BCE0 (EditionxxxSystemParametersInfoWorker.c)
 * Callees:
 *     xxxDesktopRecalc @ 0x1C0010B68 (xxxDesktopRecalc.c)
 *     GetMonitorRect @ 0x1C00145DC (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C001461C (GetMonitorWorkRect.c)
 *     _MonitorFromRect @ 0x1C00147D0 (_MonitorFromRect.c)
 *     PostShellHookMessages @ 0x1C0017B0C (PostShellHookMessages.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     xxxSendNotifyMessage @ 0x1C001FA80 (xxxSendNotifyMessage.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0026E70 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C002D44C (IsWindowUnderActiveLockScreen.c)
 *     ?EqualRectInl@@YAKPEBUtagRECT@@0@Z @ 0x1C002F228 (-EqualRectInl@@YAKPEBUtagRECT@@0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     IsRemoteConnection @ 0x1C004D060 (IsRemoteConnection.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0059DE0 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     ReadPointerDeviceSettings @ 0x1C005B8B4 (ReadPointerDeviceSettings.c)
 *     CheckGrantedAccess @ 0x1C005FC14 (CheckGrantedAccess.c)
 *     xxxInternalInvalidate @ 0x1C0065240 (xxxInternalInvalidate.c)
 *     IntersectRect @ 0x1C0068714 (IntersectRect.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C007F150 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     SetKeyboardRate @ 0x1C00806E0 (SetKeyboardRate.c)
 *     CheckWinstaAttributeAccess @ 0x1C00889B0 (CheckWinstaAttributeAccess.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GreExtGetObjectW @ 0x1C00BDB18 (GreExtGetObjectW.c)
 *     SetDesktopPattern @ 0x1C00E29E4 (SetDesktopPattern.c)
 *     _SetDoubleClickTime @ 0x1C00EA4B0 (_SetDoubleClickTime.c)
 *     _GetIMEShowStatus @ 0x1C01025F0 (_GetIMEShowStatus.c)
 *     GetPrimaryMonitor @ 0x1C0113884 (GetPrimaryMonitor.c)
 *     ?PostWindowArrangementCheck@@YAXK@Z @ 0x1C0113E28 (-PostWindowArrangementCheck@@YAXK@Z.c)
 *     xxxSetDeskWallpaper @ 0x1C0114660 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C01149CC (LoadWallpaperFilenameFromRegistry.c)
 *     UIntSub @ 0x1C0116CE0 (UIntSub.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C0116EC0 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 *     xxxSetIMEShowStatus @ 0x1C011A8BC (xxxSetIMEShowStatus.c)
 *     ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x1C011AC28 (-TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z.c)
 *     xxxInvalidateWallpaperWindow @ 0x1C011BA64 (xxxInvalidateWallpaperWindow.c)
 *     GetWindowNCMetrics @ 0x1C0129D6C (GetWindowNCMetrics.c)
 *     GetDPIMetrics @ 0x1C012C10C (GetDPIMetrics.c)
 *     GetDPIServerInfo @ 0x1C012C168 (GetDPIServerInfo.c)
 *     GetProcessDpiServerInfo @ 0x1C012C194 (GetProcessDpiServerInfo.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     SetPointer @ 0x1C0138BE0 (SetPointer.c)
 *     SetMouseTrails @ 0x1C01394B4 (SetMouseTrails.c)
 *     ClearKeyboardStates @ 0x1C0139560 (ClearKeyboardStates.c)
 *     GreSetFontEnumeration @ 0x1C013C2E8 (GreSetFontEnumeration.c)
 *     GreSetLCDOrientation @ 0x1C013C34C (GreSetLCDOrientation.c)
 *     GetEasTimeout @ 0x1C013C480 (GetEasTimeout.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C013C600 (xxxUpdateSystemIconsFromRegistry.c)
 *     ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C013C800 (-RefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     GetKbdLangSwitch @ 0x1C013CADC (GetKbdLangSwitch.c)
 *     CreateBitmapStrip @ 0x1C013F960 (CreateBitmapStrip.c)
 *     ?UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z @ 0x1C0140254 (-UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z.c)
 *     UpdateDesktopThresholds @ 0x1C01402C0 (UpdateDesktopThresholds.c)
 *     bSetDevDragWidth @ 0x1C0140734 (bSetDevDragWidth.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?NotifyISMPenButtonYieldSettingChange@@YAXXZ @ 0x1C0164A9C (-NotifyISMPenButtonYieldSettingChange@@YAXXZ.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?_SwapMouseButton@@YAHH@Z @ 0x1C01CC870 (-_SwapMouseButton@@YAHH@Z.c)
 *     ?TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z @ 0x1C01CDEC0 (-TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1C01CEF00 (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1C01CEFC8 (-TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z @ 0x1C01CF090 (-TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z.c)
 *     ?SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z @ 0x1C01D9720 (-SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D9884 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x1C01D9AC8 (-SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x1C01D9BC8 (-SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01D9CC8 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01DA008 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C01DA2A0 (EditionxxxBroadcastSPIChange.c)
 *     UpdateWinIniInt @ 0x1C01DA5D4 (UpdateWinIniInt.c)
 *     xxxMetricsRecalc @ 0x1C01DA764 (xxxMetricsRecalc.c)
 *     GetUserHandedness @ 0x1C01EF610 (GetUserHandedness.c)
 *     WritePointerDeviceSettings @ 0x1C01F8DA4 (WritePointerDeviceSettings.c)
 *     ?GetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C023E124 (-GetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?SetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C023E14C (-SetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     GetMonitorMenuRect @ 0x1C0259634 (GetMonitorMenuRect.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x1C0271F6C (DwmAsyncNotifyWindowShadowChange.c)
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
  __int64 ProcessDpiServerInfo; // rax
  __int64 v40; // rcx
  __int64 v41; // rdi
  int v42; // r14d
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // r12d
  unsigned __int8 v47; // al
  void *v48; // rcx
  __int64 DeferredRoutine_low; // rcx
  int v50; // ecx
  int v51; // edx
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned int v54; // r15d
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  unsigned int v59; // ebx
  unsigned int v60; // r15d
  __int64 v61; // rbx
  __int64 v62; // r8
  __int64 v63; // rax
  struct tagWND *v64; // rcx
  __int64 v65; // r8
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
  _DWORD *v79; // rbx
  unsigned int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  unsigned int v84; // eax
  _DWORD *v85; // r9
  struct tagMOUSEKEYS *v86; // rbx
  int v87; // edx
  unsigned int v88; // edx
  struct _UNICODE_STRING *v89; // r14
  unsigned int v90; // r9d
  __int64 v91; // rdx
  _DWORD *v92; // rbx
  int v93; // ecx
  int v94; // edx
  unsigned int *v95; // rbx
  int v96; // r9d
  unsigned int v97; // r9d
  char *v98; // rbx
  size_t v99; // r8
  struct tagFILTERKEYS *v100; // rdx
  struct tagFILTERKEYS *v101; // rbx
  unsigned int v102; // r8d
  int v103; // edx
  unsigned int v104; // edx
  struct _UNICODE_STRING *v105; // rdi
  __int64 v106; // rax
  _OWORD *MonitorWorkRect; // rax
  __int64 PrimaryMonitor; // rax
  const struct tagRECT *v109; // r14
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  struct tagMONITORRECTS *v113; // r14
  __int64 v114; // r8
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // r8
  int v126; // eax
  _QWORD *v127; // rdx
  _OWORD *v128; // rax
  unsigned __int16 *v129; // rcx
  UINT v130; // eax
  struct tagSOUNDSENTRYW *v131; // rbx
  int v132; // edx
  unsigned int v133; // edx
  struct _UNICODE_STRING *v134; // rdi
  __int64 v135; // rdi
  int v136; // eax
  unsigned int *v137; // rdx
  unsigned int v138; // r9d
  unsigned int v139; // r9d
  _DWORD *v140; // r14
  unsigned int v141; // ebx
  unsigned int v142; // ecx
  int v143; // eax
  _DWORD *v144; // rdx
  const wchar_t *v145; // r9
  const wchar_t *v146; // r9
  int v147; // edx
  __int64 v148; // rcx
  bool v149; // zf
  unsigned int i; // ebx
  __int64 v151; // rax
  __int64 v152; // rdi
  const wchar_t *v153; // rbx
  const wchar_t *v154; // r9
  int v155; // eax
  unsigned int *v156; // rax
  int *v157; // rax
  __int64 v158; // r9
  unsigned int v159; // ebx
  unsigned int v160; // ecx
  __int64 v161; // rax
  const struct tagRECT *v162; // rdi
  __int64 v163; // rcx
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r8
  unsigned int v167; // eax
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rcx
  _DWORD *v171; // rcx
  int v172; // ecx
  bool v173; // zf
  int v174; // ecx
  int *v175; // rax
  int v176; // ecx
  __int64 v177; // rax
  __int64 v178; // rbx
  unsigned __int64 v179; // rcx
  unsigned int v180; // ebx
  unsigned int v181; // eax
  unsigned int v182; // ecx
  __int64 v183; // r14
  unsigned __int64 v184; // r8
  __int64 v185; // rdx
  __int64 v186; // r8
  int v187; // edx
  int v188; // ecx
  __int64 v189; // rax
  struct tagWND *v190; // rcx
  void *v191; // rax
  __int64 v192; // rax
  __int64 v193; // r8
  __int64 v194; // rbx
  __int64 v195; // rax
  unsigned int v196; // r15d
  int v197; // ebx
  unsigned int *v198; // rax
  _DWORD *v199; // rax
  int v200; // ecx
  BOOL v201; // edx
  int v202; // [rsp+28h] [rbp-4D0h]
  UINT v203; // [rsp+40h] [rbp-4B8h]
  int v204; // [rsp+44h] [rbp-4B4h] BYREF
  int updated; // [rsp+48h] [rbp-4B0h] BYREF
  void *Src; // [rsp+50h] [rbp-4A8h] BYREF
  unsigned int v207; // [rsp+58h] [rbp-4A0h]
  __int64 v208; // [rsp+60h] [rbp-498h] BYREF
  UINT puResult; // [rsp+68h] [rbp-490h] BYREF
  _QWORD v210[3]; // [rsp+70h] [rbp-488h] BYREF
  UINT v211; // [rsp+88h] [rbp-470h] BYREF
  UINT v212; // [rsp+90h] [rbp-468h] BYREF
  UINT v213; // [rsp+98h] [rbp-460h] BYREF
  __int64 v214; // [rsp+A0h] [rbp-458h] BYREF
  UINT v215[2]; // [rsp+A8h] [rbp-450h] BYREF
  UINT v216; // [rsp+B0h] [rbp-448h] BYREF
  UINT v217; // [rsp+B4h] [rbp-444h] BYREF
  UINT v218; // [rsp+B8h] [rbp-440h] BYREF
  BOOL v219; // [rsp+BCh] [rbp-43Ch] BYREF
  void *v220; // [rsp+C0h] [rbp-438h]
  __int64 v221; // [rsp+C8h] [rbp-430h]
  _QWORD v222[4]; // [rsp+D0h] [rbp-428h] BYREF
  __int128 v223; // [rsp+F0h] [rbp-408h]
  __int128 v224; // [rsp+110h] [rbp-3E8h] BYREF
  __int128 v225; // [rsp+120h] [rbp-3D8h] BYREF
  __int128 v226; // [rsp+130h] [rbp-3C8h] BYREF
  __int128 v227; // [rsp+140h] [rbp-3B8h] BYREF
  __int128 v228; // [rsp+150h] [rbp-3A8h] BYREF
  char v229[16]; // [rsp+160h] [rbp-398h] BYREF
  struct tagRECT v230; // [rsp+170h] [rbp-388h] BYREF
  struct tagRECT v231; // [rsp+180h] [rbp-378h] BYREF
  _QWORD v232[2]; // [rsp+190h] [rbp-368h] BYREF
  int v233; // [rsp+1A0h] [rbp-358h]
  unsigned int v234; // [rsp+1A4h] [rbp-354h]
  __int128 v235; // [rsp+1A8h] [rbp-350h] BYREF
  __int128 v236; // [rsp+1B8h] [rbp-340h] BYREF
  _DWORD v237[8]; // [rsp+1C8h] [rbp-330h] BYREF
  struct tagRECT v238; // [rsp+1E8h] [rbp-310h] BYREF
  wchar_t Dest[40]; // [rsp+200h] [rbp-2F8h] BYREF
  _WORD v240[40]; // [rsp+250h] [rbp-2A8h] BYREF
  _BYTE v241[528]; // [rsp+2A0h] [rbp-258h] BYREF

  LOWORD(v207) = a4;
  v4 = a2;
  v5 = (unsigned int)a1;
  v212 = a1;
  Src = a3;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v208 = CurrentProcessWin32Process;
  updated = 0;
  v8 = 1;
  v9 = 2LL;
  v203 = v207 & 2;
  puResult = v203;
  v10 = v207 & 1;
  v204 = v10 == 0;
  v11 = (unsigned __int16)v207 & 0x8000;
  v207 &= 0x8000u;
  memset(v210, 0, sizeof(v210));
  v240[0] = 0;
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
      v19 = CheckWinstaAttributeAccess(0x10u);
LABEL_27:
      if ( !v19 )
        return 0LL;
      v11 = v207;
      CurrentProcessWin32Process = v208;
      v149 = v16 == 2;
      v20 = 10;
      if ( !v149 )
      {
LABEL_45:
        if ( (unsigned int)v5 > 0x1026 )
        {
          if ( (_DWORD)v5 == 4135 )
          {
            if ( (unsigned int)CheckDesktopPolicy(0LL, 112LL, CurrentProcessWin32Process) )
            {
              v10 = 0;
              v204 = 0;
            }
            if ( v10 )
            {
              updated = UpdateWinIniInt(0LL, 4LL, 112LL, v4 != 0);
              v204 = updated;
            }
            if ( v204 )
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
          v149 = gbBlockSendInputResets == 0;
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
                  v50 = gdwPUDFlags >> 21;
                  goto LABEL_123;
                }
                if ( (unsigned int)v5 <= 0xE )
                {
                  if ( (_DWORD)v5 == 14 )
                  {
                    v51 = (int)abs32(giScreenSaveTimeOutMs) / 1000;
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
                        v204 = updated;
                      }
                      if ( v204 )
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
                        Next_high = *(_DWORD *)(GetDPIServerInfo(v15, v11, CurrentProcessWin32Process) + 4);
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
                                  if ( (W32GetCurrentThreadDpiAwarenessContext(v15, v11, CurrentProcessWin32Process) & 0xF) != 0 )
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
                                    v204 = updated;
                                  }
                                  if ( v204 )
                                  {
                                    SetDpiDepSysMet(18LL, v31);
                                    *(_DWORD *)(gpsi + 2476LL) = v32;
                                  }
                                }
                                goto LABEL_990;
                              }
                              DpiForSystem = GetDpiForSystem(v15, v11, CurrentProcessWin32Process);
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
                            v204 = updated;
                          }
                          if ( !v204 )
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
                      if ( v36 != (__int64)*(int *)(GetDPIServerInfo(v15, v11, CurrentProcessWin32Process) + 4) )
                      {
                        ProfileUserName = (struct _UNICODE_STRING *)CreateProfileUserName(v210);
                        v38 = ProfileUserName;
                        if ( v10 )
                        {
                          updated = SetWindowMetricInt(ProfileUserName, 0x88u, v36);
                          v204 = updated;
                        }
                        if ( v204 )
                        {
                          xxxSetAndDrawNCMetrics(v38, v36, 0LL);
                          ProcessDpiServerInfo = GetProcessDpiServerInfo();
                          bSetDevDragWidth(
                            *(_QWORD *)(gpDispInfo + 40LL),
                            (unsigned int)(*(_DWORD *)(ProcessDpiServerInfo + 4) + 3));
                        }
                        v40 = (__int64)v38;
                        goto LABEL_100;
                      }
LABEL_94:
                      v204 = 1;
                      goto LABEL_990;
                    }
                    if ( !v10 )
                    {
LABEL_113:
                      if ( v204 )
                      {
                        v48 = Src;
                        HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) = *(_DWORD *)Src;
                        LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) = *((_DWORD *)Src + 1);
                        LOBYTE(v48) = *((_DWORD *)Src + 2) != 0;
                        EnableMouseAcceleration(v48, v11, CurrentProcessWin32Process);
                      }
                      goto LABEL_990;
                    }
                    v41 = CreateProfileUserName(v210);
                    v207 = UpdateWinIniInt(v41, 12LL, 10LL, *(unsigned int *)Src);
                    v42 = UpdateWinIniInt(v41, 12LL, 11LL, *((unsigned int *)Src + 1));
                    v46 = UpdateWinIniInt(v41, 12LL, 12LL, *((unsigned int *)Src + 2));
                    if ( v207 )
                    {
                      if ( v42 && v46 )
                      {
                        updated = 1;
LABEL_112:
                        v204 = updated;
                        FreeProfileUserName(v41, v210);
                        goto LABEL_113;
                      }
                      UpdateWinIniInt(v41, 12LL, 10LL, HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine));
                    }
                    if ( v42 )
                      UpdateWinIniInt(v41, 12LL, 11LL, LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine));
                    if ( v46 )
                    {
                      v47 = MouseAccelerationEnabled(v44, v43, v45);
                      UpdateWinIniInt(v41, 12LL, 12LL, v47);
                    }
                    goto LABEL_112;
                  }
                  v50 = gdwPUDFlags >> 19;
LABEL_123:
                  Next_high = v50 & 1;
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
                        v61 = CreateProfileUserName(v210);
                        if ( (unsigned int)CheckDesktopPolicy(v61, 67LL, v65) )
                        {
                          v10 = 0;
                          v204 = 0;
                        }
                        if ( v10 )
                        {
                          if ( v4 == -1 )
                          {
                            v204 = 1;
                          }
                          else
                          {
                            FastGetProfileStringFromIDW(v61, 4LL, 67LL, &word_1C02D83A8, v241, 260, 8);
                            updated = FastUpdateWinIni(v61, 4LL, 67LL, Src);
                            v204 = updated;
                          }
                        }
                        if ( !v204 )
                          break;
                        if ( (unsigned int)xxxSetDeskWallpaper(v61, Src) )
                        {
                          xxxInvalidateWallpaperWindow();
                        }
                        else
                        {
                          if ( v10 )
                          {
                            if ( v4 == -1 )
                              break;
                            FastUpdateWinIni(v61, 4LL, 67LL, v241);
                          }
                          v204 = 0;
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
                        v61 = CreateProfileUserName(v210);
                        if ( (unsigned int)CheckDesktopPolicy(v61, 2LL, v62) )
                        {
                          v10 = 0;
                          v204 = 0;
                        }
                        if ( v10 && Src )
                        {
                          FastGetProfileStringFromIDW(v61, 4LL, 2LL, &word_1C02D83A8, v241, 260, 0);
                          updated = FastUpdateWinIni(v61, 4LL, 2LL, Src);
                          v204 = updated;
                        }
                        if ( v204 )
                        {
                          if ( !(unsigned int)SetDesktopPattern(v61, Src) )
                          {
                            if ( v10 && Src )
                              FastUpdateWinIni(v61, 4LL, 2LL, v241);
                            FreeProfileUserName(v61, v210);
                            return 0LL;
                          }
                          xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x15u, 0LL, 0LL, 1);
                          v63 = *(_QWORD *)(gptiCurrent + 448LL);
                          if ( v63 )
                            v64 = *(struct tagWND **)(*(_QWORD *)(v63 + 8) + 24LL);
                          else
                            v64 = 0LL;
                          xxxInternalInvalidate(v64, (HRGN)1, 0x10485u);
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
                          v204 = updated;
                        }
                        if ( !v204 )
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
                            if ( (W32GetCurrentThreadDpiAwarenessContext(v15, v11, CurrentProcessWin32Process) & 0xF) != 0 )
                            {
                              v55 = PsGetCurrentProcessWin32Process(v53, v52);
                              v54 = EngMulDiv(
                                      v4,
                                      *(unsigned __int16 *)(gpsi + 6998LL),
                                      *(unsigned __int16 *)(v55 + 284));
                              v58 = PsGetCurrentProcessWin32Process(v57, v56);
                              v4 = EngMulDiv(v54, 96, *(unsigned __int16 *)(v58 + 284));
                            }
                            else
                            {
                              v54 = EngMulDiv(v4, *(unsigned __int16 *)(gpsi + 6998LL), 96);
                            }
                            v59 = *(_DWORD *)(gpsi + 2308LL);
                            if ( v54 > v59 )
                              v59 = v54;
                            v60 = *(_DWORD *)(gpsi + 2428LL);
                            if ( v4 > v60 )
                              v60 = v4;
                            if ( v10 )
                            {
                              updated = SetWindowMetricInt(0LL, 0x41u, v59);
                              v204 = updated;
                            }
                            if ( v204 )
                            {
                              SetDpiDepSysMet(19LL, v59);
                              *(_DWORD *)(gpsi + 2480LL) = v60;
                            }
                          }
                          goto LABEL_990;
                        }
                        DpiForSystem = GetDpiForSystem(v15, v11, CurrentProcessWin32Process);
                        v22 = 19LL;
LABEL_66:
                        UserHandedness = GetDpiDependentMetric(v22, DpiForSystem);
LABEL_67:
                        *(_DWORD *)Src = UserHandedness;
LABEL_990:
                        v130 = v203;
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
                            v175 = (int *)UPDWORDPointer((unsigned int)v5);
                            v176 = *v175;
                            *(_DWORD *)Src = *v175;
                            if ( (_DWORD)v5 != 8204 || v176 )
                              goto LABEL_990;
                            Next_high = gulGamma;
                            goto LABEL_88;
                          }
                          v51 = 0;
                          v172 = 0;
                          if ( (unsigned int)v5 >= 0x103E )
                            goto LABEL_900;
                          if ( (int)gpdwCPUserPreferencesMask < 0 )
                          {
                            switch ( (_DWORD)v5 )
                            {
                              case 0x1008:
                                goto LABEL_898;
                              case 0x100A:
                                v51 = (gdwPUDFlags >> 17) & 1;
                                v172 = v51;
                                goto LABEL_900;
                              case 0x1012:
                              case 0x1014:
                              case 0x1018:
                              case 0x101A:
LABEL_898:
                                if ( gbDisableAlpha )
                                  v172 = 1;
                                goto LABEL_900;
                            }
                            if ( (_DWORD)v5 != 4132 )
                              goto LABEL_900;
                            if ( !gbDisableAlpha )
                            {
                              v173 = gcOverlays == 0;
LABEL_895:
                              if ( v173 )
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
                                v173 = (_DWORD)v5 == 4126;
                                goto LABEL_895;
                              }
LABEL_900:
                              if ( !v172 )
                              {
                                if ( (_DWORD)v5 == 4158 && IsRemoteConnection() )
                                {
                                  v149 = ((unsigned __int16)gpdwCPUserPreferencesMask & 0x3A0E) == 0;
                                  goto LABEL_649;
                                }
                                v174 = *((_DWORD *)&gpdwCPUserPreferencesMask
                                       + ((unsigned __int64)(unsigned int)(v5 - 4096) >> 6));
                                v51 = _bittest(
                                        &v174,
                                        (unsigned __int8)(((unsigned int)(v5 - 4096) >> 1)
                                                        - 32 * ((unsigned int)(v5 - 4096) >> 6)));
                              }
LABEL_125:
                              *(_DWORD *)Src = v51;
                              goto LABEL_990;
                            }
                            v51 = 1;
                          }
                          v172 = 1;
                          goto LABEL_900;
                        }
                        v177 = CreateProfileUserName(v210);
                        v178 = v177;
                        v208 = v177;
                        v179 = v5 & 0x3000;
                        if ( (_DWORD)v179 != 4096 )
                        {
                          if ( *(_DWORD *)(UPDWORDPointer((unsigned int)v5) + 4) == 4 )
                          {
                            v192 = UPDWORDPointer((unsigned int)v5);
                            if ( (unsigned int)CheckDesktopPolicy(v178, *(_QWORD *)(v192 + 8), v193) )
                            {
                              v10 = 0;
                              v204 = 0;
                            }
                          }
                          if ( v10 )
                          {
                            v194 = UPDWORDPointer((unsigned int)v5);
                            v195 = UPDWORDPointer((unsigned int)v5);
                            v183 = v208;
                            updated = FastWriteProfileValue(
                                        v208,
                                        *(unsigned int *)(v195 + 4),
                                        *(_QWORD *)(v194 + 8),
                                        4LL,
                                        &Src,
                                        4);
                            v204 = updated;
                          }
                          else
                          {
                            v183 = v178;
                          }
                          v196 = *(_DWORD *)UPDWORDPointer((unsigned int)v5);
                          if ( v204 )
                          {
                            v197 = (int)Src;
                            *(_DWORD *)UPDWORDPointer((unsigned int)v5) = v197;
                            switch ( (_DWORD)v5 )
                            {
                              case 0x2007:
                                *(_DWORD *)(gpsi + 7008LL) = *(_DWORD *)UPDWORDPointer(8199LL);
                                break;
                              case 0x200B:
                                v199 = (_DWORD *)UPDWORDPointer(8203LL);
                                GreSetFontEnumeration(8 * (*v199 & 2 | 4u));
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
                                v198 = (unsigned int *)UPDWORDPointer(8211LL);
                                GreSetLCDOrientation(*v198);
                                break;
                              case 0x201D:
                                TraceLoggingMouseWheelRoutingModeChange((unsigned int)Src);
                                break;
                              case 0x201F:
                                TraceLoggingSPISetPenVisualizationEvent(v196, (unsigned int)Src);
                                break;
                              case 0x2029:
                                CCursorSizes::RefreshSizes(gpCursorSizes);
                                break;
                            }
                          }
                          goto LABEL_975;
                        }
                        if ( *((_DWORD *)&gpviCPUserPreferences + 1) == 4
                          && (unsigned int)CheckDesktopPolicy(v177, *((_QWORD *)&gpviCPUserPreferences + 1), 4096LL) )
                        {
                          v10 = 0;
                          v204 = 0;
                        }
                        if ( v10 )
                        {
                          updated = FastGetProfileValue(
                                      v178,
                                      *((unsigned int *)&gpviCPUserPreferences + 1),
                                      *((_QWORD *)&gpviCPUserPreferences + 1),
                                      0LL,
                                      v215,
                                      8,
                                      0);
                          memmove(
                            (char *)v215 + (unsigned int)updated,
                            (char *)&gpdwCPUserPreferencesMask + (unsigned int)updated,
                            8LL - (unsigned int)updated);
                          v180 = v5 - 4096;
                          v181 = v5 - 4096;
                          v182 = v5 - 4096;
                          if ( Src )
                            v215[(unsigned __int64)v180 >> 6] |= 1 << ((v182 >> 1) - 32 * (v181 >> 6));
                          else
                            v215[(unsigned __int64)v180 >> 6] &= ~(1 << ((v181 >> 1) - 32 * (v182 >> 6)));
                          v183 = v208;
                          updated = FastWriteProfileValue(
                                      v208,
                                      *((unsigned int *)&gpviCPUserPreferences + 1),
                                      *((_QWORD *)&gpviCPUserPreferences + 1),
                                      3LL,
                                      v215,
                                      8);
                          v204 = updated;
                        }
                        else
                        {
                          v180 = v5 - 4096;
                          v183 = v208;
                        }
                        if ( !v204 )
                        {
LABEL_975:
                          v40 = v183;
                          goto LABEL_100;
                        }
                        v184 = (unsigned __int64)(unsigned int)(v5 - 4096) >> 6;
                        if ( Src )
                        {
                          LOBYTE(v179) = (v180 >> 1) - 32 * (v180 >> 6);
                          v185 = (unsigned int)(1 << v179);
                          *((_DWORD *)&gpdwCPUserPreferencesMask + v184) |= v185;
                        }
                        else
                        {
                          v179 = 32 * (v180 >> 6);
                          LOBYTE(v179) = (v180 >> 1) - 32 * (v180 >> 6);
                          v185 = (unsigned int)~(1 << v179);
                          *((_DWORD *)&gpdwCPUserPreferencesMask + v184) &= v185;
                        }
                        if ( (unsigned int)v5 <= 0x1023 )
                        {
                          if ( (_DWORD)v5 == 4131 )
                          {
LABEL_943:
                            v189 = *(_QWORD *)(gptiCurrent + 448LL);
                            if ( v189 )
                              v190 = *(struct tagWND **)(*(_QWORD *)(v189 + 8) + 24LL);
                            else
                              v190 = 0LL;
                            xxxInternalInvalidate(v190, (HRGN)1, 0x10485u);
                            goto LABEL_975;
                          }
                          if ( (_DWORD)v5 == 4101 )
                          {
                            v186 = gpsi;
                            v187 = *(_DWORD *)(gpsi + 7004LL);
                            v188 = ((unsigned __int8)v187 ^ (unsigned __int8)gpdwCPUserPreferencesMask) & 4;
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
                                v186 = gpsi;
                                v187 = *(_DWORD *)(gpsi + 7004LL);
                                v188 = ((unsigned __int8)v187 ^ (unsigned __int8)gpdwCPUserPreferencesMask) & 0x20;
                                goto LABEL_933;
                              }
                              goto LABEL_942;
                            }
                            v186 = gpsi;
                            v187 = *(_DWORD *)(gpsi + 7004LL);
                            v188 = ((unsigned __int8)v187 ^ (unsigned __int8)gpdwCPUserPreferencesMask) & 8;
                          }
LABEL_933:
                          *(_DWORD *)(v186 + 7004) = v187 ^ v188;
                          goto LABEL_975;
                        }
                        if ( (_DWORD)v5 == 4133 )
                        {
                          v191 = (void *)ReferenceDwmApiPort(v179, v185, v184);
                          DwmAsyncNotifyWindowShadowChange(v191);
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
                    v40 = v61;
LABEL_100:
                    FreeProfileUserName(v40, v210);
                    goto LABEL_990;
                  }
                  if ( v4 - 2 <= 0xFFFFFFFC )
                    return 0LL;
                  if ( !gdwRITdemonLockState || (_DWORD)v11 )
                  {
                    gbLockConsoleActive = v4 == -1;
                    if ( gfSwitchInProgress )
                      return 0LL;
                    if ( (unsigned int)CheckDesktopPolicy(0LL, 100LL, CurrentProcessWin32Process) )
                    {
                      v10 = 0;
                      v204 = 0;
                    }
                    if ( v10 )
                    {
                      updated = UpdateWinIniInt(0LL, 4LL, 100LL, v4);
                      v204 = updated;
                    }
                    if ( !v204 )
                      goto LABEL_990;
                    if ( !gbBlockSendInputResets )
                    {
                      v221 = MEMORY[0xFFFFF78000000320];
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
                v208 = giScreenSaveTimeOutMs;
                if ( gfSwitchInProgress )
                  return 0LL;
                if ( gdwRITdemonLockState && !(_DWORD)v11 )
                  goto LABEL_205;
                v66 = 1000 * v4;
                v67 = 1000 * GetEasTimeout(v15, v11, CurrentProcessWin32Process);
                puResult = v67;
                if ( v67 )
                {
                  if ( *(int *)v208 > 0 && v67 < v66 || v66 <= 0 )
                  {
                    UserSetLastError(1260LL, v68, v69, v70);
                    v10 = 0;
                    v204 = 0;
                  }
                }
                else
                {
                  v8 = 0;
                }
                if ( (unsigned int)CheckDesktopPolicy(0LL, 99LL, v69) )
                {
                  if ( v8 )
                  {
                    v207 = 0;
                    if ( !(unsigned int)FastGetProfileIntFromID(0LL, 4LL, 99LL) )
                      goto LABEL_221;
                    v74 = 1000 * v207;
                    v207 = v74;
                    if ( !v74 || v74 >= (int)puResult || *(int *)v208 <= 0 || v74 >= v66 )
                      goto LABEL_221;
                    UserSetLastError(1260LL, v71, v72, v73);
                  }
                  v204 = 0;
                  v10 = 0;
                }
LABEL_221:
                if ( v10 )
                {
                  updated = UpdateWinIniInt(0LL, 4LL, 99LL, v66 / 0x3E8u);
                  v204 = updated;
                }
                if ( v204 )
                {
                  if ( !gbBlockSendInputResets )
                  {
                    v220 = (void *)MEMORY[0xFFFFF78000000320];
                    CInputGlobals::UpdateLastInputTime(
                      gpInputGlobals,
                      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                      6LL);
                  }
                  if ( *(int *)v208 < 0 && !v8 )
                    v66 = -1000 * v4;
                  *(_DWORD *)v208 = v66;
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
                      v204 = updated;
                    }
                    if ( v204 )
                    {
                      if ( v4 )
                        gdwPUDFlags |= 0x200000u;
                      else
                        gdwPUDFlags &= ~0x200000u;
                      xxxMetricsRecalc(2, 0, 0, 0, 0, 0, 0);
                    }
                    goto LABEL_990;
                  case 0x1B:
                    v51 = *(_DWORD *)(gpsi + 2056LL);
                    goto LABEL_125;
                }
                if ( (_DWORD)v5 != 28 )
                {
                  if ( (_DWORD)v5 == 29 )
                  {
                    if ( v10 )
                    {
                      updated = UpdateWinIniInt(0LL, 12LL, 97LL, v4);
                      v204 = updated;
                    }
                    if ( v204 )
                      *(_DWORD *)(gpsi + 2040LL) = v4;
                    goto LABEL_990;
                  }
                  if ( (_DWORD)v5 == 30 )
                  {
                    if ( v10 )
                    {
                      updated = UpdateWinIniInt(0LL, 12LL, 98LL, v4);
                      v204 = updated;
                    }
                    if ( v204 )
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
                        v204 = updated;
                      }
                      if ( v204 )
                        SetDoubleClickTime(v4, v11, CurrentProcessWin32Process);
                      goto LABEL_990;
                    }
                    if ( (_DWORD)v5 == 33 )
                    {
                      if ( v10 )
                      {
                        updated = UpdateWinIniInt(0LL, 12LL, 5LL, v4);
                        v204 = updated;
                      }
                      if ( v204 )
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
                    v75 = (struct _UNICODE_STRING *)CreateProfileUserName(v210);
                    v76 = xxxSetSPIMetrics(v75, 0x22u, Src, v10, &updated);
                    FreeProfileUserName(v75, v210);
                    if ( !v76 )
                    {
                      v204 = 0;
                      goto LABEL_990;
                    }
                    if ( !v10 )
                      goto LABEL_990;
                    PointerDeviceSettings = updated;
                    goto LABEL_249;
                  }
                  DPIMetrics = GetDPIMetrics(v15, v11, CurrentProcessWin32Process);
LABEL_259:
                  GreExtGetObjectW(*(_QWORD *)(DPIMetrics + 64));
                  goto LABEL_990;
                }
LABEL_979:
                if ( v10 )
                {
                  updated = UpdateWinIniInt(0LL, 3LL, 96LL, v4);
                  v204 = updated;
                }
                if ( v204 )
                {
                  v200 = *(_DWORD *)(gpsi + 2056LL);
                  v201 = v4 != 0;
                  *(_DWORD *)(gpsi + 2056LL) = v201;
                  TraceLoggingSPISetMenuDropAlignmentEvent(v200, v201);
                }
                goto LABEL_990;
              }
              switch ( (_DWORD)v5 )
              {
                case '$':
                  goto LABEL_990;
                case '%':
                  if ( (unsigned int)CheckDesktopPolicy(0LL, 107LL, CurrentProcessWin32Process) )
                  {
                    v10 = 0;
                    v204 = 0;
                  }
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 4LL, 107LL, v4 == 1);
                    v204 = updated;
                  }
                  if ( v204 )
                  {
                    if ( v4 == 1 )
                      gdwPUDFlags |= 0x100000u;
                    else
                      gdwPUDFlags &= ~0x100000u;
                  }
                  goto LABEL_990;
                case '&':
                  v50 = gdwPUDFlags >> 20;
                  goto LABEL_123;
                case ')':
                  if ( !Src )
                    return 0LL;
                  GetWindowNCMetrics(Src, v11, CurrentProcessWin32Process);
                  goto LABEL_990;
              }
              if ( (_DWORD)v5 != 42 )
              {
                if ( (_DWORD)v5 == 43 )
                {
                  v85 = Src;
                  *(_DWORD *)Src = 20;
                  v85[1] = *(_DWORD *)(gpsi + 2124LL) - 6;
                  v85[2] = *(_DWORD *)(gpsi + 2084LL) - *(_DWORD *)(gpsi + 2124LL);
                  v85[3] = *(_DWORD *)(gpsi + 2088LL) - *(_DWORD *)(gpsi + 2128LL);
                  v85[4] = *(_DWORD *)(gpsi + 2120LL);
                  goto LABEL_990;
                }
                if ( (_DWORD)v5 != 44 )
                {
                  if ( (_DWORD)v5 != 45 )
                    goto LABEL_874;
                  v79 = Src;
                  *(_DWORD *)Src = 108;
                  v80 = GetDpiForSystem(v15, v11, CurrentProcessWin32Process);
                  v79[1] = GetDpiDependentMetric(18LL, v80);
                  v84 = GetDpiForSystem(v82, v81, v83);
                  v79[2] = GetDpiDependentMetric(19LL, v84);
                  v79[3] = (gdwPUDFlags >> 21) & 1;
                  DPIMetrics = ((__int64 (*)(void))GetDPIMetrics)();
                  goto LABEL_259;
                }
              }
            }
LABEL_528:
            if ( (unsigned int)xxxSetSPIMetrics(0LL, v5, Src, v10, &updated) )
            {
              v143 = v204;
              if ( v10 )
                v143 = updated;
              v204 = v143;
            }
            else
            {
              v204 = 0;
            }
            RtlLoadStringOrError(135LL, v240, 40LL);
            goto LABEL_990;
          }
          if ( (unsigned int)v5 <= 0x44 )
          {
            if ( (_DWORD)v5 == 68 )
            {
              v50 = gdwPUDFlags >> 17;
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
                  v204 = updated;
                }
                if ( v204 )
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
                *(_QWORD *)&v230.left = 0LL;
                *(_QWORD *)&v230.right = 0LL;
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
                v214 = PrimaryMonitor;
                v235 = *GetMonitorRect(&v226, PrimaryMonitor);
                v109 = (const struct tagRECT *)&v235;
                if ( Src )
                  v109 = (const struct tagRECT *)Src;
                if ( !(unsigned int)IntersectRect(&v230, v109, &v235) || !EqualRectInl(&v230, v109) )
                  goto LABEL_5;
                v238 = (struct tagRECT)*GetMonitorWorkRect(&v227, v214);
                if ( !EqualRectInl(&v238, &v230) )
                {
                  v113 = 0LL;
                  if ( v4 )
                  {
                    v113 = (struct tagMONITORRECTS *)SnapshotMonitorRects();
                    if ( !v113 )
                      return 0LL;
                  }
                  if ( (W32GetCurrentThreadDpiAwarenessContext(v111, v110, v112) & 0xF) != 2
                    && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448)
                    && (v116 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL),
                        (*(_DWORD *)(v116 + 64) & 1) != 0) )
                  {
                    v117 = *(_QWORD *)(v214 + 40);
                    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v116, v115, v114);
                    LogicalToPhysicalDPIRect(v117 + 44, &v230, CurrentThreadDpiAwarenessContext, &v214);
                  }
                  else
                  {
                    v119 = v214;
                    *(_DWORD *)(*(_QWORD *)(v214 + 40) + 44LL) = v230.left;
                    *(_DWORD *)(*(_QWORD *)(v119 + 40) + 48LL) = v230.top;
                    *(_DWORD *)(*(_QWORD *)(v119 + 40) + 52LL) = v230.right;
                    v120 = *(_QWORD *)(v119 + 40);
                    *(_DWORD *)(v120 + 56) = v230.bottom;
                  }
                  v121 = GetPrimaryMonitor(v120, v119, v114);
                  if ( v214 == v121 )
                    UpdateDesktopThresholds();
                  if ( v4 )
                  {
                    memset(v222, 0, 24);
                    PushW32ThreadLock((__int64)v113, v222, (__int64)Win32FreePool);
                    xxxDesktopRecalc(*(_QWORD *)(gptiCurrent + 448LL), v113, v122, v123);
                    PopAndFreeAlwaysW32ThreadLock((__int64)v222, v124, v125);
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
                    v98 = (char *)Src;
                    if ( v4 && v4 != 24 || !Src || *(_DWORD *)Src != 24 )
                      return 0LL;
                    if ( UIntSub(0x18u, 4u, &v212) < 0 )
                      goto LABEL_5;
                    v99 = v212;
                    v100 = gFilterKeys;
                    break;
                  case '3':
                    v101 = (struct tagFILTERKEYS *)Src;
                    if ( v4 && v4 != 24 )
                      return 0LL;
                    if ( !Src )
                      return 0LL;
                    if ( *(_DWORD *)Src != 24 )
                      return 0LL;
                    v102 = *((_DWORD *)Src + 2);
                    if ( v102 )
                    {
                      if ( *((_DWORD *)Src + 5) )
                        return 0LL;
                    }
                    v103 = *((_DWORD *)Src + 1);
                    if ( (v103 & 0x7F) != v103 )
                      return 0LL;
                    v104 = (HIDWORD(gFilterKeys) & 2) != 0 ? v103 | 2 : v103 & 0xFFFFFFFD;
                    *((_DWORD *)Src + 1) = v104;
                    if ( v102 > 0x4E20
                      || *((_DWORD *)v101 + 3) > 0x4E20u
                      || *((_DWORD *)v101 + 4) > 0x4E20u
                      || *((_DWORD *)v101 + 5) > 0x4E20u )
                    {
                      return 0LL;
                    }
                    if ( v10 )
                    {
                      v105 = (struct _UNICODE_STRING *)CreateProfileUserName(v210);
                      updated = SetFilterKeys(v105, v101);
                      v204 = updated;
                      if ( !updated )
                        SetFilterKeys(v105, gFilterKeys);
                      FreeProfileUserName(v105, v210);
                    }
                    if ( !v204 )
                      goto LABEL_990;
                    memmove(gFilterKeys, v101, *(unsigned int *)v101);
                    LODWORD(gFilterKeys) = 24;
                    if ( (HIDWORD(gFilterKeys) & 1) == 0 )
                      StopFilterKeysTimers();
                    SetAccessEnabledFlag();
                    if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0 )
                      xxxCallHook(11, 2uLL, 0LL, 10);
                    v91 = 2LL;
                    goto LABEL_333;
                  case '4':
                    v98 = (char *)Src;
                    if ( (v4 & 0xFFFFFFF7) != 0 || !Src || *(_DWORD *)Src != 8 || UIntSub(8u, 4u, &v211) < 0 )
                      return 0LL;
                    v99 = v211;
                    v100 = (struct tagFILTERKEYS *)gToggleKeys;
                    break;
                  case '5':
                    v95 = (unsigned int *)Src;
                    if ( (v4 & 0xFFFFFFF7) != 0 )
                      return 0LL;
                    if ( !Src )
                      return 0LL;
                    if ( *(_DWORD *)Src != 8 )
                      return 0LL;
                    v96 = *((_DWORD *)Src + 1);
                    if ( (v96 & 0x3F) != v96 )
                      return 0LL;
                    if ( (HIDWORD(gToggleKeys) & 2) != 0 )
                      v97 = v96 | 2;
                    else
                      v97 = v96 & 0xFFFFFFFD;
                    *((_DWORD *)Src + 1) = v97;
                    if ( v10 )
                    {
                      RtlStringCchPrintfW(Dest, 0x28uLL, L"%d");
                      updated = FastWriteProfileStringW(0LL, 17LL, L"Flags", Dest);
                      v204 = updated;
                    }
                    if ( !v204 )
                      goto LABEL_990;
                    memmove(gToggleKeys, v95, *v95);
                    LODWORD(gToggleKeys) = 8;
LABEL_353:
                    SetAccessEnabledFlag();
                    goto LABEL_990;
                  case '6':
                    v92 = Src;
                    if ( v4 && v4 != 28 || !Src || *(_DWORD *)Src != 28 || UIntSub(0x1Cu, 4u, &puResult) < 0 )
                      return 0LL;
                    memmove((char *)Src + 4, (char *)&gMouseKeys + 4, puResult);
                    v93 = *((_DWORD *)Src + 1) & 0x4CFFFFFF;
                    *((_DWORD *)Src + 1) = v93;
                    if ( gbMKMouseMode )
                    {
                      v93 |= 0x80000000;
                      v92[1] = v93;
                    }
                    v94 = v93 | ((gwMKButtonState & 3) << 24);
                    v92[1] = v94;
                    v92[1] = v94 | ((gwMKCurrentButton & 3) << 28);
                    goto LABEL_990;
                  case '7':
                    v86 = (struct tagMOUSEKEYS *)Src;
                    if ( v4 && v4 != 28 )
                      return 0LL;
                    if ( !Src )
                      return 0LL;
                    if ( *(_DWORD *)Src != 28 )
                      return 0LL;
                    v87 = *((_DWORD *)Src + 1) & 0x4CFFFFFF;
                    *((_DWORD *)Src + 1) = v87;
                    if ( (unsigned __int8)v87 != v87 )
                      return 0LL;
                    v88 = (HIDWORD(gMouseKeys) & 2) != 0 ? v87 | 2 : v87 & 0xFFFFFFFD;
                    *((_DWORD *)v86 + 1) = v88;
                    if ( (unsigned int)(*((_DWORD *)v86 + 2) - 10) > 0x15E
                      || (unsigned int)(*((_DWORD *)v86 + 3) - 1000) > 0xFA0 )
                    {
                      return 0LL;
                    }
                    if ( v10 )
                    {
                      v89 = (struct _UNICODE_STRING *)CreateProfileUserName(v210);
                      updated = SetMouseKeys(v89, v86);
                      v204 = updated;
                      if ( !updated )
                        SetMouseKeys(v89, gMouseKeys);
                      FreeProfileUserName(v89, v210);
                    }
                    if ( !v204 )
                      goto LABEL_990;
                    memmove(gMouseKeys, v86, *(unsigned int *)v86);
                    LODWORD(gMouseKeys) = 28;
                    CalculateMouseTable();
                    v90 = HIDWORD(gMouseKeys);
                    if ( (v90 & 1) != 0 )
                    {
                      gbMKMouseMode = ((v90 >> 7) & 1) != (((unsigned __int8)(1 << (2 * (gNumLockVk & 3) + 1)) & gafAsyncKeyState[(unsigned __int64)gNumLockVk >> 2]) != 0);
                      MKShowMouseCursor();
                    }
                    else
                    {
                      MKHideMouseCursor();
                    }
                    SetAccessEnabledFlag();
                    if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0 )
                      xxxCallHook(11, 3uLL, 0LL, 10);
                    v91 = 3LL;
LABEL_333:
                    PostShellHookMessages(0xBuLL, v91);
                    goto LABEL_990;
                  case '8':
                    v50 = gdwPUDFlags >> 15;
                    goto LABEL_123;
                  default:
                    goto LABEL_874;
                }
LABEL_359:
                memmove(v98 + 4, (char *)v100 + 4, v99);
                goto LABEL_990;
              }
              v106 = GetPrimaryMonitor(v15, v11, CurrentProcessWin32Process);
              MonitorWorkRect = GetMonitorWorkRect(&v225, v106);
LABEL_391:
              *(_OWORD *)Src = *MonitorWorkRect;
              goto LABEL_990;
            }
            switch ( (_DWORD)v5 )
            {
              case ':':
                v140 = Src;
                if ( (v4 & 0xFFFFFFF7) != 0 || !Src || *(_DWORD *)Src != 8 || UIntSub(8u, 4u, &v217) < 0 )
                  return 0LL;
                memmove((char *)Src + 4, (char *)&gStickyKeys + 4, v217);
                *((_WORD *)Src + 3) = 0;
                v140[1] |= gLatchBits << 24;
                v140[1] |= gLockBits << 16;
                goto LABEL_990;
              case ';':
                v137 = (unsigned int *)Src;
                v220 = Src;
                v213 = HIDWORD(gStickyKeys) & 1;
                if ( (v4 & 0xFFFFFFF7) != 0 )
                  return 0LL;
                if ( !Src )
                  return 0LL;
                if ( *(_DWORD *)Src != 8 )
                  return 0LL;
                *((_WORD *)Src + 3) = 0;
                v138 = v137[1];
                if ( (v138 & 0x1FF) != v138 )
                  return 0LL;
                if ( (HIDWORD(gStickyKeys) & 2) != 0 )
                  v139 = v138 | 2;
                else
                  v139 = v138 & 0xFFFFFFFD;
                v137[1] = v139;
                if ( v10 )
                {
                  RtlStringCchPrintfW(Dest, 0x28uLL, L"%d");
                  updated = FastWriteProfileStringW(0LL, 14LL, L"Flags", Dest);
                  v204 = updated;
                  v137 = (unsigned int *)v220;
                }
                if ( !v204 )
                  goto LABEL_990;
                memmove(gStickyKeys, v137, *v137);
                LODWORD(gStickyKeys) = 8;
                if ( (HIDWORD(gStickyKeys) & 1) == 0 && v213 )
                  xxxTurnOffStickyKeys();
                SetAccessEnabledFlag();
                if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0 )
                  xxxCallHook(11, 1uLL, 0LL, 10);
                v91 = 1LL;
                goto LABEL_333;
              case '<':
                v98 = (char *)Src;
                if ( v4 && v4 != 12 || !Src || *(_DWORD *)Src != 12 || UIntSub(0xCu, 4u, &v213) < 0 )
                  return 0LL;
                v99 = v213;
                v100 = (struct tagFILTERKEYS *)gAccessTimeOut;
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
                  v135 = CreateProfileUserName(v210);
                  RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", *((unsigned int *)Src + 1));
                  updated = FastWriteProfileStringW(v135, 18LL, L"Flags", Dest);
                  RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", *((unsigned int *)Src + 2));
                  v136 = FastWriteProfileStringW(v135, 18LL, L"TimeToWait", Dest);
                  v149 = (v136 & updated) == 0;
                  updated &= v136;
                  v204 = updated;
                  if ( v149 )
                  {
                    RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", HIDWORD(gAccessTimeOut));
                    FastWriteProfileStringW(v135, 18LL, L"Flags", Dest);
                    RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", *((unsigned int *)&gAccessTimeOut + 2));
                    FastWriteProfileStringW(v135, 18LL, L"TimeToWait", Dest);
                  }
                  FreeProfileUserName(v135, v210);
                }
                if ( v204 )
                {
                  memmove(gAccessTimeOut, Src, *(unsigned int *)Src);
                  LODWORD(gAccessTimeOut) = 12;
                  SetAccessEnabledFlag();
                  AccessTimeOutReset();
                }
                goto LABEL_990;
              case '@':
                v98 = (char *)Src;
                if ( v4 && v4 != 56 || !Src || *(_DWORD *)Src != 56 || UIntSub(0x38u, 4u, &v216) < 0 )
                  return 0LL;
                v99 = v216;
                v100 = gSoundSentry;
                goto LABEL_359;
              case 'A':
                v131 = (struct tagSOUNDSENTRYW *)Src;
                if ( v4 && v4 != 56 )
                  return 0LL;
                if ( !Src )
                  return 0LL;
                if ( *(_DWORD *)Src != 56 )
                  return 0LL;
                v132 = *((_DWORD *)Src + 1);
                if ( (v132 & 7) != v132 || *((_DWORD *)Src + 8) > 3u || *((_DWORD *)Src + 2) || *((_DWORD *)Src + 5) )
                  return 0LL;
                if ( (HIDWORD(gSoundSentry) & 2) != 0 )
                  v133 = v132 | 2;
                else
                  v133 = v132 & 0xFFFFFFFD;
                *((_DWORD *)Src + 1) = v133;
                if ( v10 )
                {
                  v134 = (struct _UNICODE_STRING *)CreateProfileUserName(v210);
                  updated = SetSoundSentry(v134, v131);
                  v204 = updated;
                  if ( !updated )
                    SetSoundSentry(v134, gSoundSentry);
                  FreeProfileUserName(v134, v210);
                }
                if ( !v204 )
                  goto LABEL_990;
                memmove(gSoundSentry, v131, *(unsigned int *)v131);
                LODWORD(gSoundSentry) = 56;
                goto LABEL_353;
            }
            if ( (_DWORD)v5 != 66 )
            {
              if ( (_DWORD)v5 != 67 )
                goto LABEL_874;
              v126 = SetHighContrastWorker((struct tagINTERNALSETHIGHCONTRAST *)Src, v10, &v204);
LABEL_430:
              updated = v126;
              goto LABEL_990;
            }
            v127 = Src;
            *((_DWORD *)Src + 1) = gHighContrast[1];
            v128 = (_OWORD *)v127[1];
            v129 = gHighContrastDefaultScheme;
            do
            {
              *v128 = *(_OWORD *)v129;
              v128[1] = *((_OWORD *)v129 + 1);
              v128[2] = *((_OWORD *)v129 + 2);
              v128[3] = *((_OWORD *)v129 + 3);
              v128[4] = *((_OWORD *)v129 + 4);
              v128[5] = *((_OWORD *)v129 + 5);
              v128[6] = *((_OWORD *)v129 + 6);
              v128 += 8;
              *(v128 - 1) = *((_OWORD *)v129 + 7);
              v129 += 64;
              --v9;
            }
            while ( v9 );
            v130 = v203;
LABEL_991:
            if ( updated )
            {
LABEL_992:
              if ( v130 )
                EditionxxxBroadcastSPIChange((unsigned int)v5, v240);
              return (unsigned int)v204;
            }
            return (unsigned int)v204;
          }
          if ( (unsigned int)v5 <= 0x57 )
          {
            switch ( (_DWORD)v5 )
            {
              case 'W':
                v61 = CreateProfileUserName(v210);
                xxxUpdateSystemCursorsFromRegistry(v61, 2u);
                goto LABEL_166;
              case 'E':
                if ( v10 )
                {
                  v146 = L"1";
                  if ( !v4 )
                    v146 = L"0";
                  updated = FastWriteProfileStringW(0LL, 27LL, L"On", v146);
                  v204 = updated;
                }
                if ( v204 )
                {
                  if ( v4 )
                    gdwPUDFlags |= 0x20000u;
                  else
                    gdwPUDFlags &= ~0x20000u;
                }
                goto LABEL_990;
              case 'F':
                v50 = gdwPUDFlags >> 18;
                goto LABEL_123;
              case 'G':
                if ( v10 )
                {
                  v145 = L"1";
                  if ( !v4 )
                    v145 = L"0";
                  updated = FastWriteProfileStringW(0LL, 28LL, L"On", v145);
                  v204 = updated;
                }
                if ( v204 )
                {
                  if ( v4 )
                    gdwPUDFlags |= 0x40000u;
                  else
                    gdwPUDFlags &= ~0x40000u;
                }
                goto LABEL_990;
              case 'H':
                v144 = Src;
                if ( !Src || v4 != 8 )
                  return 0LL;
                *(_DWORD *)Src = 8;
                v144[1] = *((_WORD *)&gdwPUDFlags + 1) & 1;
                goto LABEL_990;
              case 'I':
                goto LABEL_528;
            }
            if ( (_DWORD)v5 != 74 )
            {
              switch ( (_DWORD)v5 )
              {
                case 'K':
                  if ( (unsigned int)CheckDesktopPolicy(0LL, 200LL, CurrentProcessWin32Process) )
                  {
                    v10 = 0;
                    v204 = 0;
                  }
                  v141 = v4 != 0 ? 2 : 0;
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 4LL, 200LL, v141);
                    v204 = updated;
                  }
                  if ( v204 )
                    GreSetFontEnumeration(v141 | 4);
                  goto LABEL_990;
                case 'L':
                  if ( (unsigned int)CheckDesktopPolicy(0LL, 198LL, CurrentProcessWin32Process) )
                  {
                    v10 = 0;
                    v204 = 0;
                  }
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 4LL, 198LL, v4);
                    v204 = updated;
                  }
                  if ( v204 )
                    *(_DWORD *)(gpsi + 2168LL) = v4;
                  goto LABEL_990;
                case 'M':
                  if ( (unsigned int)CheckDesktopPolicy(0LL, 199LL, CurrentProcessWin32Process) )
                  {
                    v10 = 0;
                    v204 = 0;
                  }
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 4LL, 199LL, v4);
                    v204 = updated;
                  }
                  if ( v204 )
                    *(_DWORD *)(gpsi + 2172LL) = v4;
                  goto LABEL_990;
              }
              goto LABEL_874;
            }
            v142 = gulFontInformation;
LABEL_527:
            v50 = v142 >> 1;
            goto LABEL_123;
          }
          switch ( (_DWORD)v5 )
          {
            case 'X':
              v61 = CreateProfileUserName(v210);
              xxxUpdateSystemIconsFromRegistry(v61);
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
              v148 = HKLtoPKL(gptiCurrent, *(_QWORD *)Src, CurrentProcessWin32Process);
              if ( !v148 )
                return 0LL;
              if ( v204 )
              {
                *(_QWORD *)&v223 = gspklBaseLayout;
                *((_QWORD *)&v223 + 1) = v148;
                v224 = v223;
                HMAssignmentLock(&v224);
              }
              goto LABEL_990;
            case '[':
              return GetKbdLangSwitch(0LL, v11, CurrentProcessWin32Process);
            case ']':
              if ( v10 )
              {
                RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", v4);
                updated = FastUpdateWinIni(0LL, 12LL, 613LL, Dest);
                v204 = updated;
              }
              if ( v204 )
                SetMouseTrails(v4, v11, CurrentProcessWin32Process);
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
              v204 = updated;
            }
            if ( !v204 )
              goto LABEL_990;
            v130 = v203;
            if ( v4 )
              *(_DWORD *)(gpsi + 7004LL) |= 2u;
            else
              *(_DWORD *)(gpsi + 7004LL) &= ~2u;
            goto LABEL_991;
          }
          v147 = *(_DWORD *)(gpsi + 7004LL) >> 1;
LABEL_569:
          v51 = v147 & 1;
          goto LABEL_125;
        }
        if ( (unsigned int)v5 <= 0x88 )
        {
          if ( (_DWORD)v5 == 136 )
          {
            Next_high = dword_1C03203B0;
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
                v151 = CreateProfileUserName(v210);
                v152 = v151;
                v153 = L"1";
                v154 = L"1";
                if ( !*((_DWORD *)Src + 1) )
                  v154 = L"0";
                updated = FastWriteProfileStringW(v151, 48LL, L"On", v154);
                RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", *((unsigned int *)Src + 2));
                v155 = FastWriteProfileStringW(v152, 48LL, L"Locale", Dest);
                v149 = (v155 & updated) == 0;
                updated &= v155;
                v204 = updated;
                if ( v149 )
                {
                  if ( !HIDWORD(gAudioDescription) )
                    v153 = L"0";
                  FastWriteProfileStringW(v152, 48LL, L"On", v153);
                  RtlStringCchPrintfW(Dest, 0x28uLL, L"%d", *((unsigned int *)&gAudioDescription + 2));
                  FastWriteProfileStringW(v152, 48LL, L"Locale", Dest);
                }
                FreeProfileUserName(v152, v210);
              }
              if ( v204 )
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
                  v51 = *(_DWORD *)(gpsi + 4992LL);
                  goto LABEL_125;
                case 'c':
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 12LL, 91LL, v4);
                    v204 = updated;
                  }
                  v130 = v203;
                  if ( v204 )
                    HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) = v4;
                  break;
                case 'd':
                  Next_high = (int)WPP_MAIN_CB.Dpc.DpcListEntry.Next;
                  goto LABEL_88;
                case 'e':
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 12LL, 92LL, v4);
                    v204 = updated;
                  }
                  v130 = v203;
                  if ( v204 )
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
                    v204 = updated;
                  }
                  v130 = v203;
                  if ( v204 )
                    *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) = v20;
                  break;
                case 'h':
                  v51 = *(_DWORD *)(gpsi + 4988LL);
                  goto LABEL_125;
                case 'i':
                  if ( (unsigned int)CheckDesktopPolicy(0LL, 14LL, CurrentProcessWin32Process) )
                  {
                    v10 = 0;
                    v204 = 0;
                  }
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 4LL, 14LL, v4);
                    v204 = updated;
                  }
                  if ( v204 )
                    *(_DWORD *)(gpsi + 4988LL) = v4;
                  goto LABEL_990;
                case 'j':
                  Next_high = (int)WPP_MAIN_CB.Dpc.SystemArgument1;
                  goto LABEL_88;
                default:
                  if ( (unsigned int)CheckDesktopPolicy(0LL, 94LL, CurrentProcessWin32Process) )
                  {
                    v10 = 0;
                    v204 = 0;
                  }
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 4LL, 94LL, v4);
                    v204 = updated;
                  }
                  v130 = v203;
                  if ( v204 )
                    LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = v4;
                  break;
              }
              goto LABEL_991;
            }
            switch ( (_DWORD)v5 )
            {
              case 'm':
                if ( (unsigned int)CheckDesktopPolicy(0LL, 15LL, CurrentProcessWin32Process) )
                {
                  v10 = 0;
                  v204 = 0;
                }
                if ( v10 )
                {
                  updated = UpdateWinIniInt(0LL, 4LL, 15LL, v4);
                  v204 = updated;
                }
                if ( v204 )
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
                  v204 = updated;
                }
                if ( v204 )
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
                v61 = CreateProfileUserName(v210);
                LoadWallpaperFilenameFromRegistry(v61, Src, 260LL);
                goto LABEL_166;
              }
              v98 = (char *)Src;
              if ( v4 && v4 != 12 || !Src || *(_DWORD *)Src != 12 || UIntSub(0xCu, 4u, &v218) < 0 )
                return 0LL;
              v99 = v218;
              v100 = (struct tagFILTERKEYS *)gAudioDescription;
              goto LABEL_359;
            }
            v149 = gppiScreenSaver == 0LL;
LABEL_649:
            Next_high = !v149;
            goto LABEL_88;
          }
          if ( (unsigned int)v5 <= 0x7F )
          {
            if ( (_DWORD)v5 != 127 )
            {
              switch ( (_DWORD)v5 )
              {
                case 'v':
                  v147 = *gpsi >> 9;
                  goto LABEL_569;
                case 'w':
                  if ( gdwRITdemonLockState && !(_DWORD)v11 )
                    goto LABEL_205;
                  if ( (unsigned int)CheckDesktopPolicy(0LL, 618LL, CurrentProcessWin32Process) )
                  {
                    v10 = 0;
                    v204 = 0;
                  }
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 4LL, 618LL, v4 != 0);
                    v204 = updated;
                  }
                  if ( !v204 )
                    goto LABEL_990;
                  v130 = v203;
                  if ( v4 )
                    _InterlockedOr(gpsi, 0x200u);
                  else
                    _InterlockedAnd(gpsi, 0xFFFFFDFF);
                  goto LABEL_991;
                case 'x':
                  v157 = (int *)gdwHungAppTimeout;
                  break;
                case 'y':
                  if ( (unsigned int)CheckDesktopPolicy(0LL, 621LL, CurrentProcessWin32Process) )
                  {
                    v10 = 0;
                    v204 = 0;
                  }
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 4LL, 621LL, v4);
                    v204 = updated;
                  }
                  if ( !v204 )
                    goto LABEL_990;
                  v156 = (unsigned int *)gdwHungAppTimeout;
                  goto LABEL_697;
                case 'z':
                  Next_high = gdwWaitToKillTimeout;
                  goto LABEL_88;
                case '{':
                  if ( (unsigned int)CheckDesktopPolicy(0LL, 622LL, CurrentProcessWin32Process) )
                  {
                    v10 = 0;
                    v204 = 0;
                  }
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 4LL, 622LL, v4);
                    v204 = updated;
                  }
                  v130 = v203;
                  if ( v204 )
                    gdwWaitToKillTimeout = v4;
                  goto LABEL_991;
                case '|':
                  v157 = (int *)gdwWaitToKillServiceTimeout;
                  break;
                case '}':
                  if ( (unsigned int)CheckDesktopPolicy(0LL, 623LL, CurrentProcessWin32Process) )
                  {
                    v10 = 0;
                    v204 = 0;
                  }
                  if ( v10 )
                  {
                    updated = UpdateWinIniInt(0LL, 52LL, 623LL, v4);
                    v204 = updated;
                  }
                  if ( !v204 )
                    goto LABEL_990;
                  v156 = (unsigned int *)gdwWaitToKillServiceTimeout;
LABEL_697:
                  *v156 = v4;
                  goto LABEL_990;
                default:
                  Next_high = gWinArrGlobal;
                  goto LABEL_88;
              }
LABEL_699:
              Next_high = *v157;
              goto LABEL_88;
            }
            if ( v4 > *(_DWORD *)(gpDispInfo + 136LL)
              || v4 > dword_1C03203A4
              || v4 > dword_1C03203A8
              || v4 > dword_1C03203B0 )
            {
              goto LABEL_990;
            }
            v202 = 0;
            v158 = 16LL;
LABEL_730:
            UpdateThresholdFromMetric(v10, &updated, &v204, v158, (_BYTE)v4, v202);
            goto LABEL_990;
          }
          switch ( (_DWORD)v5 )
          {
            case 0x80:
              Next_high = dword_1C03203A4;
              goto LABEL_88;
            case 0x81:
              if ( v4 > *(_DWORD *)(gpDispInfo + 136LL)
                || v4 < gWinArrGlobal
                || v4 > dword_1C03203AC
                || v4 > dword_1C03203B4 )
              {
                goto LABEL_990;
              }
              v202 = 1;
              v158 = 17LL;
              goto LABEL_730;
            case 0x82:
              LOBYTE(v50) = dword_1C03203BC;
              goto LABEL_123;
          }
          if ( (_DWORD)v5 != 131 )
          {
            switch ( (_DWORD)v5 )
            {
              case 0x84:
                Next_high = dword_1C03203A8;
                goto LABEL_88;
              case 0x85:
                if ( v4 > *(_DWORD *)(gpDispInfo + 136LL) || v4 > dword_1C03203AC || v4 < gWinArrGlobal )
                  goto LABEL_990;
                v202 = 2;
                v158 = 19LL;
                break;
              case 0x86:
                Next_high = dword_1C03203AC;
                goto LABEL_88;
              default:
                if ( v4 > *(_DWORD *)(gpDispInfo + 136LL) || v4 < dword_1C03203A8 || v4 < dword_1C03203A4 )
                  goto LABEL_990;
                v202 = 3;
                v158 = 20LL;
                break;
            }
            goto LABEL_730;
          }
          v159 = 18;
LABEL_774:
          if ( (unsigned int)CheckDesktopPolicy(0LL, v159, CurrentProcessWin32Process) )
          {
            v10 = 0;
            v204 = 0;
          }
          if ( v10 )
          {
            updated = UpdateWinIniInt(0LL, 4LL, v159, v4);
            v204 = updated;
          }
          if ( v204 )
          {
            v160 = dword_1C03203BC;
            if ( v4 )
              dword_1C03203BC |= v8;
            else
              dword_1C03203BC &= ~v8;
            PostWindowArrangementCheck(v160);
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
                    if ( v4 > *(_DWORD *)(gpDispInfo + 136LL) || v4 > dword_1C03203B4 || v4 < gWinArrGlobal )
                      goto LABEL_990;
                    v202 = 4;
                    v158 = 21LL;
                    goto LABEL_730;
                  case 0x8A:
                    Next_high = dword_1C03203B4;
                    goto LABEL_88;
                  case 0x8B:
                    if ( v4 > *(_DWORD *)(gpDispInfo + 136LL) || v4 < dword_1C03203B0 || v4 < dword_1C03203A4 )
                      goto LABEL_990;
                    v202 = 5;
                    v158 = 22LL;
                    goto LABEL_730;
                  case 0x8C:
                    v142 = dword_1C03203BC;
                    goto LABEL_527;
                  case 0x8D:
                    v159 = 624;
                    v8 = 2;
                    break;
                  case 0x8E:
                    v50 = dword_1C03203BC >> 2;
                    goto LABEL_123;
                  case 0x8F:
                    v159 = 626;
                    v8 = 4;
                    break;
                  case 0x90:
                    v50 = dword_1C03203BC >> 3;
                    goto LABEL_123;
                  default:
                    v159 = 625;
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
          v126 = WritePointerDeviceSettings((unsigned int)v5, Src, v10);
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
              v204 = PointerDeviceSettings;
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
                      || (v169 = *(_QWORD *)(gptiForeground + 424LL)) == 0
                      || (v170 = *(_QWORD *)(v169 + 128)) == 0
                      || (unsigned int)IsWindowUnderActiveLockScreen(v170) )
                    {
                      xxxSetForegroundWindow2(0LL, 0LL, 0LL);
                    }
                    ClearKeyboardStates();
                  }
                  GreLddmProcessLockScreen(gbLockScreenActive, v11);
                  goto LABEL_990;
                case 0xAC:
                  v204 = (int)GetInteractiveControlParameters((struct tagINTERACTIVECTRL_PARAMETERS *)Src) >= 0;
                  goto LABEL_990;
                case 0xAD:
                  if ( (int)SetInteractiveControlParameters((struct tagINTERACTIVECTRL_PARAMETERS *)Src, v10) >= 0 )
                  {
                    updated = 1;
                    v130 = v203;
                    goto LABEL_992;
                  }
                  return (unsigned int)v204;
              }
              goto LABEL_874;
            }
            v157 = (int *)gbLockScreenActive;
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
                  *(_QWORD *)&v231.left = 0LL;
                  *(_QWORD *)&v231.right = 0LL;
                  if ( Src )
                  {
                    if ( *((_DWORD *)Src + 2) < *(_DWORD *)Src || *((_DWORD *)Src + 3) < *((_DWORD *)Src + 1) )
                      return 0LL;
                    v161 = MonitorFromRect((struct tagRECT *)Src, 1u, 0);
                  }
                  else
                  {
                    v161 = GetPrimaryMonitor(136LL, v11, CurrentProcessWin32Process);
                  }
                  v208 = v161;
                  v236 = *GetMonitorRect(&v228, v161);
                  v162 = (const struct tagRECT *)&v236;
                  if ( Src )
                    v162 = (const struct tagRECT *)Src;
                  if ( !(unsigned int)IntersectRect(&v231, v162, &v236) || !EqualRectInl(&v231, v162) )
                    goto LABEL_5;
                  if ( (W32GetCurrentThreadDpiAwarenessContext(v163, v11, CurrentProcessWin32Process) & 0xF) != 2
                    && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448)
                    && (v165 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL),
                        (*(_DWORD *)(v165 + 64) & 1) != 0) )
                  {
                    v167 = W32GetCurrentThreadDpiAwarenessContext(v165, v164, v166);
                    LogicalToPhysicalDPIRect(v208 + 296, &v231, v167, &v208);
                  }
                  else
                  {
                    *(struct tagRECT *)(v208 + 296) = v231;
                  }
                  goto LABEL_990;
                }
                goto LABEL_874;
              }
              v168 = GetPrimaryMonitor(136LL, v11, CurrentProcessWin32Process);
              MonitorWorkRect = (_OWORD *)GetMonitorMenuRect(v229, v168);
              goto LABEL_391;
            }
LABEL_859:
            if ( v4 + 11 > 0x16 )
              return 0LL;
            if ( (unsigned int)CheckDesktopPolicy(0LL, 628LL, CurrentProcessWin32Process) )
            {
              v10 = 0;
              v204 = 0;
            }
            if ( v10 )
            {
              v232[0] = 0LL;
              v232[1] = 0LL;
              v233 = 0;
              v234 = v4;
              v219 = v4 != 159;
              if ( (int)DrvDisplayConfigSetScaleFactorOverride(v232, &v219) < 0 )
              {
                v204 = 0;
              }
              else
              {
                if ( v4 == 159 )
                  TraceLoggingSPISetModernDPIOverrideEvent(0xFFFF, 159);
                else
                  TraceLoggingSPISetDesktopDPIOverrideEvent(0xFFFF, v4);
                v204 = 1;
              }
              updated = 0;
            }
            goto LABEL_990;
          }
        }
        memset(v237, 0, sizeof(v237));
        if ( (int)DrvDisplayConfigGetScaleFactorOverrides(v237, 1LL) < 0 )
          return 0LL;
        if ( v4 != 158 )
        {
          v171 = Src;
          *(_QWORD *)Src = *(_QWORD *)&v237[5];
          v171[2] = v237[7];
          goto LABEL_990;
        }
        Next_high = v237[6];
        goto LABEL_88;
      }
LABEL_44:
      v204 = 1;
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
