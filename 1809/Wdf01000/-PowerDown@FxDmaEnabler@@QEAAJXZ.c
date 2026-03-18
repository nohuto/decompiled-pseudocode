/*
 * XREFs of ?PowerDown@FxDmaEnabler@@QEAAJXZ @ 0x1C0013A54
 * Callers:
 *     ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C0012AE0 (-PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C008DFA8 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qld @ 0x1C003496C (WPP_IFR_SF_qld.c)
 */

__int64 __fastcall FxDmaEnabler::PowerDown(FxDmaEnabler *this, unsigned __int8 a2, unsigned int a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  const void *v5; // rsi
  int level; // ebx
  WDFDMAENABLER__ *_a1; // r14
  int globals; // ebp
  int (__fastcall *m_Method)(WDFDMAENABLER__ *); // rax
  int (__fastcall *v10)(WDFDMAENABLER__ *); // rax
  int (__fastcall *v11)(WDFDMAENABLER__ *); // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax

  m_Globals = this->m_Globals;
  v5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  level = 0;
  _a1 = (WDFDMAENABLER__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  globals = 0;
  if ( !this->m_ObjectSize )
    _a1 = 0LL;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x1Au, WPP_FxDmaEnabler_cpp_Traceguids, _a1);
  m_Method = this->m_EvtDmaEnablerSelfManagedIoStop.m_Method;
  if ( m_Method )
  {
    v13 = m_Method(_a1);
    this->m_EvtDmaEnablerSelfManagedIoStop.m_Status = v13;
    if ( v13 < 0 )
    {
      globals = 6;
      level = v13;
    }
  }
  v10 = this->m_EvtDmaEnablerDisable.m_Method;
  if ( v10 )
  {
    if ( !this->m_DmaEnablerFillFailed )
    {
      v14 = v10(_a1);
      this->m_EvtDmaEnablerDisable.m_Status = v14;
      if ( v14 < 0 )
      {
        globals = 4;
        if ( level >= 0 )
          level = v14;
      }
    }
  }
  v11 = this->m_EvtDmaEnablerFlush.m_Method;
  if ( !v11
    || this->m_DmaEnablerFillFailed
    || this->m_DmaEnablerEnableFailed
    || (v15 = v11(_a1), this->m_EvtDmaEnablerFlush.m_Status = v15, v15 >= 0) )
  {
LABEL_8:
    if ( level >= 0 )
      return (unsigned int)level;
    goto LABEL_22;
  }
  globals = 2;
  if ( level >= 0 )
  {
    level = v15;
    goto LABEL_8;
  }
LABEL_22:
  if ( !this->m_ObjectSize )
    v5 = 0LL;
  WPP_IFR_SF_qld(m_Globals, a2, a3, 0x1Bu, WPP_FxDmaEnabler_cpp_Traceguids, v5, globals, level);
  return (unsigned int)level;
}
