/*
 * XREFs of EtwTraceAcquiredSharedUserCrit @ 0x1C003025C
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0024C50 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     NtUserReleaseDC @ 0x1C0030160 (NtUserReleaseDC.c)
 *     NtUserGetDC @ 0x1C0030850 (NtUserGetDC.c)
 *     UserEnterUserCritSecShared @ 0x1C0033130 (UserEnterUserCritSecShared.c)
 *     NtUserMapVirtualKeyEx @ 0x1C0033790 (NtUserMapVirtualKeyEx.c)
 *     hdcOpenDCW @ 0x1C0044DB0 (hdcOpenDCW.c)
 *     NtUserGetAsyncKeyState @ 0x1C0059050 (NtUserGetAsyncKeyState.c)
 *     DrvGetCurrentDpiInfo @ 0x1C00594D4 (DrvGetCurrentDpiInfo.c)
 *     ReferenceDwmApiPort @ 0x1C005C820 (ReferenceDwmApiPort.c)
 *     GreGetDCPoint @ 0x1C0061630 (GreGetDCPoint.c)
 *     UserReleaseDC @ 0x1C0064A80 (UserReleaseDC.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C006A810 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     NtMITSetLastInputRecipient @ 0x1C00B4BF0 (NtMITSetLastInputRecipient.c)
 *     NtUserGetPointerCursorId @ 0x1C00B6680 (NtUserGetPointerCursorId.c)
 *     NtUserGetPointerFrameArrivalTimes @ 0x1C00B6830 (NtUserGetPointerFrameArrivalTimes.c)
 *     NtUserGetPointerInfoList @ 0x1C00B69F0 (NtUserGetPointerInfoList.c)
 *     NtUserGetPointerInputTransform @ 0x1C00B6EE0 (NtUserGetPointerInputTransform.c)
 *     NtUserGetPointerType @ 0x1C00B70B0 (NtUserGetPointerType.c)
 *     NtUserGetRawPointerDeviceData @ 0x1C00B7280 (NtUserGetRawPointerDeviceData.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C00BF630 (W32pLkmdDataCollectionCallback.c)
 *     ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C00C89D0 (-DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00CA880 (NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName.c)
 *     NtHWCursorUpdatePointer @ 0x1C00CB140 (NtHWCursorUpdatePointer.c)
 *     ?LockShared@CInpLockGuard@@QEAAXXZ @ 0x1C0124AF0 (-LockShared@CInpLockGuard@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0xqx @ 0x1C00B0468 (McTemplateK0xqx.c)
 */

__int64 __fastcall EtwTraceAcquiredSharedUserCrit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  int v6; // ecx
  int v7; // r8d
  LONGLONG v8; // rdi
  __int64 QuadPart; // rbx

  result = PsGetCurrentThreadWin32Thread(a1, a2, a3);
  v4 = result;
  if ( result )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v8 = PerformanceCounter.QuadPart - *(_QWORD *)(v4 + 8);
    QuadPart = PerformanceCounter.QuadPart;
    if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C019A1D8 - 1) > 2u
      && (qword_1C019A1C0 & 0x200000010000000LL) != 0
      && (qword_1C019A1C8 & 0x200000010000000LL) == qword_1C019A1C8
      && ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LOBYTE(v6) = byte_1C019A1D8 - 1;
      McTemplateK0xqx(v6, (unsigned int)&AcquiredSharedUserCritEvent, v7, v8, 0, gullUserCritAcquireToken);
    }
    if ( v8 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
        McTemplateK0xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v7,
          v8,
          1000000 * v8 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, QuadPart);
    }
    result = _InterlockedIncrement64(&gullUserCritAcquireToken);
    *(_QWORD *)(v4 + 16) = result;
  }
  return result;
}
