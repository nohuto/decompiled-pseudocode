/*
 * XREFs of ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1C019A6D8
 * Callers:
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C017B728 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?OnInput@PTPEngineTraceProducer@@UEAAJPEAUPTPInput@@@Z @ 0x1C019A8D0 (-OnInput@PTPEngineTraceProducer@@UEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PTPEngineTraceProducer::OnInput(
        PTPEngineTraceProducer *this,
        struct PTPInput *a2,
        struct tagTPAAPSTATE *a3)
{
  unsigned int v3; // r10d
  __int64 v6; // r9
  int v7; // edx
  int v8; // r9d
  _DWORD v10[4]; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  char *v12; // [rsp+60h] [rbp-19h]
  int v13; // [rsp+68h] [rbp-11h]
  int v14; // [rsp+6Ch] [rbp-Dh]
  _DWORD *v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+7Ch] [rbp+3h]
  int *v18; // [rsp+80h] [rbp+7h]
  int v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+8Ch] [rbp+13h]
  struct PTPInput *v21; // [rsp+90h] [rbp+17h]
  int v22; // [rsp+98h] [rbp+1Fh] BYREF
  int v23; // [rsp+9Ch] [rbp+23h]
  _DWORD *v24; // [rsp+A0h] [rbp+27h]
  int v25; // [rsp+A8h] [rbp+2Fh]
  int v26; // [rsp+ACh] [rbp+33h]
  __int64 v27; // [rsp+B0h] [rbp+37h]
  _DWORD v28[2]; // [rsp+B8h] [rbp+3Fh] BYREF

  v3 = dword_1C020F490;
  if ( dword_1C020F490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020F490, 3uLL) )
  {
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v12 = (char *)this + 552;
    v15 = v10;
    v18 = &v22;
    v24 = v28;
    v27 = v6;
    v13 = 8;
    v10[0] = 4;
    v16 = 4;
    v28[1] = 0;
    v28[0] = v6 != 0 ? 0x80 : 0;
    v19 = 2;
    v21 = a2;
    v22 = 56;
    v25 = 2;
    TlgWrite((TraceLoggingHProvider)&dword_1C020F490, &unk_1C01E8A60, 0LL, 0LL, 8u, &pData);
    v3 = dword_1C020F490;
  }
  if ( *((_DWORD *)a2 + 12) && v3 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020F490, 3uLL) )
  {
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v12 = (char *)this + 552;
    v15 = v10;
    v18 = &v22;
    v21 = (struct PTPInput *)((char *)a2 + 56);
    v23 = 0;
    v22 = 96 * v8;
    v13 = 8;
    v10[0] = v7;
    v16 = 4;
    v19 = 2;
    TlgWrite((TraceLoggingHProvider)&dword_1C020F490, &unk_1C01E8BAE, 0LL, 0LL, 6u, &pData);
  }
  return (*(__int64 (__fastcall **)(_QWORD, struct PTPInput *, struct tagTPAAPSTATE *))(**((_QWORD **)this + 3) + 16LL))(
           *((_QWORD *)this + 3),
           a2,
           a3);
}
