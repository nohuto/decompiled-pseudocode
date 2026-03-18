/*
 * XREFs of CmpDetachFromRegistryProcess @ 0x1405FD4FC
 * Callers:
 *     CmpDoQueryKeyName @ 0x140092BC0 (CmpDoQueryKeyName.c)
 *     CmpLoadKeyCommon @ 0x1400990A4 (CmpLoadKeyCommon.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x1405FD190 (CmQueryValueKey.c)
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmLoadAppKey @ 0x14063744C (CmLoadAppKey.c)
 *     CmDeleteKey @ 0x14063846C (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140639C4C (CmDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14063B060 (NtQueryMultipleValueKey.c)
 *     CmpSetKeySecurity @ 0x14063D6B0 (CmpSetKeySecurity.c)
 *     NtEnumerateValueKey @ 0x14064D920 (NtEnumerateValueKey.c)
 *     CmEnumerateKey @ 0x14064FF30 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x140654E60 (CmQueryKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140662850 (CmpLateUnloadHiveWorker.c)
 *     CmpPerformUnloadKey @ 0x14069AC04 (CmpPerformUnloadKey.c)
 *     NtCommitRegistryTransaction @ 0x1406E1C50 (NtCommitRegistryTransaction.c)
 *     CmLoadKey @ 0x1406E94C4 (CmLoadKey.c)
 *     CmRmFinalizeRecovery @ 0x1406EEA7C (CmRmFinalizeRecovery.c)
 *     CmpInitializeRegistryProcess @ 0x140769834 (CmpInitializeRegistryProcess.c)
 *     CmpSaveBootControlSet @ 0x140823590 (CmpSaveBootControlSet.c)
 *     NtQueryOpenSubKeysEx @ 0x140824470 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140824780 (NtRenameKey.c)
 *     NtSaveMergedKeys @ 0x1408254F0 (NtSaveMergedKeys.c)
 *     CmShutdownSystem @ 0x1408273C4 (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x140827840 (CmpFreeAllMemory.c)
 *     CmSetKeyFlags @ 0x140829C7C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14082A0E0 (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x14082BCB4 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082BF48 (CmKeyBodyReplicateToVirtual.c)
 *     CmInitSystem1 @ 0x140A0CCC4 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140A11BA0 (CmGetSystemDriverList.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 */

unsigned __int64 __fastcall CmpDetachFromRegistryProcess(struct _KTHREAD *a1)
{
  return KiUnstackDetachProcess(a1, 0);
}
