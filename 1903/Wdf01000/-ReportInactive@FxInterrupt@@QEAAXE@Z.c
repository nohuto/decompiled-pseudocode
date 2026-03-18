/*
 * XREFs of ?ReportInactive@FxInterrupt@@QEAAXE@Z @ 0x1C008E474
 * Callers:
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x1C000D394 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 *     imp_WdfInterruptReportInactive @ 0x1C007B8F0 (imp_WdfInterruptReportInactive.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 */

void __fastcall FxInterrupt::ReportInactive(FxInterrupt *this, unsigned __int8 Internal)
{
  __int64 v3; // r8
  _FX_DRIVER_GLOBALS *v4; // rcx
  const void *_a1; // rdi
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  bool v7; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS parameters; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&parameters.Version = 0LL;
  parameters.ConnectionContext.Generic = 0LL;
  v3 = *(_QWORD *)&this->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  if ( !Internal )
  {
    if ( !this->m_Connected || !this->m_Interrupt )
    {
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      p_m_Globals = &this->m_Globals;
      v7 = this->m_ObjectSize == 0;
      m_Globals = this->m_Globals;
      if ( v7 )
        _a1 = 0LL;
      WPP_IFR_SF_q(m_Globals, 3u, 0xCu, 0xCu, WPP_InterruptObjectKm_cpp_Traceguids, _a1);
      v4 = *p_m_Globals;
      goto LABEL_9;
    }
    if ( !*(_QWORD *)(v3 + 1168) )
    {
      WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0xDu, WPP_InterruptObjectKm_cpp_Traceguids);
      v4 = this->m_Globals;
LABEL_9:
      FxVerifierDbgBreakPoint(v4);
      return;
    }
  }
  if ( this->m_Active )
  {
    *(&parameters.Version + 1) = 0;
    parameters.ConnectionContext.Generic = this->m_Interrupt;
    parameters.Version = unk_1C00AEE80 != 0 ? 4 : 1;
    (*(void (__fastcall **)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *))(v3 + 1168))(&parameters);
    this->m_Active = 0;
  }
}
