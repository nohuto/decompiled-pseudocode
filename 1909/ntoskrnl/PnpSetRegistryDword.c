/*
 * XREFs of PnpSetRegistryDword @ 0x1407518DC
 * Callers:
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall PnpSetRegistryDword(HANDLE KeyHandle, const WCHAR *a2)
{
  int Data; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  Data = 1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  return ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
}
