/*
 * XREFs of RtlStringCbLengthW @ 0x140001BA8
 * Callers:
 *     AslpFileVerBlockGetValueOffset @ 0x1403457EC (AslpFileVerBlockGetValueOffset.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x140345850 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     _PnpRegQueryValueIndirect @ 0x1405B57E0 (_PnpRegQueryValueIndirect.c)
 *     _PnpValidatePropertyData @ 0x1405B5A64 (_PnpValidatePropertyData.c)
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 *     RtlpValidRelativeAttribute @ 0x1406E7CF8 (RtlpValidRelativeAttribute.c)
 *     PiSwIrpStartCreateWorker @ 0x140720DAC (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x1407222B8 (PiSwCompleteCreate.c)
 *     PopValidateServiceNotification @ 0x140729444 (PopValidateServiceNotification.c)
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 *     RtlpPopulateLanguageConfigList @ 0x14076A51C (RtlpPopulateLanguageConfigList.c)
 *     PpmRegisterProfiles @ 0x14077FA64 (PpmRegisterProfiles.c)
 *     PopFxValidateReturnedUnicodeString @ 0x1408A6464 (PopFxValidateReturnedUnicodeString.c)
 *     PopDiagIdleWakeSourceAccountingToDiagnostic @ 0x1408AC234 (PopDiagIdleWakeSourceAccountingToDiagnostic.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1408D0A60 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1408D25BC (RtlpGetTokenNamedObjectPath.c)
 *     LocalGetStringForRelativeAttribute @ 0x1408E6B18 (LocalGetStringForRelativeAttribute.c)
 *     AslpFileVerStringBlockGetValue @ 0x14092B328 (AslpFileVerStringBlockGetValue.c)
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
