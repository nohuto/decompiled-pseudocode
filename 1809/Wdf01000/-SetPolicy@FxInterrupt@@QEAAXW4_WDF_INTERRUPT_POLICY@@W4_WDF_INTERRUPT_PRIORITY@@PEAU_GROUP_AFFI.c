/*
 * XREFs of ?SetPolicy@FxInterrupt@@QEAAXW4_WDF_INTERRUPT_POLICY@@W4_WDF_INTERRUPT_PRIORITY@@PEAU_GROUP_AFFINITY@@@Z @ 0x1C008C488
 * Callers:
 *     imp_WdfInterruptSetExtendedPolicy @ 0x1C007AF50 (imp_WdfInterruptSetExtendedPolicy.c)
 *     imp_WdfInterruptSetPolicy @ 0x1C007B070 (imp_WdfInterruptSetPolicy.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxInterrupt::SetPolicy(
        FxInterrupt *this,
        _WDF_INTERRUPT_POLICY Policy,
        _WDF_INTERRUPT_PRIORITY Priority,
        _GROUP_AFFINITY *TargetProcessorSet)
{
  const void *v8; // r10
  bool v9; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  if ( this->m_CreatedInPrepareHardware )
  {
    v8 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v9 = this->m_ObjectSize == 0;
    m_Globals = this->m_Globals;
    if ( v9 )
      v8 = 0LL;
    WPP_IFR_SF_qL(m_Globals, 2u, 0xCu, 0x16u, WPP_InterruptObject_cpp_Traceguids, v8, 0xC0000010);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  this->m_Policy = Policy;
  this->m_Priority = Priority;
  this->m_Processors = *TargetProcessorSet;
  if ( !unk_1C00ABE50 )
    this->m_Processors.Group = 0;
  this->m_SetPolicy = 1;
}
