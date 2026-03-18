/*
 * XREFs of NtUserEnumDisplayDevices @ 0x1C004E670
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C0029F60 (EtwTraceReleaseUserCrit.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     DrvEnumDisplayDevices @ 0x1C004E770 (DrvEnumDisplayDevices.c)
 *     UpdateGraphicsDeviceList @ 0x1C004F09C (UpdateGraphicsDeviceList.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     UserSessionSwitchEnterCrit @ 0x1C008B050 (UserSessionSwitchEnterCrit.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserEnumDisplayDevices(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // edi
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // eax
  int v20; // [rsp+30h] [rbp-98h] BYREF
  __int128 v21; // [rsp+38h] [rbp-90h]
  __int128 v22; // [rsp+48h] [rbp-80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR v24; // [rsp+78h] [rbp-50h] BYREF

  UserSessionSwitchEnterCrit();
  if ( gbVideoInitialized )
  {
    UpdateGraphicsDeviceList(&v20);
    if ( v20 )
    {
      if ( (_DWORD)gdwInAtomicOperation )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
        v10 = (unsigned int)gdwInAtomicOperation;
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
        CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v10);
        v15 = CurrentThreadWin32Thread;
        if ( CurrentThreadWin32Thread )
        {
          v16 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
          if ( (*(_DWORD *)(v15 + 44) || *(_DWORD *)(v15 + 48) || v16 > 0)
            && dword_1C020FB50 > 6u
            && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
          {
            TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3461, (LPCGUID)(v15 + 28), 0LL, 2u, &pData);
          }
          *(_DWORD *)(v15 + 44) = 0;
          v21 = 0uLL;
          *(_OWORD *)(v15 + 28) = 0uLL;
        }
      }
      EtwTraceReleaseUserCrit();
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      UserSessionSwitchEnterCrit();
    }
    v12 = DrvEnumDisplayDevices(a1, a4, 1);
  }
  else
  {
    v12 = -1073741823;
  }
  if ( (_DWORD)gdwInAtomicOperation )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
    v7 = (unsigned int)gdwInAtomicOperation;
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
    v17 = PsGetCurrentThreadWin32Thread(v7);
    v18 = v17;
    if ( v17 )
    {
      v19 = *(_DWORD *)(v17 + 24);
      if ( (*(_DWORD *)(v18 + 44) || *(_DWORD *)(v18 + 48) || v19 > 0)
        && dword_1C020FB50 > 6u
        && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
      {
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3461, (LPCGUID)(v18 + 28), 0LL, 2u, &v24);
      }
      *(_DWORD *)(v18 + 44) = 0;
      v22 = 0uLL;
      *(_OWORD *)(v18 + 28) = 0uLL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v12;
}
