/*
 * XREFs of ?ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18031B0AC
 * Callers:
 *     wil::details::ScopeExitFn__lambda_306a7db0a684a24cb5ae62124f6fc92c___::_ScopeExitFn__lambda_306a7db0a684a24cb5ae62124f6fc92c___ @ 0x18009CA30 (wil--details--ScopeExitFn__lambda_306a7db0a684a24cb5ae62124f6fc92c___--_ScopeExitFn__lambda_306a.c)
 *     _lambda_a34f77da1c118d252c6ac03565c5dcbb_::operator() @ 0x18009D080 (_lambda_a34f77da1c118d252c6ac03565c5dcbb_--operator().c)
 * Callees:
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x18031B654 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::ViewCreationTaskFailed(__int64 a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const struct _TlgProvider_t *v2; // rcx
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v1 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                                           a1,
                                           lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v1 > 5u )
  {
    if ( TlgKeywordOn(v1, 0x400000000000uLL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = 0x1000000LL;
      v6 = 8;
      TlgWrite(v2, &unk_1804D94B7, 0LL, 0LL, 3u, &pData);
    }
  }
}
