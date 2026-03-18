/*
 * XREFs of RtlCopyUnicodeString @ 0x140043EC0
 * Callers:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14000A4B0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x1400854B4 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x140087D0C (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     IoQueryFullDriverPath @ 0x140181E50 (IoQueryFullDriverPath.c)
 *     RtlPcToFileName @ 0x14019BD40 (RtlPcToFileName.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14033F1E8 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     MiAllocateSecureImageActivePatch @ 0x1405B0C38 (MiAllocateSecureImageActivePatch.c)
 *     MiFillActivePatchesQueryBuffer @ 0x1405B0CCC (MiFillActivePatchesQueryBuffer.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x14061CF48 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x140620E2C (SepAllocateAndInitializeCachedHandleEntry.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14064D1D0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14068B714 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     RtlConvertSidToUnicodeString @ 0x140694C10 (RtlConvertSidToUnicodeString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406A9788 (EtwpGetLoggerInfoFromContext.c)
 *     FsRtlFindInTunnelCacheEx @ 0x1406B5280 (FsRtlFindInTunnelCacheEx.c)
 *     IopCheckTopDeviceHint @ 0x1406CA0CC (IopCheckTopDeviceHint.c)
 *     IopSymlinkUpdateECP @ 0x1406CD628 (IopSymlinkUpdateECP.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x1406DA500 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     CmpGetVirtualizationID @ 0x1406F7000 (CmpGetVirtualizationID.c)
 *     PipProcessDevNodeTree @ 0x14070443C (PipProcessDevNodeTree.c)
 *     IopBootLog @ 0x14070B7F0 (IopBootLog.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x14070E3F8 (SdbMakeIndexKeyFromStringEx.c)
 *     IopQueryRegistryKeySystemPath @ 0x14070F670 (IopQueryRegistryKeySystemPath.c)
 *     PiUEventHandleVetoEvent @ 0x14072E5D0 (PiUEventHandleVetoEvent.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140730890 (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessRelation @ 0x1407313CC (PnpProcessRelation.c)
 *     PiDeferSetInterfaceState @ 0x140733B9C (PiDeferSetInterfaceState.c)
 *     PnpConcatenateUnicodeStrings @ 0x140733C48 (PnpConcatenateUnicodeStrings.c)
 *     PopConnectToPolicyDevice @ 0x14074E044 (PopConnectToPolicyDevice.c)
 *     PnpCopyDeviceInstancePath @ 0x140755558 (PnpCopyDeviceInstancePath.c)
 *     PsRegisterSiloMonitor @ 0x14075E160 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x14075E310 (ObCreateObjectTypeEx.c)
 *     PopFxGenerateFriendlyName @ 0x14077204C (PopFxGenerateFriendlyName.c)
 *     AdtpObjsInitialize @ 0x140778CF4 (AdtpObjsInitialize.c)
 *     IoReportRootDevice @ 0x140781440 (IoReportRootDevice.c)
 *     CmpLoadHiveVolatile @ 0x14083B3D0 (CmpLoadHiveVolatile.c)
 *     VrpBuildKeyPath @ 0x140846F5C (VrpBuildKeyPath.c)
 *     IopSafebootDriverLoad @ 0x140853E20 (IopSafebootDriverLoad.c)
 *     PnpNotifyHwProfileChange @ 0x14085F82C (PnpNotifyHwProfileChange.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140861FC8 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpFinalizeVetoedRemove @ 0x14086CFEC (PnpFinalizeVetoedRemove.c)
 *     PipRecordOpenHandleVeto @ 0x14087B7C8 (PipRecordOpenHandleVeto.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x14087B9CC (PipSendTargetDeviceQueryRemoveNotification.c)
 *     MiQueryLoadedPatches @ 0x140890B3C (MiQueryLoadedPatches.c)
 *     PopFxRegisterComponentPerfStates @ 0x1408A5F74 (PopFxRegisterComponentPerfStates.c)
 *     PopProcessWakeSourceWork @ 0x1408A73A4 (PopProcessWakeSourceWork.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1408C5658 (PspSiloInitializeSystemRootBuffer.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1408C56C4 (PspSiloInitializeSystemRootSymlink.c)
 *     RtlPcToFilePath @ 0x1408D78F0 (RtlPcToFilePath.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1408DEC60 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     ExRaiseHardError @ 0x140913940 (ExRaiseHardError.c)
 *     AhcCacheQueryHwId @ 0x1409432D0 (AhcCacheQueryHwId.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409442CC (ObGetSiloRootDirectoryPath.c)
 *     StartFirstUserProcess @ 0x1409FD234 (StartFirstUserProcess.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
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
