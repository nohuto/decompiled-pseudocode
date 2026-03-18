/*
 * XREFs of CmpDetachFromRegistryProcess @ 0x1405FE58C
 * Callers:
 *     CmpDoQueryKeyName @ 0x1400CFEE0 (CmpDoQueryKeyName.c)
 *     CmpLoadKeyCommon @ 0x1400ED16C (CmpLoadKeyCommon.c)
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x1405FE220 (CmQueryValueKey.c)
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmLoadAppKey @ 0x14063A4D4 (CmLoadAppKey.c)
 *     CmDeleteKey @ 0x14063B4FC (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x14063CCDC (CmDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14063E0F0 (NtQueryMultipleValueKey.c)
 *     CmpSetKeySecurity @ 0x1406409F0 (CmpSetKeySecurity.c)
 *     NtEnumerateValueKey @ 0x140660AE0 (NtEnumerateValueKey.c)
 *     CmEnumerateKey @ 0x1406630F0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x140667F60 (CmQueryKey.c)
 *     CmRmFinalizeRecovery @ 0x14068BDE4 (CmRmFinalizeRecovery.c)
 *     CmLoadKey @ 0x14068BED4 (CmLoadKey.c)
 *     CmpPerformUnloadKey @ 0x1406B91E4 (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x1406B9620 (CmpLateUnloadHiveWorker.c)
 *     NtCommitRegistryTransaction @ 0x1406E32D0 (NtCommitRegistryTransaction.c)
 *     CmpInitializeRegistryProcess @ 0x1407584C4 (CmpInitializeRegistryProcess.c)
 *     CmpSaveBootControlSet @ 0x140822C90 (CmpSaveBootControlSet.c)
 *     NtQueryOpenSubKeysEx @ 0x140823B70 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140823E80 (NtRenameKey.c)
 *     NtSaveMergedKeys @ 0x140824BF0 (NtSaveMergedKeys.c)
 *     CmShutdownSystem @ 0x140826AC4 (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x140826F40 (CmpFreeAllMemory.c)
 *     CmSetKeyFlags @ 0x14082937C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1408297E0 (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x14082B3B4 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082B648 (CmKeyBodyReplicateToVirtual.c)
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140A12338 (CmGetSystemDriverList.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 */

unsigned __int64 __fastcall CmpDetachFromRegistryProcess(struct _KTHREAD *a1)
{
  return KiUnstackDetachProcess(a1, 0);
}
