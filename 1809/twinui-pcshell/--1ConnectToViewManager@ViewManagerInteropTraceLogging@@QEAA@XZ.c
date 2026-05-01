/*
 * XREFs of ??1ConnectToViewManager@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18022F798
 * Callers:
 *     ?WaitForViewManagerConnection@ViewManagerBridge@@QEAAJXZ @ 0x18023B414 (-WaitForViewManagerConnection@ViewManagerBridge@@QEAAJXZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006FDEC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall ViewManagerInteropTraceLogging::ConnectToViewManager::~ConnectToViewManager(
        ViewManagerInteropTraceLogging::ConnectToViewManager *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::ConnectToViewManager::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
