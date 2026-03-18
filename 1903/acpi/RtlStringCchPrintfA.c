/*
 * XREFs of RtlStringCchPrintfA @ 0x1C0005788
 * Callers:
 *     ACPIAmliDoubleToName @ 0x1C0005250 (ACPIAmliDoubleToName.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x1C0005554 (ACPIGetConvertToHardwareIDWide.c)
 *     ACPICMButtonStartWorker @ 0x1C0007290 (ACPICMButtonStartWorker.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     ACPIGetProcessorIDWide @ 0x1C0025508 (ACPIGetProcessorIDWide.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0025B70 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C0025FE8 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C0026170 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C0026474 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIBuildProcessorExtension @ 0x1C002C704 (ACPIBuildProcessorExtension.c)
 *     ACPIBuildDockExtension @ 0x1C004B10C (ACPIBuildDockExtension.c)
 *     ACPIGetConvertToStringWide @ 0x1C0055894 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C0055988 (ACPIGetConvertToStringWideWithPrepend.c)
 *     ConvertToString @ 0x1C006AF00 (ConvertToString.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C00B1D58 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00B1FD8 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C00B21EC (OSOpenAMLINamespaceOverrideHandle.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00BCB94 (ACPIInitReadRegistryKeys.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00BD504 (ACPIRegDumpAcpiTable.c)
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
