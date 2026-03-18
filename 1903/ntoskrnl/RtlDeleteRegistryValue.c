/*
 * XREFs of RtlDeleteRegistryValue @ 0x14073ACC0
 * Callers:
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1408EE0D0 (PerfDiagpSaveActiveDCLLogFileName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1401C1B10 (ZwDeleteValueKey.c)
 *     RtlpGetRegistryHandle @ 0x1405C3428 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlDeleteRegistryValue(ULONG RelativeTo, PCWSTR Path, PCWSTR ValueName)
{
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp+20h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, ValueName);
    v6 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(KeyHandle);
    return v6;
  }
  return result;
}
