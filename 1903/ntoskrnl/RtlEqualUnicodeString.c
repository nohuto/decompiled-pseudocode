/*
 * XREFs of RtlEqualUnicodeString @ 0x140653D20
 * Callers:
 *     AuthzBasepEqualUnicodeString @ 0x140085040 (AuthzBasepEqualUnicodeString.c)
 *     SeSecurityAttributePresent @ 0x140092510 (SeSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1400926B0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140092830 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1400958C4 (AuthzBasepCompareUnicodeStringOperands.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1400B3D10 (RtlDeriveCapabilitySidsFromName.c)
 *     PnpMultiSzContainsString @ 0x14016F2A4 (PnpMultiSzContainsString.c)
 *     PiDrvDbFindNode @ 0x1402A15A0 (PiDrvDbFindNode.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1402F8EC0 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x140301D60 (PopEmModuleAddressMatchCallback.c)
 *     PopPlLookupDevicePowerProfile @ 0x140305124 (PopPlLookupDevicePowerProfile.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     SepIsNgenImage @ 0x140618D24 (SepIsNgenImage.c)
 *     SepIsImageInMinTcbList @ 0x140619B44 (SepIsImageInMinTcbList.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x14061E00C (SepFindMatchingCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x14061E3F8 (SepValidateReferencedCachedHandles.c)
 *     sub_140622358 @ 0x140622358 (sub_140622358.c)
 *     ExpHwidProcessInterface @ 0x1406224A4 (ExpHwidProcessInterface.c)
 *     IopGetDeviceInterfaces @ 0x1406239A8 (IopGetDeviceInterfaces.c)
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmLoadAppKey @ 0x14063744C (CmLoadAppKey.c)
 *     sub_1406AB150 @ 0x1406AB150 (sub_1406AB150.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406B5F9C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1406B6264 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpLookupLoggerIdByName @ 0x1406B6F8C (EtwpLookupLoggerIdByName.c)
 *     ObpLookupDirectoryUsingHash @ 0x1406BF214 (ObpLookupDirectoryUsingHash.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1406DA220 (IopDeviceInterfaceFilterCallback.c)
 *     AdtpLookupDriveLetter @ 0x1406E086C (AdtpLookupDriveLetter.c)
 *     _CmIsRootDevice @ 0x1406F17E4 (_CmIsRootDevice.c)
 *     DrvDbFindDatabaseNode @ 0x1406F2DE0 (DrvDbFindDatabaseNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406FACDC (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406FB7A4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406FBBB4 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgResolveVariable @ 0x1406FDE58 (PiDevCfgResolveVariable.c)
 *     PiDevCfgConfigureDevice @ 0x140704004 (PiDevCfgConfigureDevice.c)
 *     IopQueryRegistryKeySystemPath @ 0x14070D890 (IopQueryRegistryKeySystemPath.c)
 *     MiObtainSectionForDriver @ 0x14070E208 (MiObtainSectionForDriver.c)
 *     MiResolveImageReferences @ 0x14070EE20 (MiResolveImageReferences.c)
 *     PipFindDeviceOverrideEntry @ 0x140712AB0 (PipFindDeviceOverrideEntry.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x14071A9B0 (PiUEventQueueBroadcastEventEntry.c)
 *     MiUseLargeDriverPage @ 0x14071CF90 (MiUseLargeDriverPage.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14072A3B0 (PiPnpRtlServiceFilterCallback.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14072B300 (PiDevCfgResolveMultiSzValue.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x1407323F0 (PiRemoveDeferredSetInterfaceState.c)
 *     PiFindDevInstMatch @ 0x14073402C (PiFindDevInstMatch.c)
 *     KsepCacheDeviceQueryData @ 0x14074CCBC (KsepCacheDeviceQueryData.c)
 *     IopIsReportedAlready @ 0x140751358 (IopIsReportedAlready.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140768870 (_CmDeviceClassesSubkeyCallback.c)
 *     PipQueryBindingResolution @ 0x1407701E8 (PipQueryBindingResolution.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140842FC0 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpCreateNamespaceNode @ 0x1408436FC (VrpCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x140845104 (VrpPreLoadKey.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x140846E54 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     PipAddRequestToEdge @ 0x14085DFCC (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x14085E240 (PipDeleteBindingId.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140865D60 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x140879CC4 (PiDrvDbResolveFilePathKeyValues.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14087A5E0 (PiDrvDbResolveSystemFilePath.c)
 *     KseHookQueryValueKey @ 0x140884D50 (KseHookQueryValueKey.c)
 *     PopBatteryDeviceState @ 0x1408A9948 (PopBatteryDeviceState.c)
 *     PopDirectedDripsNotifyUsbDeviceStarted @ 0x1408B98BC (PopDirectedDripsNotifyUsbDeviceStarted.c)
 *     PspIdentityBasedJobBreakaway @ 0x1408C72A0 (PspIdentityBasedJobBreakaway.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1408D5290 (RtlpGetNtProductTypeFromRegistry.c)
 *     ExpFindArcName @ 0x14090DD3C (ExpFindArcName.c)
 *     AdtpBuildAccessesString @ 0x14092DB18 (AdtpBuildAccessesString.c)
 *     _PnpCtxFindNode @ 0x140933964 (_PnpCtxFindNode.c)
 *     _CmClassFilterCallback @ 0x140938340 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140938700 (_CmServiceFilterCallback.c)
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
 *     CmpCreateHardwareProfiles @ 0x140A0B2AC (CmpCreateHardwareProfiles.c)
 *     PnpLoadBootFilterDriver @ 0x140A0FC60 (PnpLoadBootFilterDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x140A10D48 (PpInitGetGroupOrderIndex.c)
 *     PipLookupGroupName @ 0x140A116E8 (PipLookupGroupName.c)
 *     CmGetSystemDriverList @ 0x140A11BA0 (CmGetSystemDriverList.c)
 *     CmpDoSort @ 0x140A12524 (CmpDoSort.c)
 *     CmpFindHiveSubKey @ 0x140A13288 (CmpFindHiveSubKey.c)
 *     ViInitSystemPhase0 @ 0x140A1E0C0 (ViInitSystemPhase0.c)
 *     CmpGetKnownHivePathNode @ 0x140A39128 (CmpGetKnownHivePathNode.c)
 * Callees:
 *     NLS_UPCASE @ 0x140092980 (NLS_UPCASE.c)
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
