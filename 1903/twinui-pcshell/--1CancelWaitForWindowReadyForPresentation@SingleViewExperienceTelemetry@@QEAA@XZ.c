/*
 * XREFs of ??1CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18041075C
 * Callers:
 *     _CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation_::_1_::dtor$0 @ 0x1800C54B5 (_CSingleViewShellExperience--CancelWaitForWindowReadyForPresentation_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800336F4 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag.c)
 */

void __fastcall SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::~CancelWaitForWindowReadyForPresentation(
        SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
