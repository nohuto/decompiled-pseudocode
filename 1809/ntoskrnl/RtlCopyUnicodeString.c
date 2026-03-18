/*
 * XREFs of RtlCopyUnicodeString @ 0x1400B9870
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x140014820 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1400CC5F0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x1400CC860 (AuthzBasepAllocateSecurityAttribute.c)
 *     RtlPcToFileName @ 0x14018E870 (RtlPcToFileName.c)
 *     IoQueryFullDriverPath @ 0x140191940 (IoQueryFullDriverPath.c)
 *     QueryFeatureOverride @ 0x1401B3794 (QueryFeatureOverride.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140581D00 (FsRtlFindInTunnelCacheEx.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140596850 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1405C010C (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     IopCheckTopDeviceHint @ 0x1405DCC9C (IopCheckTopDeviceHint.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     RtlConvertSidToUnicodeString @ 0x14065A6D0 (RtlConvertSidToUnicodeString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14065AAF0 (EtwpGetLoggerInfoFromContext.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x14067D460 (SdbMakeIndexKeyFromStringEx.c)
 *     IopQueryRegistryKeySystemPath @ 0x140680164 (IopQueryRegistryKeySystemPath.c)
 *     IopSymlinkUpdateECP @ 0x1406ABCD0 (IopSymlinkUpdateECP.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x1406CE738 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     IopBootLog @ 0x1406CF254 (IopBootLog.c)
 *     PipProcessDevNodeTree @ 0x1406E657C (PipProcessDevNodeTree.c)
 *     PnpProcessRelation @ 0x1406EC6AC (PnpProcessRelation.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF7B0 (PnpProcessQueryRemoveAndEject.c)
 *     PiUEventHandleVetoEvent @ 0x1406FF7F0 (PiUEventHandleVetoEvent.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140705EF0 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140706088 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDeferSetInterfaceState @ 0x14070F7B0 (PiDeferSetInterfaceState.c)
 *     PnpConcatenateUnicodeStrings @ 0x14070F85C (PnpConcatenateUnicodeStrings.c)
 *     PopFxGenerateFriendlyName @ 0x140725320 (PopFxGenerateFriendlyName.c)
 *     PsRegisterSiloMonitor @ 0x140728850 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x1407289FC (ObCreateObjectTypeEx.c)
 *     AdtpObjsInitialize @ 0x140737248 (AdtpObjsInitialize.c)
 *     PnpCopyDeviceInstancePath @ 0x14073A098 (PnpCopyDeviceInstancePath.c)
 *     PopConnectToPolicyDevice @ 0x140740EB4 (PopConnectToPolicyDevice.c)
 *     IoReportRootDevice @ 0x140758C10 (IoReportRootDevice.c)
 *     CmpGetVirtualizationID @ 0x1407F3564 (CmpGetVirtualizationID.c)
 *     CmpLoadHiveVolatile @ 0x140802918 (CmpLoadHiveVolatile.c)
 *     VrpBuildKeyPath @ 0x14080DFFC (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x14081A7F0 (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x140825D04 (PnpNotifyHwProfileChange.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1408283FC (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpFinalizeVetoedRemove @ 0x140832FBC (PnpFinalizeVetoedRemove.c)
 *     PipRecordOpenHandleVeto @ 0x1408406E8 (PipRecordOpenHandleVeto.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x1408408E8 (PipSendTargetDeviceQueryRemoveNotification.c)
 *     MiQueryLoadedPatches @ 0x140857928 (MiQueryLoadedPatches.c)
 *     MiQueryProcessActivePatches @ 0x140857BB0 (MiQueryProcessActivePatches.c)
 *     PopFxRegisterComponentPerfStates @ 0x14086A2A4 (PopFxRegisterComponentPerfStates.c)
 *     PopProcessWakeSourceWork @ 0x14086B864 (PopProcessWakeSourceWork.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1408879D0 (PspSiloInitializeSystemRootBuffer.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140887A3C (PspSiloInitializeSystemRootSymlink.c)
 *     RtlPcToFilePath @ 0x140899680 (RtlPcToFilePath.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1408A0AA0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     AhcCacheQueryHwId @ 0x140905268 (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x140906238 (ObGetSiloRootDirectoryPath.c)
 *     StartFirstUserProcess @ 0x1409C5CC0 (StartFirstUserProcess.c)
 * Callees:
 *     memmove @ 0x1401D1440 (memmove.c)
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
