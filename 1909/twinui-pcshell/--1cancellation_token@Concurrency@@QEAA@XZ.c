/*
 * XREFs of ??1cancellation_token@Concurrency@@QEAA@XZ @ 0x1801E4134
 * Callers:
 *     _Concurrency::task_long_::task_long___lambda_921a5a526b2b3e27a0030faf56813293____::_1_::dtor$2 @ 0x1801E065B (_Concurrency--task_long_--task_long___lambda_921a5a526b2b3e27a0030faf56813293____--_1_--dtor$2.c)
 *     _Concurrency::task_options::task_options_::_1_::dtor$2 @ 0x1801E3A7F (_Concurrency--task_options--task_options_--_1_--dtor$2.c)
 *     _Concurrency::task_bool_::task_bool__Windows::Foundation::IAsyncOperation_bool_____::_1_::dtor$3 @ 0x18030A5B9 (_Concurrency--task_bool_--task_bool__Windows--Foundation--IAsyncOperation_bool_____--_1_--dtor$3.c)
 * Callees:
 *     ?_Release@_RefCounter@details@Concurrency@@QEAAJXZ @ 0x1801EC72C (-_Release@_RefCounter@details@Concurrency@@QEAAJXZ.c)
 */

void __fastcall Concurrency::cancellation_token::~cancellation_token(Concurrency::details::_RefCounter **this)
{
  Concurrency::details::_RefCounter *v2; // rcx

  v2 = *this;
  if ( v2 )
    Concurrency::details::_RefCounter::_Release(v2);
  *this = 0LL;
}
