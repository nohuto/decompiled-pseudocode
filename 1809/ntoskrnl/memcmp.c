/*
 * XREFs of memcmp @ 0x140196340
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x140012AF4 (InsertEventEntryInLookUpTable.c)
 *     RtlpOwnerAcesPresent @ 0x1400133C0 (RtlpOwnerAcesPresent.c)
 *     SepPotentialGlobalTableAttribute @ 0x140014114 (SepPotentialGlobalTableAttribute.c)
 *     RtlFindAceBySid @ 0x1400160E0 (RtlFindAceBySid.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepMandatoryIntegrityCheck @ 0x140052270 (SepMandatoryIntegrityCheck.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1400A3E20 (RtlpIsNameInExpressionPrivate.c)
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     RtlSidDominates @ 0x1400A9170 (RtlSidDominates.c)
 *     RtlSidHashLookup @ 0x1400AAB60 (RtlSidHashLookup.c)
 *     SepMaximumAccessCheck @ 0x1400AACE0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1400AB2B0 (SepNormalAccessCheck.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x1400D9104 (AuthzBasepFindSecurityAttributeValue.c)
 *     RtlAreNamesEqual @ 0x14010B340 (RtlAreNamesEqual.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14013AEF8 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140145A30 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     IoRaiseInformationalHardError @ 0x1402836F0 (IoRaiseInformationalHardError.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x140284224 (IopIsKnownGoodLegacyFsFilter.c)
 *     KiDisplayBlueScreen @ 0x140292764 (KiDisplayBlueScreen.c)
 *     MiIdealClusterPage @ 0x1402C6E04 (MiIdealClusterPage.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1403256CC (AuthzBasepCompareOctetStringOperands.c)
 *     PropertyEval @ 0x140592A70 (PropertyEval.c)
 *     PiPnpRtlObjectActionCallback @ 0x1405993A0 (PiPnpRtlObjectActionCallback.c)
 *     PiPnpRtlCmActionCallback @ 0x14059A080 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14059AA98 (PiDmObjectUpdateCachedObjectProperty.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14059D504 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     ExQueryLicenseValueInternal @ 0x1405A1260 (ExQueryLicenseValueInternal.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A1AD0 (ExUpdateLicenseDataInternal.c)
 *     CmpFindMatchingDescriptorCell @ 0x1405AE000 (CmpFindMatchingDescriptorCell.c)
 *     RtlFindUnicodeSubstring @ 0x1405B9440 (RtlFindUnicodeSubstring.c)
 *     ObLogSecurityDescriptor @ 0x1405CAE70 (ObLogSecurityDescriptor.c)
 *     PopEtAggregateFind @ 0x1405FE070 (PopEtAggregateFind.c)
 *     PfSnEndProcessTrace @ 0x140607950 (PfSnEndProcessTrace.c)
 *     ExpWnfFindScopeInstance @ 0x140611984 (ExpWnfFindScopeInstance.c)
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 *     SepSidInSidAndAttributes @ 0x14065CA1C (SepSidInSidAndAttributes.c)
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1406672E0 (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1406692F8 (PfSnPrefetchCacheEntryGet.c)
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 *     RtlpInternEntryMatch @ 0x1406A08C8 (RtlpInternEntryMatch.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406A14A0 (FsRtlNotifyFilterReportChange.c)
 *     TraitsCompare @ 0x1406A50D4 (TraitsCompare.c)
 *     MiVerifyImageHeader @ 0x1406B5B64 (MiVerifyImageHeader.c)
 *     ConstraintEval @ 0x1406BF030 (ConstraintEval.c)
 *     EtwpGenerateFileName @ 0x1406D07DC (EtwpGenerateFileName.c)
 *     PiDcCompareUpdateProperties @ 0x1406DAC30 (PiDcCompareUpdateProperties.c)
 *     PnpProcessTargetDeviceEvent @ 0x1406EC360 (PnpProcessTargetDeviceEvent.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406F34BC (PiDmObjectProcessPropertyChange.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140706DB8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140735FB4 (RtlpUpdateDynamicTimeZones.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x140736294 (RtlpCheckDynamicTimeZoneInformation.c)
 *     PopApplyPolicy @ 0x1407488A4 (PopApplyPolicy.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x140762810 (TtmpDisplayBurstPowerSettingCallback.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1407631A8 (PiSwDoesCreateChangesRequireReEnum.c)
 *     FsRtlIsDbcsInExpression @ 0x140816C70 (FsRtlIsDbcsInExpression.c)
 *     PiDevCfgResolveVariableExpression @ 0x140830190 (PiDevCfgResolveVariableExpression.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14084B7F8 (AlpcpEnterStateChangeEventMessageLog.c)
 *     RtlReplaceSidInSd @ 0x140895140 (RtlReplaceSidInSd.c)
 *     SeExamineSacl @ 0x1408A18F0 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1408A2220 (SepExamineSaclEx.c)
 *     SepSecureBootManifestCompareElements @ 0x1408A4780 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1408A4900 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     EtwpCompareGuid @ 0x1408C43C0 (EtwpCompareGuid.c)
 *     EtwpUpdateDisallowedGuids @ 0x1408C43DC (EtwpUpdateDisallowedGuids.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1408E7428 (SdbpCheckMatchingRegistryValue.c)
 *     BiExportEfiBootManager @ 0x1408F4948 (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x1408F5E88 (BiUpdateEfiEntry.c)
 *     IovpExamineIrpStackForwarding @ 0x140930B98 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x140942DD4 (ViCtxEqualExtendedState.c)
 *     CmpGetBiosDate @ 0x1409C3A94 (CmpGetBiosDate.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1409CB088 (PipCheckSystemFirmwareUpdated.c)
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
