/*
 * XREFs of CmpAllocateTransientPoolWithTag @ 0x14008BDA0
 * Callers:
 *     CmpParseKey @ 0x1405F8510 (CmpParseKey.c)
 *     CmpStartKcbStack @ 0x1405FCF70 (CmpStartKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FD520 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKeyDeleted @ 0x140633410 (CmpIsKeyDeleted.c)
 *     CmpDoFileWrite @ 0x1406362EC (CmpDoFileWrite.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063BAF0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetNameControlBlock @ 0x140654A50 (CmpGetNameControlBlock.c)
 *     CmpConstructNameWithStatus @ 0x140655750 (CmpConstructNameWithStatus.c)
 *     CmpConstructNameFromKeyNodes @ 0x1406558D0 (CmpConstructNameFromKeyNodes.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140687250 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406E23D8 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406E28E0 (CmpLightWeightCreateSetValueData.c)
 *     CmpAddToHiveFileList @ 0x1406EC454 (CmpAddToHiveFileList.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406EE5BC (CmpLogTransactionAbortedWithChildName.c)
 *     CmpBuildAdminInformation @ 0x1406F58F0 (CmpBuildAdminInformation.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140728500 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x14073A358 (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x14073A3B4 (CmpCreateSiloKeyLockEntry.c)
 *     CmpFinishSystemHivesLoad @ 0x14075DD80 (CmpFinishSystemHivesLoad.c)
 *     CmpCreateRegistryProcessToken @ 0x1407691C4 (CmpCreateRegistryProcessToken.c)
 *     CmpSaveBootControlSet @ 0x140823590 (CmpSaveBootControlSet.c)
 *     CmAllocateExtraParameter @ 0x140827014 (CmAllocateExtraParameter.c)
 *     CmpReadBuildLab @ 0x1408279B8 (CmpReadBuildLab.c)
 *     CmpRecordShutdownStopTime @ 0x140827B30 (CmpRecordShutdownStopTime.c)
 *     CmpDoAccessCheckOnSubtree @ 0x14082DD0C (CmpDoAccessCheckOnSubtree.c)
 *     CmpSnapshotKcbStackSecurity @ 0x14082E5A0 (CmpSnapshotKcbStackSecurity.c)
 *     HvpPerformLogFileRecovery @ 0x140830814 (HvpPerformLogFileRecovery.c)
 *     HvpRecoverDataReadRoutine @ 0x140830E30 (HvpRecoverDataReadRoutine.c)
 *     CmpReserveRollbackPacketSpace @ 0x140831EE4 (CmpReserveRollbackPacketSpace.c)
 *     CmpDoReadTxRBigLogRecord @ 0x140832248 (CmpDoReadTxRBigLogRecord.c)
 *     CmpStartKeyNodeStack @ 0x140833838 (CmpStartKeyNodeStack.c)
 *     CmpSubtreeEnumeratorStart @ 0x140833CF8 (CmpSubtreeEnumeratorStart.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x1408385E4 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackStart @ 0x140838D80 (CmpKeyEnumStackStart.c)
 *     CmpGetValueForAudit @ 0x1408399E8 (CmpGetValueForAudit.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x140839D2C (CmpSortedValueEnumStackEntryStart.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140839EFC (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpLightWeightCreateModificationData @ 0x14083D714 (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14083DB14 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14083DCC8 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpPromoteKey @ 0x14083EDCC (CmpPromoteKey.c)
 *     VerifierExAllocatePoolEx @ 0x140972330 (VerifierExAllocatePoolEx.c)
 *     CmGetSystemDriverList @ 0x140A11BA0 (CmGetSystemDriverList.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmpAllocateTransientPoolWithTag(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
}
