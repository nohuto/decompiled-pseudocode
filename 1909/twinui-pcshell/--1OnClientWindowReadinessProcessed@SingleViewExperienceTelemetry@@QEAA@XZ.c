/*
 * XREFs of ??1OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800121E0
 * Callers:
 *     _CSingleViewShellExperience::OnClientWindowReadyForPresentationChanged_::_1_::dtor$0 @ 0x1800E4E94 (_CSingleViewShellExperience--OnClientWindowReadyForPresentationChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800133E4 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::~OnClientWindowReadinessProcessed(
        SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
