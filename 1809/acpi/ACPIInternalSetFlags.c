/*
 * XREFs of ACPIInternalSetFlags @ 0x1C00023BC
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C008D5E0 (ACPIBusIrpQueryId.c)
 *     PcisuppAcquirePciInterfaces @ 0x1C008E1FC (PcisuppAcquirePciInterfaces.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0096BC0 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0096E00 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C009B9E8 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIInternalIsPci @ 0x1C009FC0C (ACPIInternalIsPci.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C00ABB50 (ACPIFilterIrpQueryIdCompletion.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalSetFlags(void *a1, unsigned __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedOr64((volatile signed __int64 *)a1, a2);
}
