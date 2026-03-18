/*
 * XREFs of PnpSetRegistryResourceList @ 0x14086134C
 * Callers:
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401C2690 (ZwDeleteValueKey.c)
 *     PnpDetermineResourceListSize @ 0x1407246BC (PnpDetermineResourceListSize.c)
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
