/*
 * XREFs of memcmp @ 0x1401A1110
 * Callers:
 *     RtlFindAceBySid @ 0x140003FD0 (RtlFindAceBySid.c)
 *     RtlEqualSid @ 0x140005470 (RtlEqualSid.c)
 *     RtlSidDominates @ 0x14000AF00 (RtlSidDominates.c)
 *     RtlSidHashLookup @ 0x14000C800 (RtlSidHashLookup.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x1400852E4 (AuthzBasepFindSecurityAttributeValue.c)
 *     SepMaximumAccessCheck @ 0x1400866E0 (SepMaximumAccessCheck.c)
 *     RtlpOwnerAcesPresent @ 0x140088390 (RtlpOwnerAcesPresent.c)
 *     CompareEventEntry @ 0x14008C0C8 (CompareEventEntry.c)
 *     SepNormalAccessCheck @ 0x1400A7380 (SepNormalAccessCheck.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400A8610 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepMandatoryIntegrityCheck @ 0x1400A91E0 (SepMandatoryIntegrityCheck.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1400D3680 (RtlpIsNameInExpressionPrivate.c)
 *     RtlAreNamesEqual @ 0x1400F34F0 (RtlAreNamesEqual.c)
 *     SepPotentialGlobalTableAttribute @ 0x14013028C (SepPotentialGlobalTableAttribute.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140133EF0 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140148020 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     IoRaiseInformationalHardError @ 0x140298680 (IoRaiseInformationalHardError.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x14029918C (IopIsKnownGoodLegacyFsFilter.c)
 *     KiDisplayBlueScreen @ 0x1402A8D68 (KiDisplayBlueScreen.c)
 *     MiIdealClusterPage @ 0x1402E0ADC (MiIdealClusterPage.c)
 *     AuthzBasepCompareOctetStringOperands @ 0x1403467CC (AuthzBasepCompareOctetStringOperands.c)
 *     ConstraintEval @ 0x1405B5F80 (ConstraintEval.c)
 *     PropertyEval @ 0x1405B7E10 (PropertyEval.c)
 *     PiPnpRtlCmActionCallback @ 0x1405BDF50 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1405BE8F0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1405BF410 (PiDmObjectUpdateCachedObjectProperty.c)
 *     ObLogSecurityDescriptor @ 0x1405C7D10 (ObLogSecurityDescriptor.c)
 *     PopEtAggregateFind @ 0x1406120E8 (PopEtAggregateFind.c)
 *     SepSidInSidAndAttributes @ 0x140620D98 (SepSidInSidAndAttributes.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406283AC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     CmpFindMatchingDescriptorCell @ 0x1406406BC (CmpFindMatchingDescriptorCell.c)
 *     sub_1406494FC @ 0x1406494FC (sub_1406494FC.c)
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 *     ExpWnfFindScopeInstance @ 0x1406583DC (ExpWnfFindScopeInstance.c)
 *     RtlFindUnicodeSubstring @ 0x14066A080 (RtlFindUnicodeSubstring.c)
 *     PfSnPrefetchCacheEntryGet @ 0x14066CC4C (PfSnPrefetchCacheEntryGet.c)
 *     PfSnEndProcessTrace @ 0x14066E9E4 (PfSnEndProcessTrace.c)
 *     RtlpInternEntryMatch @ 0x140688F44 (RtlpInternEntryMatch.c)
 *     sub_1406A1AF0 @ 0x1406A1AF0 (sub_1406A1AF0.c)
 *     ExUpdateLicenseDataInternal @ 0x1406A2590 (ExUpdateLicenseDataInternal.c)
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x1406A74BC (PfSnPrefetchCacheEntryUpdate.c)
 *     EtwpStartLogger @ 0x1406A8918 (EtwpStartLogger.c)
 *     EtwpGenerateFileName @ 0x1406AF750 (EtwpGenerateFileName.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406C0810 (FsRtlNotifyFilterReportChange.c)
 *     TraitsCompare @ 0x1406C6BD4 (TraitsCompare.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406FC0A8 (PiDmObjectProcessPropertyChange.c)
 *     PnpProcessTargetDeviceEvent @ 0x1407011A4 (PnpProcessTargetDeviceEvent.c)
 *     PiDcCompareUpdateProperties @ 0x14071A850 (PiDcCompareUpdateProperties.c)
 *     PopApplyPolicy @ 0x14075B258 (PopApplyPolicy.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140764B10 (RtlpUpdateDynamicTimeZones.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x140764E54 (RtlpCheckDynamicTimeZoneInformation.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x14078B368 (PiSwDoesCreateChangesRequireReEnum.c)
 *     FsRtlIsDbcsInExpression @ 0x14084EC80 (FsRtlIsDbcsInExpression.c)
 *     PiDevCfgResolveVariableExpression @ 0x140868F00 (PiDevCfgResolveVariableExpression.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140885278 (AlpcpEnterStateChangeEventMessageLog.c)
 *     MiComputeBadImageHeaderType @ 0x140889CE8 (MiComputeBadImageHeaderType.c)
 *     RtlReplaceSidInSd @ 0x1408D1980 (RtlReplaceSidInSd.c)
 *     SeExamineSacl @ 0x1408DE870 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1408DF1A0 (SepExamineSaclEx.c)
 *     SepSecureBootManifestCompareElements @ 0x1408E1750 (SepSecureBootManifestCompareElements.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1408E18D0 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 *     EtwpCompareGuid @ 0x1408FFC80 (EtwpCompareGuid.c)
 *     EtwpUpdateDisallowedGuids @ 0x1408FFC9C (EtwpUpdateDisallowedGuids.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1409222A8 (SdbpCheckMatchingRegistryValue.c)
 *     BiExportEfiBootManager @ 0x140930DA0 (BiExportEfiBootManager.c)
 *     BiUpdateEfiEntry @ 0x140932330 (BiUpdateEfiEntry.c)
 *     IovpExamineIrpStackForwarding @ 0x14096E418 (IovpExamineIrpStackForwarding.c)
 *     ViCtxEqualExtendedState @ 0x1409816A8 (ViCtxEqualExtendedState.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1409F6D98 (PipCheckSystemFirmwareUpdated.c)
 *     CmpGetBiosDate @ 0x140A0CC24 (CmpGetBiosDate.c)
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
