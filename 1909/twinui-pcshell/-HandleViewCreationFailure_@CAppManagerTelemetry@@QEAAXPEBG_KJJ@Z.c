/*
 * XREFs of ?HandleViewCreationFailure_@CAppManagerTelemetry@@QEAAXPEBG_KJJ@Z @ 0x1801329D8
 * Callers:
 *     ??$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z @ 0x18012A4F4 (--$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

void __fastcall CAppManagerTelemetry::HandleViewCreationFailure_(
        CAppManagerTelemetry *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4,
        int a5)
{
  TraceLoggingHProvider v7; // r10
  WINBOOL fPending; // [rsp+30h] [rbp-51h] BYREF
  int v9; // [rsp+34h] [rbp-4Dh] BYREF
  int v10; // [rsp+38h] [rbp-49h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-11h] BYREF
  __int64 *v14; // [rsp+80h] [rbp-1h]
  int v15; // [rsp+88h] [rbp+7h]
  int v16; // [rsp+8Ch] [rbp+Bh]
  int *v17; // [rsp+90h] [rbp+Fh]
  int v18; // [rsp+98h] [rbp+17h]
  int v19; // [rsp+9Ch] [rbp+1Bh]
  int *v20; // [rsp+A0h] [rbp+1Fh]
  int v21; // [rsp+A8h] [rbp+27h]
  int v22; // [rsp+ACh] [rbp+2Bh]
  __int64 v23; // [rsp+F0h] [rbp+6Fh] BYREF

  v23 = a3;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1805C1F08;
    qword_1805C1F08 = &ShellScreenClippingLogging::`vftable';
    qword_1805C1F20 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805C1F08, qword_1805C1F20);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1805C1F08);
  }
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    if ( TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, a2);
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v17 = &v9;
      v10 = a5;
      v14 = &v23;
      v20 = &v10;
      v15 = 8;
      v9 = a4;
      v18 = 4;
      v21 = 4;
      TlgWrite(v7, &unk_1804DC4D6, 0LL, 0LL, 6u, &pData);
    }
  }
}
