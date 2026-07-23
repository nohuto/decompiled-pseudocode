/*
 * XREFs of PnpSetRegistryResourceList @ 0x140828A74
 * Callers:
 *     IoReportDetectedDevice @ 0x14072E410 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401B9D10 (ZwDeleteValueKey.c)
 *     PnpDetermineResourceListSize @ 0x1406FCD2C (PnpDetermineResourceListSize.c)
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
