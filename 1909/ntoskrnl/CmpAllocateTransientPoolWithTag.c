/*
 * XREFs of CmpAllocateTransientPoolWithTag @ 0x14008D0A0
 * Callers:
 *     CmpParseKey @ 0x1405F9560 (CmpParseKey.c)
 *     CmpStartKcbStack @ 0x1405FE000 (CmpStartKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FE5B0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKeyDeleted @ 0x140636A00 (CmpIsKeyDeleted.c)
 *     CmpDoFileWrite @ 0x14063954C (CmpDoFileWrite.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063EB80 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14064D420 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpGetNameControlBlock @ 0x140667B50 (CmpGetNameControlBlock.c)
 *     CmpConstructNameWithStatus @ 0x140668850 (CmpConstructNameWithStatus.c)
 *     CmpConstructNameFromKeyNodes @ 0x1406689D0 (CmpConstructNameFromKeyNodes.c)
 *     CmpAddToHiveFileList @ 0x14068C204 (CmpAddToHiveFileList.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406E3A58 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406E3F60 (CmpLightWeightCreateSetValueData.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406F010C (CmpLogTransactionAbortedWithChildName.c)
 *     CmpBuildAdminInformation @ 0x1406F76B4 (CmpBuildAdminInformation.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140729870 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x14073C5E8 (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x14073C644 (CmpCreateSiloKeyLockEntry.c)
 *     CmpCreateRegistryProcessToken @ 0x140757E54 (CmpCreateRegistryProcessToken.c)
 *     CmpFinishSystemHivesLoad @ 0x140762500 (CmpFinishSystemHivesLoad.c)
 *     CmpSaveBootControlSet @ 0x140822C90 (CmpSaveBootControlSet.c)
 *     CmAllocateExtraParameter @ 0x140826714 (CmAllocateExtraParameter.c)
 *     CmpReadBuildLab @ 0x1408270B8 (CmpReadBuildLab.c)
 *     CmpRecordShutdownStopTime @ 0x140827230 (CmpRecordShutdownStopTime.c)
 *     CmpDoAccessCheckOnSubtree @ 0x14082DB88 (CmpDoAccessCheckOnSubtree.c)
 *     CmpSnapshotKcbStackSecurity @ 0x14082E41C (CmpSnapshotKcbStackSecurity.c)
 *     HvpPerformLogFileRecovery @ 0x140830684 (HvpPerformLogFileRecovery.c)
 *     HvpRecoverDataReadRoutine @ 0x140830CA0 (HvpRecoverDataReadRoutine.c)
 *     CmpReserveRollbackPacketSpace @ 0x140831534 (CmpReserveRollbackPacketSpace.c)
 *     CmpDoReadTxRBigLogRecord @ 0x140831898 (CmpDoReadTxRBigLogRecord.c)
 *     CmpStartKeyNodeStack @ 0x140832E98 (CmpStartKeyNodeStack.c)
 *     CmpSubtreeEnumeratorStart @ 0x140833358 (CmpSubtreeEnumeratorStart.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140837C44 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackStart @ 0x1408383E0 (CmpKeyEnumStackStart.c)
 *     CmpGetValueForAudit @ 0x140839048 (CmpGetValueForAudit.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x14083938C (CmpSortedValueEnumStackEntryStart.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14083955C (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpLightWeightCreateModificationData @ 0x14083CD74 (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14083D174 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14083D328 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpPromoteKey @ 0x14083E42C (CmpPromoteKey.c)
 *     VerifierExAllocatePoolEx @ 0x140972330 (VerifierExAllocatePoolEx.c)
 *     CmGetSystemDriverList @ 0x140A12338 (CmGetSystemDriverList.c)
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
