/*
 * XREFs of HUBMISC_ConvertUsbDeviceIdsToString @ 0x1C002FF14
 * Callers:
 *     HUBFDO_QueryHubErrataFlags @ 0x1C0074514 (HUBFDO_QueryHubErrataFlags.c)
 *     HUBMISC_QueryAndCacheRegistryValuesForDevice @ 0x1C0079414 (HUBMISC_QueryAndCacheRegistryValuesForDevice.c)
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x1C007A630 (HUBREG_AssignUsbflagsValueForDevice.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C00010B0 (RtlStringCchPrintfA.c)
 */

NTSTATUS __fastcall HUBMISC_ConvertUsbDeviceIdsToString(unsigned __int16 *a1, char *a2, char *a3, char *a4)
{
  RtlStringCchPrintfA(a2, 5uLL, (NTSTRSAFE_PCSTR)&pActivityId.Data4[4], a1[4]);
  RtlStringCchPrintfA(a3, 5uLL, (NTSTRSAFE_PCSTR)&pActivityId.Data4[4], a1[5]);
  return RtlStringCchPrintfA(a4, 5uLL, (NTSTRSAFE_PCSTR)&pActivityId.Data4[4], a1[6]);
}
