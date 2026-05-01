/*
 * XREFs of ??1OnRemoved@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180284BD4
 * Callers:
 *     _ViewManagerBridge::OnRemoved_::_1_::dtor$1 @ 0x18028861C (_ViewManagerBridge--OnRemoved_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18000C474 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::OnRemoved::~OnRemoved(ViewManagerInteropTraceLogging::OnRemoved *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnRemoved::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
