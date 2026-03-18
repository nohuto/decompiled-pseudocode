/*
 * XREFs of ?PowerUp@FxDmaEnabler@@QEAAJXZ @ 0x1C001A38C
 * Callers:
 *     ?PowerWakingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0010900 (-PowerWakingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ @ 0x1C008E028 (-PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qld @ 0x1C003496C (WPP_IFR_SF_qld.c)
 */

__int64 __fastcall FxDmaEnabler::PowerUp(FxDmaEnabler *this, unsigned __int8 a2, unsigned int a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  const void *v5; // rbp
  int level; // esi
  WDFDMAENABLER__ *_a1; // r14
  int globals; // edi
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
    WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x18u, WPP_FxDmaEnabler_cpp_Traceguids, _a1);
  m_Method = this->m_EvtDmaEnablerFill.m_Method;
  if ( m_Method && (v13 = m_Method(_a1), this->m_EvtDmaEnablerFill.m_Status = v13, level = v13, v13 < 0) )
  {
    globals = 1;
    this->m_DmaEnablerFillFailed = 1;
  }
  else
  {
    v10 = this->m_EvtDmaEnablerEnable.m_Method;
    if ( v10 && (v14 = v10(_a1), this->m_EvtDmaEnablerEnable.m_Status = v14, level = v14, v14 < 0) )
    {
      this->m_DmaEnablerEnableFailed = 1;
      globals = 3;
    }
    else
    {
      v11 = this->m_EvtDmaEnablerSelfManagedIoStart.m_Method;
      if ( v11 )
      {
        v15 = v11(_a1);
        this->m_EvtDmaEnablerSelfManagedIoStart.m_Status = v15;
        level = v15;
        if ( v15 >= 0 )
          return (unsigned int)level;
        this->m_DmaEnablerSelfManagedIoStartFailed = 1;
        globals = 5;
      }
    }
  }
  if ( level < 0 )
  {
    if ( !this->m_ObjectSize )
      v5 = 0LL;
    WPP_IFR_SF_qld(m_Globals, a2, a3, 0x19u, WPP_FxDmaEnabler_cpp_Traceguids, v5, globals, level);
  }
  return (unsigned int)level;
}
