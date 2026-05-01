/*
 * XREFs of ??1OnLightDismiss@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18030D504
 * Callers:
 *     ?OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180311B10 (-OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     _TouchKeyboardExperienceManager::OnDismiss_::_1_::dtor$0 @ 0x180311BD0 (_TouchKeyboardExperienceManager--OnDismiss_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18030E544 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnLightDismiss::~OnLightDismiss(
        TouchKeyboardExperienceTelemetryLogger::OnLightDismiss *this)
{
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnLightDismiss::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
