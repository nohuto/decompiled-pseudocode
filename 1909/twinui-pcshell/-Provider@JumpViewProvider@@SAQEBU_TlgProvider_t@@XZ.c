/*
 * XREFs of ?Provider@JumpViewProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1801BC734
 * Callers:
 *     _lambda_280b45e0809411ada214328da8ed29e6_::operator() @ 0x180090EF0 (_lambda_280b45e0809411ada214328da8ed29e6_--operator().c)
 * Callees:
 *     ?get@?$static_lazy@VJumpViewProvider@@@details@wil@@QEAAPEAVJumpViewProvider@@P6AXXZ@Z @ 0x1801BD9D0 (-get@-$static_lazy@VJumpViewProvider@@@details@wil@@QEAAPEAVJumpViewProvider@@P6AXXZ@Z.c)
 */

const struct _TlgProvider_t *__fastcall JumpViewProvider::Provider(__int64 a1)
{
  return *(const struct _TlgProvider_t **)(wil::details::static_lazy<JumpViewProvider>::get(
                                             a1,
                                             lambda_98d309e3731f67b600e39960160efe32_::_lambda_invoker_cdecl_)
                                         + 8);
}
