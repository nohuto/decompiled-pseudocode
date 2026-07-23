/*
 * XREFs of RtlStringCbLengthW @ 0x14011CB38
 * Callers:
 *     AslpFileVerBlockGetValueOffset @ 0x14017900C (AslpFileVerBlockGetValueOffset.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x140324564 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 *     _PnpRegQueryValueIndirect @ 0x1406A4260 (_PnpRegQueryValueIndirect.c)
 *     _PnpValidatePropertyData @ 0x1406A4464 (_PnpValidatePropertyData.c)
 *     RtlpValidRelativeAttribute @ 0x1406C46F0 (RtlpValidRelativeAttribute.c)
 *     PiSwIrpStartCreateWorker @ 0x1406D80F8 (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x1406D930C (PiSwCompleteCreate.c)
 *     PopValidateServiceNotification @ 0x1406E2124 (PopValidateServiceNotification.c)
 *     AslpFileVerStringBlockGetValue @ 0x140720C00 (AslpFileVerStringBlockGetValue.c)
 *     IoReportDetectedDevice @ 0x14072E410 (IoReportDetectedDevice.c)
 *     RtlpPopulateLanguageConfigList @ 0x14073EE88 (RtlpPopulateLanguageConfigList.c)
 *     PpmRegisterProfiles @ 0x140757D74 (PpmRegisterProfiles.c)
 *     PopFxValidateReturnedUnicodeString @ 0x14086BBA4 (PopFxValidateReturnedUnicodeString.c)
 *     PopDiagIdleWakeSourceAccountingToDiagnostic @ 0x14087101C (PopDiagIdleWakeSourceAccountingToDiagnostic.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x140894150 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14089600C (RtlpGetTokenNamedObjectPath.c)
 *     LocalGetStringForRelativeAttribute @ 0x1408AB234 (LocalGetStringForRelativeAttribute.c)
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
