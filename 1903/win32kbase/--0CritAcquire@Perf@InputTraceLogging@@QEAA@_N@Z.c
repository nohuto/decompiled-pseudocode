/*
 * XREFs of ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C002C6AC
 * Callers:
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00ADCA4 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00BE9A0 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     NtUserRemoveInjectionDevice @ 0x1C011BA30 (NtUserRemoveInjectionDevice.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

InputTraceLogging::Perf::CritAcquire *__fastcall InputTraceLogging::Perf::CritAcquire::CritAcquire(
        InputTraceLogging::Perf::CritAcquire *this,
        char a2)
{
  GUID *v2; // rdi
  __int64 CurrentThreadWin32Thread; // rax
  int v6; // eax
  int v7; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v2 = (GUID *)((char *)this + 12);
  *(_QWORD *)((char *)this + 12) = 0LL;
  *(_QWORD *)((char *)this + 20) = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    *((_BYTE *)this + 8) = a2;
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
    *(_QWORD *)this = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread
      && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(*(_QWORD *)this + 48LL)) )
    {
      EtwActivityIdControl(3u, v2);
      if ( dword_1C020FB50 > 6u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        v6 = *((unsigned __int8 *)this + 8);
        v11 = 0;
        v7 = v6;
        v9 = &v7;
        v10 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, v2, 0LL, 3u, &pData);
      }
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
  return this;
}
