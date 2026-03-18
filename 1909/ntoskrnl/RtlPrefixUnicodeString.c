/*
 * XREFs of RtlPrefixUnicodeString @ 0x140666440
 * Callers:
 *     SepPotentialGlobalTableAttribute @ 0x14013028C (SepPotentialGlobalTableAttribute.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402F204C (PopFxBuildDripsBlockingDeviceList.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1405C0408 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmValidateDeviceInterfaceName @ 0x1405C2E70 (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405C3150 (_CmOpenDeviceRegKeyWorker.c)
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     SepIsMinTCB @ 0x14061A0E0 (SepIsMinTCB.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x14061B99C (AuthzBasepIsCompareRelevantAttribute.c)
 *     SepValidateReferencedCachedHandles @ 0x14061FF14 (SepValidateReferencedCachedHandles.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1406232DC (SepAdtAuditObjectAccessWithContext.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140629324 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmIsRootEnumeratedDevice @ 0x14067032C (_CmIsRootEnumeratedDevice.c)
 *     ObCheckRefTraceProcess @ 0x140677E14 (ObCheckRefTraceProcess.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406D39F4 (RtlpProcessIFEOKeyFilter.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406F2CD4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x1406F7EB8 (_CmGetDeviceInterfacePathFormat.c)
 *     PiNormalizeDeviceText @ 0x14070018C (PiNormalizeDeviceText.c)
 *     IopBuildFullDriverPath @ 0x14070F3E0 (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x14070F670 (IopQueryRegistryKeySystemPath.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1407180E0 (PiPnpRtlEnumeratorFilterCallback.c)
 *     PopDirectedDripsNotifyDeviceStarted @ 0x14071CFD4 (PopDirectedDripsNotifyDeviceStarted.c)
 *     IopValidateJunctionTarget @ 0x140854DCC (IopValidateJunctionTarget.c)
 *     PiCreateRegistryPath @ 0x14085EE48 (PiCreateRegistryPath.c)
 *     PiOpenDirectoryWithRoot @ 0x14085F394 (PiOpenDirectoryWithRoot.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408675A0 (PiDevCfgMakeServiceBootStart.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140878F64 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x140879A38 (PiDrvDbResolveKeyFilePaths.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14087BCA0 (PiCreateDriverSwDeviceCallback.c)
 *     ObpIsUnsecureName @ 0x14089CEB8 (ObpIsUnsecureName.c)
 *     PopBatteryDeviceState @ 0x1408A91A8 (PopBatteryDeviceState.c)
 *     PopDirectedDripsIsUsbHubDevice @ 0x1408B913C (PopDirectedDripsIsUsbHubDevice.c)
 *     PopDirectedDripsNotifyUsbDeviceStarted @ 0x1408B918C (PopDirectedDripsNotifyUsbDeviceStarted.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140933B20 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140934184 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140934804 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1409361A4 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140938F98 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140939900 (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     NLS_UPCASE @ 0x1400CFCA0 (NLS_UPCASE.c)
 */

BOOLEAN __stdcall RtlPrefixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  wchar_t *Buffer; // r9
  wchar_t *v4; // rbx
  char *v5; // rdi
  unsigned __int16 v6; // cx
  unsigned __int16 v8; // r11
  unsigned __int16 v9; // ax
  __int16 v10; // r10
  char *v11; // rcx

  Buffer = String1->Buffer;
  if ( String2->Length >= String1->Length )
  {
    v4 = (wchar_t *)((char *)Buffer + String1->Length);
    if ( Buffer >= v4 )
      return 1;
    if ( CaseInSensitive )
    {
      v5 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( 1 )
      {
        v6 = *(wchar_t *)((char *)Buffer + (_QWORD)v5);
        if ( *Buffer != v6 )
        {
          NLS_UPCASE(v6);
          v9 = NLS_UPCASE(v8);
          if ( v9 != v10 )
            break;
        }
        if ( ++Buffer >= v4 )
          return 1;
      }
    }
    else
    {
      v11 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( *Buffer == *(wchar_t *)((char *)Buffer + (_QWORD)v11) )
      {
        if ( ++Buffer >= v4 )
          return 1;
      }
    }
  }
  return 0;
}
