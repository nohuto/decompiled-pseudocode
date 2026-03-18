/*
 * XREFs of PnpSetRegistryResourceList @ 0x140861C4C
 * Callers:
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401C1B10 (ZwDeleteValueKey.c)
 *     PnpDetermineResourceListSize @ 0x14072281C (PnpDetermineResourceListSize.c)
 */

NTSTATUS __fastcall PnpSetRegistryResourceList(HANDLE KeyHandle, __int64 a2, _DWORD *a3)
{
  ULONG DataSize; // eax
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  RtlInitUnicodeString(&ValueName, L"BootConfig");
  if ( !a3 )
    return ZwDeleteValueKey(KeyHandle, &ValueName);
  DataSize = PnpDetermineResourceListSize(a3);
  return ZwSetValueKey(KeyHandle, &ValueName, 0, 8u, a3, DataSize);
}
