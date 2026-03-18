/*
 * XREFs of RtlEqualUnicodeString @ 0x140625D40
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1400A45B0 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepEqualUnicodeString @ 0x1400A5DC8 (AuthzBasepEqualUnicodeString.c)
 *     SeSecurityAttributePresent @ 0x1400A7030 (SeSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1400A71D0 (AuthzBasepFindSecurityAttribute.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1400DCE00 (RtlDeriveCapabilitySidsFromName.c)
 *     PnpMultiSzContainsString @ 0x14016B764 (PnpMultiSzContainsString.c)
 *     PiDrvDbFindNode @ 0x14028B284 (PiDrvDbFindNode.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1402DC610 (PopEmUpdateDeviceConstraintCallback.c)
 *     PopEmModuleAddressMatchCallback @ 0x1402E50F0 (PopEmModuleAddressMatchCallback.c)
 *     ExpHwidProcessInterface @ 0x140585E18 (ExpHwidProcessInterface.c)
 *     sub_140586D3C @ 0x140586D3C (sub_140586D3C.c)
 *     IopGetDeviceInterfaces @ 0x14059E6C4 (IopGetDeviceInterfaces.c)
 *     CmSetValueKey @ 0x1405CBE28 (CmSetValueKey.c)
 *     CmLoadAppKey @ 0x1405CF54C (CmLoadAppKey.c)
 *     SepIsNgenImage @ 0x14060A55C (SepIsNgenImage.c)
 *     ObpLookupDirectoryUsingHash @ 0x140624F14 (ObpLookupDirectoryUsingHash.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140659F84 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14065AAF0 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpLookupLoggerIdByName @ 0x14065B4EC (EtwpLookupLoggerIdByName.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x14065C054 (SepFindMatchingCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x14065D67C (SepValidateReferencedCachedHandles.c)
 *     MiResolveImageReferences @ 0x140678FD0 (MiResolveImageReferences.c)
 *     IopQueryRegistryKeySystemPath @ 0x140680164 (IopQueryRegistryKeySystemPath.c)
 *     MiObtainSectionForDriver @ 0x140681910 (MiObtainSectionForDriver.c)
 *     MiUseLargeDriverPage @ 0x140683280 (MiUseLargeDriverPage.c)
 *     SepIsImageInMinTcbList @ 0x1406B4428 (SepIsImageInMinTcbList.c)
 *     IopDeviceInterfaceFilterCallback @ 0x1406B8D80 (IopDeviceInterfaceFilterCallback.c)
 *     DrvDbFindDatabaseNode @ 0x1406D3B98 (DrvDbFindDatabaseNode.c)
 *     PipFindDeviceOverrideEntry @ 0x1406D91B4 (PipFindDeviceOverrideEntry.c)
 *     PiDevCfgConfigureDevice @ 0x1406E2E54 (PiDevCfgConfigureDevice.c)
 *     _CmIsRootDevice @ 0x1406E97AC (_CmIsRootDevice.c)
 *     PiDevCfgResolveVariable @ 0x1406F341C (PiDevCfgResolveVariable.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406F3980 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406F4B5C (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406F6C90 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1406FEDF0 (PiUEventQueueBroadcastEventEntry.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140703900 (PiPnpRtlServiceFilterCallback.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140703DE4 (RtlpGetNtProductTypeFromRegistry.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140705840 (PiDevCfgResolveMultiSzValue.c)
 *     PiFindDevInstMatch @ 0x1407097AC (PiFindDevInstMatch.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x140710278 (PiRemoveDeferredSetInterfaceState.c)
 *     KsepCacheDeviceQueryData @ 0x140720F40 (KsepCacheDeviceQueryData.c)
 *     IopIsReportedAlready @ 0x14072D6E8 (IopIsReportedAlready.c)
 *     PipQueryBindingResolution @ 0x140739EB8 (PipQueryBindingResolution.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14074AEA0 (_CmDeviceClassesSubkeyCallback.c)
 *     AdtpLookupDriveLetter @ 0x14074DAB0 (AdtpLookupDriveLetter.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140809710 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpCreateNamespaceNode @ 0x140809E5C (VrpCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x14080B784 (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x14080C300 (VrpPreOpenOrCreate.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14080D578 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     PipAddRequestToEdge @ 0x140823B9C (PipAddRequestToEdge.c)
 *     PipDeleteBindingId @ 0x140823E10 (PipDeleteBindingId.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14082B57C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     KseHookQueryValueKey @ 0x140849870 (KseHookQueryValueKey.c)
 *     PopBatteryDeviceState @ 0x14086CE08 (PopBatteryDeviceState.c)
 *     PopDirectedDripsNotifyUsbDeviceStarted @ 0x14087CD10 (PopDirectedDripsNotifyUsbDeviceStarted.c)
 *     PspIdentityBasedJobBreakaway @ 0x140889380 (PspIdentityBasedJobBreakaway.c)
 *     ExpFindArcName @ 0x1408D0578 (ExpFindArcName.c)
 *     AdtpBuildAccessesString @ 0x1408EFECC (AdtpBuildAccessesString.c)
 *     _PnpCtxFindNode @ 0x1408F5CDC (_PnpCtxFindNode.c)
 *     _CmClassFilterCallback @ 0x1408FA710 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x1408FAA80 (_CmServiceFilterCallback.c)
 *     VfDriverLoadImage @ 0x140921264 (VfDriverLoadImage.c)
 *     ViIsDriverSuspectForVerifier @ 0x14092169C (ViIsDriverSuspectForVerifier.c)
 *     VfUtilIsProtectedDriver @ 0x1409261C4 (VfUtilIsProtectedDriver.c)
 *     VfDriverEnableVerifier @ 0x140927E78 (VfDriverEnableVerifier.c)
 *     ViDriverReApplyVerifierForAll @ 0x14092827C (ViDriverReApplyVerifierForAll.c)
 *     VfSuspectDriversLoadCallback @ 0x1409377A4 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x140937BBC (VfSuspectDriversUnloadCallback.c)
 *     ViSuspectDriversLookupEntry @ 0x140937D80 (ViSuspectDriversLookupEntry.c)
 *     VfCheckUserHandle @ 0x14093901C (VfCheckUserHandle.c)
 *     ViFilterIsDeviceExcluded @ 0x140943588 (ViFilterIsDeviceExcluded.c)
 *     VfAddVerifierEntry @ 0x14094A814 (VfAddVerifierEntry.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 *     CmpCreateHardwareProfiles @ 0x1409C172C (CmpCreateHardwareProfiles.c)
 *     PnpLoadBootFilterDriver @ 0x1409C8994 (PnpLoadBootFilterDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x1409CBF98 (PpInitGetGroupOrderIndex.c)
 *     PipLookupGroupName @ 0x1409CC0EC (PipLookupGroupName.c)
 *     CmGetSystemDriverList @ 0x1409CC66C (CmGetSystemDriverList.c)
 *     CmpFindHiveSubKey @ 0x1409CCDF4 (CmpFindHiveSubKey.c)
 *     CmpDoSort @ 0x1409CD210 (CmpDoSort.c)
 *     ViInitSystemPhase0 @ 0x1409DAF34 (ViInitSystemPhase0.c)
 *     CmpGetKnownHivePathNode @ 0x1409F3CDC (CmpGetKnownHivePathNode.c)
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
