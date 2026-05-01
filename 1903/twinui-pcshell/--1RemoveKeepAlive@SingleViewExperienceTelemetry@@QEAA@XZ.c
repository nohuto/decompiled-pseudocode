/*
 * XREFs of ??1RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18007CA70
 * Callers:
 *     ?RemoveKeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x18007C870 (-RemoveKeepAlive@CSingleViewShellExperience@@QEAAJXZ.c)
 *     _CSingleViewShellExperience::RemoveKeepAlive_::_1_::dtor$0 @ 0x1800C6BEC (_CSingleViewShellExperience--RemoveKeepAlive_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800336F4 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag.c)
 */

void __fastcall SingleViewExperienceTelemetry::RemoveKeepAlive::~RemoveKeepAlive(
        SingleViewExperienceTelemetry::RemoveKeepAlive *this)
{
  *(_QWORD *)this = &SingleViewExperienceTelemetry::RemoveKeepAlive::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
