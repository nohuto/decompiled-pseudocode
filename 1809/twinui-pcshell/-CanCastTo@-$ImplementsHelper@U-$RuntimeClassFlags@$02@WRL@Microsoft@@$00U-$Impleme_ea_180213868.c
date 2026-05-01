/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@WRL@Microsoft@@@Details@23@UIViewManagerControl@@UIWindowDispatcherConnectedStandby@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180213868
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIViewEventDispatcherDesktopExtension@ViewManagerInterop@Desktop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@@U?$Implements@UIForegroundManager@ViewManagerInterop@Shell@Internal@Windows@@UIViewEventDispatcherCrashRecovery@2345@@23@UIViewManagerControl@@UIWindowDispatcherConnectedStandby@@UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180213BA4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_180213BA4.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveShellHookNotification@@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIPrivilegedOperationsConsumer@@UIImmersiveSessionIdleNotification@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@UIPopupClientBroker@Popups@Shell@9Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180213A90 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiv_ea_180213A90.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Windows::Internal::Shell::ViewManagerInterop::IForegroundManager,Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcherCrashRecovery>>,IViewManagerControl,IWindowDispatcherConnectedStandby,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  _QWORD *v5; // r8
  _DWORD *v6; // r9
  __int64 v7; // r10
  __int64 result; // rax
  _DWORD *v9; // rcx
  __int64 v10; // r9

  if ( InlineIsEqualGUID(a2, &GUID_f3305f7e_8b9b_41f2_be95_4e832447c357) )
    goto LABEL_7;
  if ( InlineIsEqualGUID(v2, &GUID_73d6c545_9771_4aba_bb8c_713133ed635a) )
  {
    *v5 = v7 + 8;
    result = 0LL;
  }
  else
  {
    result = 2147500034LL;
  }
  if ( (_DWORD)result == -2147467262 )
  {
    if ( !InlineIsEqualGUID(v6, &GUID_030de2aa_3f4c_47de_9c7b_0bada6462586)
      && !InlineIsEqualGUID(v9, &GUID_f12382e8_15a2_49d0_8c5d_5f886a12cb9c) )
    {
      return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveShellHookNotification,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IPrivilegedOperationsConsumer,IImmersiveSessionIdleNotification,Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore,IViewCUIEventStore,Windows::Internal::Shell::Popups::IPopupClientBroker>,Microsoft::WRL::FtmBase>::CanCastTo(
               v4 + 8,
               v10);
    }
LABEL_7:
    *v3 = v4;
    return 0LL;
  }
  return result;
}
