/*
 * XREFs of RtlPrefixUnicodeString @ 0x140653340
 * Callers:
 *     SepPotentialGlobalTableAttribute @ 0x14012F800 (SepPotentialGlobalTableAttribute.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402F22EC (PopFxBuildDripsBlockingDeviceList.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1405BFF38 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmValidateDeviceInterfaceName @ 0x1405C29A0 (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405C2C80 (_CmOpenDeviceRegKeyWorker.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     SepIsMinTCB @ 0x1406185D0 (SepIsMinTCB.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x140619E8C (AuthzBasepIsCompareRelevantAttribute.c)
 *     SepValidateReferencedCachedHandles @ 0x14061E3F8 (SepValidateReferencedCachedHandles.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1406217BC (SepAdtAuditObjectAccessWithContext.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140625474 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     ObCheckRefTraceProcess @ 0x140672700 (ObCheckRefTraceProcess.c)
 *     _CmIsRootEnumeratedDevice @ 0x1406A2E4C (_CmIsRootEnumeratedDevice.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406D430C (RtlpProcessIFEOKeyFilter.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406F1234 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x1406F60F8 (_CmGetDeviceInterfacePathFormat.c)
 *     PiNormalizeDeviceText @ 0x1406FE3AC (PiNormalizeDeviceText.c)
 *     IopBuildFullDriverPath @ 0x14070D600 (IopBuildFullDriverPath.c)
 *     IopQueryRegistryKeySystemPath @ 0x14070D890 (IopQueryRegistryKeySystemPath.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1407162F0 (PiPnpRtlEnumeratorFilterCallback.c)
 *     PopDirectedDripsNotifyDeviceStarted @ 0x14071B1E4 (PopDirectedDripsNotifyDeviceStarted.c)
 *     IopValidateJunctionTarget @ 0x1408556CC (IopValidateJunctionTarget.c)
 *     PiCreateRegistryPath @ 0x14085F748 (PiCreateRegistryPath.c)
 *     PiOpenDirectoryWithRoot @ 0x14085FC94 (PiOpenDirectoryWithRoot.c)
 *     PiDevCfgMakeServiceBootStart @ 0x140867EA0 (PiDevCfgMakeServiceBootStart.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140879864 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x14087A338 (PiDrvDbResolveKeyFilePaths.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14087C5A0 (PiCreateDriverSwDeviceCallback.c)
 *     ObpIsUnsecureName @ 0x14089D698 (ObpIsUnsecureName.c)
 *     PopBatteryDeviceState @ 0x1408A9948 (PopBatteryDeviceState.c)
 *     PopDirectedDripsIsUsbHubDevice @ 0x1408B986C (PopDirectedDripsIsUsbHubDevice.c)
 *     PopDirectedDripsNotifyUsbDeviceStarted @ 0x1408B98BC (PopDirectedDripsNotifyUsbDeviceStarted.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1409340AC (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140934710 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140934D90 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140936734 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140939528 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140939E90 (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     NLS_UPCASE @ 0x140092980 (NLS_UPCASE.c)
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
