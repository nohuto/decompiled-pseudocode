/*
 * XREFs of VideoPortCalloutThread @ 0x1C00A5C78
 * Callers:
 *     xxxCreateSystemThreads @ 0x1C00A7C10 (xxxCreateSystemThreads.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C0053A58 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     xxxResetDisplayDevice @ 0x1C005C620 (xxxResetDisplayDevice.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C006E590 (GreIncrementDisplaySettingsUniqueness.c)
 *     InitSystemThread @ 0x1C00A0CF0 (InitSystemThread.c)
 *     PostWinlogonMessage @ 0x1C00A1E00 (PostWinlogonMessage.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A34A0 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A41FC (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     UpdateExternalMonitorConnectedStatus @ 0x1C00A544C (UpdateExternalMonitorConnectedStatus.c)
 *     SafeDisableMDEV @ 0x1C00A6C60 (SafeDisableMDEV.c)
 *     SafeEnableMDEV @ 0x1C00A6CB0 (SafeEnableMDEV.c)
 *     McTemplateK0qq @ 0x1C00AECC8 (McTemplateK0qq.c)
 *     DrvProcessDxgkDisplayCallout @ 0x1C00D58C4 (DrvProcessDxgkDisplayCallout.c)
 *     xxxDwmControl @ 0x1C00DC460 (xxxDwmControl.c)
 *     DCompositionForceRender @ 0x1C0142C70 (DCompositionForceRender.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LONG __fastcall VideoPortCalloutThread(PRKEVENT *a1)
{
  struct _VIDEO_WIN32K_CALLBACKS_PARAMS *v1; // rdi
  struct _LIST_ENTRY *Blink; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // r14
  signed int Arg1; // eax
  __int64 v6; // rdx
  const GUID *v7; // r8
  unsigned int CalloutType; // r9d
  struct _MCGEN_TRACE_CONTEXT *v9; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rcx
  PVOID CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v24; // rdx
  __int64 *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 Param_low; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct _MDEV *v36; // rcx
  struct CInpPushLock *v37; // rdx
  CInputConfig *v38; // rcx
  _QWORD v40[3]; // [rsp+40h] [rbp-18h] BYREF
  tagObjLock *v41; // [rsp+A0h] [rbp+48h] BYREF
  char v42; // [rsp+A8h] [rbp+50h]
  char v43; // [rsp+B0h] [rbp+58h]
  __int64 v44; // [rsp+B8h] [rbp+60h] BYREF

  v1 = (struct _VIDEO_WIN32K_CALLBACKS_PARAMS *)*a1;
  Blink = (*a1)->Header.WaitListHead.Blink;
  v4 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)Blink->Blink;
  (*a1)->Header.WaitListHead.Blink = Blink->Flink;
  Arg1 = InitSystemThread(0LL);
  CalloutType = v1->CalloutType;
  v1->Status = Arg1;
  v9 = (struct _MCGEN_TRACE_CONTEXT *)(unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    McTemplateK0qq(
      (PMCGEN_TRACE_CONTEXT)(unsigned int)Microsoft_Windows_Win32kEnableBits,
      &StartVideoPortCalloutThread,
      v7,
      CalloutType,
      Arg1);
    Arg1 = v1->Status;
  }
  if ( Arg1 >= 0 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v6, v7);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v11 = 0LL;
    while ( 1 )
    {
      v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v12 )
        v11 = *v12;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v13);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v11 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v16, v15, v17);
    gptiCurrent = v11;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v41);
    while ( 1 )
    {
      v25 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v20 = *v25;
      v25[2] = 0LL;
      if ( !*(_DWORD *)(v20 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
      DomainLockRef = GetDomainLockRef(8LL, v18);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v25);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v24);
    }
    tagObjLock::UnLock(v41);
    v27 = (unsigned int)v1->CalloutType;
    v28 = (_DWORD)v27 == 7;
    if ( (_DWORD)v27 == 7 )
    {
      gbInVideoPnpCallout = 1;
      v27 = (unsigned int)v1->CalloutType;
      v28 = (_DWORD)v27 == 7;
    }
    LOBYTE(v26) = v28;
    if ( (((_DWORD)v27 - 7) & 0xFFFFFFFC) != 0 || (v28 = (_DWORD)v27 == 9, LOBYTE(v27) = 1, v28) )
      LOBYTE(v27) = 0;
    xxxWaitForVideoPortCalloutReady(v27, v26, v4);
    if ( (unsigned int)IsRemoteConnection()
      && v1->CalloutType != VideoPnpNotifyCallout
      && v1->CalloutType != VideoDxgkFindAdapterTdrCallout )
    {
      goto LABEL_31;
    }
    v31 = (unsigned int)(v1->CalloutType - 4);
    switch ( v1->CalloutType )
    {
      case VideoFindAdapterCallout:
        goto LABEL_91;
      case VideoPnpNotifyCallout:
        v1->Status = Win32kPnpNotify(v1, v4, v30);
        goto LABEL_83;
      case VideoDxgkDisplaySwitchCallout:
        v40[0] = 0LL;
        if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
          || (PVOID)PsGetCurrentProcess(v35) != gpepCSRSS
          || (v29 = (__int64)grpdeskRitInput) != 0 && (int)xxxSetCsrssThreadDesktop(grpdeskRitInput, v40) >= 0 )
        {
          LOBYTE(v41) = 1;
          do
          {
            v42 = 0;
            v43 = 0;
            v36 = *(struct _MDEV **)(gpDispInfo + 16);
            LOBYTE(v44) = 0;
            if ( (int)DrvProcessDxgkDisplayCallout(v36, (__int64)&v44, (__int64)&v41) < 0 )
            {
              LOBYTE(v41) = 0;
            }
            else
            {
              if ( v42 )
              {
                GreIncrementDisplaySettingsUniqueness();
                xxxResetDisplayDevice((__int64)grpdeskRitInput, 0, 0);
              }
              else if ( v43 )
              {
                CInputConfig::OnDisplayStateChange(v38, v37);
              }
              if ( (_BYTE)v44 )
                PostWinlogonMessage(1027LL, 0);
            }
          }
          while ( !(_BYTE)v41 );
          v1->Status = 0;
          if ( !gProtocolType )
            UpdateExternalMonitorConnectedStatus(0);
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 && (PVOID)PsGetCurrentProcess(v29) == gpepCSRSS )
            xxxRestoreCsrssThreadDesktop(v40, 0LL);
        }
        goto LABEL_83;
    }
    v31 = (unsigned int)(v1->CalloutType - 10);
    switch ( v1->CalloutType )
    {
      case VideoDxgkFindAdapterTdrCallout:
LABEL_91:
        if ( v1->Param )
        {
          if ( !gProtocolType )
            SafeEnableMDEV(1LL);
          if ( (int)IsxxxDwmStopRedirectionSupported(v31) >= 0 )
            xxxDwmControl(1035LL, 0LL);
          if ( (int)IsxxxUserResetDisplayDeviceSupported() >= 0 )
            xxxUserResetDisplayDevice();
          if ( (int)IsxxxBroadcastModernAppRedrawSupported() >= 0 )
            xxxBroadcastModernAppRedraw();
          ZwUpdateWnfStateData(&WNF_DXGK_ADAPTER_TDR_NOTIFICATION, 0LL, 0LL, 0LL, 0LL, 0, 0);
        }
        else
        {
          if ( (int)IsxxxDwmStopRedirectionSupported(v31) >= 0 )
            xxxDwmControl(1034LL, 0LL);
          if ( !gProtocolType )
            SafeDisableMDEV(1LL);
        }
        break;
      case VideoDxgkHardwareProtectionTeardown:
        Param_low = LODWORD(v1->Param);
        v33 = 0LL;
        v34 = 1LL;
        goto LABEL_47;
      case VideoRepaintDesktop:
        if ( (int)IsxxxUserResetDisplayDeviceSupported() >= 0 )
          xxxUserResetDisplayDevice();
        break;
      default:
        v29 = (unsigned int)(v1->CalloutType - 13);
        if ( v1->CalloutType != VideoUpdateCursor )
        {
          if ( v1->CalloutType != VideoDisableMultiPlaneOverlay )
          {
LABEL_31:
            v1->Status = -1073741823;
LABEL_83:
            if ( v1->CalloutType == VideoPnpNotifyCallout )
              gbInVideoPnpCallout = 0;
            UserSessionSwitchLeaveCrit(v29);
            goto LABEL_86;
          }
          Param_low = 0LL;
          v33 = 1LL;
          v34 = 0LL;
LABEL_47:
          DCompositionForceRender(0LL, v34, Param_low, v33);
          goto LABEL_83;
        }
        if ( (int)IsSetPointerSupported() >= 0 && (int)IszzzUpdateCursorImageSupported() >= 0 )
        {
          SetPointer(1LL);
          zzzUpdateCursorImage();
        }
        break;
    }
    v1->Status = 0;
    goto LABEL_83;
  }
LABEL_86:
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0qq(v9, &StopVideoPortCalloutThread, v7, v1->CalloutType, v1->Status);
  return KeSetEvent(a1[1], 1, 0);
}
