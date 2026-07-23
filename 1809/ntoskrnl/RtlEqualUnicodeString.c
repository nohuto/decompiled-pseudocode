/*
 * XREFs of RtlEqualUnicodeString @ 0x140626D60
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1400A4510 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepEqualUnicodeString @ 0x1400A5D28 (AuthzBasepEqualUnicodeString.c)
 *     SeSecurityAttributePresent @ 0x1400A6F90 (SeSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1400A7130 (AuthzBasepFindSecurityAttribute.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1400DCEA0 (RtlDeriveCapabilitySidsFromName.c)
 *     PnpMultiSzContainsString @ 0x14016B884 (PnpMultiSzContainsString.c)
 *     PiDrvDbFindNode @ 0x14028B574 (PiDrvDbFindNode.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1402DC900 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x1402E53E0 (PopEmModuleAddressMatchCallback.c)
 *     ExpHwidProcessInterface @ 0x140586E18 (ExpHwidProcessInterface.c)
 *     sub_140587D3C @ 0x140587D3C (sub_140587D3C.c)
 *     IopGetDeviceInterfaces @ 0x14059F6C4 (IopGetDeviceInterfaces.c)
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 *     CmLoadAppKey @ 0x1405D054C (CmLoadAppKey.c)
 *     SepIsNgenImage @ 0x14060B55C (SepIsNgenImage.c)
 *     ObpLookupDirectoryUsingHash @ 0x140625F34 (ObpLookupDirectoryUsingHash.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14065B124 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14065BC90 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpLookupLoggerIdByName @ 0x14065C68C (EtwpLookupLoggerIdByName.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x14065D1F4 (SepFindMatchingCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x14065E81C (SepValidateReferencedCachedHandles.c)
 *     MiResolveImageReferences @ 0x14067A170 (MiResolveImageReferences.c)
 *     IopQueryRegistryKeySystemPath @ 0x140681304 (IopQueryRegistryKeySystemPath.c)
 *     MiObtainSectionForDriver @ 0x140682AB0 (MiObtainSectionForDriver.c)
 *     MiUseLargeDriverPage @ 0x140684420 (MiUseLargeDriverPage.c)
 *     SepIsImageInMinTcbList @ 0x1406B56A8 (SepIsImageInMinTcbList.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1406BA000 (IopDeviceInterfaceFilterCallback.c)
 *     DrvDbFindDatabaseNode @ 0x1406D4E18 (DrvDbFindDatabaseNode.c)
 *     PipFindDeviceOverrideEntry @ 0x1406DA434 (PipFindDeviceOverrideEntry.c)
 *     PiDevCfgConfigureDevice @ 0x1406E40D4 (PiDevCfgConfigureDevice.c)
 *     _CmIsRootDevice @ 0x1406EAA2C (_CmIsRootDevice.c)
 *     PiDevCfgResolveVariable @ 0x1406F469C (PiDevCfgResolveVariable.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406F4C00 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406F5DDC (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406F7F10 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140700070 (PiUEventQueueBroadcastEventEntry.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140704B80 (PiPnpRtlServiceFilterCallback.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140705064 (RtlpGetNtProductTypeFromRegistry.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140706AC0 (PiDevCfgResolveMultiSzValue.c)
 *     PiFindDevInstMatch @ 0x14070AA2C (PiFindDevInstMatch.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x1407114F8 (PiRemoveDeferredSetInterfaceState.c)
 *     KsepCacheDeviceQueryData @ 0x1407221C0 (KsepCacheDeviceQueryData.c)
 *     IopIsReportedAlready @ 0x14072E8B8 (IopIsReportedAlready.c)
 *     PipQueryBindingResolution @ 0x14073B088 (PipQueryBindingResolution.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14074C070 (_CmDeviceClassesSubkeyCallback.c)
 *     AdtpLookupDriveLetter @ 0x14074EC80 (AdtpLookupDriveLetter.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x14080A8F0 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpCreateNamespaceNode @ 0x14080B03C (VrpCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x14080C964 (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x14080D4E0 (VrpPreOpenOrCreate.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14080E758 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     PipAddRequestToEdge @ 0x140824D7C (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x140824FF0 (PipDeleteBindingId.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14082C75C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     KseHookQueryValueKey @ 0x14084AAB0 (KseHookQueryValueKey.c)
 *     PopBatteryDeviceState @ 0x14086E048 (PopBatteryDeviceState.c)
 *     PopDirectedDripsNotifyUsbDeviceStarted @ 0x14087DF50 (PopDirectedDripsNotifyUsbDeviceStarted.c)
 *     PspIdentityBasedJobBreakaway @ 0x14088A5C0 (PspIdentityBasedJobBreakaway.c)
 *     ExpFindArcName @ 0x1408D1818 (ExpFindArcName.c)
 *     AdtpBuildAccessesString @ 0x1408F116C (AdtpBuildAccessesString.c)
 *     _PnpCtxFindNode @ 0x1408F6F7C (_PnpCtxFindNode.c)
 *     _CmClassFilterCallback @ 0x1408FB9B0 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x1408FBD20 (_CmServiceFilterCallback.c)
 *     VfDriverLoadImage @ 0x140922264 (VfDriverLoadImage.c)
 *     ViIsDriverSuspectForVerifier @ 0x14092269C (ViIsDriverSuspectForVerifier.c)
 *     VfUtilIsProtectedDriver @ 0x1409271C4 (VfUtilIsProtectedDriver.c)
 *     VfDriverEnableVerifier @ 0x140928E78 (VfDriverEnableVerifier.c)
 *     ViDriverReApplyVerifierForAll @ 0x14092927C (ViDriverReApplyVerifierForAll.c)
 *     VfSuspectDriversLoadCallback @ 0x1409387A4 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x140938BBC (VfSuspectDriversUnloadCallback.c)
 *     ViSuspectDriversLookupEntry @ 0x140938D80 (ViSuspectDriversLookupEntry.c)
 *     VfCheckUserHandle @ 0x14093A01C (VfCheckUserHandle.c)
 *     ViFilterIsDeviceExcluded @ 0x140944588 (ViFilterIsDeviceExcluded.c)
 *     VfAddVerifierEntry @ 0x14094B814 (VfAddVerifierEntry.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 *     CmpCreateHardwareProfiles @ 0x1409C272C (CmpCreateHardwareProfiles.c)
 *     PnpLoadBootFilterDriver @ 0x1409C9994 (PnpLoadBootFilterDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x1409CCF98 (PpInitGetGroupOrderIndex.c)
 *     PipLookupGroupName @ 0x1409CD0EC (PipLookupGroupName.c)
 *     CmGetSystemDriverList @ 0x1409CD66C (CmGetSystemDriverList.c)
 *     CmpFindHiveSubKey @ 0x1409CDDF4 (CmpFindHiveSubKey.c)
 *     CmpDoSort @ 0x1409CE210 (CmpDoSort.c)
 *     ViInitSystemPhase0 @ 0x1409DBF34 (ViInitSystemPhase0.c)
 *     CmpGetKnownHivePathNode @ 0x1409F4CE4 (CmpGetKnownHivePathNode.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlEqualUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // rax
  wchar_t *Buffer; // r9
  wchar_t *v6; // r10
  wchar_t *i; // rbx
  signed __int64 v8; // r10
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r11

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
  if ( CaseInSensitive )
  {
    if ( Buffer < i )
    {
      v8 = (char *)v6 - (char *)Buffer;
      while ( 1 )
      {
        v9 = *Buffer;
        v10 = *(wchar_t *)((char *)Buffer + v8);
        if ( (_DWORD)v9 != (_DWORD)v10 )
        {
          if ( (unsigned int)v9 >= 0x61 )
          {
            if ( (unsigned int)v9 > 0x7A )
              LODWORD(v9) = (unsigned __int16)(v9
                                             + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v9 & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int8)v9 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v9 >> 8)]]]);
            else
              LODWORD(v9) = v9 - 32;
          }
          if ( (unsigned int)v10 >= 0x61 )
          {
            if ( (unsigned int)v10 > 0x7A )
              LODWORD(v10) = (unsigned __int16)(v10
                                              + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v10 & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int8)v10 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v10 >> 8)]]]);
            else
              LODWORD(v10) = v10 - 32;
          }
          if ( (_DWORD)v9 != (_DWORD)v10 )
            break;
        }
        if ( ++Buffer >= i )
          return 1;
      }
      return 0;
    }
  }
  else if ( Buffer < i )
  {
    while ( *Buffer == *v6 )
    {
      ++Buffer;
      ++v6;
      if ( Buffer >= i )
        return 1;
    }
    return 0;
  }
  return 1;
}
