/*
 * XREFs of ?HandleViewCreationFailure_@CAppManagerTelemetry@@QEAAXPEBG_KJJ@Z @ 0x1800EF368
 * Callers:
 *     ??$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z @ 0x1800E8E58 (--$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAppManagerTelemetry::HandleViewCreationFailure_(
        CAppManagerTelemetry *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4,
        int a5)
{
  TraceLoggingHProvider v7; // r10
  WINBOOL fPending; // [rsp+38h] [rbp-51h] BYREF
  int v9; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v10; // [rsp+40h] [rbp-49h] BYREF
  LPVOID Context[2]; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-11h] BYREF
  __int64 *v14; // [rsp+88h] [rbp-1h]
  int v15; // [rsp+90h] [rbp+7h]
  int v16; // [rsp+94h] [rbp+Bh]
  int *v17; // [rsp+98h] [rbp+Fh]
  int v18; // [rsp+A0h] [rbp+17h]
  int v19; // [rsp+A4h] [rbp+1Bh]
  int *v20; // [rsp+A8h] [rbp+1Fh]
  int v21; // [rsp+B0h] [rbp+27h]
  int v22; // [rsp+B4h] [rbp+2Bh]
  __int64 v23; // [rsp+F8h] [rbp+6Fh] BYREF

  v23 = a3;
  Context[1] = (LPVOID)-2LL;
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
  {
    Context[0] = qword_18050F7D0;
    qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
  }
  if ( **((_DWORD **)Context[0] + 1) > 5u )
  {
    if ( TlgKeywordOn(*((TraceLoggingHProvider *)Context[0] + 1), 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, a2);
      v14 = &v23;
      v15 = 8;
      v16 = 0;
      v9 = a4;
      v17 = &v9;
      v18 = 4;
      v19 = 0;
      v10 = a5;
      v20 = &v10;
      v21 = 4;
      v22 = 0;
      TlgWrite(v7, &unk_18044700B, 0LL, 0LL, 6u, &pData);
    }
  }
}
