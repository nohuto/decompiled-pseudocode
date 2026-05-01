/*
 * XREFs of ??1TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAA@XZ @ 0x18011404C
 * Callers:
 *     _CApplicationFrameService::OnCommand_::_1_::dtor$2 @ 0x1800ADD29 (_CApplicationFrameService--OnCommand_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180040170 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall CAppManagerTelemetry::TitleBarButtonCloseRequested::~TitleBarButtonCloseRequested(
        CAppManagerTelemetry::TitleBarButtonCloseRequested *this)
{
  *(_QWORD *)this = &CAppManagerTelemetry::TitleBarButtonCloseRequested::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
