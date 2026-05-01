/*
 * XREFs of _Concurrency::details::_Task_impl_base::_Wait_::_1_::dtor$9 @ 0x1802EF238
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::_Task_impl_base::_Wait_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  std::unique_lock<std::mutex>::~unique_lock<std::mutex>(a2 + 72);
}
