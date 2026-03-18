/*
 * XREFs of ?AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ @ 0x1C008312C
 * Callers:
 *     ?QueryForReenumerationInterface@FxPkgPdo@@EEAAJXZ @ 0x1C007C890 (-QueryForReenumerationInterface@FxPkgPdo@@EEAAJXZ.c)
 *     ?QueryForReenumerationInterface@FxPkgFdo@@EEAAJXZ @ 0x1C00884F0 (-QueryForReenumerationInterface@FxPkgFdo@@EEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C000C9B4 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 */

__int64 __fastcall FxPkgPnp::AllocateWorkItemForSetDeviceFailed(FxPkgPnp *this)
{
  int _a1; // eax
  unsigned int v4; // edi

  if ( this->m_SetDeviceFailedAttemptRestartWorkItem )
  {
    WPP_IFR_SF_(this->m_Globals, 4u, 0xCu, 0xAu, WPP_FxPkgPnp_cpp_Traceguids);
    return 0LL;
  }
  else
  {
    _a1 = FxSystemWorkItem::_Create(
            this->m_Globals,
            this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
            &this->m_SetDeviceFailedAttemptRestartWorkItem);
    v4 = _a1;
    if ( _a1 < 0 )
      WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0xBu, WPP_FxPkgPnp_cpp_Traceguids, _a1);
    return v4;
  }
}
