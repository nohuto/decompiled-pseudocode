/*
 * XREFs of PopThermalWriteShutdownToRegistry @ 0x1402F7BD8
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140196720 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalProcessUsermodeEvent @ 0x1408A862C (PopThermalProcessUsermodeEvent.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     PopOpenThermalLoggingKey @ 0x14019C06C (PopOpenThermalLoggingKey.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall PopThermalWriteShutdownToRegistry(__int64 a1, void *a2)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v7; // [rsp+50h] [rbp-10h] BYREF
  int Data; // [rsp+80h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+28h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  *(_QWORD *)&v7.Length = 0LL;
  v7.Buffer = 0LL;
  result = PopOpenThermalLoggingKey(0, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"ShutdownOccurred");
    RtlInitUnicodeString(&ValueName, L"ShutdownSource");
    RtlInitUnicodeString(&v7, L"ShutdownTemperature");
    Data = 1;
    result = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    if ( !PopThermalCriticalShutdownReported )
    {
      if ( a1 )
        result = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, *(PVOID *)(a1 + 8), *(unsigned __int16 *)(a1 + 2));
      if ( a2 )
        result = ZwSetValueKey(KeyHandle, &v7, 0, 4u, a2, 4u);
    }
    PopThermalCriticalShutdownReported = 1;
    if ( KeyHandle )
      return ZwClose(KeyHandle);
  }
  return result;
}
