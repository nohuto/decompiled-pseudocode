/*
 * XREFs of OSOpenHandle @ 0x1C008F2F0
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008F42C (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIInitGlobalHeapSize @ 0x1C0090B0C (ACPIInitGlobalHeapSize.c)
 *     OSReadRegValue @ 0x1C0090BC8 (OSReadRegValue.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C00933B4 (ACPIThermalGetOverrideHandle.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00B1B14 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C00B21EC (OSOpenAMLINamespaceOverrideHandle.c)
 *     OSOpenNextSubkey @ 0x1C00B24FC (OSOpenNextSubkey.c)
 *     AcpiDiagInitialize @ 0x1C00BC294 (AcpiDiagInitialize.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00BC384 (ACPIInitGetPlatformOverrides.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00BCB94 (ACPIInitReadRegistryKeys.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0001A78 (WPP_RECORDER_SF_L.c)
 *     OSOpenUnicodeHandle @ 0x1C008F38C (OSOpenUnicodeHandle.c)
 */

__int64 __fastcall OSOpenHandle(PCSZ SourceString, __int64 a2, __int64 a3)
{
  NTSTATUS v5; // ebx
  NTSTATUS v7; // [rsp+28h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  struct _STRING SourceStringa; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&SourceStringa.Length = 0LL;
  SourceStringa.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitAnsiString(&SourceStringa, SourceString);
  v5 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceStringa, 1u);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = v5;
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0xCu,
        (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
        v7,
        *(_QWORD *)&DestinationString.Length,
        DestinationString.Buffer);
    }
  }
  else
  {
    v5 = OSOpenUnicodeHandle(&DestinationString, a2, a3);
    RtlFreeUnicodeString(&DestinationString);
  }
  return (unsigned int)v5;
}
