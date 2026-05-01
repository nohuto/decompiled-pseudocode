/*
 * XREFs of _Concurrency::task_options::task_options_::_1_::dtor$2 @ 0x1801E3A7F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::task_options::task_options_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Concurrency::cancellation_token::~cancellation_token((Concurrency::cancellation_token *)(*(_QWORD *)(a2 + 128) + 24LL));
}
