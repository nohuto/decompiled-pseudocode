/*
 * XREFs of RtlStringCbLengthW @ 0x140001BA8
 * Callers:
 *     AslpFileVerBlockGetValueOffset @ 0x140345D8C (AslpFileVerBlockGetValueOffset.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x140345DF0 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     _PnpRegQueryValueIndirect @ 0x1405B5400 (_PnpRegQueryValueIndirect.c)
 *     _PnpValidatePropertyData @ 0x1405B5684 (_PnpValidatePropertyData.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 *     RtlpValidRelativeAttribute @ 0x1406E6A6C (RtlpValidRelativeAttribute.c)
 *     PiSwIrpStartCreateWorker @ 0x14071EF0C (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x140720418 (PiSwCompleteCreate.c)
 *     PopValidateServiceNotification @ 0x1407280D4 (PopValidateServiceNotification.c)
 *     IoReportDetectedDevice @ 0x140750EB0 (IoReportDetectedDevice.c)
 *     RtlpPopulateLanguageConfigList @ 0x140765A1C (RtlpPopulateLanguageConfigList.c)
 *     PpmRegisterProfiles @ 0x14077D144 (PpmRegisterProfiles.c)
 *     PopFxValidateReturnedUnicodeString @ 0x1408A6C04 (PopFxValidateReturnedUnicodeString.c)
 *     PopDiagIdleWakeSourceAccountingToDiagnostic @ 0x1408AC9D4 (PopDiagIdleWakeSourceAccountingToDiagnostic.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1408D1160 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1408D2CBC (RtlpGetTokenNamedObjectPath.c)
 *     LocalGetStringForRelativeAttribute @ 0x1408E7210 (LocalGetStringForRelativeAttribute.c)
 *     AslpFileVerStringBlockGetValue @ 0x14092B8B4 (AslpFileVerStringBlockGetValue.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rdx
  size_t v5; // rax
  size_t i; // r8
  NTSTATUS v7; // ecx

  v3 = cbMax >> 1;
  v5 = 0LL;
  if ( psz && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*psz )
        break;
      ++psz;
    }
    v7 = i == 0 ? 0xC000000D : 0;
    if ( i )
      v5 = v3 - i;
    else
      v5 = 0LL;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( pcbLength )
  {
    if ( v7 < 0 )
      *pcbLength = 0LL;
    else
      *pcbLength = 2 * v5;
  }
  return v7;
}
