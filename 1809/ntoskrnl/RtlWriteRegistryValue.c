/*
 * XREFs of RtlWriteRegistryValue @ 0x1406C2280
 * Callers:
 *     RtlSetPortableOperatingSystem @ 0x1402EFAC0 (RtlSetPortableOperatingSystem.c)
 *     ExpWriteSiloTimeZoneMarker @ 0x140583AE4 (ExpWriteSiloTimeZoneMarker.c)
 *     EtwpEnumerateKeyProviders @ 0x14072389C (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140723A18 (EtwpEnableAutoLoggerProvider.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140734DE4 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x140735014 (RtlSetActiveTimeBias.c)
 *     EtwpEnumerateAutologgerPath @ 0x140741C48 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x140741E88 (EtwStartAutoLogger.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x1407627B0 (WmipSaveGuidSecurityDescriptor.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x14089592C (RtlpSetTimeZoneInformationWorker.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1408B0C50 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     WheapCommitPolicy @ 0x1408DC1FC (WheapCommitPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401B8D70 (ZwSetValueKey.c)
 *     RtlpGetRegistryHandle @ 0x1405C7774 (RtlpGetRegistryHandle.c)
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
