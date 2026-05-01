/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F520
 * Callers:
 *     ??$MakeAndInitialize@VShellPositionerProxy@@UIShellPositionerProxy@@AEAPEAUIShellPositionerManager@@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellPositionerProxy@@AEAPEAUIShellPositionerManager@@AEAPEAUIApplicationView@@@Z @ 0x180065340 (--$MakeAndInitialize@VShellPositionerProxy@@UIShellPositionerProxy@@AEAPEAUIShellPositionerManag.c)
 *     ??$MakeAndInitialize@VNonAgileDispatcher@@UIAsyncCallbackDispatcher@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAsyncCallbackDispatcher@@@Z @ 0x1801AB83C (--$MakeAndInitialize@VNonAgileDispatcher@@UIAsyncCallbackDispatcher@@$$V@Details@WRL@Microsoft@@.c)
 *     ??$MakeAndInitialize@VCImmersiveShellBuilder@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801D4558 (--$MakeAndInitialize@VCImmersiveShellBuilder@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIU.c)
 *     ??$MakeAndInitialize@VCoCreateInstanceImmersiveShellComponentCreator@@UIImmersiveComponentCreator@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIImmersiveComponentCreator@@@Z @ 0x1801D4640 (--$MakeAndInitialize@VCoCreateInstanceImmersiveShellComponentCreator@@UIImmersiveComponentCreato.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_18988d2ef5f1df883e47c946f668d0df___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus___lambda_18988d2ef5f1df883e47c946f668d0df___ @ 0x1802A4D2C (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1802A4D2C.c)
 *     ?RequestCloseAsync@WindowWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x1802A7490 (-RequestCloseAsync@WindowWrapperBase@@UEAAJPEAPEAU-$IAsyncOperation@W4AppRequestHandledResult@Vi.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1803208AC (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VTrayNotifyCallback@SystemTray@@V12@AEAPEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAVTrayNotifyCallback@SystemTray@@AEAPEAUHSTRING__@@@Z @ 0x18033DDDC (--$MakeAndInitialize@VTrayNotifyCallback@SystemTray@@V12@AEAPEAUHSTRING__@@@Details@WRL@Microsof.c)
 *     ??1?$com_ptr_t@VTrayNotifyCallback@SystemTray@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18033DEF0 (--1-$com_ptr_t@VTrayNotifyCallback@SystemTray@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x18033EB38 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktopAnimationSyncNotificationInstance@@UIVirtualDesktopAnimationNotificationInstance@@AEAPEAUIVirtualDesktop@@AEAPEAU3@PEAUIObjectArray@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIVirtualDesktopAnimationNotificationInstance@@AEAPEAUIVirtualDesktop@@1$$QEAPEAUIObjectArray@@AEAK@Z @ 0x1803F0F34 (--$MakeAndInitialize@VVirtualDesktopAnimationSyncNotificationInstance@@UIVirtualDesktopAnimation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 3);
  if ( !v1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v1;
}
