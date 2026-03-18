/*
 * XREFs of OSCloseHandle @ 0x1C009C96C
 * Callers:
 *     ACPIRootPowerCallBack @ 0x1C0031390 (ACPIRootPowerCallBack.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C0064384 (AMLIAddNextNamespaceOverride.c)
 *     AcpiDiagInitialize @ 0x1C00BC294 (AcpiDiagInitialize.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00BC384 (ACPIInitGetPlatformOverrides.c)
 *     AMLIInitialize @ 0x1C00BC5B4 (AMLIInitialize.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00BCB94 (ACPIInitReadRegistryKeys.c)
 *     OSReadAcpiConfigurationData @ 0x1C00BD1D0 (OSReadAcpiConfigurationData.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00BD504 (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall OSCloseHandle(void *a1)
{
  return ZwClose(a1);
}
