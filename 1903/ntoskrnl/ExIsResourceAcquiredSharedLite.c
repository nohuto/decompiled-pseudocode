/*
 * XREFs of ExIsResourceAcquiredSharedLite @ 0x14003F5C0
 * Callers:
 *     CmpDoQueryKeyName @ 0x140092BC0 (CmpDoQueryKeyName.c)
 *     CmpParseKey @ 0x1405F8510 (CmpParseKey.c)
 *     NtQueryValueKey @ 0x1405FD5A0 (NtQueryValueKey.c)
 *     CmPostCallbackNotification @ 0x1405FECFC (CmPostCallbackNotification.c)
 *     NtQueryKey @ 0x1405FF6B0 (NtQueryKey.c)
 *     CmpDeleteKeyObject @ 0x140602160 (CmpDeleteKeyObject.c)
 *     NtSetValueKey @ 0x14062C340 (NtSetValueKey.c)
 *     NtDeleteKey @ 0x140638040 (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x140638BDC (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x1406397C0 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14063B060 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x14064D920 (NtEnumerateValueKey.c)
 *     CmpSecurityMethod @ 0x14064F260 (CmpSecurityMethod.c)
 *     NtEnumerateKey @ 0x14064F940 (NtEnumerateKey.c)
 *     CmPostCallbackNotificationEx @ 0x140687860 (CmPostCallbackNotificationEx.c)
 *     CmUnloadKey @ 0x14069A6C4 (CmUnloadKey.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14069EF34 (FsRtlAcquireFileForCcFlushEx.c)
 *     PpDevNodeLockTree @ 0x1406A2C34 (PpDevNodeLockTree.c)
 *     NtSetInformationKey @ 0x1406BC830 (NtSetInformationKey.c)
 *     NtFlushKey @ 0x1406E4CD0 (NtFlushKey.c)
 *     NtRenameKey @ 0x140824780 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140824BF0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140824F70 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140825240 (NtSaveKeyEx.c)
 *     CmpDoReOpenTransKey @ 0x140840E5C (CmpDoReOpenTransKey.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExpFastResourceLegacyIsAcquiredShared @ 0x14033A568 (ExpFastResourceLegacyIsAcquiredShared.c)
 */

ULONG __stdcall ExIsResourceAcquiredSharedLite(PERESOURCE Resource)
{
  USHORT Flag; // cx
  ULONG v3; // esi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SpareByte0; // rbp
  unsigned __int8 v7; // r8
  POWNER_ENTRY OwnerTable; // rax
  unsigned int TableSize; // edx
  int v10; // ecx
  bool v11; // zf
  unsigned __int8 OldIrql; // bl
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v13; // esi
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  }
  if ( (Flag & 1) == 0 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( !Resource->ActiveEntries )
      return 0;
    CurrentThread = KeGetCurrentThread();
    if ( (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
      return Resource->OwnerEntry.TableSize >> 3;
    v3 = 0;
    if ( (Flag & 0x80u) != 0 )
      return v3;
    SpareByte0 = CurrentThread->SchedulerApc.SpareByte0;
    LockHandle.LockQueue.Lock = &Resource->SpinLock;
    LockHandle.LockQueue.Next = 0LL;
    v7 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v7 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    LockHandle.OldIrql = v7;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&Resource->SpinLock);
    OwnerTable = Resource->OwnerTable;
    if ( OwnerTable )
    {
      TableSize = OwnerTable->TableSize;
      if ( (unsigned int)SpareByte0 < TableSize
        && (struct _KTHREAD *)OwnerTable[SpareByte0].OwnerThread == CurrentThread )
      {
        v13 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable[SpareByte0].TableSize;
      }
      else
      {
        v10 = 1;
        if ( TableSize <= 1 )
          goto LABEL_18;
        while ( 1 )
        {
          v11 = OwnerTable[1].OwnerThread == (_QWORD)CurrentThread;
          ++OwnerTable;
          if ( v11 )
            break;
          if ( ++v10 >= TableSize )
            goto LABEL_18;
        }
        v13 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable->TableSize;
      }
      v3 = *(unsigned int *)&v13 >> 3;
    }
LABEL_18:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    return v3;
  }
  return ExpFastResourceLegacyIsAcquiredShared(Resource);
}
