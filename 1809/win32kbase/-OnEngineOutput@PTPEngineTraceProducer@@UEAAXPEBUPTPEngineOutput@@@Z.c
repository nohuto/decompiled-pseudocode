/*
 * XREFs of ?OnEngineOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C0160210
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PTPEngineTraceProducer::OnEngineOutput(PTPEngineTraceProducer *this, const struct PTPEngineOutput *a2)
{
  unsigned int v2; // r10d
  int v5; // r9d
  _DWORD v6[4]; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  char *v8; // [rsp+60h] [rbp+7h]
  int v9; // [rsp+68h] [rbp+Fh]
  int v10; // [rsp+6Ch] [rbp+13h]
  _DWORD *v11; // [rsp+70h] [rbp+17h]
  int v12; // [rsp+78h] [rbp+1Fh]
  int v13; // [rsp+7Ch] [rbp+23h]
  int *v14; // [rsp+80h] [rbp+27h]
  int v15; // [rsp+88h] [rbp+2Fh]
  int v16; // [rsp+8Ch] [rbp+33h]
  const struct PTPEngineOutput *v17; // [rsp+90h] [rbp+37h]
  int v18; // [rsp+98h] [rbp+3Fh] BYREF
  int v19; // [rsp+9Ch] [rbp+43h]

  v2 = dword_1C01C7A38;
  if ( dword_1C01C7A38 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 5uLL) )
  {
    v10 = 0;
    v13 = 0;
    v16 = 0;
    v19 = 0;
    v8 = (char *)this + 560;
    v11 = v6;
    v14 = &v18;
    v9 = 8;
    v6[0] = 1;
    v12 = 4;
    v15 = 2;
    v17 = a2;
    v18 = 24;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C01A1ED7, 0LL, 0LL, 6u, &pData);
    v2 = dword_1C01C7A38;
  }
  if ( *((_DWORD *)a2 + 5) && v2 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 5uLL) )
  {
    v10 = 0;
    v13 = 0;
    v16 = 0;
    v8 = (char *)this + 560;
    v11 = v6;
    v14 = &v18;
    v17 = (const struct PTPEngineOutput *)((char *)a2 + 24);
    v19 = 0;
    v18 = 96 * v5;
    v9 = 8;
    v6[0] = 1;
    v12 = 4;
    v15 = 2;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C01A1E95, 0LL, 0LL, 6u, &pData);
  }
  (***((void (__fastcall ****)(_QWORD, const struct PTPEngineOutput *))this + 2))(*((_QWORD *)this + 2), a2);
}
