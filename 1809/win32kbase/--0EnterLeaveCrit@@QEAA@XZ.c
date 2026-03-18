/*
 * XREFs of ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0002CA0 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C0003570 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserGetHDevName @ 0x1C0013910 (NtUserGetHDevName.c)
 *     NtUserGetDpiForMonitor @ 0x1C0013A20 (NtUserGetDpiForMonitor.c)
 *     NtUserEnumDisplayMonitors @ 0x1C0038FB0 (NtUserEnumDisplayMonitors.c)
 *     NtUserLockCursor @ 0x1C003B460 (NtUserLockCursor.c)
 *     NtUserSetSysColors @ 0x1C0048D20 (NtUserSetSysColors.c)
 *     NtUserToUnicodeEx @ 0x1C0065010 (NtUserToUnicodeEx.c)
 *     NtMITActivateInputProcessing @ 0x1C007A4D0 (NtMITActivateInputProcessing.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C008B770 (NtMITCoreMsgKOpenConnectionTo.c)
 *     NtUserClipCursor @ 0x1C00A1DF0 (NtUserClipCursor.c)
 *     NtConfigureInputSpace @ 0x1C00ECB10 (NtConfigureInputSpace.c)
 *     NtMITInitMinuserThread @ 0x1C00ED340 (NtMITInitMinuserThread.c)
 *     NtMITSynthesizeMouseInput @ 0x1C00ED970 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeMouseWheel @ 0x1C00EDAF0 (NtMITSynthesizeMouseWheel.c)
 *     NtMITSynthesizeTouchInput @ 0x1C00EDC10 (NtMITSynthesizeTouchInput.c)
 *     NtMITWaitForMultipleObjectsEx @ 0x1C00EDF00 (NtMITWaitForMultipleObjectsEx.c)
 *     NtSetPointerDeviceInputSpace @ 0x1C00EE140 (NtSetPointerDeviceInputSpace.c)
 *     NtSetShellCursorState @ 0x1C00EE310 (NtSetShellCursorState.c)
 *     NtUserCreatePalmRejectionDelayZone @ 0x1C00EE510 (NtUserCreatePalmRejectionDelayZone.c)
 *     NtUserGetClipCursor @ 0x1C00EEEF0 (NtUserGetClipCursor.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C00EFC90 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00F0000 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C00F0260 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C00F03E0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00F0740 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00F0910 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00F0AD0 (NtUserInjectPointerInput.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C00F0D20 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserSetDisplayConfig @ 0x1C00F1220 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00F17E0 (NtUserSetFeatureReportResponse.c)
 *     NtUserSetManipulationInputTarget @ 0x1C00F1BE0 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00F1DB0 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSystemParametersInfo @ 0x1C00F20E0 (NtUserSystemParametersInfo.c)
 *     NtMapVisualRelativePoints @ 0x1C00F36A0 (NtMapVisualRelativePoints.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

EnterLeaveCrit *__fastcall EnterLeaveCrit::EnterLeaveCrit(EnterLeaveCrit *this, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v13; // r8
  __int64 *v14; // rdi
  tagObjLock *v16; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v17[32]; // [rsp+28h] [rbp-30h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(this, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v17, 1);
  v5 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v17);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v16);
  while ( 1 )
  {
    v14 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v9 = *v14;
    v14[2] = 0LL;
    if ( !*(_DWORD *)(v9 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v13);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v14);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  tagObjLock::UnLock(v16);
  return this;
}
