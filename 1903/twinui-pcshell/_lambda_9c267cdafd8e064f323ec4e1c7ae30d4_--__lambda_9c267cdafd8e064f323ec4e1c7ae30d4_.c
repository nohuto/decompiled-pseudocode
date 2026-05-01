/*
 * XREFs of _lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::__lambda_9c267cdafd8e064f323ec4e1c7ae30d4_ @ 0x1802915A4
 * Callers:
 *     _ConnectedStandbyHelper::Initialize_::_1_::dtor$1 @ 0x180291BDF (_ConnectedStandbyHelper--Initialize_--_1_--dtor$1.c)
 *     _Windows::Foundation::AsyncOperationCompletedHandler_bool_::AsyncOperationCompletedHandler_bool___lambda_9c267cdafd8e064f323ec4e1c7ae30d4____::_1_::dtor$0 @ 0x1802EB38A (_Windows--Foundation--AsyncOperationCompletedHandler_bool_--AsyncOperationCompletedHandler_bool_.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::__lambda_9c267cdafd8e064f323ec4e1c7ae30d4_(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
