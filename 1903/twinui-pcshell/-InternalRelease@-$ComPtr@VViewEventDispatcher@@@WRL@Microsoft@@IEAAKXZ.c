/*
 * XREFs of ?InternalRelease@?$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18026C4DC
 * Callers:
 *     ??$MakeAndInitialize@VViewEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180267448 (--$MakeAndInitialize@VViewEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 *     ??1?$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@QEAA@XZ @ 0x180268B2C (--1-$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1ViewManagerBridge@@UEAA@XZ @ 0x180269278 (--1ViewManagerBridge@@UEAA@XZ.c)
 *     ??1ViewWrapperBase@@QEAA@XZ @ 0x18026935C (--1ViewWrapperBase@@QEAA@XZ.c)
 *     _lambda_bd3fbba3910f4f0e915bc6f22fc5c4d2_::operator() @ 0x180269B44 (_lambda_bd3fbba3910f4f0e915bc6f22fc5c4d2_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_399ff948cc697693e8bab0cf770e6371___::_scalar_deleting_destructor_ @ 0x180269EA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_399ff948cc697693e8bab0cf770e6371___--_scala.c)
 *     ??4?$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@QEAAAEAV012@PEAVViewEventDispatcher@@@Z @ 0x180284D60 (--4-$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@QEAAAEAV012@PEAVViewEventDispatcher@@@Z.c)
 *     ?InitializeAndRunCoreUiMessageLoop@ViewManagerBridge@@AEAAXXZ @ 0x1802871AC (-InitializeAndRunCoreUiMessageLoop@ViewManagerBridge@@AEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewEventDispatcher@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherDesktopExtension@5Desktop@678@UIViewEventDispatcherCrashRecovery@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIWindowDispatcherConnectedStandby@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIPopupClientBroker@Popups@Shell@Internal@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18026DDD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVie_ea_18026DDD0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventDispatcher>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension,IViewEventDispatcherCrashRecovery,Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>,IViewManagerControl,IWindowDispatcherConnectedStandby,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
