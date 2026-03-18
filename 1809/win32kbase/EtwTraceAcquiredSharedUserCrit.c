/*
 * XREFs of EtwTraceAcquiredSharedUserCrit @ 0x1C0028720
 * Callers:
 *     DrvGetCurrentDpiInfo @ 0x1C0013464 (DrvGetCurrentDpiInfo.c)
 *     NtUserGetDC @ 0x1C00281A0 (NtUserGetDC.c)
 *     NtUserReleaseDC @ 0x1C0028430 (NtUserReleaseDC.c)
 *     EnterSharedCrit @ 0x1C0028600 (EnterSharedCrit.c)
 *     UserEnterUserCritSecShared @ 0x1C002A3F0 (UserEnterUserCritSecShared.c)
 *     NtUserGetKeyboardLayout @ 0x1C002B3A0 (NtUserGetKeyboardLayout.c)
 *     NtUserMapVirtualKeyEx @ 0x1C002B980 (NtUserMapVirtualKeyEx.c)
 *     ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C003E690 (-DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     ReferenceDwmApiPort @ 0x1C0047D00 (ReferenceDwmApiPort.c)
 *     NtUserVkKeyScanEx @ 0x1C0064D60 (NtUserVkKeyScanEx.c)
 *     UserReleaseDC @ 0x1C00757F0 (UserReleaseDC.c)
 *     GreGetDCPoint @ 0x1C0076160 (GreGetDCPoint.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00836E0 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@XZ @ 0x1C00A8208 (--0EnterLeaveCritShared@@QEAA@XZ.c)
 *     ??0EnterLeaveCritSharedPti@@QEAA@PEAPEAUtagTHREADINFO@@@Z @ 0x1C00A9618 (--0EnterLeaveCritSharedPti@@QEAA@PEAPEAUtagTHREADINFO@@@Z.c)
 *     _NtHWCursorUpdatePointer_::_2_::UserCritShared::UserCritShared @ 0x1C00AB34C (_NtHWCursorUpdatePointer_--_2_--UserCritShared--UserCritShared.c)
 *     UserGetDesktopIdForCurrentThread @ 0x1C00E002C (UserGetDesktopIdForCurrentThread.c)
 *     NtMITSetLastInputRecipient @ 0x1C00ED7A0 (NtMITSetLastInputRecipient.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C00F5A60 (W32pLkmdDataCollectionCallback.c)
 * Callees:
 *     McTemplateK0xqx @ 0x1C00EB610 (McTemplateK0xqx.c)
 */

__int64 EtwTraceAcquiredSharedUserCrit()
{
  __int64 result; // rax
  __int64 v1; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  int v3; // r8d
  LONGLONG v4; // rdi
  __int64 QuadPart; // rsi
  bool v6; // zf
  int v7; // ecx

  result = PsGetCurrentThreadWin32Thread();
  v1 = result;
  if ( result )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v4 = PerformanceCounter.QuadPart - *(_QWORD *)(v1 + 8);
    QuadPart = PerformanceCounter.QuadPart;
    v6 = (W32kEtwEnabledKeyword & 0x200000010000000LL) == 0;
    *(LARGE_INTEGER *)(v1 + 8) = PerformanceCounter;
    if ( !v6 )
    {
      v7 = (unsigned __int8)byte_1C01C3328;
      if ( (unsigned __int8)(byte_1C01C3328 - 1) > 2u
        && (qword_1C01C3310 & 0x200000010000000LL) != 0
        && (qword_1C01C3318 & 0x200000010000000LL) == qword_1C01C3318
        && SBYTE2(Microsoft_Windows_Win32kEnableBits) < 0 )
      {
        LOBYTE(v7) = byte_1C01C3328 - 1;
        McTemplateK0xqx(v7, (unsigned int)&AcquiredSharedUserCritEvent, v3, v4, 0, gullUserCritAcquireToken);
      }
    }
    if ( v4 >= *((__int64 *)&WPP_MAIN_CB.Reserved + 1)
      && QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
        McTemplateK0xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v3,
          v4,
          1000000 * v4 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, QuadPart);
    }
    result = _InterlockedIncrement64(&gullUserCritAcquireToken);
    *(_QWORD *)(v1 + 16) = result;
  }
  return result;
}
