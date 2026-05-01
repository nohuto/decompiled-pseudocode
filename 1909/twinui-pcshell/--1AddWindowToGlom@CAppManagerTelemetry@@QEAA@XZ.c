/*
 * XREFs of ??1AddWindowToGlom@CAppManagerTelemetry@@QEAA@XZ @ 0x18012D420
 * Callers:
 *     _CApplicationManager::_AddViewToGlom_::_1_::dtor$0 @ 0x1800E4C0C (_CApplicationManager--_AddViewToGlom_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180034628 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CAppManagerTelemetry::AddWindowToGlom::~AddWindowToGlom(CAppManagerTelemetry::AddWindowToGlom *this)
{
  *(_QWORD *)this = &CAppManagerTelemetry::AddWindowToGlom::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
