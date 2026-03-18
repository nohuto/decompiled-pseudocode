/*
 * XREFs of VideoPortCalloutThread @ 0x1C0106BA0
 * Callers:
 *     xxxCreateSystemThreads @ 0x1C00A1830 (xxxCreateSystemThreads.c)
 * Callees:
 *     UpdateExternalMonitorConnectedStatus @ 0x1C0005158 (UpdateExternalMonitorConnectedStatus.c)
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     UserIsWddmConnectedSession @ 0x1C003CF30 (UserIsWddmConnectedSession.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C003E0F0 (UserRemoteConnectedSessionUsingWddm.c)
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00512B4 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     xxxResetDisplayDevice @ 0x1C0062FC0 (xxxResetDisplayDevice.c)
 *     xxxDwmControl @ 0x1C0067960 (xxxDwmControl.c)
 *     PostWinlogonMessage @ 0x1C00679D0 (PostWinlogonMessage.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     InitSystemThread @ 0x1C00A2BA0 (InitSystemThread.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00A4700 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00B6660 (DrvDxgkLogCodePointPacket.c)
 *     DCompositionForceRender @ 0x1C00B7110 (DCompositionForceRender.c)
 *     SafeEnableMDEV @ 0x1C00B7C00 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00B7CE0 (SafeDisableMDEV.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0105800 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0105B78 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     McTemplateK0qq @ 0x1C010D4F4 (McTemplateK0qq.c)
 *     DrvProcessDxgkDisplayCallout @ 0x1C012BAF4 (DrvProcessDxgkDisplayCallout.c)
 *     DCompositionDDAChange @ 0x1C019FDB0 (DCompositionDDAChange.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LONG __fastcall VideoPortCalloutThread(struct _VIDEO_WIN32K_CALLBACKS_PARAMS **a1)
{
  struct _VIDEO_WIN32K_CALLBACKS_PARAMS *v1; // rsi
  struct _VIDEO_WIN32K_CALLBACKS_PARAMS **v2; // r12
  ULONG_PTR *Param; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // r15
  signed int Arg1; // eax
  struct _MCGEN_TRACE_CONTEXT *v6; // rcx
  const GUID *v7; // r8
  unsigned int CalloutType; // r9d
  __int64 v9; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v11; // rax
  struct tagTHREADINFO *v12; // rbx
  struct tagTHREADINFO **v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 *v32; // r14
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  PERESOURCE *v36; // rdi
  __int64 v37; // r8
  __int64 v38; // rcx
  bool v39; // zf
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  int CurrentProcessSessionId; // eax
  __int64 v46; // rcx
  int v47; // r8d
  int v48; // r9d
  int v49; // edx
  __int64 v50; // rdx
  __int64 v51; // rcx
  struct _MDEV *v52; // rcx
  CInputConfig *v53; // rcx
  __int64 v54; // rcx
  char v56; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v57; // [rsp+49h] [rbp-BFh]
  char v58; // [rsp+4Bh] [rbp-BDh] BYREF
  int v59; // [rsp+4Ch] [rbp-BCh] BYREF
  int v60; // [rsp+50h] [rbp-B8h] BYREF
  int v61; // [rsp+54h] [rbp-B4h] BYREF
  struct _VIDEO_WIN32K_CALLBACKS_PARAMS **v62; // [rsp+58h] [rbp-B0h]
  _QWORD v63[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v64; // [rsp+70h] [rbp-98h]
  unsigned __int8 ActivityId_4; // [rsp+78h] [rbp-90h]
  GUID ActivityId_8; // [rsp+7Ch] [rbp-8Ch] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-78h] BYREF
  int *v68; // [rsp+B0h] [rbp-58h]
  __int64 v69; // [rsp+B8h] [rbp-50h]
  EVENT_DATA_DESCRIPTOR v70; // [rsp+C0h] [rbp-48h] BYREF
  int *v71; // [rsp+E0h] [rbp-28h]
  __int64 v72; // [rsp+E8h] [rbp-20h]
  EVENT_DATA_DESCRIPTOR v73; // [rsp+F0h] [rbp-18h] BYREF
  int *v74; // [rsp+110h] [rbp+8h]
  __int64 v75; // [rsp+118h] [rbp+10h]

  v1 = *a1;
  v2 = a1;
  v62 = a1;
  Param = (ULONG_PTR *)v1->Param;
  v4 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)Param[1];
  v1->Param = *Param;
  Arg1 = InitSystemThread(0LL);
  CalloutType = v1->CalloutType;
  v1->Status = Arg1;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    McTemplateK0qq(v6, &StartVideoPortCalloutThread, v7, CalloutType, Arg1);
    Arg1 = v1->Status;
  }
  if ( Arg1 >= 0 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    *(_QWORD *)&ActivityId_8.Data1 = 0LL;
    *(_QWORD *)ActivityId_8.Data4 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      ActivityId_4 = 1;
      v11 = PsGetCurrentThreadWin32Thread(v9);
      v64 = v11;
      if ( v11 && (*(int *)(v11 + 24) > 0 || *(_DWORD *)(v64 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId_8);
        if ( dword_1C020CB50 > 6u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
          {
            v59 = ActivityId_4;
            v68 = &v59;
            v69 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId_8, 0LL, 3u, &pData);
          }
        }
      }
    }
    else
    {
      v64 = 0LL;
    }
    v12 = 0LL;
    while ( 1 )
    {
      v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v13 )
        v12 = *v13;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v15, v14);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v18, v17) == gpepCSRSS && v12 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v12 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v64 && (*(_DWORD *)(v64 + 48) || *(int *)(v64 + 24) > 0) )
    {
      *(_DWORD *)(v64 + 44) = 1;
      *(GUID *)(v64 + 28) = ActivityId_8;
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v60 = ActivityId_4;
          v71 = &v60;
          v72 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId_8, 0LL, 3u, &v70);
          v19 = dword_1C020CB50;
        }
        if ( v19 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v61 = ActivityId_4;
          v74 = &v61;
          v75 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId_8, 0LL, 3u, &v73);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v12;
    gbValidateHandleForIL = 1;
    if ( IsValidGuiThreadContext() )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v20, v21);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v25);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v32 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v32[2];
          v33 = *v32;
          v32[2] = 0LL;
          if ( !*(_DWORD *)(v33 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
          v36 = (PERESOURCE *)GetDomainLockRef(12LL, v29, v31);
          if ( v36 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v37);
          ExReleaseResourceAndLeaveCriticalRegion(*v36);
          HMUnlockObject(*v32);
          tagDomLock::LockExclusive(v36);
          v32 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v2 = v62;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
    v38 = (unsigned int)v1->CalloutType;
    v39 = (_DWORD)v38 == 7;
    if ( (_DWORD)v38 == 7 )
    {
      gbInVideoPnpCallout = 1;
      v38 = (unsigned int)v1->CalloutType;
      v39 = (_DWORD)v38 == 7;
    }
    LOBYTE(v20) = v39;
    if ( (((_DWORD)v38 - 7) & 0xFFFFFFFC) != 0 || (v39 = (_DWORD)v38 == 9, LOBYTE(v38) = 1, v39) )
      LOBYTE(v38) = 0;
    xxxWaitForVideoPortCalloutReady(v38, v20, v4);
    if ( (unsigned int)IsRemoteConnection(v41, v40, v42) )
    {
      if ( !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
      {
        if ( v1->CalloutType > (unsigned int)VideoDesktopDuplicationChange )
          goto LABEL_56;
        v44 = 33920LL;
        if ( !_bittest((const int *)&v44, v1->CalloutType) )
          goto LABEL_56;
      }
    }
    if ( gfSwitchInProgress )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      DrvDxgkLogCodePointPacket(107, v1->CalloutType, CurrentProcessSessionId, 0);
    }
    v46 = (unsigned int)(v1->CalloutType - 4);
    switch ( v1->CalloutType )
    {
      case VideoFindAdapterCallout:
        goto LABEL_120;
      case VideoPnpNotifyCallout:
        v1->Status = Win32kPnpNotify(v1, v4);
        goto LABEL_112;
      case VideoDxgkDisplaySwitchCallout:
        v63[1] = 0LL;
        v63[0] = 0LL;
        if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
          || (PVOID)PsGetCurrentProcess(v51, v50) != gpepCSRSS
          || (v44 = (__int64)grpdeskRitInput) != 0 && (int)xxxSetCsrssThreadDesktop(grpdeskRitInput, v63) >= 0 )
        {
          v56 = 1;
          do
          {
            v57 = 0;
            v52 = *(struct _MDEV **)(gpDispInfo + 16);
            v58 = 0;
            if ( (int)DrvProcessDxgkDisplayCallout(v52, (__int64)&v58, (__int64)&v56) < 0 )
            {
              v56 = 0;
            }
            else
            {
              if ( (_BYTE)v57 )
              {
                GreIncrementDisplaySettingsUniqueness();
                xxxResetDisplayDevice((__int64)grpdeskRitInput, 0, 0);
              }
              else if ( HIBYTE(v57) )
              {
                CInputConfig::OnDisplayStateChange(v53);
              }
              if ( v58 )
                PostWinlogonMessage(1027LL, 0);
            }
          }
          while ( !v56 );
          v1->Status = 0;
          if ( (unsigned int)UserIsWddmConnectedSession() )
            UpdateExternalMonitorConnectedStatus(0);
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 && (PVOID)PsGetCurrentProcess(v44, v43) == gpepCSRSS )
            xxxRestoreCsrssThreadDesktop(v63, 0LL);
        }
        goto LABEL_112;
    }
    v46 = (unsigned int)(v1->CalloutType - 10);
    switch ( v1->CalloutType )
    {
      case VideoDxgkFindAdapterTdrCallout:
LABEL_120:
        if ( v1->Param )
        {
          if ( (unsigned int)UserIsWddmConnectedSession() )
            SafeEnableMDEV(1u);
          if ( (int)IsxxxDwmStopRedirectionSupported(v54) >= 0 )
            xxxDwmControl(1035LL, 0);
          if ( (int)IsxxxUserResetDisplayDeviceSupported() >= 0 )
            xxxUserResetDisplayDevice();
          if ( (int)IsxxxBroadcastModernAppRedrawSupported() >= 0 )
            xxxBroadcastModernAppRedraw();
          ZwUpdateWnfStateData(&WNF_DXGK_ADAPTER_TDR_NOTIFICATION, 0LL, 0LL, 0LL, 0LL, 0, 0);
        }
        else
        {
          if ( (int)IsxxxDwmStopRedirectionSupported(v46) >= 0 )
            xxxDwmControl(1034LL, 0);
          if ( (unsigned int)UserIsWddmConnectedSession() )
            SafeDisableMDEV(1u);
        }
        break;
      case VideoDxgkHardwareProtectionTeardown:
        v47 = v1->Param;
        v48 = 0;
        v49 = 1;
        goto LABEL_76;
      case VideoRepaintDesktop:
        if ( (int)IsxxxUserResetDisplayDeviceSupported() >= 0 )
          xxxUserResetDisplayDevice();
        break;
      case VideoUpdateCursor:
        if ( (int)IsSetPointerSupported() >= 0 && (int)IszzzUpdateCursorImageSupported() >= 0 )
        {
          SetPointer(1LL);
          zzzUpdateCursorImage();
        }
        break;
      default:
        v44 = (unsigned int)(v1->CalloutType - 14);
        if ( v1->CalloutType != VideoDisableMultiPlaneOverlay )
        {
          if ( v1->CalloutType == VideoDesktopDuplicationChange )
          {
            DCompositionDDAChange();
            goto LABEL_112;
          }
LABEL_56:
          v1->Status = -1073741823;
LABEL_112:
          if ( v1->CalloutType == VideoPnpNotifyCallout )
            gbInVideoPnpCallout = 0;
          UserSessionSwitchLeaveCrit(v44, v43);
          goto LABEL_115;
        }
        v47 = 0;
        v48 = 1;
        v49 = 0;
LABEL_76:
        DCompositionForceRender(0, v49, v47, v48);
        goto LABEL_112;
    }
    v1->Status = 0;
    goto LABEL_112;
  }
LABEL_115:
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0qq(v6, &StopVideoPortCalloutThread, (const GUID *)(unsigned int)v1->Status, v1->CalloutType, v1->Status);
  return KeSetEvent((PRKEVENT)v2[1], 1, 0);
}
