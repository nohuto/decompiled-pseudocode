/*
 * XREFs of ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x1800823C0
 * Callers:
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18000BDE0 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18000CC10 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 *     ??$AsWeak@VPenWorkspaceAppInstallBroker@@@WRL@Microsoft@@YAJPEAVPenWorkspaceAppInstallBroker@@PEAVWeakRef@01@@Z @ 0x180093EA0 (--$AsWeak@VPenWorkspaceAppInstallBroker@@@WRL@Microsoft@@YAJPEAVPenWorkspaceAppInstallBroker@@PE.c)
 *     _lambda_89fb5ab193d74e8b0300aa0759d904c8_::_lambda_89fb5ab193d74e8b0300aa0759d904c8_ @ 0x18009447C (_lambda_89fb5ab193d74e8b0300aa0759d904c8_--_lambda_89fb5ab193d74e8b0300aa0759d904c8_.c)
 *     _lambda_0a3b6d6f5c204974f97bccd3169266e9_::_lambda_0a3b6d6f5c204974f97bccd3169266e9_ @ 0x18009A718 (_lambda_0a3b6d6f5c204974f97bccd3169266e9_--_lambda_0a3b6d6f5c204974f97bccd3169266e9_.c)
 *     ?EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VAgileGitPtr@@@Z @ 0x18009AC88 (-EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     std::_Func_impl_no_alloc__lambda_0a3b6d6f5c204974f97bccd3169266e9__wil::com_ptr_t_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_wil::err_exception_policy__unsigned_int_::_Copy @ 0x18009B340 (std--_Func_impl_no_alloc__lambda_0a3b6d6f5c204974f97bccd3169266e9__wil--com_ptr_t_W_ea_18009B340.c)
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18027B620 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 *     ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18027BB80 (-AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowM.c)
 *     ?ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18027BF40 (-ApplyWindowingEnvironmentSettingsRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewApplyWindowi.c)
 *     ?OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1803117A0 (-OnChromeOffsetsChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x1803118B0 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x180311E48 (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N@Z @ 0x180311F38 (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N@Z.c)
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z @ 0x18031205C (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z.c)
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1803121E0 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnViewCreated_19H1@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180312504 (-OnViewCreated_19H1@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@She.c)
 *     ?RuntimeClassInitialize@SwitchItemCollection@@QEAAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@@Z @ 0x180353734 (-RuntimeClassInitialize@SwitchItemCollection@@QEAAJPEAUISwitchItemFactory@@PEAUIApplicationViewC.c)
 *     ??$AsWeak@UIIconLoaderInternal@@@WRL@Microsoft@@YAJPEAUIIconLoaderInternal@@PEAVWeakRef@01@@Z @ 0x180361D18 (--$AsWeak@UIIconLoaderInternal@@@WRL@Microsoft@@YAJPEAUIIconLoaderInternal@@PEAVWeakRef@01@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::WeakRef::WeakRef(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}
