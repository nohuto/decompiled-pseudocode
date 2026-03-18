/*
 * XREFs of RtlWriteRegistryValue @ 0x1406E2D20
 * Callers:
 *     RtlSetPortableOperatingSystem @ 0x14030E770 (RtlSetPortableOperatingSystem.c)
 *     EtwpEnumerateKeyProviders @ 0x140748570 (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1407486C4 (EtwpEnableAutoLoggerProvider.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140760108 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x140760380 (RtlSetActiveTimeBias.c)
 *     EtwpEnumerateAutologgerPath @ 0x14076D7A4 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x14076DA0C (EtwStartAutoLogger.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x1407893C0 (WmipSaveGuidSecurityDescriptor.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1408D385C (RtlpSetTimeZoneInformationWorker.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1408EE0D0 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     WheapCommitPolicy @ 0x14091A4A4 (WheapCommitPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     RtlpGetRegistryHandle @ 0x1405C3428 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlWriteRegistryValue(
        ULONG RelativeTo,
        PCWSTR Path,
        PCWSTR ValueName,
        ULONG ValueType,
        PVOID ValueData,
        ULONG ValueLength)
{
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, ValueName);
    v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, ValueType & 0xFFFFFF, ValueData, ValueLength);
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(KeyHandle);
    return v10;
  }
  return result;
}
