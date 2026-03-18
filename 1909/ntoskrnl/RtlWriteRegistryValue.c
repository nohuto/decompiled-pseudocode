/*
 * XREFs of RtlWriteRegistryValue @ 0x1406E41C0
 * Callers:
 *     RtlSetPortableOperatingSystem @ 0x14030E1C0 (RtlSetPortableOperatingSystem.c)
 *     EtwpEnumerateKeyProviders @ 0x14074B0B4 (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14074B208 (EtwpEnableAutoLoggerProvider.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140764B10 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x140764D88 (RtlSetActiveTimeBias.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407705F8 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x140770860 (EtwStartAutoLogger.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x14078B820 (WmipSaveGuidSecurityDescriptor.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1408D315C (RtlpSetTimeZoneInformationWorker.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1408ED9E0 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     WheapCommitPolicy @ 0x140919F04 (WheapCommitPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     RtlpGetRegistryHandle @ 0x1405C38F8 (RtlpGetRegistryHandle.c)
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
