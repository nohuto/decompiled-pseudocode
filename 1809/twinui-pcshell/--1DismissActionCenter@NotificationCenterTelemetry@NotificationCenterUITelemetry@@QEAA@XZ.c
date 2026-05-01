/*
 * XREFs of ??1DismissActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180148EA4
 * Callers:
 *     ?OnDismiss@CActionCenterExperienceManager@@UEAAJXZ @ 0x1800809A0 (-OnDismiss@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     _CActionCenterExperienceManager::OnDismiss_::_1_::dtor$0 @ 0x1800AF48B (_CActionCenterExperienceManager--OnDismiss_--_1_--dtor$0.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x18014B1A0 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 *     _CActionCenterExperienceManager::StartSwipe_::_1_::dtor$0 @ 0x18014B2EE (_CActionCenterExperienceManager--StartSwipe_--_1_--dtor$0.c)
 *     ?OnDismiss@CControlCenterExperienceManager@@UEAAJXZ @ 0x18014D470 (-OnDismiss@CControlCenterExperienceManager@@UEAAJXZ.c)
 *     _CControlCenterExperienceManager::OnDismiss_::_1_::dtor$0 @ 0x18014D524 (_CControlCenterExperienceManager--OnDismiss_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180149480 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::~DismissActionCenter(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::DismissActionCenter::`vftable';
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
