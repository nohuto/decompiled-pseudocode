/*
 * XREFs of ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A450
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0022AE0 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     NtUserGetDC @ 0x1C0029560 (NtUserGetDC.c)
 *     NtUserReleaseDC @ 0x1C0029DE0 (NtUserReleaseDC.c)
 *     EnterSharedCrit @ 0x1C002A0D0 (EnterSharedCrit.c)
 *     UserEnterUserCritSecShared @ 0x1C002CD90 (UserEnterUserCritSecShared.c)
 *     NtUserGetKeyboardLayout @ 0x1C002ED80 (NtUserGetKeyboardLayout.c)
 *     NtUserMapVirtualKeyEx @ 0x1C002F0E0 (NtUserMapVirtualKeyEx.c)
 *     DrvGetCurrentDpiInfo @ 0x1C003A064 (DrvGetCurrentDpiInfo.c)
 *     GreGetDCPoint @ 0x1C003DB70 (GreGetDCPoint.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C00442A0 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     ReferenceDwmApiPort @ 0x1C0063FD0 (ReferenceDwmApiPort.c)
 *     NtUserVkKeyScanEx @ 0x1C0070AD0 (NtUserVkKeyScanEx.c)
 *     UserReleaseDC @ 0x1C008D650 (UserReleaseDC.c)
 *     UserGetDesktopIdForCurrentThread @ 0x1C008E920 (UserGetDesktopIdForCurrentThread.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C0098A80 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C00A4E80 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00ADCA4 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00BE9A0 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     NtMITSetLastInputRecipient @ 0x1C0115280 (NtMITSetLastInputRecipient.c)
 *     NtUserRemoveInjectionDevice @ 0x1C011BA30 (NtUserRemoveInjectionDevice.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C0121CF0 (W32pLkmdDataCollectionCallback.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C0179560 (-LockShared@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     ?ivOnChildNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C018D860 (-ivOnChildNotification@CBaseInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
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
    if ( dword_1C020FB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v3 = *((unsigned __int8 *)this + 8);
        v6 = &v3;
        v7 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, (LPCGUID)((char *)this + 12), 0LL, 3u, &pData);
        v2 = dword_1C020FB50;
      }
      if ( v2 > 6 )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
        {
          v4 = *((unsigned __int8 *)this + 8);
          v9 = &v4;
          v10 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, (LPCGUID)((char *)this + 12), 0LL, 3u, &v8);
        }
      }
    }
  }
}
