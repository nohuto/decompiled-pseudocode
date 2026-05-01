/*
 * XREFs of ??1RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180284D08
 * Callers:
 *     ?RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z @ 0x18028947C (-RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z.c)
 *     _ViewManagerBridge::RaiseViewPropertyChanged_::_1_::dtor$0 @ 0x180289891 (_ViewManagerBridge--RaiseViewPropertyChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18000C474 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::~RaiseViewPropertyChanged(
        ViewManagerInteropTraceLogging::RaiseViewPropertyChanged *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
