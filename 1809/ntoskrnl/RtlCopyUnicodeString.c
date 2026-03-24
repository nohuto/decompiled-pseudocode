/*
 * XREFs of RtlCopyUnicodeString @ 0x1400B9890
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x140014820 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1400CC610 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x1400CC880 (AuthzBasepAllocateSecurityAttribute.c)
 *     RtlPcToFileName @ 0x14018E890 (RtlPcToFileName.c)
 *     IoQueryFullDriverPath @ 0x140191960 (IoQueryFullDriverPath.c)
 *     QueryFeatureOverride @ 0x1401B37B4 (QueryFeatureOverride.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140581D00 (FsRtlFindInTunnelCacheEx.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140596850 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1405C010C (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     IopCheckTopDeviceHint @ 0x1405DCC9C (IopCheckTopDeviceHint.c)
 *     IopParseDevice @ 0x14063CCE0 (IopParseDevice.c)
 *     RtlConvertSidToUnicodeString @ 0x14065A6B0 (RtlConvertSidToUnicodeString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14065AAD0 (EtwpGetLoggerInfoFromContext.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x14067D440 (SdbMakeIndexKeyFromStringEx.c)
 *     IopQueryRegistryKeySystemPath @ 0x140680144 (IopQueryRegistryKeySystemPath.c)
 *     IopSymlinkUpdateECP @ 0x1406ABCB0 (IopSymlinkUpdateECP.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x1406CE718 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     IopBootLog @ 0x1406CF234 (IopBootLog.c)
 *     PipProcessDevNodeTree @ 0x1406E655C (PipProcessDevNodeTree.c)
 *     PnpProcessRelation @ 0x1406EC68C (PnpProcessRelation.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF790 (PnpProcessQueryRemoveAndEject.c)
 *     PiUEventHandleVetoEvent @ 0x1406FF7D0 (PiUEventHandleVetoEvent.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140705ED0 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140706068 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiDeferSetInterfaceState @ 0x14070F790 (PiDeferSetInterfaceState.c)
 *     PnpConcatenateUnicodeStrings @ 0x14070F83C (PnpConcatenateUnicodeStrings.c)
 *     PopFxGenerateFriendlyName @ 0x140725300 (PopFxGenerateFriendlyName.c)
 *     PsRegisterSiloMonitor @ 0x140728830 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x1407289DC (ObCreateObjectTypeEx.c)
 *     AdtpObjsInitialize @ 0x140737228 (AdtpObjsInitialize.c)
 *     PnpCopyDeviceInstancePath @ 0x14073A078 (PnpCopyDeviceInstancePath.c)
 *     PopConnectToPolicyDevice @ 0x140740E94 (PopConnectToPolicyDevice.c)
 *     IoReportRootDevice @ 0x140758BF0 (IoReportRootDevice.c)
 *     CmpGetVirtualizationID @ 0x1407F3544 (CmpGetVirtualizationID.c)
 *     CmpLoadHiveVolatile @ 0x1408028F8 (CmpLoadHiveVolatile.c)
 *     VrpBuildKeyPath @ 0x14080DFDC (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x14081A7D0 (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x140825CE4 (PnpNotifyHwProfileChange.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1408283DC (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpFinalizeVetoedRemove @ 0x140832F9C (PnpFinalizeVetoedRemove.c)
 *     PipRecordOpenHandleVeto @ 0x1408406C8 (PipRecordOpenHandleVeto.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x1408408C8 (PipSendTargetDeviceQueryRemoveNotification.c)
 *     MiQueryLoadedPatches @ 0x140857908 (MiQueryLoadedPatches.c)
 *     MiQueryProcessActivePatches @ 0x140857B90 (MiQueryProcessActivePatches.c)
 *     PopFxRegisterComponentPerfStates @ 0x14086A284 (PopFxRegisterComponentPerfStates.c)
 *     PopProcessWakeSourceWork @ 0x14086B844 (PopProcessWakeSourceWork.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1408879B0 (PspSiloInitializeSystemRootBuffer.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140887A1C (PspSiloInitializeSystemRootSymlink.c)
 *     RtlPcToFilePath @ 0x140899660 (RtlPcToFilePath.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1408A0A80 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     AhcCacheQueryHwId @ 0x140905248 (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x140906218 (ObGetSiloRootDirectoryPath.c)
 *     StartFirstUserProcess @ 0x1409C5CC0 (StartFirstUserProcess.c)
 * Callees:
 *     memmove @ 0x1401D1540 (memmove.c)
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
