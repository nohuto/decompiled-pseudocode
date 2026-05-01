/*
 * XREFs of ?zInternalStart@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801ACAC4
 * Callers:
 *     ?StartActivity@EM_HideInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801A93E4 (-StartActivity@EM_HideInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@Q.c)
 *     ?StartActivity@EM_RegisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801A97EC (-StartActivity@EM_RegisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITe.c)
 *     ?StartActivity@EM_ShowInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801A9ACC (-StartActivity@EM_ShowInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@Q.c)
 *     ?StartActivity@EM_UnregisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x1801A9C34 (-StartActivity@EM_UnregisterHolographicExecutor@NotificationCenterTelemetry@NotificationCenterUI.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180150C54 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?zInternalStart@?$_TlgActivityBase@V?$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0CAAAAAAAAAAA@$04@@QEAAXXZ @ 0x1801ACAFC (-zInternalStart@-$_TlgActivityBase@V-$ActivityData@VNotificationCenterLogging@@U_Tl_ea_1801ACAFC.c)
 */

void __fastcall wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  _TlgActivityBase<wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>::zInternalStart(*(_QWORD *)(a1 + 48));
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
