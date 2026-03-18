/*
 * XREFs of ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1C00508D0
 * Callers:
 *     ?Execute@FxDmaTransactionBase@@QEAAJPEAX@Z @ 0x1C00387B8 (-Execute@FxDmaTransactionBase@@QEAAJPEAX@Z.c)
 *     ?AddRefOverride@FxRequest@@UEAAKGPEAXJPEBD@Z @ 0x1C0050930 (-AddRefOverride@FxRequest@@UEAAKGPEAXJPEBD@Z.c)
 *     ?SetMdl@FxRequestMemory@@QEAAXPEAVFxRequest@@PEAU_MDL@@PEAX_KE@Z @ 0x1C0057B7C (-SetMdl@FxRequestMemory@@QEAAXPEAVFxRequest@@PEAU_MDL@@PEAX_KE@Z.c)
 *     ?AddRef@FxRequestOutputBuffer@@UEAAKPEAXJPEBD@Z @ 0x1C0057C10 (-AddRef@FxRequestOutputBuffer@@UEAAKPEAXJPEBD@Z.c)
 *     ?AddRef@FxRequestSystemBuffer@@UEAAKPEAXJPEBD@Z @ 0x1C0057D30 (-AddRef@FxRequestSystemBuffer@@UEAAKPEAXJPEBD@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2990 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequest::AddIrpReference(FxRequest *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v5; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    if ( m_Globals->FxVerifierOn )
      FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
    FxNonPagedObject::Unlock(this, irql, v5);
  }
  _InterlockedIncrement(&this->m_IrpReferenceCount);
}
