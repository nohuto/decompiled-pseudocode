/*
 * XREFs of ??1EM_ViewShownActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18004F8B0
 * Callers:
 *     ?OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180050D80 (-OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CActionCenterExperienceManager::OnViewShown_::_1_::dtor$0 @ 0x1800C576E (_CActionCenterExperienceManager--OnViewShown_--_1_--dtor$0.c)
 *     ?OnViewShown@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18017A990 (-OnViewShown@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CControlCenterExperienceManager::OnViewShown_::_1_::dtor$0 @ 0x18017AA59 (_CControlCenterExperienceManager--OnViewShown_--_1_--dtor$0.c)
 *     ?OnViewShown@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180188250 (-OnViewShown@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _CToastCenterExperienceManager::OnViewShown_::_1_::dtor$0 @ 0x180188319 (_CToastCenterExperienceManager--OnViewShown_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18004CA34 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewShownActivity::~EM_ViewShownActivity(
        NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewShownActivity *this)
{
  *(_QWORD *)this = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewShownActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
