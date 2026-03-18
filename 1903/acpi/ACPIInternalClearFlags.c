/*
 * XREFs of ACPIInternalClearFlags @ 0x1C0001854
 * Callers:
 *     ACPIInternalSetSpare @ 0x1C009580C (ACPIInternalSetSpare.c)
 *     ACPIDetectFilterMatch @ 0x1C0096890 (ACPIDetectFilterMatch.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0097C44 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIInitStopDevice @ 0x1C00A2CB4 (ACPIInitStopDevice.c)
 *     ACPIDockIrpEject @ 0x1C00AAF40 (ACPIDockIrpEject.c)
 *     ACPIDockIrpStartDevice @ 0x1C00ABF60 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C00AD080 (ACPIBusAndFilterIrpEject.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00B5C78 (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ACPIInternalClearFlags(void *a1, __int64 a2)
{
  _m_prefetchw(a1);
  return _InterlockedAnd64((volatile signed __int64 *)a1, ~a2);
}
