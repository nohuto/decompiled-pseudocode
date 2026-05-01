/*
 * XREFs of ??1Reactivate@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1803B0A40
 * Callers:
 *     _ExperienceManagerUtils::RaiseReactivatedEvent_::_1_::dtor$0 @ 0x1800AD850 (_ExperienceManagerUtils--RaiseReactivatedEvent_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800411FC (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall SingleViewExperienceTelemetry::Reactivate::~Reactivate(SingleViewExperienceTelemetry::Reactivate *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::Reactivate::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
