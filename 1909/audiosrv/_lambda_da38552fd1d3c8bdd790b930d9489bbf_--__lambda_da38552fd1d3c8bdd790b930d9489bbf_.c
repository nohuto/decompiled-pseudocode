/*
 * XREFs of _lambda_da38552fd1d3c8bdd790b930d9489bbf_::__lambda_da38552fd1d3c8bdd790b930d9489bbf_ @ 0x1800F50A8
 * Callers:
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_cd50edfaa47939fe8e94966dfed8d892____::_1_::dtor$0 @ 0x1800F4D93 (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_1800F4D93.c)
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_da38552fd1d3c8bdd790b930d9489bbf____::_1_::dtor$0 @ 0x1800F4E8B (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_1800F4E8B.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_da38552fd1d3c8bdd790b930d9489bbf_::__lambda_da38552fd1d3c8bdd790b930d9489bbf_(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
