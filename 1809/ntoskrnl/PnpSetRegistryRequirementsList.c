/*
 * XREFs of PnpSetRegistryRequirementsList @ 0x140827834
 * Callers:
 *     IoReportDetectedDevice @ 0x14072D240 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1401B8D70 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401B9B90 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall PnpSetRegistryRequirementsList(HANDLE KeyHandle, __int64 a2, _DWORD *a3)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"BasicConfigVector");
  if ( a3 )
    return ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xAu, a3, *a3);
  else
    return ZwDeleteValueKey(KeyHandle, &DestinationString);
}
