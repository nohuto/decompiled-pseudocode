/*
 * XREFs of ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18001B698
 * Callers:
 *     _lambda_2998a484fcd7d742033ed970065ccf76_::__lambda_2998a484fcd7d742033ed970065ccf76_ @ 0x18001E220 (_lambda_2998a484fcd7d742033ed970065ccf76_--__lambda_2998a484fcd7d742033ed970065ccf76_.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180061B90 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     _CSingleViewShellExperience::Launch_::_1_::dtor$1 @ 0x1800AE65B (_CSingleViewShellExperience--Launch_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180044988 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 */

void __fastcall SingleViewExperienceTelemetry::Launch::~Launch(SingleViewExperienceTelemetry::Launch *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::Launch::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
