/*
 * XREFs of ??1Uncloak@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180045BBC
 * Callers:
 *     ?Uncloak@CSingleViewShellExperience@@QEAAJXZ @ 0x18004593C (-Uncloak@CSingleViewShellExperience@@QEAAJXZ.c)
 *     _CSingleViewShellExperience::Uncloak_::_1_::dtor$0 @ 0x1800C54D9 (_CSingleViewShellExperience--Uncloak_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800336F4 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag.c)
 */

void __fastcall SingleViewExperienceTelemetry::Uncloak::~Uncloak(SingleViewExperienceTelemetry::Uncloak *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::Uncloak::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
