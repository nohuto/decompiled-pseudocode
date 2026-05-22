/*
 * XREFs of ?LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z @ 0x180079C8C
 * Callers:
 *     ?OnChordedKeyDelayTimeElapsed@ViewMenuChordedKeyHandler@@AEAAJXZ @ 0x180079E9C (-OnChordedKeyDelayTimeElapsed@ViewMenuChordedKeyHandler@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VControllerProcessorTelemetry@@@details@wil@@QEAAPEAVControllerProcessorTelemetry@@P6AXXZ@Z @ 0x180079FFC (-get@-$static_lazy@VControllerProcessorTelemetry@@@details@wil@@QEAAPEAVControllerProcessorTelem.c)
 */

void __fastcall ControllerProcessorTelemetry::LogGamepadTaskSwitcherInvoked(__int64 a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const struct _TlgProvider_t *v2; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  int *v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+5Ch] [rbp-1Ch]
  int v7; // [rsp+80h] [rbp+8h] BYREF

  v7 = a1;
  v1 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<ControllerProcessorTelemetry>::get(
                                           a1,
                                           lambda_eeadc07ead9c453f2bc1ae732b24d90f_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v1 > 5u )
  {
    if ( TlgKeywordOn(v1, 0x400000000000uLL) )
    {
      v6 = 0;
      v4 = &v7;
      v5 = 4;
      TlgWrite(v2, &unk_18019B2E7, 0LL, 0LL, 3u, &pData);
    }
  }
}
