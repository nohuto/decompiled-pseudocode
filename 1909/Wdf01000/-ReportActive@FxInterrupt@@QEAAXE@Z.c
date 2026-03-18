/*
 * XREFs of ?ReportActive@FxInterrupt@@QEAAXE@Z @ 0x1C008E370
 * Callers:
 *     ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1C000D1A0 (-Connect@FxInterrupt@@QEAAJK@Z.c)
 *     imp_WdfInterruptReportActive @ 0x1C007B8B0 (imp_WdfInterruptReportActive.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 */

void __fastcall FxInterrupt::ReportActive(FxInterrupt *this, unsigned __int8 Internal)
{
  __int64 v3; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  const void *_a1; // rdi
  _IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS parameters; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&parameters.Version = 0LL;
  parameters.ConnectionContext.Generic = 0LL;
  v3 = *(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  if ( !Internal )
  {
    if ( !this->m_Connected || !this->m_Interrupt )
    {
      p_m_Globals = &this->m_Globals;
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_q(*p_m_Globals, 3u, 0xCu, 0xAu, WPP_InterruptObjectKm_cpp_Traceguids, _a1);
      m_Globals = *p_m_Globals;
      goto LABEL_9;
    }
    if ( !*(_QWORD *)(v3 + 1160) )
    {
      WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0xBu, WPP_InterruptObjectKm_cpp_Traceguids);
      m_Globals = this->m_Globals;
LABEL_9:
      FxVerifierDbgBreakPoint(m_Globals);
      return;
    }
  }
  if ( !this->m_Active )
  {
    *(&parameters.Version + 1) = 0;
    parameters.ConnectionContext.Generic = this->m_Interrupt;
    parameters.Version = unk_1C00AEE80 != 0 ? 4 : 1;
    (*(void (__fastcall **)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *))(v3 + 1160))(&parameters);
    this->m_Active = 1;
  }
}
