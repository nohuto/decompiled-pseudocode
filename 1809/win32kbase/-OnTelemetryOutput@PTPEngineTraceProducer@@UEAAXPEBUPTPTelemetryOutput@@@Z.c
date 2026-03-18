/*
 * XREFs of ?OnTelemetryOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01606F0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PTPEngineTraceProducer::OnTelemetryOutput(
        PTPEngineTraceProducer *this,
        const struct PTPTelemetryOutput *a2)
{
  int v4; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  char *v6; // [rsp+60h] [rbp+7h]
  __int64 v7; // [rsp+68h] [rbp+Fh]
  int *v8; // [rsp+70h] [rbp+17h]
  __int64 v9; // [rsp+78h] [rbp+1Fh]
  __int64 *v10; // [rsp+80h] [rbp+27h]
  __int64 v11; // [rsp+88h] [rbp+2Fh]
  const struct PTPTelemetryOutput *v12; // [rsp+90h] [rbp+37h]
  __int64 v13; // [rsp+98h] [rbp+3Fh] BYREF

  if ( dword_1C01C7A38 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 9uLL) )
  {
    v7 = 8LL;
    v6 = (char *)this + 560;
    v8 = &v4;
    v10 = &v13;
    v4 = 1;
    v9 = 4LL;
    v11 = 2LL;
    v12 = a2;
    v13 = 32LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C01A1D8A, 0LL, 0LL, 6u, &pData);
  }
  (*(void (__fastcall **)(_QWORD, const struct PTPTelemetryOutput *))(**((_QWORD **)this + 2) + 8LL))(
    *((_QWORD *)this + 2),
    a2);
}
