/*
 * XREFs of RtlStringCchPrintfW @ 0x1400923A8
 * Callers:
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1403296C0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140586E88 (ExpHwidSysVolIfGetDiskInfo.c)
 *     IoWMIOpenBlock @ 0x140611760 (IoWMIOpenBlock.c)
 *     IoCreateDevice @ 0x1406529F0 (IoCreateDevice.c)
 *     SepValidateReferencedCachedHandles @ 0x14065D67C (SepValidateReferencedCachedHandles.c)
 *     EtwpPsProvTraceProcess @ 0x14066C070 (EtwpPsProvTraceProcess.c)
 *     RtlpInitNlsSectionName @ 0x1406C513C (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x1406C51A0 (RtlpInitNlsFileName.c)
 *     ExpCheckPortableOperatingSystem @ 0x1406C75CC (ExpCheckPortableOperatingSystem.c)
 *     IopBootLog @ 0x1406CF254 (IopBootLog.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1406E9870 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406F3980 (PiDevCfgLogDeviceConfigured.c)
 *     IopCreateArcName @ 0x14070B428 (IopCreateArcName.c)
 *     PipMakeGloballyUniqueId @ 0x14070BF10 (PipMakeGloballyUniqueId.c)
 *     MiSessionObjectCreate @ 0x1407152DC (MiSessionObjectCreate.c)
 *     AslpFileQueryVersionString @ 0x14071FA24 (AslpFileQueryVersionString.c)
 *     AslGuidToString @ 0x140723694 (AslGuidToString.c)
 *     IoCreateDriver @ 0x14073A0B0 (IoCreateDriver.c)
 *     PiDrvDbRegisterNode @ 0x14073AA70 (PiDrvDbRegisterNode.c)
 *     _SysCtxOpenControlSet @ 0x14073BCB8 (_SysCtxOpenControlSet.c)
 *     IopCopyBootLogRegistryToFile @ 0x140745728 (IopCopyBootLogRegistryToFile.c)
 *     PiDrvDbRegisterNodeCallback @ 0x140763890 (PiDrvDbRegisterNodeCallback.c)
 *     PiDevCfgResolveVariableExpression @ 0x14082EF50 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x140830120 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1408311F0 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x14083A870 (IopCreateLegacyDeviceIds.c)
 *     PspShutdownCsrProcess @ 0x140887614 (PspShutdownCsrProcess.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140894DCC (RtlpGetTokenNamedObjectPath.c)
 *     SepReadAndInsertCaps @ 0x1408A4864 (SepReadAndInsertCaps.c)
 *     EncloseSubCondition @ 0x1408A7164 (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x1408A8268 (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x1408AA8F0 (LocalpGetStringForCondition.c)
 *     CMFFlushHitsFile @ 0x1408D8C08 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1408D94C0 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1408E5F9C (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x1408E9134 (AslGuidToString_UStr.c)
 *     PipInitComputerIds @ 0x1409C8C60 (PipInitComputerIds.c)
 *     IopCreateArcNamesDisk @ 0x1409D67C0 (IopCreateArcNamesDisk.c)
 *     IopReassignSystemRoot @ 0x1409DB7D0 (IopReassignSystemRoot.c)
 * Callees:
 *     _vsnwprintf @ 0x140194C00 (_vsnwprintf.c)
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
