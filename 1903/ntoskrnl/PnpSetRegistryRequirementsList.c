/*
 * XREFs of PnpSetRegistryRequirementsList @ 0x140861BE0
 * Callers:
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401C1B10 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall PnpSetRegistryRequirementsList(HANDLE KeyHandle, __int64 a2, _DWORD *a3)
{
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  RtlInitUnicodeString(&ValueName, L"BasicConfigVector");
  if ( a3 )
    return ZwSetValueKey(KeyHandle, &ValueName, 0, 0xAu, a3, *a3);
  else
    return ZwDeleteValueKey(KeyHandle, &ValueName);
}
