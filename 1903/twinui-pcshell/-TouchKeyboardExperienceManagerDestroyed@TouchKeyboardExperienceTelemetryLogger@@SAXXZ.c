/*
 * XREFs of ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1803190A0
 * Callers:
 *     _lambda_a34f77da1c118d252c6ac03565c5dcbb_::operator() @ 0x18009D080 (_lambda_a34f77da1c118d252c6ac03565c5dcbb_--operator().c)
 * Callees:
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x18031B654 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed(__int64 a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const struct _TlgProvider_t *v2; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                                           a1,
                                           lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v1 > 5u )
  {
    if ( TlgKeywordOn(v1, 0x200000000000uLL) )
      TlgWrite(v2, &unk_1804D9480, 0LL, 0LL, 2u, &pData);
  }
}
