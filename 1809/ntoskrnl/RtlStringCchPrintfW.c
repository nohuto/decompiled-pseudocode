/*
 * XREFs of RtlStringCchPrintfW @ 0x1400922E8
 * Callers:
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1403299B0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140587E88 (ExpHwidSysVolIfGetDiskInfo.c)
 *     IoWMIOpenBlock @ 0x140612760 (IoWMIOpenBlock.c)
 *     IoCreateDevice @ 0x140653B90 (IoCreateDevice.c)
 *     SepValidateReferencedCachedHandles @ 0x14065E81C (SepValidateReferencedCachedHandles.c)
 *     EtwpPsProvTraceProcess @ 0x14066D210 (EtwpPsProvTraceProcess.c)
 *     RtlpInitNlsSectionName @ 0x1406C63BC (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x1406C6420 (RtlpInitNlsFileName.c)
 *     ExpCheckPortableOperatingSystem @ 0x1406C884C (ExpCheckPortableOperatingSystem.c)
 *     IopBootLog @ 0x1406D04D4 (IopBootLog.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1406EAAF0 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406F4C00 (PiDevCfgLogDeviceConfigured.c)
 *     IopCreateArcName @ 0x14070C6A8 (IopCreateArcName.c)
 *     PipMakeGloballyUniqueId @ 0x14070D190 (PipMakeGloballyUniqueId.c)
 *     MiSessionObjectCreate @ 0x14071655C (MiSessionObjectCreate.c)
 *     AslpFileQueryVersionString @ 0x140720CA4 (AslpFileQueryVersionString.c)
 *     AslGuidToString @ 0x140724914 (AslGuidToString.c)
 *     IoCreateDriver @ 0x14073B280 (IoCreateDriver.c)
 *     PiDrvDbRegisterNode @ 0x14073BC40 (PiDrvDbRegisterNode.c)
 *     _SysCtxOpenControlSet @ 0x14073CE88 (_SysCtxOpenControlSet.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407468F8 (IopCopyBootLogRegistryToFile.c)
 *     PiDrvDbRegisterNodeCallback @ 0x140764A60 (PiDrvDbRegisterNodeCallback.c)
 *     PiDevCfgResolveVariableExpression @ 0x140830190 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x140831360 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x140832430 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x14083BAB0 (IopCreateLegacyDeviceIds.c)
 *     PspShutdownCsrProcess @ 0x140888854 (PspShutdownCsrProcess.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14089600C (RtlpGetTokenNamedObjectPath.c)
 *     SepReadAndInsertCaps @ 0x1408A5AA4 (SepReadAndInsertCaps.c)
 *     EncloseSubCondition @ 0x1408A83A4 (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x1408A94A8 (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x1408ABB30 (LocalpGetStringForCondition.c)
 *     CMFFlushHitsFile @ 0x1408D9EA8 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1408DA760 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1408E723C (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x1408EA3D4 (AslGuidToString_UStr.c)
 *     PipInitComputerIds @ 0x1409C9C60 (PipInitComputerIds.c)
 *     IopCreateArcNamesDisk @ 0x1409D77C0 (IopCreateArcNamesDisk.c)
 *     IopReassignSystemRoot @ 0x1409DC7D0 (IopReassignSystemRoot.c)
 * Callees:
 *     _vsnwprintf @ 0x140194D60 (_vsnwprintf.c)
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
