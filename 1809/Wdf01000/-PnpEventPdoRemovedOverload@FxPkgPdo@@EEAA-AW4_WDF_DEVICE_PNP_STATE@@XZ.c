/*
 * XREFs of ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C007BD40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     ?ProcessDeviceRemoved@FxDeviceDescriptionEntry@@QEAAXXZ @ 0x1C003DED0 (-ProcessDeviceRemoved@FxDeviceDescriptionEntry@@QEAAXXZ.c)
 *     ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1C005237C (-DeleteSymbolicLink@FxDevice@@QEAAXXZ.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C007D74C (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPdo::PnpEventPdoRemovedOverload(FxPkgPdo *this)
{
  FxDeviceDescriptionEntry *_a1; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax

  this->m_CanBeDeleted = 1;
  FxDevice::DeleteSymbolicLink(this->m_Device);
  FxPkgPnp::PnpEventRemovedCommonCode(this);
  _a1 = this->m_Description;
  if ( _a1 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0x13u, WPP_FxPkgPdo_cpp_Traceguids, _a1, this);
      _a1 = this->m_Description;
    }
    FxDeviceDescriptionEntry::ProcessDeviceRemoved(_a1);
    this->m_Description = 0LL;
  }
  return 309LL;
}
