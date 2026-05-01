/*
 * XREFs of ?zInternalStart@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180015910
 * Callers:
 *     ?StartActivity@EM_ViewShownActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18000BF2C (-StartActivity@EM_ViewShownActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@Q.c)
 *     ?StartActivity@EM_ViewHiddenActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18000C10C (-StartActivity@EM_ViewHiddenActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@.c)
 *     ?StartActivity@EM_ViewCloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18000C764 (-StartActivity@EM_ViewCloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ?StartActivity@EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18000CC7C (-StartActivity@EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemet.c)
 *     ?StartActivity@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180010D50 (-StartActivity@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry.c)
 *     ?StartActivity@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXPEBG_N@Z @ 0x180010E38 (-StartActivity@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUI.c)
 *     ?StartActivity@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXPEBG@Z @ 0x1800143A8 (-StartActivity@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?StartActivity@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180075714 (-StartActivity@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?StartActivity@EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180078C04 (-StartActivity@EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXX.c)
 *     ?StartActivity@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18014AED4 (-StartActivity@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 *     ?StartActivity@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18015DAA4 (-StartActivity@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUIT.c)
 *     ?StartActivity@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18015DBE0 (-StartActivity@EM_DisplayContextChanged@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 *     ?StartActivity@EM_DisplaySettingsChangeActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18015DD1C (-StartActivity@EM_DisplaySettingsChangeActivity@NotificationCenterTelemetry@NotificationCenterUI.c)
 *     ?StartActivity@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18015DFAC (-StartActivity@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA.c)
 *     ?StartActivity@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18015E0E8 (-StartActivity@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITeleme.c)
 *     ?StartActivity@EM_ShowActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAX_N@Z @ 0x18015E378 (-StartActivity@EM_ShowActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAX_.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180013B04 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

void __fastcall wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  RTL_SRWLOCK *v3; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+18h] BYREF

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_18050F910;
    qword_18050F910[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F928 = (struct _TlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F910, qword_18050F928);
    InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_18050F910);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *(_QWORD *)(v2 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  v3 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
