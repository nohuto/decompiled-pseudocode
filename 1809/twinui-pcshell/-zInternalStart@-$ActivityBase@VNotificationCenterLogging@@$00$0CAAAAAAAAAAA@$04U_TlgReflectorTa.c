/*
 * XREFs of ?zInternalStart@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180161154
 * Callers:
 *     ?StartActivity@EM_HideInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18015DE58 (-StartActivity@EM_HideInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@Q.c)
 *     ?StartActivity@EM_RegisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18015E224 (-StartActivity@EM_RegisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITe.c)
 *     ?StartActivity@EM_ShowInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18015E4D4 (-StartActivity@EM_ShowInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@Q.c)
 *     ?StartActivity@EM_UnregisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18015E628 (-StartActivity@EM_UnregisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUI.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18010B090 (-LockExclusive@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?zInternalStart@?$_TlgActivityBase@V?$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0CAAAAAAAAAAA@$04@@QEAAXXZ @ 0x18016118C (-zInternalStart@-$_TlgActivityBase@V-$ActivityData@VNotificationCenterLogging@@U_Tl_ea_18016118C.c)
 */

void __fastcall wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &SRWLock);
  _TlgActivityBase<wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>::zInternalStart(*(_QWORD *)(a1 + 48));
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
