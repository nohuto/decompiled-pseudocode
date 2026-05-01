/*
 * XREFs of ??1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ @ 0x180126FA0
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_8bf19a67da9349d708dd7efffc5e2d17___ @ 0x18003FDCC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_8bf19a67da9349d708dd7efffc5e2d17___.c)
 *     _CFrameApplicationPresentation::SetSystemVisual_::_1_::dtor$0 @ 0x1800AD862 (_CFrameApplicationPresentation--SetSystemVisual_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180040170 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall CFramePresentationTelemetry::SetSystemVisual::~SetSystemVisual(
        CFramePresentationTelemetry::SetSystemVisual *this)
{
  *(_QWORD *)this = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
