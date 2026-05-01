/*
 * XREFs of ??1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802401D8
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x18001F15C (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 *     _WindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$0 @ 0x1800ABCE0 (_WindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$0.c)
 *     ??_E?$CTaskWrapper@V_lambda_414fd3367f2a1081b25736157ddb3c4d_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180240990 (--_E-$CTaskWrapper@V_lambda_414fd3367f2a1081b25736157ddb3c4d_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x1802459F4 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 *     _lambda_6e3ab6272f90947ba1cd229626024096_::__lambda_6e3ab6272f90947ba1cd229626024096_ @ 0x18024F2BC (_lambda_6e3ab6272f90947ba1cd229626024096_--__lambda_6e3ab6272f90947ba1cd229626024096_.c)
 *     ??_E?$CTaskWrapper@V_lambda_6e3ab6272f90947ba1cd229626024096_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18024FDF0 (--_E-$CTaskWrapper@V_lambda_6e3ab6272f90947ba1cd229626024096_@@@ComTaskPool@Internal@Windows@@UE.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006FDEC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion(
        ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
