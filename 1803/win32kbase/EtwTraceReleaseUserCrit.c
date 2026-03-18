/*
 * XREFs of EtwTraceReleaseUserCrit @ 0x1C0030230
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0024C50 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     NtUserReleaseDC @ 0x1C0030160 (NtUserReleaseDC.c)
 *     LeaveCrit @ 0x1C00302F0 (LeaveCrit.c)
 *     NtUserGetDC @ 0x1C0030850 (NtUserGetDC.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00344B0 (UserSessionSwitchEnterCrit.c)
 *     UserDeleteW32Thread @ 0x1C0034990 (UserDeleteW32Thread.c)
 *     NtUserEnumDisplaySettings @ 0x1C0041540 (NtUserEnumDisplaySettings.c)
 *     NtUserQueryDisplayConfig @ 0x1C00415E0 (NtUserQueryDisplayConfig.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C0041880 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserEnumDisplayDevices @ 0x1C0041A10 (NtUserEnumDisplayDevices.c)
 *     ChangeAcquireResourceType @ 0x1C006A910 (ChangeAcquireResourceType.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C00B5D30 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserGetMonitorBrightness @ 0x1C00B64F0 (NtUserGetMonitorBrightness.c)
 *     NtUserSetDimUndimTransitionTime @ 0x1C00B8E60 (NtUserSetDimUndimTransitionTime.c)
 *     NtUserSetMonitorBrightness @ 0x1C00B99C0 (NtUserSetMonitorBrightness.c)
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01210F0 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 *     ?LockShared@CInpLockGuard@@QEAAXXZ @ 0x1C0124AF0 (-LockShared@CInpLockGuard@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0xqx @ 0x1C00B0468 (McTemplateK0xqx.c)
 */

void __fastcall EtwTraceReleaseUserCrit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentThreadWin32Thread; // rbx
  DWORD LowPart; // eax
  int v5; // r8d

  if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C019A1D8 - 1) > 2u
    && (qword_1C019A1C0 & 0x200000010000000LL) != 0
    && (qword_1C019A1C8 & 0x200000010000000LL) == qword_1C019A1C8 )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1, 0x200000010000000LL, a3);
    if ( CurrentThreadWin32Thread )
    {
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        McTemplateK0xqx(
          *(_QWORD *)(CurrentThreadWin32Thread + 16),
          (unsigned int)&ReleaseUserCritEvent,
          v5,
          LowPart - *(_DWORD *)(CurrentThreadWin32Thread + 8),
          0,
          *(_QWORD *)(CurrentThreadWin32Thread + 16));
    }
  }
}
