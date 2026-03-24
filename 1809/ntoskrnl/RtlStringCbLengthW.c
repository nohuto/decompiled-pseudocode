/*
 * XREFs of RtlStringCbLengthW @ 0x14011CAC8
 * Callers:
 *     AslpFileVerBlockGetValueOffset @ 0x140178F0C (AslpFileVerBlockGetValueOffset.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x140324374 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 *     _PnpRegQueryValueIndirect @ 0x1406A2FC0 (_PnpRegQueryValueIndirect.c)
 *     _PnpValidatePropertyData @ 0x1406A31C4 (_PnpValidatePropertyData.c)
 *     RtlpValidRelativeAttribute @ 0x1406C3450 (RtlpValidRelativeAttribute.c)
 *     PiSwIrpStartCreateWorker @ 0x1406D6E58 (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x1406D806C (PiSwCompleteCreate.c)
 *     PopValidateServiceNotification @ 0x1406E0E84 (PopValidateServiceNotification.c)
 *     AslpFileVerStringBlockGetValue @ 0x14071F960 (AslpFileVerStringBlockGetValue.c)
 *     IoReportDetectedDevice @ 0x14072D220 (IoReportDetectedDevice.c)
 *     RtlpPopulateLanguageConfigList @ 0x14073DC98 (RtlpPopulateLanguageConfigList.c)
 *     PpmRegisterProfiles @ 0x140756B84 (PpmRegisterProfiles.c)
 *     PopFxValidateReturnedUnicodeString @ 0x14086A944 (PopFxValidateReturnedUnicodeString.c)
 *     PopDiagIdleWakeSourceAccountingToDiagnostic @ 0x14086FDBC (PopDiagIdleWakeSourceAccountingToDiagnostic.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x140892EF0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140894DAC (RtlpGetTokenNamedObjectPath.c)
 *     LocalGetStringForRelativeAttribute @ 0x1408A9FD4 (LocalGetStringForRelativeAttribute.c)
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
