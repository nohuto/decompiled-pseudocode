/*
 * XREFs of ??1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18029638C
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x180033D5C (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 *     _WindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$3 @ 0x1800C46A3 (_WindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$3.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_946b47fcad2e62ff0f8d349904161392___::_scalar_deleting_destructor_ @ 0x180296B20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_946b47fcad2e62ff0f8d349904161392___--_scala.c)
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x18029BBA4 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 *     _lambda_b7a65526da0b0c1d1f69877e76cb9ec5_::__lambda_b7a65526da0b0c1d1f69877e76cb9ec5_ @ 0x1802A5B48 (_lambda_b7a65526da0b0c1d1f69877e76cb9ec5_--__lambda_b7a65526da0b0c1d1f69877e76cb9ec5_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b7a65526da0b0c1d1f69877e76cb9ec5___::_scalar_deleting_destructor_ @ 0x1802A6940 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b7a65526da0b0c1d1f69877e76cb9ec5___--_scala.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18000C474 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion(
        ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
