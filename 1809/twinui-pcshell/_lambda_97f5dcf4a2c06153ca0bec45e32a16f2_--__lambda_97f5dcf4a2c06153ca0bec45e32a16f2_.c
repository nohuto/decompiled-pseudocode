/*
 * XREFs of _lambda_97f5dcf4a2c06153ca0bec45e32a16f2_::__lambda_97f5dcf4a2c06153ca0bec45e32a16f2_ @ 0x180104DAC
 * Callers:
 *     _CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged_::_1_::dtor$1 @ 0x1800ADAB1 (_CImmersiveApp--CImmersiveWindowCollection--SchedulePresentedWindowChanged_--_1_--dtor$1.c)
 *     _CImmersiveApp::CImmersiveWindowCollection::QueueAyncVisibilityReconciliation_::_1_::dtor$1 @ 0x18011EA0D (_CImmersiveApp--CImmersiveWindowCollection--QueueAyncVisibilityReconciliation_--_1_--dtor$1.c)
 *     _SmartCookie::Register_IInputHostLayout_long_(__cdecl_IInputHostLayout::_)(IInputHostLayoutChanges_____ptr64_unsigned_long_____ptr64)___ptr64_long_(__cdecl_IInputHostLayout::_)(unsigned_long)___ptr64_CToastCenterExperienceManager_____ptr64__::_1_::dtor$1 @ 0x1801585FF (_SmartCookie--Register_IInputHostLayout_long_(__cdecl_IInputHostLayout--_)(IInputHo_ea_1801585FF.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_5e3471c756f87189046196c55c94088a____::_1_::dtor$0 @ 0x1802652C0 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_5e3471c756f87189046196c55c94088.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef____::_1_::dtor$0 @ 0x1802654DA (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_6c8b5f6772d3e01ba2a5e8ade53ff1e.c)
 *     _MonitorFrame::BeginInvokeAnimation_::_1_::dtor$1 @ 0x18026DA13 (_MonitorFrame--BeginInvokeAnimation_--_1_--dtor$1.c)
 *     _MonitorFrame::DestroyInternal_::_1_::dtor$1 @ 0x18026F4B4 (_MonitorFrame--DestroyInternal_--_1_--dtor$1.c)
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::ActivationChanged_::_1_::dtor$1 @ 0x1802875FB (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--ActivationChanged_--_1_--dtor$.c)
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::FirstFrameRendered_::_1_::dtor$1 @ 0x180288B9C (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--FirstFrameRendere_ea_180288B9C.c)
 *     _XamlAllUpViewController::[IMonitorFrameDismissAnimationCallback]::MonitorFrameDismissAnimationCompleted_::_1_::dtor$1 @ 0x18028A168 (_XamlAllUpViewController--[IMonitorFrameDismissAnimationCallback]--MonitorFrameDism_ea_18028A168.c)
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::OnLightDismiss_::_1_::dtor$1 @ 0x18028A4FF (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--OnLightDismiss_--_1_--dtor$1.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::VirtualDesktopInvoked_::_1_::dtor$1 @ 0x18028AD35 (_XamlAllUpViewController--[IXamlMultitaskingViewController]--VirtualDesktopInvoked_--_1_--dtor$1.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_97f5dcf4a2c06153ca0bec45e32a16f2____::_1_::dtor$0 @ 0x18038D4E9 (_DCompThumbnailHelpers--DCompThumbnail_SetRectWithCallback__lambda_97f5dcf4a2c06153ca0bec45e32a1.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&___ptr64__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2____::_1_::dtor$0 @ 0x18038D5B6 (_DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-___ptr64__.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&___ptr64__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2____::_1_::dtor$2 @ 0x18038D5CE (_DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_cons_ea_18038D5CE.c)
 *     _VirtualDesktopGestureWindow::Commit_::_1_::dtor$1 @ 0x18038EA04 (_VirtualDesktopGestureWindow--Commit_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall lambda_97f5dcf4a2c06153ca0bec45e32a16f2_::__lambda_97f5dcf4a2c06153ca0bec45e32a16f2_(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
