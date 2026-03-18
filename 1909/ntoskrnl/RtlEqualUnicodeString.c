/*
 * XREFs of RtlEqualUnicodeString @ 0x140666E20
 * Callers:
 *     AuthzBasepEqualUnicodeString @ 0x140085440 (AuthzBasepEqualUnicodeString.c)
 *     SeSecurityAttributePresent @ 0x1400CF830 (SeSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1400CF9D0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1400CFB50 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1400D2BE4 (AuthzBasepCompareUnicodeStringOperands.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1400F0D30 (RtlDeriveCapabilitySidsFromName.c)
 *     PnpMultiSzContainsString @ 0x14016F994 (PnpMultiSzContainsString.c)
 *     PiDrvDbFindNode @ 0x1402A1300 (PiDrvDbFindNode.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1402F8970 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x140301810 (PopEmModuleAddressMatchCallback.c)
 *     PopPlLookupDevicePowerProfile @ 0x140304BD4 (PopPlLookupDevicePowerProfile.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     SepIsNgenImage @ 0x14061A834 (SepIsNgenImage.c)
 *     SepIsImageInMinTcbList @ 0x14061B654 (SepIsImageInMinTcbList.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x14061FB28 (SepFindMatchingCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x14061FF14 (SepValidateReferencedCachedHandles.c)
 *     sub_140626208 @ 0x140626208 (sub_140626208.c)
 *     ExpHwidProcessInterface @ 0x140626354 (ExpHwidProcessInterface.c)
 *     IopGetDeviceInterfaces @ 0x140627858 (IopGetDeviceInterfaces.c)
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmLoadAppKey @ 0x14063A4D4 (CmLoadAppKey.c)
 *     sub_1406A1AF0 @ 0x1406A1AF0 (sub_1406A1AF0.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406A9788 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406A9A50 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpLookupLoggerIdByName @ 0x1406AA78C (EtwpLookupLoggerIdByName.c)
 *     ObpLookupDirectoryUsingHash @ 0x1406BECC4 (ObpLookupDirectoryUsingHash.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1406DAB20 (IopDeviceInterfaceFilterCallback.c)
 *     AdtpLookupDriveLetter @ 0x1406E1FA0 (AdtpLookupDriveLetter.c)
 *     _CmIsRootDevice @ 0x1406F3284 (_CmIsRootDevice.c)
 *     DrvDbFindDatabaseNode @ 0x1406F4880 (DrvDbFindDatabaseNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406FCABC (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406FD584 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406FD994 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgResolveVariable @ 0x1406FFC38 (PiDevCfgResolveVariable.c)
 *     PiDevCfgConfigureDevice @ 0x140705DE4 (PiDevCfgConfigureDevice.c)
 *     IopQueryRegistryKeySystemPath @ 0x14070F670 (IopQueryRegistryKeySystemPath.c)
 *     MiObtainSectionForDriver @ 0x14070FFE8 (MiObtainSectionForDriver.c)
 *     MiResolveImageReferences @ 0x140710C00 (MiResolveImageReferences.c)
 *     PipFindDeviceOverrideEntry @ 0x140714890 (PipFindDeviceOverrideEntry.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x14071C7A0 (PiUEventQueueBroadcastEventEntry.c)
 *     MiUseLargeDriverPage @ 0x14071EE20 (MiUseLargeDriverPage.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14072C250 (PiPnpRtlServiceFilterCallback.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14072D1A0 (PiDevCfgResolveMultiSzValue.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x140734650 (PiRemoveDeferredSetInterfaceState.c)
 *     PiFindDevInstMatch @ 0x14073628C (PiFindDevInstMatch.c)
 *     KsepCacheDeviceQueryData @ 0x14074D74C (KsepCacheDeviceQueryData.c)
 *     IopIsReportedAlready @ 0x140751DE8 (IopIsReportedAlready.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14076D370 (_CmDeviceClassesSubkeyCallback.c)
 *     PipQueryBindingResolution @ 0x1407737CC (PipQueryBindingResolution.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140842634 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpCreateNamespaceNode @ 0x140842D70 (VrpCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x140844778 (VrpPreLoadKey.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1408464C8 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     PipAddRequestToEdge @ 0x14085D6CC (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x14085D940 (PipDeleteBindingId.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140865460 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408793C4 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbResolveSystemFilePath @ 0x140879CE0 (PiDrvDbResolveSystemFilePath.c)
 *     KseHookQueryValueKey @ 0x140884450 (KseHookQueryValueKey.c)
 *     PopBatteryDeviceState @ 0x1408A91A8 (PopBatteryDeviceState.c)
 *     PopDirectedDripsNotifyUsbDeviceStarted @ 0x1408B918C (PopDirectedDripsNotifyUsbDeviceStarted.c)
 *     PspIdentityBasedJobBreakaway @ 0x1408C6B80 (PspIdentityBasedJobBreakaway.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1408D4B90 (RtlpGetNtProductTypeFromRegistry.c)
 *     ExpFindArcName @ 0x14090D79C (ExpFindArcName.c)
 *     AdtpBuildAccessesString @ 0x14092D58C (AdtpBuildAccessesString.c)
 *     _PnpCtxFindNode @ 0x1409333D8 (_PnpCtxFindNode.c)
 *     _CmClassFilterCallback @ 0x140937DB0 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140938170 (_CmServiceFilterCallback.c)
 *     VfDriverLoadImage @ 0x14095FF80 (VfDriverLoadImage.c)
 *     ViSuspectDriversLookupEntry @ 0x1409603F8 (ViSuspectDriversLookupEntry.c)
 *     VfUtilIsProtectedDriver @ 0x140964664 (VfUtilIsProtectedDriver.c)
 *     ViIsDriverSuspectForVerifier @ 0x140964A78 (ViIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x140966398 (VfDriverEnableVerifier.c)
 *     ViDriverReApplyVerifierForAll @ 0x1409667B8 (ViDriverReApplyVerifierForAll.c)
 *     VfSuspectDriversLoadCallback @ 0x1409770B4 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x1409774A0 (VfSuspectDriversUnloadCallback.c)
 *     VfCheckUserHandle @ 0x140977664 (VfCheckUserHandle.c)
 *     VfFilterAttach @ 0x140982824 (VfFilterAttach.c)
 *     VfAddVerifierEntry @ 0x14098A1F4 (VfAddVerifierEntry.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 *     CmpCreateHardwareProfiles @ 0x140A0B7D8 (CmpCreateHardwareProfiles.c)
 *     PnpLoadBootFilterDriver @ 0x140A103F8 (PnpLoadBootFilterDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x140A114E0 (PpInitGetGroupOrderIndex.c)
 *     PipLookupGroupName @ 0x140A11E80 (PipLookupGroupName.c)
 *     CmGetSystemDriverList @ 0x140A12338 (CmGetSystemDriverList.c)
 *     CmpDoSort @ 0x140A12CBC (CmpDoSort.c)
 *     CmpFindHiveSubKey @ 0x140A13A20 (CmpFindHiveSubKey.c)
 *     ViInitSystemPhase0 @ 0x140A1E29C (ViInitSystemPhase0.c)
 *     CmpGetKnownHivePathNode @ 0x140A38EF8 (CmpGetKnownHivePathNode.c)
 * Callees:
 *     NLS_UPCASE @ 0x1400CFCA0 (NLS_UPCASE.c)
 */

