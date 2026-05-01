/*
 * XREFs of ??1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180296360
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x180033D5C (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 *     _WindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$0 @ 0x1800C467F (_WindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$0.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9f83fe393cfdaab87baa37a27426f58f___::_scalar_deleting_destructor_ @ 0x180296B70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9f83fe393cfdaab87baa37a27426f58f___--_scala.c)
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x18029BBA4 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 *     _lambda_243107b6e7951c22bf872808b8683140_::__lambda_243107b6e7951c22bf872808b8683140_ @ 0x1802A5B20 (_lambda_243107b6e7951c22bf872808b8683140_--__lambda_243107b6e7951c22bf872808b8683140_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_243107b6e7951c22bf872808b8683140___::_scalar_deleting_destructor_ @ 0x1802A68F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_243107b6e7951c22bf872808b8683140___--_scala.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18000C474 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion(
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
