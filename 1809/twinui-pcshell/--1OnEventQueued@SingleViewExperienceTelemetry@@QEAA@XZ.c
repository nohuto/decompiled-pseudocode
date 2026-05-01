/*
 * XREFs of ??1OnEventQueued@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1803AE500
 * Callers:
 *     _CSingleViewShellExperience::OnEventQueued_::_1_::dtor$0 @ 0x1800ADA06 (_CSingleViewShellExperience--OnEventQueued_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800411FC (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnEventQueued::~OnEventQueued(
        SingleViewExperienceTelemetry::OnEventQueued *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::OnEventQueued::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
