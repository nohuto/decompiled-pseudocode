/*
 * XREFs of _lambda_97f5dcf4a2c06153ca0bec45e32a16f2_::__lambda_97f5dcf4a2c06153ca0bec45e32a16f2_ @ 0x180149FF0
 * Callers:
 *     _CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged_::_1_::dtor$1 @ 0x1800E4C72 (_CImmersiveApp--CImmersiveWindowCollection--SchedulePresentedWindowChanged_--_1_--dtor$1.c)
 *     _CImmersiveApp::CImmersiveWindowCollection::QueueAyncVisibilityReconciliation_::_1_::dtor$1 @ 0x180167039 (_CImmersiveApp--CImmersiveWindowCollection--QueueAyncVisibilityReconciliation_--_1_--dtor$1.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_5e3471c756f87189046196c55c94088a____::_1_::dtor$0 @ 0x1802DD6F0 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_5e3471c756f87189046196c55c94088.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef____::_1_::dtor$0 @ 0x1802DD90A (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_6c8b5f6772d3e01ba2a5e8ade53ff1e.c)
 *     _MonitorFrame::BeginInvokeAnimation_::_1_::dtor$1 @ 0x1802E6167 (_MonitorFrame--BeginInvokeAnimation_--_1_--dtor$1.c)
 *     _MonitorFrame::DestroyInternal_::_1_::dtor$1 @ 0x1802E7C64 (_MonitorFrame--DestroyInternal_--_1_--dtor$1.c)
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::ActivationChanged_::_1_::dtor$1 @ 0x1803001CB (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--ActivationChanged_--_1_--dtor$.c)
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::FirstFrameRendered_::_1_::dtor$1 @ 0x180301778 (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--FirstFrameRendere_ea_180301778.c)
 *     _XamlAllUpViewController::[IMonitorFrameDismissAnimationCallback]::MonitorFrameDismissAnimationCompleted_::_1_::dtor$1 @ 0x180302D48 (_XamlAllUpViewController--[IMonitorFrameDismissAnimationCallback]--MonitorFrameDism_ea_180302D48.c)
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::OnLightDismiss_::_1_::dtor$1 @ 0x1803030DF (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--OnLightDismiss_--_1_--dtor$1.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::VirtualDesktopInvoked_::_1_::dtor$1 @ 0x180303909 (_XamlAllUpViewController--[IXamlMultitaskingViewController]--VirtualDesktopInvoked_--_1_--dtor$1.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_97f5dcf4a2c06153ca0bec45e32a16f2____::_1_::dtor$0 @ 0x18041294B (_DCompThumbnailHelpers--DCompThumbnail_SetRectWithCallback__lambda_97f5dcf4a2c06153ca0bec45e32a1.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2____::_1_::dtor$0 @ 0x180412A1A (_DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_0.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2____::_1_::dtor$2 @ 0x180412A32 (_DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_cons_ea_180412A32.c)
 *     _VirtualDesktopGestureWindow::Commit_::_1_::dtor$1 @ 0x180413EB0 (_VirtualDesktopGestureWindow--Commit_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
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
