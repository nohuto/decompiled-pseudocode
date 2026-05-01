/*
 * XREFs of ??$OnPriorityBoostProcessed@AEAJAEAI@ExperienceHostLoggingTelemetry@@SAXAEAJAEAI@Z @ 0x180016D64
 * Callers:
 *     ?BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ @ 0x180016DFC (-BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

TLG_STATUS __fastcall ExperienceHostLoggingTelemetry::OnPriorityBoostProcessed<long &,unsigned int &>(
        int *a1,
        __int64 a2)
{
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v5; // rcx
  int v6; // eax
  WINBOOL fPending; // [rsp+38h] [rbp-9h] BYREF
  int v8; // [rsp+3Ch] [rbp-5h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  int *v11; // [rsp+68h] [rbp+27h]
  int v12; // [rsp+70h] [rbp+2Fh]
  int v13; // [rsp+74h] [rbp+33h]
  __int64 v14; // [rsp+78h] [rbp+37h]
  int v15; // [rsp+80h] [rbp+3Fh]
  int v16; // [rsp+84h] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ExperienceHostLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805C21D8;
    qword_1805C21D8[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C21F0 = (struct _TlgProvider_t *)&`ExperienceHostLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_85ce8dc69fb31a5df73cef2b402bbb84_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C21D8, qword_1805C21F0);
    InitOnceComplete(&`ExperienceHostLogging::Instance'::`2'::wrapper, 0, qword_1805C21D8);
  }
  result = (int)Context;
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    v6 = *a1;
    v13 = 0;
    v16 = 0;
    v8 = v6;
    v11 = &v8;
    v12 = 4;
    v14 = a2;
    v15 = 4;
    return TlgWrite(v5, &unk_1804EAC71, 0LL, 0LL, 4u, &pData);
  }
  return result;
}
