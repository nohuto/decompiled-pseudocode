/*
 * XREFs of RtlWriteRegistryValue @ 0x1406C3500
 * Callers:
 *     RtlSetPortableOperatingSystem @ 0x1402EFDB0 (RtlSetPortableOperatingSystem.c)
 *     ExpWriteSiloTimeZoneMarker @ 0x140584AE4 (ExpWriteSiloTimeZoneMarker.c)
 *     EtwpEnumerateKeyProviders @ 0x140724B1C (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140724C98 (EtwpEnableAutoLoggerProvider.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140735FB4 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x1407361E4 (RtlSetActiveTimeBias.c)
 *     EtwpEnumerateAutologgerPath @ 0x140742E18 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x140743058 (EtwStartAutoLogger.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x140763980 (WmipSaveGuidSecurityDescriptor.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140896B6C (RtlpSetTimeZoneInformationWorker.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1408B1E90 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     WheapCommitPolicy @ 0x1408DD49C (WheapCommitPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     RtlpGetRegistryHandle @ 0x1405C8774 (RtlpGetRegistryHandle.c)
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
