/*
 * XREFs of ??$Start@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0@Z @ 0x1800D39A4
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180038CE0 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18001358C (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_18001358C.c)
 *     ?StartActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1800D39FC (-StartActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 */

SingleViewExperienceTelemetry::OnPropertyChanged *__fastcall SingleViewExperienceTelemetry::OnPropertyChanged::Start<unsigned short const *,unsigned short const *>(
        SingleViewExperienceTelemetry::OnPropertyChanged *this,
        const unsigned __int16 **a2,
        const unsigned __int16 **a3)
{
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)this,
    (__int64)"OnPropertyChanged");
  *(_QWORD *)this = &SingleViewExperienceTelemetry::OnPropertyChanged::`vftable';
  SingleViewExperienceTelemetry::OnPropertyChanged::StartActivity(this, *a2, *a3);
  return this;
}
