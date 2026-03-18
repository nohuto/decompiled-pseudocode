/*
 * XREFs of AMLIGetNSObjectType @ 0x1C0005240
 * Callers:
 *     ACPIBusIrpQueryHardwareId @ 0x1C008FB24 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C0091424 (ACPIProcessorGetInitialApicId.c)
 *     ACPIProcessorDeviceControl @ 0x1C0091C40 (ACPIProcessorDeviceControl.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0097710 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0097DE4 (ACPIBusIrpQueryDeviceId.c)
 *     EnableDisableRegions @ 0x1C009D1BC (EnableDisableRegions.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C009F364 (ACPIBusIrpQueryCompatibleId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectType(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)a1 + 66LL);
}
