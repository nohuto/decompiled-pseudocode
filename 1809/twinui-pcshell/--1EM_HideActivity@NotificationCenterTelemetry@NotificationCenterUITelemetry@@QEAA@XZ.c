/*
 * XREFs of ??1EM_HideActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x180078BD8
 * Callers:
 *     ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x180078B28 (-Hide@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     _CToastCenterExperienceManager::Hide_::_1_::dtor$0 @ 0x1800AEF8B (_CToastCenterExperienceManager--Hide_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180013E10 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity::~EM_HideActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_HideActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
