/*
 * XREFs of ??$Undocking_LowCostDiskLimit@AEA_K@CortanaUndocking_IsLowCostDevice@CortanaProactiveTelemetry@@QEAAXAEA_K@Z @ 0x1801C29B8
 * Callers:
 *     ?IsLowCostDevice@CortanaStoreAppHelper@@YAJV?$ComPtr@UIOneSettingsPayload@OneSettings@Flighting@Internal@Windows@@@WRL@Microsoft@@PEAE@Z @ 0x1801C6DBC (-IsLowCostDevice@CortanaStoreAppHelper@@YAJV-$ComPtr@UIOneSettingsPayload@OneSettings@Flighting@.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

BOOLEAN __fastcall CortanaProactiveTelemetry::CortanaUndocking_IsLowCostDevice::Undocking_LowCostDiskLimit<unsigned __int64 &>(
        __int64 a1,
        __int64 a2)
{
  BOOLEAN result; // al
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-19h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-11h] BYREF
  __int64 v9; // [rsp+48h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+7h] BYREF
  __int64 v11; // [rsp+78h] [rbp+27h]
  int v12; // [rsp+80h] [rbp+2Fh]
  int v13; // [rsp+84h] [rbp+33h]
  __int64 *v14; // [rsp+88h] [rbp+37h]
  int v15; // [rsp+90h] [rbp+3Fh]
  int v16; // [rsp+94h] [rbp+43h]

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
  result = (unsigned __int8)Context;
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    result = TlgKeywordOn(v5, 0x400000000000uLL);
    if ( result )
    {
      v13 = 0;
      v16 = 0;
      v14 = &v9;
      v11 = a2;
      v12 = 8;
      v9 = 0x2000000LL;
      v15 = 8;
      return TlgWrite(v6, &unk_1804C5910, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
    }
  }
  return result;
}
