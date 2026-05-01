/*
 * XREFs of ??1Reactivate@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180412EC0
 * Callers:
 *     _ExperienceManagerUtils::RaiseReactivatedEvent_::_1_::dtor$0 @ 0x1800C43F0 (_ExperienceManagerUtils--RaiseReactivatedEvent_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800306F8 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 */

void __fastcall SingleViewExperienceTelemetry::Reactivate::~Reactivate(SingleViewExperienceTelemetry::Reactivate *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::Reactivate::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
