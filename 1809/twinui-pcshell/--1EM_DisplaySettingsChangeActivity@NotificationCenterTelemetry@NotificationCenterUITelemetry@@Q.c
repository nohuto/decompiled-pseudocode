/*
 * XREFs of ??1EM_DisplaySettingsChangeActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180158E68
 * Callers:
 *     _CToastCenterExperienceManager::DisplaySettingsChange_::_1_::dtor$0 @ 0x180159AB0 (_CToastCenterExperienceManager--DisplaySettingsChange_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180013E10 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplaySettingsChangeActivity::~EM_DisplaySettingsChangeActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplaySettingsChangeActivity *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_DisplaySettingsChangeActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
