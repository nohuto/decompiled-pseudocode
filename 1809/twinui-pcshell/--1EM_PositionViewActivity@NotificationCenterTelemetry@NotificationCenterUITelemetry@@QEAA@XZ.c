/*
 * XREFs of ??1EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180011118
 * Callers:
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x180010C64 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     _CActionCenterExperienceManager::PositionView_::_1_::dtor$0 @ 0x1800AB20C (_CActionCenterExperienceManager--PositionView_--_1_--dtor$0.c)
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x18014E2D8 (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     _CControlCenterExperienceManager::PositionView_::_1_::dtor$0 @ 0x18014E4CE (_CControlCenterExperienceManager--PositionView_--_1_--dtor$0.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x18015C1A0 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     _CToastCenterExperienceManager::PositionView_::_1_::dtor$0 @ 0x18015C687 (_CToastCenterExperienceManager--PositionView_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180013E10 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::~EM_PositionViewActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_PositionViewActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
