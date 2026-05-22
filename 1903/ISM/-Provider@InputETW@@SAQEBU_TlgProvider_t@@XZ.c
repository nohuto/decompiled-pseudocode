/*
 * XREFs of ?Provider@InputETW@@SAQEBU_TlgProvider_t@@XZ @ 0x18000A12C
 * Callers:
 *     ?ContinueProcessing@SystemButtonEventController@InputETW@@SAX_KK_N1@Z @ 0x18002FC0C (-ContinueProcessing@SystemButtonEventController@InputETW@@SAX_KK_N1@Z.c)
 *     ?ButtonEvent@SystemButtonProcessor@InputETW@@SAXK_N@Z @ 0x180035F14 (-ButtonEvent@SystemButtonProcessor@InputETW@@SAXK_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x1800147C8 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 */

const struct _TlgProvider_t *__fastcall InputETW::Provider(__int64 a1)
{
  return *(const struct _TlgProvider_t **)(wil::details::static_lazy<InputETW>::get(
                                             a1,
                                             lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                                         + 8);
}
