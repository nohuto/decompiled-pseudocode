/*
 * XREFs of ??1ConnectToViewManager@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x180284A74
 * Callers:
 *     ?WaitForViewManagerConnection@ViewManagerBridge@@QEAAJXZ @ 0x1802910F0 (-WaitForViewManagerConnection@ViewManagerBridge@@QEAAJXZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18000C474 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::ConnectToViewManager::~ConnectToViewManager(
        ViewManagerInteropTraceLogging::ConnectToViewManager *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::ConnectToViewManager::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
