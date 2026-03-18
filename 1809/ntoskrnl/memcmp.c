/*
 * XREFs of memcmp @ 0x1401961E0
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x140012AF4 (InsertEventEntryInLookUpTable.c)
 *     RtlpOwnerAcesPresent @ 0x1400133C0 (RtlpOwnerAcesPresent.c)
 *     SepPotentialGlobalTableAttribute @ 0x140014114 (SepPotentialGlobalTableAttribute.c)
 *     RtlFindAceBySid @ 0x1400160E0 (RtlFindAceBySid.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepMandatoryIntegrityCheck @ 0x140052270 (SepMandatoryIntegrityCheck.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1400A3EE0 (RtlpIsNameInExpressionPrivate.c)
 *     RtlEqualSid @ 0x1400A7DD0 (RtlEqualSid.c)
 *     RtlSidDominates @ 0x1400A9210 (RtlSidDominates.c)
 *     RtlSidHashLookup @ 0x1400AAC00 (RtlSidHashLookup.c)
 *     SepMaximumAccessCheck @ 0x1400AAD80 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1400AB350 (SepNormalAccessCheck.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x1400D9064 (AuthzBasepFindSecurityAttributeValue.c)
 *     RtlAreNamesEqual @ 0x14010B2A0 (RtlAreNamesEqual.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14013ADD8 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140145910 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     IoRaiseInformationalHardError @ 0x140283400 (IoRaiseInformationalHardError.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x140283F34 (IopIsKnownGoodLegacyFsFilter.c)
 *     KiDisplayBlueScreen @ 0x140292474 (KiDisplayBlueScreen.c)
 *     MiIdealClusterPage @ 0x1402C6B14 (MiIdealClusterPage.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1403253DC (AuthzBasepCompareOctetStringOperands.c)
 *     PropertyEval @ 0x140591A70 (PropertyEval.c)
 *     PiPnpRtlObjectActionCallback @ 0x1405983A0 (PiPnpRtlObjectActionCallback.c)
 *     PiPnpRtlCmActionCallback @ 0x140599080 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140599A98 (PiDmObjectUpdateCachedObjectProperty.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14059C504 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     ExQueryLicenseValueInternal @ 0x1405A0260 (ExQueryLicenseValueInternal.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A0AD0 (ExUpdateLicenseDataInternal.c)
 *     CmpFindMatchingDescriptorCell @ 0x1405AD000 (CmpFindMatchingDescriptorCell.c)
 *     RtlFindUnicodeSubstring @ 0x1405B8440 (RtlFindUnicodeSubstring.c)
 *     ObLogSecurityDescriptor @ 0x1405C9E70 (ObLogSecurityDescriptor.c)
 *     PopEtAggregateFind @ 0x1405FD070 (PopEtAggregateFind.c)
 *     PfSnEndProcessTrace @ 0x140606950 (PfSnEndProcessTrace.c)
 *     ExpWnfFindScopeInstance @ 0x140610984 (ExpWnfFindScopeInstance.c)
 *     EtwpStartLogger @ 0x1406591C0 (EtwpStartLogger.c)
 *     SepSidInSidAndAttributes @ 0x14065B87C (SepSidInSidAndAttributes.c)
 *     NtSetSystemInformation @ 0x140663E10 (NtSetSystemInformation.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140666140 (PfSnPrefetchCacheEntryUpdate.c)
 *     PfSnPrefetchCacheEntryGet @ 0x140668158 (PfSnPrefetchCacheEntryGet.c)
 *     sub_140685860 @ 0x140685860 (sub_140685860.c)
 *     RtlpInternEntryMatch @ 0x14069F628 (RtlpInternEntryMatch.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406A0220 (FsRtlNotifyFilterReportChange.c)
 *     TraitsCompare @ 0x1406A3E54 (TraitsCompare.c)
 *     MiVerifyImageHeader @ 0x1406B48E4 (MiVerifyImageHeader.c)
 *     ConstraintEval @ 0x1406BDDB0 (ConstraintEval.c)
 *     EtwpGenerateFileName @ 0x1406CF55C (EtwpGenerateFileName.c)
 *     PiDcCompareUpdateProperties @ 0x1406D99B0 (PiDcCompareUpdateProperties.c)
 *     PnpProcessTargetDeviceEvent @ 0x1406EB0E0 (PnpProcessTargetDeviceEvent.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406F223C (PiDmObjectProcessPropertyChange.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140705B38 (PiDevCfgGetKeySecurityDescriptor.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140734DE4 (RtlpUpdateDynamicTimeZones.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1407350C4 (RtlpCheckDynamicTimeZoneInformation.c)
 *     PopApplyPolicy @ 0x1407476D4 (PopApplyPolicy.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x140761640 (TtmpDisplayBurstPowerSettingCallback.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140761FD8 (PiSwDoesCreateChangesRequireReEnum.c)
 *     FsRtlIsDbcsInExpression @ 0x140815A90 (FsRtlIsDbcsInExpression.c)
 *     PiDevCfgResolveVariableExpression @ 0x14082EF50 (PiDevCfgResolveVariableExpression.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14084A5B8 (AlpcpEnterStateChangeEventMessageLog.c)
 *     RtlReplaceSidInSd @ 0x140893F00 (RtlReplaceSidInSd.c)
 *     SeExamineSacl @ 0x1408A06B0 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1408A0FE0 (SepExamineSaclEx.c)
 *     SepSecureBootManifestCompareElements @ 0x1408A3540 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1408A36C0 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     EtwpCompareGuid @ 0x1408C3120 (EtwpCompareGuid.c)
 *     EtwpUpdateDisallowedGuids @ 0x1408C313C (EtwpUpdateDisallowedGuids.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1408E6188 (SdbpCheckMatchingRegistryValue.c)
 *     BiExportEfiBootManager @ 0x1408F36A8 (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x1408F4BE8 (BiUpdateEfiEntry.c)
 *     IovpExamineIrpStackForwarding @ 0x14092FB98 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x140941DD4 (ViCtxEqualExtendedState.c)
 *     CmpGetBiosDate @ 0x1409C2A94 (CmpGetBiosDate.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1409CA088 (PipCheckSystemFirmwareUpdated.c)
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
