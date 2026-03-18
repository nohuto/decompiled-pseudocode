/*
 * XREFs of ?GetInformation@FxRequest@@QEAA_KXZ @ 0x1C0050AA4
 * Callers:
 *     imp_WdfRequestGetInformation @ 0x1C004BFF0 (imp_WdfRequestGetInformation.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2990 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

unsigned __int64 __fastcall FxRequest::GetInformation(FxRequest *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int64 Information; // rbx
  unsigned __int8 v6; // r8
  int IsNotCompleted; // eax
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  Information = 0LL;
  if ( !m_Globals->FxVerifierIO )
    return this->m_Irp.m_Irp->IoStatus.Information;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( m_Globals->FxVerifierOn )
    IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
  else
    IsNotCompleted = 0;
  if ( IsNotCompleted >= 0 )
    Information = this->m_Irp.m_Irp->IoStatus.Information;
  FxNonPagedObject::Unlock(this, irql, v6);
  return Information;
}
