/*
 * XREFs of _lambda_be3e5d9dce35d2c8dbfa8485373731d5_::__lambda_be3e5d9dce35d2c8dbfa8485373731d5_ @ 0x1801E3AA4
 * Callers:
 *     _Concurrency::details::_Task_impl_base::_RegisterCancellation_::_1_::dtor$1 @ 0x1801EC719 (_Concurrency--details--_Task_impl_base--_RegisterCancellation_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180186898 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_be3e5d9dce35d2c8dbfa8485373731d5_::__lambda_be3e5d9dce35d2c8dbfa8485373731d5_(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decwref(v1);
}
