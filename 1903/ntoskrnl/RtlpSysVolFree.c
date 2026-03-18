/*
 * XREFs of RtlpSysVolFree @ 0x1406E4210
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140106174 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmPerformStoreSwapOperation @ 0x140143858 (SmPerformStoreSwapOperation.c)
 *     ?Initialize@SC_DEVICE@@UEAAJXZ @ 0x14016A400 (-Initialize@SC_DEVICE@@UEAAJXZ.c)
 *     ?GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x14016A6B8 (-GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x140170694 (--1SC_DISK@@UEAA@XZ.c)
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x14017077C (--1SC_DEVICE@@UEAA@XZ.c)
 *     ?SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x140171650 (-SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 *     IoRegisterPriorityCallback @ 0x14018F2A0 (IoRegisterPriorityCallback.c)
 *     IoUnregisterPriorityCallback @ 0x140298FA0 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1402A5740 (KeDeregisterBoundCallback.c)
 *     KeRegisterBoundCallback @ 0x1402A5B80 (KeRegisterBoundCallback.c)
 *     ??3SC_ENV_ALLOCATOR@@SAXPEAX@Z @ 0x14034B31C (--3SC_ENV_ALLOCATOR@@SAXPEAX@Z.c)
 *     ??_GSC_DISK@@UEAAPEAXI@Z @ 0x14034B330 (--_GSC_DISK@@UEAAPEAXI@Z.c)
 *     ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14034B8D4 (-ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14034BBC8 (-SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z @ 0x14034BFD8 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14034C1B8 (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14034C40C (-SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x14034C4F4 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14034C7CC (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ??_GSC_DEVICE@@UEAAPEAXI@Z @ 0x14034CCF0 (--_GSC_DEVICE@@UEAAPEAXI@Z.c)
 *     ?SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x14034CEF0 (-SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1406200C0 (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140712CC0 (NtOpenObjectAuditAlarm.c)
 *     PsCreateVsmEnclave @ 0x1408CC224 (PsCreateVsmEnclave.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1408D4410 (RtlCreateSystemVolumeInformationFolder.c)
 *     PdcNotificationClientRegister @ 0x1408D94E0 (PdcNotificationClientRegister.c)
 *     PdcNotificationClientUnregister @ 0x1408D9608 (PdcNotificationClientUnregister.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpSysVolFree(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
