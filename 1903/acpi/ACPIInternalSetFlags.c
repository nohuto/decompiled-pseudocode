/*
 * XREFs of ACPIInternalSetFlags @ 0x1C0001884
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C008F640 (ACPIBusIrpQueryId.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C00936D4 (ACPIQueryCacheCoherencyAttribute.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C00938B8 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0097C44 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     PcisuppAcquirePciInterfaces @ 0x1C00A25F0 (PcisuppAcquirePciInterfaces.c)
 *     ACPIInternalIsPci @ 0x1C00A2790 (ACPIInternalIsPci.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C00AF240 (ACPIFilterIrpQueryIdCompletion.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalSetFlags(void *a1, unsigned __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedOr64((volatile signed __int64 *)a1, a2);
}
