/*
 * XREFs of ??1CloseUnRecoveredViews@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802118B0
 * Callers:
 *     _ViewEventDispatcher::PerformDelayedInitialization_::_1_::dtor$0 @ 0x1802166F3 (_ViewEventDispatcher--PerformDelayedInitialization_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006FDEC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::CloseUnRecoveredViews::~CloseUnRecoveredViews(
        ViewManagerInteropTraceLogging::CloseUnRecoveredViews *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::CloseUnRecoveredViews::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
