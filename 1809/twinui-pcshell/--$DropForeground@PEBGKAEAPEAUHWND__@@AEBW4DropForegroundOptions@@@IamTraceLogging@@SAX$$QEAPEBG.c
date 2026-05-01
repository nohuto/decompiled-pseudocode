/*
 * XREFs of ??$DropForeground@PEBGKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@IamTraceLogging@@SAX$$QEAPEBG$$QEAKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@Z @ 0x180125C10
 * Callers:
 *     _lambda_6bdb0a767824ae94d9b9ef25c3406932_::operator() @ 0x1801271E0 (_lambda_6bdb0a767824ae94d9b9ef25c3406932_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

TLG_STATUS __fastcall IamTraceLogging::DropForeground<unsigned short const *,unsigned long,HWND__ * &,enum DropForegroundOptions const &>(
        LPCWSTR *a1,
        __int64 a2,
        __int64 *a3,
        int *a4)
{
  TLG_STATUS result; // eax
  __int64 v9; // rax
  TraceLoggingHProvider v10; // r10
  WINBOOL fPending; // [rsp+38h] [rbp-49h] BYREF
  int v12; // [rsp+3Ch] [rbp-45h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-41h] BYREF
  __int64 v14; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-9h] BYREF
  __int64 v17; // [rsp+88h] [rbp+7h]
  int v18; // [rsp+90h] [rbp+Fh]
  int v19; // [rsp+94h] [rbp+13h]
  __int64 *v20; // [rsp+98h] [rbp+17h]
  int v21; // [rsp+A0h] [rbp+1Fh]
  int v22; // [rsp+A4h] [rbp+23h]
  int *v23; // [rsp+A8h] [rbp+27h]
  int v24; // [rsp+B0h] [rbp+2Fh]
  int v25; // [rsp+B4h] [rbp+33h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_18050F7D0;
    qword_18050F7D0[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F7E8 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F7D0, qword_18050F7E8);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18050F7D0);
  }
  result = (int)Context;
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    TlgCreateWsz(&pDesc, *a1);
    v9 = *a3;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v14 = v9;
    v20 = &v14;
    v12 = *a4;
    v23 = &v12;
    v17 = a2;
    v18 = 4;
    v21 = 8;
    v24 = 4;
    return TlgWrite(v10, &unk_18044AD95, 0LL, 0LL, 6u, &pData);
  }
  return result;
}
