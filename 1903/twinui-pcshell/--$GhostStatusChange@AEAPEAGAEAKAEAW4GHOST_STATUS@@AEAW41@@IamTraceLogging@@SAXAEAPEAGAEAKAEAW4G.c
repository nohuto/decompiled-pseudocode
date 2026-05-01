/*
 * XREFs of ??$GhostStatusChange@AEAPEAGAEAKAEAW4GHOST_STATUS@@AEAW41@@IamTraceLogging@@SAXAEAPEAGAEAKAEAW4GHOST_STATUS@@2@Z @ 0x180015B34
 * Callers:
 *     ?_HandleGhostStatusChange@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@0@Z @ 0x180015ACC (-_HandleGhostStatusChange@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@0@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

TLG_STATUS __fastcall IamTraceLogging::GhostStatusChange<unsigned short * &,unsigned long &,enum GHOST_STATUS &,enum GHOST_STATUS &>(
        LPCWSTR *a1,
        __int64 a2,
        int *a3,
        int *a4)
{
  TLG_STATUS result; // eax
  int v9; // eax
  TraceLoggingHProvider v10; // r10
  WINBOOL fPending; // [rsp+38h] [rbp-49h] BYREF
  int v12; // [rsp+3Ch] [rbp-45h] BYREF
  int v13; // [rsp+40h] [rbp-41h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-9h] BYREF
  __int64 v17; // [rsp+88h] [rbp+7h]
  int v18; // [rsp+90h] [rbp+Fh]
  int v19; // [rsp+94h] [rbp+13h]
  int *v20; // [rsp+98h] [rbp+17h]
  int v21; // [rsp+A0h] [rbp+1Fh]
  int v22; // [rsp+A4h] [rbp+23h]
  int *v23; // [rsp+A8h] [rbp+27h]
  int v24; // [rsp+B0h] [rbp+2Fh]
  int v25; // [rsp+B4h] [rbp+33h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_180599AE8;
    qword_180599AE8 = &ShellScreenClippingLogging::`vftable';
    qword_180599B00 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180599AE8, qword_180599B00);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_180599AE8);
  }
  result = (int)Context;
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    TlgCreateWsz(&pDesc, *a1);
    v9 = *a3;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v12 = v9;
    v20 = &v12;
    v13 = *a4;
    v23 = &v13;
    v17 = a2;
    v18 = 4;
    v21 = 4;
    v24 = 4;
    return TlgWrite(v10, &unk_1804B9B44, 0LL, 0LL, 6u, &pData);
  }
  return result;
}
