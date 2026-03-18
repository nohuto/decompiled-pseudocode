/*
 * XREFs of AcpiDiagTraceAmliWatchdogTimeout @ 0x1C0049418
 * Callers:
 *     AmliWatchdogTimeoutAction @ 0x1C0062BC4 (AmliWatchdogTimeoutAction.c)
 * Callees:
 *     _TlgWrite @ 0x1C001D690 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C001D730 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceAmliWatchdogTimeout(__int64 a1, ULONGLONG a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  const GUID *v4; // r9
  int v5; // [rsp+30h] [rbp-29h] BYREF
  int v6; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  _DWORD *v8; // [rsp+60h] [rbp+7h]
  __int64 v9; // [rsp+68h] [rbp+Fh]
  __int64 v10; // [rsp+70h] [rbp+17h]
  _DWORD v11[2]; // [rsp+78h] [rbp+1Fh] BYREF
  int *v12; // [rsp+80h] [rbp+27h]
  __int64 v13; // [rsp+88h] [rbp+2Fh]
  int *v14; // [rsp+90h] [rbp+37h]
  __int64 v15; // [rsp+98h] [rbp+3Fh]

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, a2) )
    {
      v4 = (const GUID *)(v3 - *(_QWORD *)(v2 + 456));
      v6 = AmliWatchdogTimeout;
      v8 = v11;
      v10 = *(_QWORD *)(v2 + 448);
      v11[0] = *(unsigned __int16 *)(v2 + 440);
      v12 = &v5;
      v14 = &v6;
      v5 = (unsigned __int64)v4 / 0x2710;
      v9 = 2LL;
      v11[1] = 0;
      v13 = 4LL;
      v15 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0072361, (LPCGUID)v2, v4, 6u, &pData);
    }
  }
}
