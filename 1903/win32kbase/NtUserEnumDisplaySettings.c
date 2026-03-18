/*
 * XREFs of NtUserEnumDisplaySettings @ 0x1C0093ED0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C0029F60 (EtwTraceReleaseUserCrit.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     DrvEnumDisplaySettings @ 0x1C003A320 (DrvEnumDisplaySettings.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     UserSessionSwitchEnterCrit @ 0x1C008B050 (UserSessionSwitchEnterCrit.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserEnumDisplaySettings(struct _UNICODE_STRING *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // edi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v14; // rbx
  int v15; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF

  UserSessionSwitchEnterCrit((__int64)a1);
  if ( gbVideoInitialized )
    v11 = DrvEnumDisplaySettings(a1, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 96) + 232LL), a2, a3, a4);
  else
    v11 = -1073741823;
  if ( (_DWORD)gdwInAtomicOperation )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
    v9 = (unsigned int)gdwInAtomicOperation;
    if ( (_DWORD)gdwInAtomicOperation )
    {
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v9);
    v14 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v15 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v14 + 44) || *(_DWORD *)(v14 + 48) || v15 > 0)
        && dword_1C020FB50 > 6u
        && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3461, (LPCGUID)(v14 + 28), 0LL, 2u, &pData);
      }
      *(_DWORD *)(v14 + 44) = 0;
      *(_OWORD *)(v14 + 28) = 0uLL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v11;
}
