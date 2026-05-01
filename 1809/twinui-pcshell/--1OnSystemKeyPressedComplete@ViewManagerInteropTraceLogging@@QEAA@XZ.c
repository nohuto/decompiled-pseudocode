/*
 * XREFs of ??1OnSystemKeyPressedComplete@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18022FA00
 * Callers:
 *     _ViewManagerBridge::OnSystemKeyPressedComplete_::_1_::dtor$0 @ 0x180233FE1 (_ViewManagerBridge--OnSystemKeyPressedComplete_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006FDEC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete::~OnSystemKeyPressedComplete(
        ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
