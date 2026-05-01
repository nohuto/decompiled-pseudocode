/*
 * XREFs of ??1EM_HideInHolographic@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180158E94
 * Callers:
 *     ?HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180159C24 (-HideInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     _CToastCenterExperienceManager::HideInHolographic_::_1_::dtor$0 @ 0x180159D2C (_CToastCenterExperienceManager--HideInHolographic_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801596BC (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideInHolographic::~EM_HideInHolographic(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideInHolographic *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideInHolographic::`vftable';
  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
