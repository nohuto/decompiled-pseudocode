/*
 * XREFs of PnpSetRegistryResourceList @ 0x140827894
 * Callers:
 *     IoReportDetectedDevice @ 0x14072D240 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1401B8D70 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401B9B90 (ZwDeleteValueKey.c)
 *     PnpDetermineResourceListSize @ 0x1406FBAAC (PnpDetermineResourceListSize.c)
 */

NTSTATUS __fastcall PnpSetRegistryResourceList(HANDLE KeyHandle, __int64 a2, _DWORD *a3)
{
  ULONG DataSize; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"BootConfig");
  if ( !a3 )
    return ZwDeleteValueKey(KeyHandle, &DestinationString);
  DataSize = PnpDetermineResourceListSize(a3);
  return ZwSetValueKey(KeyHandle, &DestinationString, 0, 8u, a3, DataSize);
}
