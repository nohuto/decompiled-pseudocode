/*
 * XREFs of ??1PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18023B658
 * Callers:
 *     __lambda_a4746a4e0492827f06ef7c88b1531c20_::operator()_::_1_::dtor$0 @ 0x18023B915 (__lambda_a4746a4e0492827f06ef7c88b1531c20_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006FDEC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::PdcNotificationCallback::~PdcNotificationCallback(
        ViewManagerInteropTraceLogging::PdcNotificationCallback *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::PdcNotificationCallback::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
