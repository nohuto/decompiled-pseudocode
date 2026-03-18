/*
 * XREFs of OSCloseHandle @ 0x1C0093C68
 * Callers:
 *     ACPIRootPowerCallBack @ 0x1C0030690 (ACPIRootPowerCallBack.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C00623F8 (AMLIAddNextNamespaceOverride.c)
 *     OSReadAcpiConfigurationData @ 0x1C00B8204 (OSReadAcpiConfigurationData.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00B850C (ACPIRegDumpAcpiTable.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00B8728 (ACPIInitGetPlatformOverrides.c)
 *     AMLIInitialize @ 0x1C00B8B2C (AMLIInitialize.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00B9108 (ACPIInitReadRegistryKeys.c)
 *     AcpiDiagInitialize @ 0x1C00B9BB4 (AcpiDiagInitialize.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall OSCloseHandle(void *a1)
{
  return ZwClose(a1);
}
