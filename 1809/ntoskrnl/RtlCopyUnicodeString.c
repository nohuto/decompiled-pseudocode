/*
 * XREFs of RtlCopyUnicodeString @ 0x1400B97D0
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x140014820 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1400CC690 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x1400CC900 (AuthzBasepAllocateSecurityAttribute.c)
 *     RtlPcToFileName @ 0x14018E9D0 (RtlPcToFileName.c)
 *     IoQueryFullDriverPath @ 0x140191AA0 (IoQueryFullDriverPath.c)
 *     QueryFeatureOverride @ 0x1401B4090 (QueryFeatureOverride.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140582D00 (FsRtlFindInTunnelCacheEx.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140597850 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1405C110C (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     IopCheckTopDeviceHint @ 0x1405DDC9C (IopCheckTopDeviceHint.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     RtlConvertSidToUnicodeString @ 0x14065B870 (RtlConvertSidToUnicodeString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14065BC90 (EtwpGetLoggerInfoFromContext.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x14067E600 (SdbMakeIndexKeyFromStringEx.c)
 *     IopQueryRegistryKeySystemPath @ 0x140681304 (IopQueryRegistryKeySystemPath.c)
 *     IopSymlinkUpdateECP @ 0x1406ACF50 (IopSymlinkUpdateECP.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x1406CF9B8 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     IopBootLog @ 0x1406D04D4 (IopBootLog.c)
 *     PipProcessDevNodeTree @ 0x1406E77FC (PipProcessDevNodeTree.c)
 *     PnpProcessRelation @ 0x1406ED92C (PnpProcessRelation.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 *     PiUEventHandleVetoEvent @ 0x140700A70 (PiUEventHandleVetoEvent.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140707170 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140707308 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDeferSetInterfaceState @ 0x140710A30 (PiDeferSetInterfaceState.c)
 *     PnpConcatenateUnicodeStrings @ 0x140710ADC (PnpConcatenateUnicodeStrings.c)
 *     PopFxGenerateFriendlyName @ 0x1407265A0 (PopFxGenerateFriendlyName.c)
 *     PsRegisterSiloMonitor @ 0x140729A20 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x140729BCC (ObCreateObjectTypeEx.c)
 *     AdtpObjsInitialize @ 0x140738418 (AdtpObjsInitialize.c)
 *     PnpCopyDeviceInstancePath @ 0x14073B268 (PnpCopyDeviceInstancePath.c)
 *     PopConnectToPolicyDevice @ 0x140742084 (PopConnectToPolicyDevice.c)
 *     IoReportRootDevice @ 0x140759DE0 (IoReportRootDevice.c)
 *     CmpGetVirtualizationID @ 0x1407F4744 (CmpGetVirtualizationID.c)
 *     CmpLoadHiveVolatile @ 0x140803AF8 (CmpLoadHiveVolatile.c)
 *     VrpBuildKeyPath @ 0x14080F1DC (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x14081B9D0 (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x140826EE4 (PnpNotifyHwProfileChange.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1408295DC (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpFinalizeVetoedRemove @ 0x1408341FC (PnpFinalizeVetoedRemove.c)
 *     PipRecordOpenHandleVeto @ 0x140841928 (PipRecordOpenHandleVeto.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x140841B28 (PipSendTargetDeviceQueryRemoveNotification.c)
 *     MiQueryLoadedPatches @ 0x140858B68 (MiQueryLoadedPatches.c)
 *     MiQueryProcessActivePatches @ 0x140858DF0 (MiQueryProcessActivePatches.c)
 *     PopFxRegisterComponentPerfStates @ 0x14086B4E4 (PopFxRegisterComponentPerfStates.c)
 *     PopProcessWakeSourceWork @ 0x14086CAA4 (PopProcessWakeSourceWork.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x140888C10 (PspSiloInitializeSystemRootBuffer.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140888C7C (PspSiloInitializeSystemRootSymlink.c)
 *     RtlPcToFilePath @ 0x14089A8C0 (RtlPcToFilePath.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1408A1CE0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     AhcCacheQueryHwId @ 0x140906508 (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409074D8 (ObGetSiloRootDirectoryPath.c)
 *     StartFirstUserProcess @ 0x1409C6CC0 (StartFirstUserProcess.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 */

void __stdcall RtlCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int Length; // r8d
  unsigned int MaximumLength; // eax
  wchar_t *Buffer; // rdx
  wchar_t *v6; // rsi
  unsigned __int64 v7; // rdi

  if ( SourceString )
  {
    Length = SourceString->Length;
    MaximumLength = DestinationString->MaximumLength;
    Buffer = SourceString->Buffer;
    v6 = DestinationString->Buffer;
    if ( (unsigned __int16)Length <= (unsigned __int16)MaximumLength )
      MaximumLength = Length;
    v7 = MaximumLength;
    DestinationString->Length = MaximumLength;
    memmove(v6, Buffer, MaximumLength);
    if ( (unsigned __int64)DestinationString->Length + 2 <= DestinationString->MaximumLength )
      v6[v7 >> 1] = 0;
  }
  else
  {
    DestinationString->Length = 0;
  }
}
