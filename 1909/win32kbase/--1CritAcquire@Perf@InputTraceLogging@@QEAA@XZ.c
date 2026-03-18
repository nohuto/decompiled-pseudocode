/*
 * XREFs of ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002B060
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0023000 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     NtUserGetDC @ 0x1C002A0F0 (NtUserGetDC.c)
 *     NtUserReleaseDC @ 0x1C002A9F0 (NtUserReleaseDC.c)
 *     EnterSharedCrit @ 0x1C002ACE0 (EnterSharedCrit.c)
 *     UserEnterUserCritSecShared @ 0x1C002C760 (UserEnterUserCritSecShared.c)
 *     NtUserGetKeyboardLayout @ 0x1C002DB30 (NtUserGetKeyboardLayout.c)
 *     NtUserMapVirtualKeyEx @ 0x1C002DEE0 (NtUserMapVirtualKeyEx.c)
 *     ReferenceDwmApiPort @ 0x1C003EA50 (ReferenceDwmApiPort.c)
 *     GreGetDCPoint @ 0x1C003FB00 (GreGetDCPoint.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0040680 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     DrvGetCurrentDpiInfo @ 0x1C004FB04 (DrvGetCurrentDpiInfo.c)
 *     NtUserVkKeyScanEx @ 0x1C0074560 (NtUserVkKeyScanEx.c)
 *     UserReleaseDC @ 0x1C0089370 (UserReleaseDC.c)
 *     UserGetDesktopIdForCurrentThread @ 0x1C008A470 (UserGetDesktopIdForCurrentThread.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00970E0 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C00A3D70 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00AB1F4 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00BC484 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     NtMITSetLastInputRecipient @ 0x1C0112910 (NtMITSetLastInputRecipient.c)
 *     NtUserRemoveInjectionDevice @ 0x1C01190C0 (NtUserRemoveInjectionDevice.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C011F380 (W32pLkmdDataCollectionCallback.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C0177370 (-LockShared@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     ?ivOnChildNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C018B670 (-ivOnChildNotification@CBaseInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Perf::CritAcquire::~CritAcquire(InputTraceLogging::Perf::CritAcquire *this)
{
  unsigned int v2; // r9d
  int v3; // [rsp+30h] [rbp-78h] BYREF
  int v4; // [rsp+34h] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-70h] BYREF
  int *v6; // [rsp+58h] [rbp-50h]
  __int64 v7; // [rsp+60h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR v8; // [rsp+68h] [rbp-40h] BYREF
  int *v9; // [rsp+88h] [rbp-20h]
  __int64 v10; // [rsp+90h] [rbp-18h]

  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
    && *(_QWORD *)this
    && (*(_DWORD *)(*(_QWORD *)this + 48LL) || *(int *)(*(_QWORD *)this + 24LL) > 0) )
  {
    *(_DWORD *)(*(_QWORD *)this + 44LL) = 1;
    *(_OWORD *)(*(_QWORD *)this + 28LL) = *(_OWORD *)((char *)this + 12);
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v3 = *((unsigned __int8 *)this + 8);
        v6 = &v3;
        v7 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, (LPCGUID)((char *)this + 12), 0LL, 3u, &pData);
        v2 = dword_1C020CB50;
      }
      if ( v2 > 6 )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v4 = *((unsigned __int8 *)this + 8);
          v9 = &v4;
          v10 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, (LPCGUID)((char *)this + 12), 0LL, 3u, &v8);
        }
      }
    }
  }
}
