/*
 * XREFs of ?OnEvent@PTPEngineTraceProducer@@UEAAJPEAUPTPEngineEvent@@@Z @ 0x1C0198330
 * Callers:
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C017CEF0 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PTPEngineTraceProducer::OnEvent(PTPEngineTraceProducer *this, struct PTPEngineEvent *a2)
{
  int v5; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  char *v7; // [rsp+60h] [rbp+7h]
  __int64 v8; // [rsp+68h] [rbp+Fh]
  int *v9; // [rsp+70h] [rbp+17h]
  __int64 v10; // [rsp+78h] [rbp+1Fh]
  __int64 *v11; // [rsp+80h] [rbp+27h]
  __int64 v12; // [rsp+88h] [rbp+2Fh]
  struct PTPEngineEvent *v13; // [rsp+90h] [rbp+37h]
  __int64 v14; // [rsp+98h] [rbp+3Fh] BYREF

  if ( dword_1C020C490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 3uLL) )
  {
    v8 = 8LL;
    v7 = (char *)this + 552;
    v9 = &v5;
    v11 = &v14;
    v5 = 1;
    v10 = 4LL;
    v12 = 2LL;
    v13 = a2;
    v14 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E6CAF, 0LL, 0LL, 6u, &pData);
  }
  return (*(__int64 (__fastcall **)(_QWORD, struct PTPEngineEvent *))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           a2);
}
