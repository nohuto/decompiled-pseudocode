/*
 * XREFs of ??$Start@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0@Z @ 0x18009AF6C
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800423F0 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180018E30 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflector_ea_180018E30.c)
 *     ?StartActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x18009AFC4 (-StartActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 */

SingleViewExperienceTelemetry::OnPropertyChanged *__fastcall SingleViewExperienceTelemetry::OnPropertyChanged::Start<unsigned short const *,unsigned short const *>(
        SingleViewExperienceTelemetry::OnPropertyChanged *this,
        const unsigned __int16 **a2,
        const unsigned __int16 **a3)
{
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)this,
    (__int64)"OnPropertyChanged");
  *(_QWORD *)this = &SingleViewExperienceTelemetry::OnPropertyChanged::`vftable';
  SingleViewExperienceTelemetry::OnPropertyChanged::StartActivity(this, *a2, *a3);
  return this;
}
