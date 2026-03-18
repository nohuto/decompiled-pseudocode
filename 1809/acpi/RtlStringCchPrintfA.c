/*
 * XREFs of RtlStringCchPrintfA @ 0x1C000C604
 * Callers:
 *     ACPIAmliDoubleToName @ 0x1C000C140 (ACPIAmliDoubleToName.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x1C000C3D0 (ACPIGetConvertToHardwareIDWide.c)
 *     ACPICMButtonStartWorker @ 0x1C000CAD0 (ACPICMButtonStartWorker.c)
 *     ACPIBuildProcessorExtension @ 0x1C0015CA4 (ACPIBuildProcessorExtension.c)
 *     ACPIGetProcessorIDWide @ 0x1C0026E28 (ACPIGetProcessorIDWide.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0027490 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C0027908 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C0027A90 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C0027D94 (ACPIGetConvertToInstanceIDWide.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     ACPIBuildDockExtension @ 0x1C0049AA4 (ACPIBuildDockExtension.c)
 *     ACPIGetConvertToStringWide @ 0x1C0053E24 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C0053F18 (ACPIGetConvertToStringWideWithPrepend.c)
 *     ConvertToString @ 0x1C0068EAC (ConvertToString.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C00AE520 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00AE790 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C00AE994 (OSOpenAMLINamespaceOverrideHandle.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00B850C (ACPIRegDumpAcpiTable.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00B9108 (ACPIInitReadRegistryKeys.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCchPrintfA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v3; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+58h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cchDest - 1;
    v3 = 0;
    v6 = _vsnprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 )
      goto LABEL_9;
    if ( v6 == v5 )
    {
      pszDest[v5] = 0;
      return v3;
    }
    if ( v6 > v5 )
    {
LABEL_9:
      pszDest[v5] = 0;
      return -2147483643;
    }
  }
  return v3;
}
