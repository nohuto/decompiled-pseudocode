/*
 * XREFs of RtlStringCchPrintfW @ 0x1400880E8
 * Callers:
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14034AAB0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     SepValidateReferencedCachedHandles @ 0x14061FF14 (SepValidateReferencedCachedHandles.c)
 *     RtlpInitNlsSectionName @ 0x1406203C8 (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x140620FC4 (RtlpInitNlsFileName.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140625C5C (ExpHwidSysVolIfGetDiskInfo.c)
 *     EtwpPsProvTraceProcess @ 0x140683C20 (EtwpPsProvTraceProcess.c)
 *     IoCreateDevice @ 0x14069F670 (IoCreateDevice.c)
 *     ExpCheckPortableOperatingSystem @ 0x1406E94CC (ExpCheckPortableOperatingSystem.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406FD994 (PiDevCfgLogDeviceConfigured.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1407037EC (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     IopBootLog @ 0x14070B7F0 (IopBootLog.c)
 *     IoWMIOpenBlock @ 0x14070D620 (IoWMIOpenBlock.c)
 *     IopCreateArcName @ 0x140738C38 (IopCreateArcName.c)
 *     PipMakeGloballyUniqueId @ 0x1407398BC (PipMakeGloballyUniqueId.c)
 *     MiSessionObjectCreate @ 0x140741BC0 (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x140755600 (IoCreateDriver.c)
 *     _SysCtxOpenControlSet @ 0x140756088 (_SysCtxOpenControlSet.c)
 *     PiDrvDbRegisterNode @ 0x140756EE0 (PiDrvDbRegisterNode.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407595AC (IopCopyBootLogRegistryToFile.c)
 *     AslGuidToString @ 0x140775E60 (AslGuidToString.c)
 *     PiDrvDbRegisterNodeCallback @ 0x14078C770 (PiDrvDbRegisterNodeCallback.c)
 *     PiDevCfgResolveVariableExpression @ 0x140868F00 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14086A1E0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14086B2B0 (PiDevCfgResolveVariableSwitchCase.c)
 *     IopCreateLegacyDeviceIds @ 0x140874CE4 (IopCreateLegacyDeviceIds.c)
 *     PspShutdownCsrProcess @ 0x1408C5264 (PspShutdownCsrProcess.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1408D25BC (RtlpGetTokenNamedObjectPath.c)
 *     SepReadAndInsertCaps @ 0x1408E289C (SepReadAndInsertCaps.c)
 *     EncloseSubCondition @ 0x1408E3DD0 (EncloseSubCondition.c)
 *     GetPrintableOperandValue @ 0x1408E4E8C (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x1408E73A8 (LocalpGetStringForCondition.c)
 *     CMFFlushHitsFile @ 0x1409158DC (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140916210 (CMFSystemThreadRoutine.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1409220BC (SdbpCheckMatchingRegistryEntry.c)
 *     AslGuidToString_UStr @ 0x1409257F0 (AslGuidToString_UStr.c)
 *     AslpFileQueryVersionString @ 0x14092AEE4 (AslpFileQueryVersionString.c)
 *     IopCreateArcNamesDisk @ 0x1409F4FAC (IopCreateArcNamesDisk.c)
 *     PipInitComputerIds @ 0x1409F5A4C (PipInitComputerIds.c)
 *     IopReassignSystemRoot @ 0x140A1E568 (IopReassignSystemRoot.c)
 * Callees:
 *     _vsnwprintf @ 0x14019FA40 (_vsnwprintf.c)
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
