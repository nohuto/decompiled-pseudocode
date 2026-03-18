/*
 * XREFs of RtlpSysVolFree @ 0x1406E51F0
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011B014 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmPerformStoreSwapOperation @ 0x140143D98 (SmPerformStoreSwapOperation.c)
 *     ?Initialize@SC_DEVICE@@UEAAJXZ @ 0x14016AAF0 (-Initialize@SC_DEVICE@@UEAAJXZ.c)
 *     ?GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x14016ADA8 (-GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x140170D84 (--1SC_DISK@@UEAA@XZ.c)
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x140170E6C (--1SC_DEVICE@@UEAA@XZ.c)
 *     ?SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x140171D40 (-SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 *     IoRegisterPriorityCallback @ 0x14018A1E0 (IoRegisterPriorityCallback.c)
 *     IoUnregisterPriorityCallback @ 0x140298D00 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1402A54A0 (KeDeregisterBoundCallback.c)
 *     KeRegisterBoundCallback @ 0x1402A58E0 (KeRegisterBoundCallback.c)
 *     ??3SC_ENV_ALLOCATOR@@SAXPEAX@Z @ 0x14034AD7C (--3SC_ENV_ALLOCATOR@@SAXPEAX@Z.c)
 *     ??_GSC_DISK@@UEAAPEAXI@Z @ 0x14034AD90 (--_GSC_DISK@@UEAAPEAXI@Z.c)
 *     ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14034B334 (-ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14034B628 (-SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z @ 0x14034BA38 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14034BC18 (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14034BE6C (-SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x14034BF54 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14034C22C (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ??_GSC_DEVICE@@UEAAPEAXI@Z @ 0x14034C750 (--_GSC_DEVICE@@UEAAPEAXI@Z.c)
 *     ?SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x14034C950 (-SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140621BE0 (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140714AA0 (NtOpenObjectAuditAlarm.c)
 *     PsCreateVsmEnclave @ 0x1408CBB04 (PsCreateVsmEnclave.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1408D3D10 (RtlCreateSystemVolumeInformationFolder.c)
 *     PdcNotificationClientRegister @ 0x1408D8DE0 (PdcNotificationClientRegister.c)
 *     PdcNotificationClientUnregister @ 0x1408D8F08 (PdcNotificationClientUnregister.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpSysVolFree(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
