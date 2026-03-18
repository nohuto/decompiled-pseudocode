/*
 * XREFs of ACPIInternalClearFlags @ 0x1C000238C
 * Callers:
 *     ACPIInitStopDevice @ 0x1C008E718 (ACPIInitStopDevice.c)
 *     ACPIInternalSetSpare @ 0x1C00994C8 (ACPIInternalSetSpare.c)
 *     ACPIDetectFilterMatch @ 0x1C009A720 (ACPIDetectFilterMatch.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C009B9E8 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIDockIrpEject @ 0x1C00A7AA0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpStartDevice @ 0x1C00A89A0 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C00A9A50 (ACPIBusAndFilterIrpEject.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00B22C0 (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalClearFlags(void *a1, __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedAnd64((volatile signed __int64 *)a1, ~a2);
}
