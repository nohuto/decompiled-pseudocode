/*
 * XREFs of ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C0084B84
 * Callers:
 *     ?DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ @ 0x1C0080604 (-DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ @ 0x1C00807F4 (-PowerConnectInterruptFailed@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0080F10 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0081180 (-PowerGotoDxFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ @ 0x1C00811E0 (-PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerGotoDxStoppedDisableInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00813D0 (-PowerGotoDxStoppedDisableInterrupt@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxStoppedDisableInterruptNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00813F0 (-PowerGotoDxStoppedDisableInterruptNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0081DD0 (-PowerUpFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerUpFailedDerefParent@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0081E10 (-PowerUpFailedDerefParent@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x1C000D394 (-Disconnect@FxInterrupt@@QEAAJK@Z.c)
 */

__int64 __fastcall FxPkgPnp::NotifyResourceObjectsDx(FxPkgPnp *this, char NotifyFlags)
{
  _LIST_ENTRY *Blink; // rbx
  _LIST_ENTRY *p_m_InterruptListHead; // rbp
  unsigned int v5; // r14d
  _LIST_ENTRY **p_Blink; // rdi
  signed int _a2; // r15d
  __int16 v9; // ax
  const void *_a1; // rdi

  Blink = this->m_InterruptListHead.Blink;
  p_m_InterruptListHead = &this->m_InterruptListHead;
  v5 = 0;
  while ( Blink != p_m_InterruptListHead )
  {
    p_Blink = &Blink[-28].Blink;
    _a2 = FxInterrupt::Disconnect((FxInterrupt *)&Blink[-28].Blink, NotifyFlags);
    if ( _a2 < 0 )
    {
      v9 = *((_WORD *)p_Blink + 5);
      _a1 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v9 )
        _a1 = 0LL;
      WPP_IFR_SF_qL(this->m_Globals, 2u, 0xCu, 0x52u, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
      v5 = _a2;
    }
    Blink = Blink->Blink;
  }
  return v5;
}
