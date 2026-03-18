/*
 * XREFs of RtlCopyUnicodeString @ 0x140043E20
 * Callers:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14000A420 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x1400850B4 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x1400878EC (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     IoQueryFullDriverPath @ 0x140181760 (IoQueryFullDriverPath.c)
 *     RtlPcToFileName @ 0x14019B6E0 (RtlPcToFileName.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14033F788 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     MiAllocateSecureImageActivePatch @ 0x1405B0DFC (MiAllocateSecureImageActivePatch.c)
 *     MiFillActivePatchesQueryBuffer @ 0x1405B0E90 (MiFillActivePatchesQueryBuffer.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x14061B438 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x14061F30C (SepAllocateAndInitializeCachedHandleEntry.c)
 *     RtlConvertSidToUnicodeString @ 0x1406677F0 (RtlConvertSidToUnicodeString.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140687000 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1406981A4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140698EAC (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     FsRtlFindInTunnelCacheEx @ 0x1406B22E0 (FsRtlFindInTunnelCacheEx.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406B5F9C (EtwpGetLoggerInfoFromContext.c)
 *     IopCheckTopDeviceHint @ 0x1406CB31C (IopCheckTopDeviceHint.c)
 *     IopSymlinkUpdateECP @ 0x1406CE888 (IopSymlinkUpdateECP.c)
 *     CmpGetVirtualizationID @ 0x1406F5290 (CmpGetVirtualizationID.c)
 *     PipProcessDevNodeTree @ 0x14070265C (PipProcessDevNodeTree.c)
 *     IopBootLog @ 0x140709A10 (IopBootLog.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x14070C618 (SdbMakeIndexKeyFromStringEx.c)
 *     IopQueryRegistryKeySystemPath @ 0x14070D890 (IopQueryRegistryKeySystemPath.c)
 *     PiUEventHandleVetoEvent @ 0x14072C730 (PiUEventHandleVetoEvent.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14072E630 (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessRelation @ 0x14072F16C (PnpProcessRelation.c)
 *     PiDeferSetInterfaceState @ 0x14073193C (PiDeferSetInterfaceState.c)
 *     PnpConcatenateUnicodeStrings @ 0x1407319E8 (PnpConcatenateUnicodeStrings.c)
 *     PopConnectToPolicyDevice @ 0x14074D5B4 (PopConnectToPolicyDevice.c)
 *     PnpCopyDeviceInstancePath @ 0x140754AC8 (PnpCopyDeviceInstancePath.c)
 *     PsRegisterSiloMonitor @ 0x1407598D0 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x140759A80 (ObCreateObjectTypeEx.c)
 *     PopFxGenerateFriendlyName @ 0x14076F1EC (PopFxGenerateFriendlyName.c)
 *     AdtpObjsInitialize @ 0x140775714 (AdtpObjsInitialize.c)
 *     IoReportRootDevice @ 0x14077EA20 (IoReportRootDevice.c)
 *     CmpLoadHiveVolatile @ 0x14083BD70 (CmpLoadHiveVolatile.c)
 *     VrpBuildKeyPath @ 0x140847854 (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x140854720 (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x14086012C (PnpNotifyHwProfileChange.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1408628C8 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpFinalizeVetoedRemove @ 0x14086D8EC (PnpFinalizeVetoedRemove.c)
 *     PipRecordOpenHandleVeto @ 0x14087C0C8 (PipRecordOpenHandleVeto.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x14087C2CC (PipSendTargetDeviceQueryRemoveNotification.c)
 *     MiQueryLoadedPatches @ 0x14089131C (MiQueryLoadedPatches.c)
 *     PopFxRegisterComponentPerfStates @ 0x1408A6714 (PopFxRegisterComponentPerfStates.c)
 *     PopProcessWakeSourceWork @ 0x1408A7B44 (PopProcessWakeSourceWork.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1408C5D78 (PspSiloInitializeSystemRootBuffer.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1408C5DE4 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlPcToFilePath @ 0x1408D7FF0 (RtlPcToFilePath.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1408DF360 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     ExRaiseHardError @ 0x140913EE0 (ExRaiseHardError.c)
 *     AhcCacheQueryHwId @ 0x140943860 (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x14094485C (ObGetSiloRootDirectoryPath.c)
 *     StartFirstUserProcess @ 0x1409FCD18 (StartFirstUserProcess.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 */

void __stdcall RtlCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int Length; // r8d
  unsigned int MaximumLength; // eax
  wchar_t *Buffer; // rdx
  wchar_t *v6; // rsi
  unsigned __int64 v7; // rbx

  if ( SourceString )
  {
    Length = SourceString->Length;
    MaximumLength = DestinationString->MaximumLength;
    Buffer = SourceString->Buffer;
    if ( (unsigned __int16)Length <= (unsigned __int16)MaximumLength )
      MaximumLength = Length;
    v6 = DestinationString->Buffer;
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
