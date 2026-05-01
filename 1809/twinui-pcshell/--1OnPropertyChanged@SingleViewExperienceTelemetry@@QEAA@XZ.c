/*
 * XREFs of ??1OnPropertyChanged@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1803AE52C
 * Callers:
 *     _CSingleViewShellExperience::OnViewStateChanged_::_1_::dtor$0 @ 0x1800ADA30 (_CSingleViewShellExperience--OnViewStateChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180044988 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 */

void __fastcall SingleViewExperienceTelemetry::OnPropertyChanged::~OnPropertyChanged(volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&SingleViewExperienceTelemetry::OnPropertyChanged::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
