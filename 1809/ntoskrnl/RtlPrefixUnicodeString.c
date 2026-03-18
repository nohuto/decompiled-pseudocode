/*
 * XREFs of RtlPrefixUnicodeString @ 0x1405C7460
 * Callers:
 *     SepPotentialGlobalTableAttribute @ 0x140014114 (SepPotentialGlobalTableAttribute.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14059B600 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmIsRootEnumeratedDevice @ 0x14059C4CC (_CmIsRootEnumeratedDevice.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1405BB7A8 (SepAdtAuditObjectAccessWithContext.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x1405BC1C4 (AuthzBasepIsCompareRelevantAttribute.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1405C63A4 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmValidateDeviceInterfaceName @ 0x1405C6810 (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405C7030 (_CmOpenDeviceRegKeyWorker.c)
 *     PspInsertProcess @ 0x1406093A8 (PspInsertProcess.c)
 *     SepIsMinTCB @ 0x14060D770 (SepIsMinTCB.c)
 *     CmpDoParseKey @ 0x140641CC0 (CmpDoParseKey.c)
 *     SepValidateReferencedCachedHandles @ 0x14065D67C (SepValidateReferencedCachedHandles.c)
 *     IopQueryRegistryKeySystemPath @ 0x140680164 (IopQueryRegistryKeySystemPath.c)
 *     IopBuildFullDriverPath @ 0x14068063C (IopBuildFullDriverPath.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406B1AE4 (RtlpProcessIFEOKeyFilter.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x1406D5608 (_CmGetDeviceInterfacePathFormat.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406EA3A8 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PopDirectedDripsNotifyDeviceStarted @ 0x1406ED0F0 (PopDirectedDripsNotifyDeviceStarted.c)
 *     PiPnpRtlEnumeratorFilterCallback @ 0x1406F9620 (PiPnpRtlEnumeratorFilterCallback.c)
 *     PiNormalizeDeviceText @ 0x1406FDD60 (PiNormalizeDeviceText.c)
 *     IopValidateJunctionTarget @ 0x14081B6DC (IopValidateJunctionTarget.c)
 *     PiCreateRegistryPath @ 0x1408252D0 (PiCreateRegistryPath.c)
 *     PiOpenDirectoryWithRoot @ 0x1408257D0 (PiOpenDirectoryWithRoot.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14082D670 (PiDevCfgMakeServiceBootStart.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14083E394 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x14083EBA4 (PiDrvDbResolveKeyFilePaths.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14083EE88 (PiDrvDbResolveSystemFilePath.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140840BC0 (PiCreateDriverSwDeviceCallback.c)
 *     ObpIsUnsecureName @ 0x140860C34 (ObpIsUnsecureName.c)
 *     PopBatteryDeviceState @ 0x14086CE08 (PopBatteryDeviceState.c)
 *     PopDirectedDripsIsExcludedDevice @ 0x14087CBC4 (PopDirectedDripsIsExcludedDevice.c)
 *     PopDirectedDripsIsUsbHubDevice @ 0x14087CCC0 (PopDirectedDripsIsUsbHubDevice.c)
 *     PopDirectedDripsNotifyUsbDeviceStarted @ 0x14087CD10 (PopDirectedDripsNotifyUsbDeviceStarted.c)
 *     PopMarkDirectedDripsCandidateDevice @ 0x14087CE04 (PopMarkDirectedDripsCandidateDevice.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1408F640C (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1408F6A54 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1408F710C (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1408F8A70 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1408FB864 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x1408FC1C8 (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlPrefixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  wchar_t *Buffer; // rax
  wchar_t *v4; // r11
  char *v5; // rbx
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r10
  char *v9; // r8

  Buffer = String1->Buffer;
  if ( String2->Length >= String1->Length )
  {
    v4 = (wchar_t *)((char *)Buffer + String1->Length);
    if ( CaseInSensitive )
    {
      if ( Buffer < v4 )
      {
        v5 = (char *)((char *)String2->Buffer - (char *)Buffer);
        while ( 1 )
        {
          v6 = *Buffer;
          v7 = *(unsigned __int16 *)((char *)Buffer + (_QWORD)v5);
          if ( (_DWORD)v6 != (_DWORD)v7 )
          {
            if ( (unsigned int)v6 >= 0x61 )
            {
              if ( (unsigned int)v6 > 0x7A )
                LODWORD(v6) = (unsigned __int16)(v6
                                               + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v6 & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int8)v6 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v6 >> 8)]]]);
              else
                LODWORD(v6) = v6 - 32;
            }
            if ( (unsigned int)v7 >= 0x61 )
            {
              if ( (unsigned int)v7 > 0x7A )
                LODWORD(v7) = (unsigned __int16)(v7
                                               + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v7 & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int8)v7 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v7 >> 8)]]]);
              else
                LODWORD(v7) = v7 - 32;
            }
            if ( (_DWORD)v6 != (_DWORD)v7 )
              break;
          }
          if ( ++Buffer >= v4 )
            return 1;
        }
        return 0;
      }
    }
    else if ( Buffer < v4 )
    {
      v9 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( *Buffer == *(wchar_t *)((char *)Buffer + (_QWORD)v9) )
      {
        if ( ++Buffer >= v4 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}
