/*
 * XREFs of ??1cancellation_token@Concurrency@@QEAA@XZ @ 0x180293C64
 * Callers:
 *     _Concurrency::task_bool_::task_bool__Windows::Foundation::IAsyncOperation_bool______ptr64__::_1_::dtor$3 @ 0x180291A09 (_Concurrency--task_bool_--task_bool__Windows--Foundation--IAsyncOperation_bool______ea_180291A09.c)
 * Callees:
 *     ?_Release@_RefCounter@details@Concurrency@@QEAAJXZ @ 0x1802968E8 (-_Release@_RefCounter@details@Concurrency@@QEAAJXZ.c)
 */

void __fastcall Concurrency::cancellation_token::~cancellation_token(Concurrency::details::_RefCounter **this)
{
  Concurrency::details::_RefCounter *v2; // rcx

  v2 = *this;
  if ( v2 )
    Concurrency::details::_RefCounter::_Release(v2);
  *this = 0LL;
}
