/*
 * XREFs of ??1DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180194248
 * Callers:
 *     ?OnDismiss@CActionCenterExperienceManager@@UEAAJXZ @ 0x180085D70 (-OnDismiss@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     _CActionCenterExperienceManager::OnDismiss_::_1_::dtor$0 @ 0x1800E94FD (_CActionCenterExperienceManager--OnDismiss_--_1_--dtor$0.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x180196B70 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 *     _CActionCenterExperienceManager::StartSwipe_::_1_::dtor$0 @ 0x180196CC2 (_CActionCenterExperienceManager--StartSwipe_--_1_--dtor$0.c)
 *     ?OnDismiss@CControlCenterExperienceManager@@UEAAJXZ @ 0x180199090 (-OnDismiss@CControlCenterExperienceManager@@UEAAJXZ.c)
 *     _CControlCenterExperienceManager::OnDismiss_::_1_::dtor$0 @ 0x180199144 (_CControlCenterExperienceManager--OnDismiss_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180194C80 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::~DismissActionCenter(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::`vftable';
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
