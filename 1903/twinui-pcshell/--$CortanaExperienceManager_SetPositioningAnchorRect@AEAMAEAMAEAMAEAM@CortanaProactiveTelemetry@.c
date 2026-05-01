/*
 * XREFs of ??$CortanaExperienceManager_SetPositioningAnchorRect@AEAMAEAMAEAMAEAM@CortanaProactiveTelemetry@@SAXAEAM000@Z @ 0x1801CE15C
 * Callers:
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x180041A00 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

TLG_STATUS __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_SetPositioningAnchorRect<float &,float &,float &,float &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v9; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-39h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  __int64 v13; // [rsp+68h] [rbp-9h]
  int v14; // [rsp+70h] [rbp-1h]
  int v15; // [rsp+74h] [rbp+3h]
  __int64 v16; // [rsp+78h] [rbp+7h]
  int v17; // [rsp+80h] [rbp+Fh]
  int v18; // [rsp+84h] [rbp+13h]
  __int64 v19; // [rsp+88h] [rbp+17h]
  int v20; // [rsp+90h] [rbp+1Fh]
  int v21; // [rsp+94h] [rbp+23h]
  __int64 v22; // [rsp+98h] [rbp+27h]
  int v23; // [rsp+A0h] [rbp+2Fh]
  int v24; // [rsp+A4h] [rbp+33h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180599CF8;
    qword_180599CF8[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599D10 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CF8, qword_180599D10);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_180599CF8);
  }
  result = (int)Context;
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 5u )
  {
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v14 = 4;
    v17 = 4;
    v20 = 4;
    v23 = 4;
    v13 = a1;
    v16 = a2;
    v19 = a3;
    v22 = a4;
    return TlgWrite(v9, &unk_1804C6FF1, 0LL, 0LL, 6u, &pData);
  }
  return result;
}
