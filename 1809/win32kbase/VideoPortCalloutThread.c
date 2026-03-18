/*
 * XREFs of VideoPortCalloutThread @ 0x1C00E2B60
 * Callers:
 *     xxxCreateSystemThreads @ 0x1C0060990 (xxxCreateSystemThreads.c)
 * Callees:
 *     UpdateExternalMonitorConnectedStatus @ 0x1C0004660 (UpdateExternalMonitorConnectedStatus.c)
 *     UserIsWddmConnectedSession @ 0x1C0016E18 (UserIsWddmConnectedSession.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00412CC (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     xxxResetDisplayDevice @ 0x1C0046FB0 (xxxResetDisplayDevice.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C008EC74 (UserRemoteConnectedSessionUsingWddm.c)
 *     InitSystemThread @ 0x1C00904B0 (InitSystemThread.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00913D0 (GreIncrementDisplaySettingsUniqueness.c)
 *     xxxDwmControl @ 0x1C0097E60 (xxxDwmControl.c)
 *     PostWinlogonMessage @ 0x1C0097ED0 (PostWinlogonMessage.c)
 *     DCompositionForceRender @ 0x1C00A5C60 (DCompositionForceRender.c)
 *     SafeEnableMDEV @ 0x1C00A6220 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00A62F0 (SafeDisableMDEV.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E2074 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E23AC (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     McTemplateK0qq @ 0x1C00E97D4 (McTemplateK0qq.c)
 *     DrvProcessDxgkDisplayCallout @ 0x1C01050FC (DrvProcessDxgkDisplayCallout.c)
 *     DCompositionDDAChange @ 0x1C0166040 (DCompositionDDAChange.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LONG __fastcall VideoPortCalloutThread(PRKEVENT *a1)
{
  struct _VIDEO_WIN32K_CALLBACKS_PARAMS *v1; // rdi
  struct _LIST_ENTRY *Blink; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // r14
  signed int Arg1; // eax
  __int64 v6; // rdx
  struct _MCGEN_TRACE_CONTEXT *v7; // rcx
  const GUID *v8; // r8
  unsigned int CalloutType; // r9d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v19; // r8
  __int64 *v20; // rsi
  __int64 v21; // rdx
  struct _MCGEN_TRACE_CONTEXT *v22; // rcx
  bool v23; // zf
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // ecx
  __int64 v28; // rcx
  int Param; // r8d
  int v30; // r9d
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  struct _MDEV *v36; // rcx
  struct CEResource *v37; // rdx
  CInputConfig *v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  char v45; // [rsp+40h] [rbp-30h] BYREF
  __int16 v46; // [rsp+41h] [rbp-2Fh]
  char v47; // [rsp+43h] [rbp-2Dh] BYREF
  tagObjLock *v48[4]; // [rsp+48h] [rbp-28h] BYREF

  v1 = (struct _VIDEO_WIN32K_CALLBACKS_PARAMS *)*a1;
  Blink = (*a1)->Header.WaitListHead.Blink;
  v4 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)Blink->Blink;
  (*a1)->Header.WaitListHead.Blink = Blink->Flink;
  Arg1 = InitSystemThread(0LL);
  CalloutType = v1->CalloutType;
  v1->Status = Arg1;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    McTemplateK0qq(v7, &StartVideoPortCalloutThread, v8, CalloutType, Arg1);
    Arg1 = v1->Status;
  }
  if ( Arg1 >= 0 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7, v6, v8);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v48, 1);
    v11 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v48);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v11;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)v48);
    while ( 1 )
    {
      v20 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v15 = *v20;
      v20[2] = 0LL;
      if ( !*(_DWORD *)(v15 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
      DomainLockRef = GetDomainLockRef(8);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v19);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v20);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
    }
    tagObjLock::UnLock(v48[0]);
    v22 = (struct _MCGEN_TRACE_CONTEXT *)(unsigned int)v1->CalloutType;
    v23 = (_DWORD)v22 == 7;
    if ( (_DWORD)v22 == 7 )
    {
      gbInVideoPnpCallout = 1;
      v22 = (struct _MCGEN_TRACE_CONTEXT *)(unsigned int)v1->CalloutType;
      v23 = (_DWORD)v22 == 7;
    }
    LOBYTE(v21) = v23;
    if ( (((_DWORD)v22 - 7) & 0xFFFFFFFC) != 0 || (v23 = (_DWORD)v22 == 9, LOBYTE(v22) = 1, v23) )
      LOBYTE(v22) = 0;
    xxxWaitForVideoPortCalloutReady(v22, v21, v4);
    if ( (unsigned int)IsRemoteConnection(v25, v24, v26) )
    {
      if ( !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
      {
        if ( v1->CalloutType > (unsigned int)VideoDesktopDuplicationChange )
          goto LABEL_22;
        v27 = 33920;
        if ( !_bittest(&v27, v1->CalloutType) )
          goto LABEL_22;
      }
    }
    v28 = (unsigned int)(v1->CalloutType - 4);
    switch ( v1->CalloutType )
    {
      case VideoFindAdapterCallout:
        goto LABEL_84;
      case VideoPnpNotifyCallout:
        v1->Status = Win32kPnpNotify(v1, v4);
        goto LABEL_76;
      case VideoDxgkDisplaySwitchCallout:
        v48[0] = 0LL;
        if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
          || (PVOID)PsGetCurrentProcess(v35) != gpepCSRSS
          || grpdeskRitInput && (int)xxxSetCsrssThreadDesktop(grpdeskRitInput, v48) >= 0 )
        {
          v45 = 1;
          do
          {
            v46 = 0;
            v36 = *(struct _MDEV **)(gpDispInfo + 16);
            v47 = 0;
            if ( (int)DrvProcessDxgkDisplayCallout(v36, (__int64)&v47, (__int64)&v45) < 0 )
            {
              v45 = 0;
            }
            else
            {
              if ( (_BYTE)v46 )
              {
                GreIncrementDisplaySettingsUniqueness();
                xxxResetDisplayDevice((__int64)grpdeskRitInput, 0, 0);
              }
              else if ( HIBYTE(v46) )
              {
                CInputConfig::OnDisplayStateChange(v38, v37);
              }
              if ( v47 )
                PostWinlogonMessage(1027LL, 0);
            }
          }
          while ( !v45 );
          v1->Status = 0;
          if ( (unsigned int)UserIsWddmConnectedSession() )
            UpdateExternalMonitorConnectedStatus(0);
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 && (PVOID)PsGetCurrentProcess(v39) == gpepCSRSS )
            xxxRestoreCsrssThreadDesktop(v48, 0LL);
        }
        goto LABEL_76;
    }
    v28 = (unsigned int)(v1->CalloutType - 10);
    switch ( v1->CalloutType )
    {
      case VideoDxgkFindAdapterTdrCallout:
LABEL_84:
        if ( v1->Param )
        {
          if ( (unsigned int)UserIsWddmConnectedSession() )
            SafeEnableMDEV(1u);
          if ( (int)IsxxxDwmStopRedirectionSupported(v40) >= 0 )
            xxxDwmControl(1035LL, 0);
          if ( (int)IsxxxUserResetDisplayDeviceSupported() >= 0 )
            xxxUserResetDisplayDevice(v42, v41, v43);
          if ( (int)IsxxxBroadcastModernAppRedrawSupported() >= 0 )
            xxxBroadcastModernAppRedraw();
          ZwUpdateWnfStateData(&WNF_DXGK_ADAPTER_TDR_NOTIFICATION, 0LL, 0LL, 0LL, 0LL, 0, 0);
        }
        else
        {
          if ( (int)IsxxxDwmStopRedirectionSupported(v28) >= 0 )
            xxxDwmControl(1034LL, 0);
          if ( (unsigned int)UserIsWddmConnectedSession() )
            SafeDisableMDEV(1u);
        }
        break;
      case VideoDxgkHardwareProtectionTeardown:
        Param = v1->Param;
        v30 = 0;
        v31 = 1;
        goto LABEL_40;
      case VideoRepaintDesktop:
        if ( (int)IsxxxUserResetDisplayDeviceSupported() >= 0 )
          xxxUserResetDisplayDevice(v33, v32, v34);
        break;
      case VideoUpdateCursor:
        if ( (int)IsSetPointerSupported() >= 0 && (int)IszzzUpdateCursorImageSupported() >= 0 )
        {
          SetPointer(1LL);
          zzzUpdateCursorImage();
        }
        break;
      case VideoDisableMultiPlaneOverlay:
        Param = 0;
        v30 = 1;
        v31 = 0;
LABEL_40:
        DCompositionForceRender(0, v31, Param, v30);
        goto LABEL_76;
      case VideoDesktopDuplicationChange:
        DCompositionDDAChange();
        goto LABEL_76;
      default:
LABEL_22:
        v1->Status = -1073741823;
LABEL_76:
        if ( v1->CalloutType == VideoPnpNotifyCallout )
          gbInVideoPnpCallout = 0;
        UserSessionSwitchLeaveCrit();
        goto LABEL_79;
    }
    v1->Status = 0;
    goto LABEL_76;
  }
LABEL_79:
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0qq(v7, &StopVideoPortCalloutThread, v8, v1->CalloutType, v1->Status);
  return KeSetEvent(a1[1], 1, 0);
}
