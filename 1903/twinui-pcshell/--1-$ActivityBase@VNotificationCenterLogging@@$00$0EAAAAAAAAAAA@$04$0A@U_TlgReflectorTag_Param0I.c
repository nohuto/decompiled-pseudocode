/*
 * XREFs of ??1?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801749B4
 * Callers:
 *     ??1DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180174E44 (--1DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ??1LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180174E9C (--1LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801749F0 (--1-$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ?reset@?$shared_object@V?$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180178C00 (-reset@-$shared_object@V-$ActivityData@VNotificationCenterLogging@@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 304);
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<NotificationCenterLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