BOOLEAN __stdcall RtlEqualUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r10
  wchar_t *Buffer; // r9
  wchar_t *v6; // r11
  wchar_t *i; // rdi
  signed __int64 v8; // r11
  unsigned __int16 v9; // bx
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // ax
  __int16 v12; // r10

  Length = String1->Length;
  if ( (_DWORD)Length != String2->Length )
    return 0;
  Buffer = String1->Buffer;
  v6 = String2->Buffer;
  for ( i = (wchar_t *)((char *)Buffer + Length); (unsigned int)Length >= 8; v6 += 4 )
  {
    if ( *(_QWORD *)Buffer != *(_QWORD *)v6 )
      break;
    LODWORD(Length) = Length - 8;
    if ( !(_DWORD)Length )
      return 1;
    Buffer += 4;
  }
  if ( Buffer < i )
  {
    if ( CaseInSensitive )
    {
      v8 = (char *)v6 - (char *)Buffer;
      while ( 1 )
      {
        v9 = *Buffer;
        v10 = *(wchar_t *)((char *)Buffer + v8);
        if ( *Buffer != v10 )
        {
          NLS_UPCASE(v10);
          v11 = NLS_UPCASE(v9);
          if ( v11 != v12 )
            break;
        }
        if ( ++Buffer >= i )
          return 1;
      }
    }
    else
    {
      while ( *Buffer == *v6 )
      {
        ++Buffer;
        ++v6;
        if ( Buffer >= i )
          return 1;
      }
    }
    return 0;
  }
  return 1;
}
