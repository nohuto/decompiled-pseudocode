/*
 * XREFs of OSOpenHandle @ 0x1C008D2B4
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008D3EC (ACPIRegReadAMLRegistryEntry.c)
 *     OSReadRegValue @ 0x1C00945C8 (OSReadRegValue.c)
 *     ACPIInitGlobalHeapSize @ 0x1C0094958 (ACPIInitGlobalHeapSize.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C0095A5C (ACPIThermalGetOverrideHandle.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00AE314 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C00AE994 (OSOpenAMLINamespaceOverrideHandle.c)
 *     OSOpenNextSubkey @ 0x1C00AEC98 (OSOpenNextSubkey.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00B8728 (ACPIInitGetPlatformOverrides.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00B9108 (ACPIInitReadRegistryKeys.c)
 *     AcpiDiagInitialize @ 0x1C00B9BB4 (AcpiDiagInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00025B8 (WPP_RECORDER_SF_L.c)
 *     OSOpenUnicodeHandle @ 0x1C008D33C (OSOpenUnicodeHandle.c)
 */

__int64 __fastcall OSOpenHandle(PCSZ SourceString, __int64 a2, __int64 a3)
{
  NTSTATUS v5; // ebx
  NTSTATUS v7; // [rsp+28h] [rbp-30h]
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  RtlInitAnsiString(&DestinationString, SourceString);
  v5 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  if ( v5 < 0 )
  {
    v7 = v5;
    WPP_RECORDER_SF_L(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      0xCu,
      (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
      v7);
  }
  else
  {
    v5 = OSOpenUnicodeHandle(&UnicodeString, a2, a3);
    RtlFreeUnicodeString(&UnicodeString);
  }
  return (unsigned int)v5;
}
