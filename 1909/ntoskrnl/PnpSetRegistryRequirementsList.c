/*
 * XREFs of PnpSetRegistryRequirementsList @ 0x1408612E0
 * Callers:
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401C2690 (ZwDeleteValueKey.c)
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
