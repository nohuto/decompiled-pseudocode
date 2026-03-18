/*
 * XREFs of ?IsInSpecialUse@FxPkgPnp@@IEAAEXZ @ 0x1C007CFE4
 * Callers:
 *     ?PnpEventQueryRemoveStaticCheck@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007DD70 (-PnpEventQueryRemoveStaticCheck@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventQueryStopStaticCheck@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007DFA0 (-PnpEventQueryStopStaticCheck@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C00845AC (-HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z.c)
 *     ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C0086A08 (-SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxPkgPnp::IsInSpecialUse(FxPkgPnp *this)
{
  unsigned __int8 result; // al

  result = 0;
  if ( this->m_SpecialFileCount[0]
    || this->m_SpecialFileCount[1]
    || this->m_SpecialFileCount[2]
    || this->m_SpecialFileCount[3]
    || this->m_SpecialFileCount[5] )
  {
    return 1;
  }
  return result;
}
