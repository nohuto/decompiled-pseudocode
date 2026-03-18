/*
 * XREFs of ?SetSpecialFileSupport@FxPkgPnp@@QEAAXW4_WDF_SPECIAL_FILE_TYPE@@E@Z @ 0x1C0085930
 * Callers:
 *     imp_WdfDeviceSetSpecialFileSupport @ 0x1C004B060 (imp_WdfDeviceSetSpecialFileSupport.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x1C003B494 (WPP_IFR_SF_D.c)
 *     ?_UsageToSpecialType@FxPkgPnp@@KA?AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@@Z @ 0x1C0085F20 (-_UsageToSpecialType@FxPkgPnp@@KA-AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@.c)
 */

void __fastcall FxPkgPnp::SetSpecialFileSupport(
        FxPkgPnp *this,
        _DEVICE_USAGE_NOTIFICATION_TYPE FileType,
        unsigned __int8 Supported)
{
  _WDF_SPECIAL_FILE_TYPE v3; // eax
  char v4; // r8
  __int64 v5; // r10

  if ( (unsigned int)(FileType - 1) > 3 )
  {
    WPP_IFR_SF_D(this->m_Globals, FileType, 0xCu, 0x23u, WPP_FxPkgPnp_cpp_Traceguids, FileType);
  }
  else
  {
    v3 = FxPkgPnp::_UsageToSpecialType(FileType);
    *(_BYTE *)((unsigned int)(v3 - 1) + v5 + 273) = v4;
  }
}
