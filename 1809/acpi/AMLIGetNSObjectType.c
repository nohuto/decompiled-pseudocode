/*
 * XREFs of AMLIGetNSObjectType @ 0x1C000C844
 * Callers:
 *     ACPIBusIrpQueryHardwareId @ 0x1C008DA80 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C008EB78 (ACPIProcessorGetInitialApicId.c)
 *     ACPIProcessorDeviceControl @ 0x1C0097700 (ACPIProcessorDeviceControl.c)
 *     EnableDisableRegions @ 0x1C009A358 (EnableDisableRegions.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009B4E0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C009D250 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C009D5A4 (ACPIBusIrpQueryDeviceId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectType(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)a1 + 66LL);
}
