/*
 * XREFs of ??1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180240204
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x18001F15C (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 *     _WindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$3 @ 0x1800ABD24 (_WindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$3.c)
 *     ??_G?$CTaskWrapper@V_lambda_946b47fcad2e62ff0f8d349904161392_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1802409E0 (--_G-$CTaskWrapper@V_lambda_946b47fcad2e62ff0f8d349904161392_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x1802459F4 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 *     _lambda_17e5788b5f1f3671ca96ac0fccb032fc_::__lambda_17e5788b5f1f3671ca96ac0fccb032fc_ @ 0x18024F294 (_lambda_17e5788b5f1f3671ca96ac0fccb032fc_--__lambda_17e5788b5f1f3671ca96ac0fccb032fc_.c)
 *     ??_E?$CTaskWrapper@V_lambda_17e5788b5f1f3671ca96ac0fccb032fc_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18024FDA0 (--_E-$CTaskWrapper@V_lambda_17e5788b5f1f3671ca96ac0fccb032fc_@@@ComTaskPool@Internal@Windows@@UE.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006FDEC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion(
        ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
