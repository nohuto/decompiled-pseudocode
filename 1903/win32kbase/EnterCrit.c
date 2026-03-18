/*
 * XREFs of EnterCrit @ 0x1C0025E70
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0003B80 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserReportInertia @ 0x1C0004670 (NtUserReportInertia.c)
 *     NtUserGetHDevName @ 0x1C003A890 (NtUserGetHDevName.c)
 *     NtUserGetDpiForMonitor @ 0x1C003D3A0 (NtUserGetDpiForMonitor.c)
 *     NtUserEnumDisplayMonitors @ 0x1C003EB60 (NtUserEnumDisplayMonitors.c)
 *     NtUserGetUniformSpaceMapping @ 0x1C0064C60 (NtUserGetUniformSpaceMapping.c)
 *     NtUserToUnicodeEx @ 0x1C0070DC0 (NtUserToUnicodeEx.c)
 *     NtUserSetSysColors @ 0x1C00742A0 (NtUserSetSysColors.c)
 *     NtUserLockCursor @ 0x1C00951C0 (NtUserLockCursor.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C009CA70 (NtMITCoreMsgKOpenConnectionTo.c)
 *     NtMITActivateInputProcessing @ 0x1C009D340 (NtMITActivateInputProcessing.c)
 *     NtUserClipCursor @ 0x1C00B2C40 (NtUserClipCursor.c)
 *     NtConfigureInputSpace @ 0x1C0113620 (NtConfigureInputSpace.c)
 *     NtMITInitMinuserThread @ 0x1C0114690 (NtMITInitMinuserThread.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C0115520 (NtMITSynthesizeKeyboardInput.c)
 *     NtMITSynthesizeMouseInput @ 0x1C0115890 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C0115A40 (NtMITSynthesizeTouchInput.c)
 *     NtSetPointerDeviceInputSpace @ 0x1C0116470 (NtSetPointerDeviceInputSpace.c)
 *     NtSetShellCursorState @ 0x1C0116660 (NtSetShellCursorState.c)
 *     NtUserCreatePalmRejectionDelayZone @ 0x1C01169A0 (NtUserCreatePalmRejectionDelayZone.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C0116F40 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserDownlevelTouchpad @ 0x1C01172C0 (NtUserDownlevelTouchpad.c)
 *     NtUserGetClipCursor @ 0x1C0117DA0 (NtUserGetClipCursor.c)
 *     NtUserGetExtendedPointerDeviceProperty @ 0x1C0117EE0 (NtUserGetExtendedPointerDeviceProperty.c)
 *     NtUserGetInputContainerId @ 0x1C0118080 (NtUserGetInputContainerId.c)
 *     NtUserGetPointerDeviceOrientation @ 0x1C0118360 (NtUserGetPointerDeviceOrientation.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C01193B0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0119720 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0119980 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C0119AF0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C011A6C0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C011AB10 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C011AF50 (NtUserInjectPointerInput.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C011B440 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserSetDisplayConfig @ 0x1C011BCD0 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C011C370 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetManipulationInputTarget @ 0x1C011C630 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C011C810 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSystemParametersInfo @ 0x1C011D260 (NtUserSystemParametersInfo.c)
 *     NtMapVisualRelativePoints @ 0x1C011F4C0 (NtMapVisualRelativePoints.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C012A92C (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagTHREADINFO *__fastcall EnterCrit(int a1, int a2)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rsi
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 *i; // r14
  __int64 v24; // rax
  unsigned int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  PERESOURCE *v29; // rdi
  __int64 v30; // r8
  int v31; // [rsp+30h] [rbp-89h] BYREF
  int v32; // [rsp+34h] [rbp-85h] BYREF
  int v33; // [rsp+38h] [rbp-81h] BYREF
  __int64 v34; // [rsp+40h] [rbp-79h]
  unsigned __int8 v35; // [rsp+48h] [rbp-71h]
  GUID ActivityId; // [rsp+4Ch] [rbp-6Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-59h] BYREF
  int *v38; // [rsp+80h] [rbp-39h]
  __int64 v39; // [rsp+88h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR v40; // [rsp+90h] [rbp-29h] BYREF
  int *v41; // [rsp+B0h] [rbp-9h]
  __int64 v42; // [rsp+B8h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR v43; // [rsp+C0h] [rbp+7h] BYREF
  int *v44; // [rsp+E0h] [rbp+27h]
  __int64 v45; // [rsp+E8h] [rbp+2Fh]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v35 = 1;
    v24 = PsGetCurrentThreadWin32Thread();
    v34 = v24;
    if ( v24 && (*(int *)(v24 + 24) > 0 || *(_DWORD *)(v34 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020FB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v31 = v35;
          v38 = &v31;
          v39 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v34 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( a1
      || (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && a2 && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v34 && (*(_DWORD *)(v34 + 48) || *(int *)(v34 + 24) > 0) )
  {
    *(_DWORD *)(v34 + 44) = 1;
    *(GUID *)(v34 + 28) = ActivityId;
    if ( dword_1C020FB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v32 = v35;
        v41 = &v32;
        v42 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v40);
        v25 = dword_1C020FB50;
      }
      if ( v25 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v33 = v35;
        v44 = &v33;
        v45 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v43);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( (unsigned int)IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v15);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
    {
      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
      v26 = *i;
      i[2] = 0LL;
      if ( !*(_DWORD *)(v26 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
      v29 = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( v29 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v30);
      ExReleaseResourceAndLeaveCriticalRegion(*v29);
      HMUnlockObject(*i);
      tagDomLock::LockExclusive((tagDomLock *)v29);
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  return v5;
}
