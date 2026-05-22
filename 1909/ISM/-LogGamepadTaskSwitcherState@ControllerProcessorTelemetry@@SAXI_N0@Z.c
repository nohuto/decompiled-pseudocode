/*
 * XREFs of ?LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z @ 0x180079D24
 * Callers:
 *     ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GamepadButtons@Input@Gaming@Windows@@PEA_N@Z @ 0x18007973C (-ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GamepadButtons@Input@Gaming@Windows.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VControllerProcessorTelemetry@@@details@wil@@QEAAPEAVControllerProcessorTelemetry@@P6AXXZ@Z @ 0x180079FFC (-get@-$static_lazy@VControllerProcessorTelemetry@@@details@wil@@QEAAPEAVControllerProcessorTelem.c)
 */

void __fastcall ControllerProcessorTelemetry::LogGamepadTaskSwitcherState(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  int v7; // [rsp+38h] [rbp-19h] BYREF
  int v8; // [rsp+3Ch] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  int *v10; // [rsp+68h] [rbp+17h]
  __int64 v11; // [rsp+70h] [rbp+1Fh]
  int *v12; // [rsp+78h] [rbp+27h]
  __int64 v13; // [rsp+80h] [rbp+2Fh]
  int *v14; // [rsp+88h] [rbp+37h]
  __int64 v15; // [rsp+90h] [rbp+3Fh]
  int v16; // [rsp+B8h] [rbp+67h] BYREF

  v16 = a1;
  v5 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<ControllerProcessorTelemetry>::get(
                                           a1,
                                           lambda_eeadc07ead9c453f2bc1ae732b24d90f_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v5 > 5u )
  {
    if ( TlgKeywordOn(v5, 0x400000000000uLL) )
    {
      v11 = 4LL;
      v10 = &v16;
      v7 = a2;
      v12 = &v7;
      v8 = a3;
      v14 = &v8;
      v13 = 4LL;
      v15 = 4LL;
      TlgWrite(v6, &unk_18019B295, 0LL, 0LL, 5u, &pData);
    }
  }
}
