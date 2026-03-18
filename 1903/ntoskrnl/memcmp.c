/*
 * XREFs of memcmp @ 0x1401A09F0
 * Callers:
 *     RtlFindAceBySid @ 0x140003F40 (RtlFindAceBySid.c)
 *     RtlEqualSid @ 0x1400053E0 (RtlEqualSid.c)
 *     RtlSidDominates @ 0x14000AE70 (RtlSidDominates.c)
 *     RtlSidHashLookup @ 0x14000C770 (RtlSidHashLookup.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x140084EE4 (AuthzBasepFindSecurityAttributeValue.c)
 *     SepMaximumAccessCheck @ 0x1400862C0 (SepMaximumAccessCheck.c)
 *     RtlpOwnerAcesPresent @ 0x140087F70 (RtlpOwnerAcesPresent.c)
 *     CompareEventEntry @ 0x14008ADC8 (CompareEventEntry.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140096360 (RtlpIsNameInExpressionPrivate.c)
 *     SepNormalAccessCheck @ 0x1400C7500 (SepNormalAccessCheck.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400C8790 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepMandatoryIntegrityCheck @ 0x1400C9360 (SepMandatoryIntegrityCheck.c)
 *     RtlAreNamesEqual @ 0x1400FA810 (RtlAreNamesEqual.c)
 *     SepPotentialGlobalTableAttribute @ 0x14012F800 (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140133400 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140147980 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     IoRaiseInformationalHardError @ 0x140298920 (IoRaiseInformationalHardError.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x14029942C (IopIsKnownGoodLegacyFsFilter.c)
 *     KiDisplayBlueScreen @ 0x1402A9008 (KiDisplayBlueScreen.c)
 *     MiIdealClusterPage @ 0x1402E0D7C (MiIdealClusterPage.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x140346D6C (AuthzBasepCompareOctetStringOperands.c)
 *     ConstraintEval @ 0x1405B5BA0 (ConstraintEval.c)
 *     PropertyEval @ 0x1405B7A30 (PropertyEval.c)
 *     PiPnpRtlCmActionCallback @ 0x1405BDA80 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1405BE420 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1405BEF40 (PiDmObjectUpdateCachedObjectProperty.c)
 *     ObLogSecurityDescriptor @ 0x1405C7810 (ObLogSecurityDescriptor.c)
 *     PopEtAggregateFind @ 0x1406105D8 (PopEtAggregateFind.c)
 *     SepSidInSidAndAttributes @ 0x14061F278 (SepSidInSidAndAttributes.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406244FC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     CmpFindMatchingDescriptorCell @ 0x14063D380 (CmpFindMatchingDescriptorCell.c)
 *     ExpWnfFindScopeInstance @ 0x14064488C (ExpWnfFindScopeInstance.c)
 *     RtlFindUnicodeSubstring @ 0x140657060 (RtlFindUnicodeSubstring.c)
 *     PfSnPrefetchCacheEntryGet @ 0x140659C2C (PfSnPrefetchCacheEntryGet.c)
 *     sub_140683598 @ 0x140683598 (sub_140683598.c)
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 *     RtlpInternEntryMatch @ 0x1406959D4 (RtlpInternEntryMatch.c)
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1406A7C2C (PfSnPrefetchCacheEntryUpdate.c)
 *     sub_1406AB150 @ 0x1406AB150 (sub_1406AB150.c)
 *     ExUpdateLicenseDataInternal @ 0x1406ABBE0 (ExUpdateLicenseDataInternal.c)
 *     EtwpStartLogger @ 0x1406B5160 (EtwpStartLogger.c)
 *     EtwpGenerateFileName @ 0x1406BA198 (EtwpGenerateFileName.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406C1620 (FsRtlNotifyFilterReportChange.c)
 *     TraitsCompare @ 0x1406C88A4 (TraitsCompare.c)
 *     PfSnEndProcessTrace @ 0x1406E6D0C (PfSnEndProcessTrace.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406FA2C8 (PiDmObjectProcessPropertyChange.c)
 *     PnpProcessTargetDeviceEvent @ 0x1406FF3C4 (PnpProcessTargetDeviceEvent.c)
 *     PiDcCompareUpdateProperties @ 0x140718A60 (PiDcCompareUpdateProperties.c)
 *     PopApplyPolicy @ 0x140749BB8 (PopApplyPolicy.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140760108 (RtlpUpdateDynamicTimeZones.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x14076044C (RtlpCheckDynamicTimeZoneInformation.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140788F08 (PiSwDoesCreateChangesRequireReEnum.c)
 *     FsRtlIsDbcsInExpression @ 0x14084F580 (FsRtlIsDbcsInExpression.c)
 *     PiDevCfgResolveVariableExpression @ 0x140869800 (PiDevCfgResolveVariableExpression.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140885AD8 (AlpcpEnterStateChangeEventMessageLog.c)
 *     MiComputeBadImageHeaderType @ 0x14088A4C8 (MiComputeBadImageHeaderType.c)
 *     RtlReplaceSidInSd @ 0x1408D2080 (RtlReplaceSidInSd.c)
 *     SeExamineSacl @ 0x1408DEF70 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1408DF8A0 (SepExamineSaclEx.c)
 *     SepSecureBootManifestCompareElements @ 0x1408E1E50 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1408E1FD0 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     EtwpCompareGuid @ 0x140900320 (EtwpCompareGuid.c)
 *     EtwpUpdateDisallowedGuids @ 0x14090033C (EtwpUpdateDisallowedGuids.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140922848 (SdbpCheckMatchingRegistryValue.c)
 *     BiExportEfiBootManager @ 0x14093132C (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x1409328BC (BiUpdateEfiEntry.c)
 *     IovpExamineIrpStackForwarding @ 0x14096E418 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x1409816A8 (ViCtxEqualExtendedState.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1409F6E88 (PipCheckSystemFirmwareUpdated.c)
 *     CmpGetBiosDate @ 0x140A0C6F8 (CmpGetBiosDate.c)
 * Callees:
 *     <none>
 */

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  signed __int64 v3; // rdx
  bool v4; // cf
  size_t v6; // r9
  unsigned __int64 v7; // rax
  size_t v8; // r9

  v3 = (_BYTE *)Buf2 - (_BYTE *)Buf1;
  if ( Size < 8 )
    goto LABEL_6;
  for ( ; ((unsigned __int8)Buf1 & 7) != 0; --Size )
  {
    v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
    if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
      return -v4 - (v4 - 1);
    Buf1 = (char *)Buf1 + 1;
  }
  if ( !(Size >> 3) )
  {
LABEL_6:
    if ( !Size )
      return 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
      if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 1;
      if ( !--Size )
        return 0;
    }
    return -v4 - (v4 - 1);
  }
  v6 = Size >> 5;
  if ( Size >> 5 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      v7 = *((_QWORD *)Buf1 + 1);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 8) )
        goto LABEL_24;
      v7 = *((_QWORD *)Buf1 + 2);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 16) )
        goto LABEL_23;
      v7 = *((_QWORD *)Buf1 + 3);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 24) )
      {
        Buf1 = (char *)Buf1 + 8;
LABEL_23:
        Buf1 = (char *)Buf1 + 8;
LABEL_24:
        Buf1 = (char *)Buf1 + 8;
        break;
      }
      Buf1 = (char *)Buf1 + 32;
      if ( !--v6 )
      {
        Size &= 0x1Fu;
        goto LABEL_18;
      }
    }
  }
  else
  {
LABEL_18:
    v8 = Size >> 3;
    if ( !(Size >> 3) )
      goto LABEL_6;
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 8;
      if ( !--v8 )
      {
        Size &= 7u;
        goto LABEL_6;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(_QWORD *)((char *)Buf1 + v3));
  return -v4 - (v4 - 1);
}
