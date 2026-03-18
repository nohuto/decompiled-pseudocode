/*
 * XREFs of RtlStringCchPrintfW @ 0x140087CC8
 * Callers:
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14034B050 (DrvDbGetConfigurationSubKeyCallback.c)
 *     SepValidateReferencedCachedHandles @ 0x14061E3F8 (SepValidateReferencedCachedHandles.c)
 *     RtlpInitNlsSectionName @ 0x14061E8AC (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x14061F4A4 (RtlpInitNlsFileName.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140621DB4 (ExpHwidSysVolIfGetDiskInfo.c)
 *     IoCreateDevice @ 0x140681110 (IoCreateDevice.c)
 *     EtwpPsProvTraceProcess @ 0x1406906B0 (EtwpPsProvTraceProcess.c)
 *     ExpCheckPortableOperatingSystem @ 0x1406E842C (ExpCheckPortableOperatingSystem.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406FBBB4 (PiDevCfgLogDeviceConfigured.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140701A0C (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     IopBootLog @ 0x140709A10 (IopBootLog.c)
 *     IoWMIOpenBlock @ 0x14070B840 (IoWMIOpenBlock.c)
 *     IopCreateArcName @ 0x1407369D8 (IopCreateArcName.c)
 *     PipMakeGloballyUniqueId @ 0x140737660 (PipMakeGloballyUniqueId.c)
 *     MiSessionObjectCreate @ 0x14073FCC0 (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x140754B70 (IoCreateDriver.c)
 *     _SysCtxOpenControlSet @ 0x1407555F8 (_SysCtxOpenControlSet.c)
 *     PiDrvDbRegisterNode @ 0x140756450 (PiDrvDbRegisterNode.c)
 *     IopCopyBootLogRegistryToFile @ 0x140769BE0 (IopCopyBootLogRegistryToFile.c)
 *     AslGuidToString @ 0x140772880 (AslGuidToString.c)
 *     PiDrvDbRegisterNodeCallback @ 0x14078A310 (PiDrvDbRegisterNodeCallback.c)
 *     PiDevCfgResolveVariableExpression @ 0x140869800 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14086AAE0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14086BBB0 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x1408755E4 (IopCreateLegacyDeviceIds.c)
 *     PspShutdownCsrProcess @ 0x1408C5984 (PspShutdownCsrProcess.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1408D2CBC (RtlpGetTokenNamedObjectPath.c)
 *     SepReadAndInsertCaps @ 0x1408E30A4 (SepReadAndInsertCaps.c)
 *     EncloseSubCondition @ 0x1408E44C8 (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x1408E5584 (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x1408E7AA0 (LocalpGetStringForCondition.c)
 *     CMFFlushHitsFile @ 0x140915E7C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1409167B0 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14092265C (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x140925D90 (AslGuidToString_UStr.c)
 *     AslpFileQueryVersionString @ 0x14092B470 (AslpFileQueryVersionString.c)
 *     IopCreateArcNamesDisk @ 0x1409F509C (IopCreateArcNamesDisk.c)
 *     PipInitComputerIds @ 0x1409F5B3C (PipInitComputerIds.c)
 *     IopReassignSystemRoot @ 0x140A1E38C (IopReassignSystemRoot.c)
 * Callees:
 *     _vsnwprintf @ 0x14019F320 (_vsnwprintf.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS v4; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cchDest - 1;
    v4 = 0;
    v6 = vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      pszDest[v5] = 0;
      return -2147483643;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  return v4;
}
