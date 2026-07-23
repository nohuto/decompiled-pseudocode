/*
 * XREFs of ExIsResourceAcquiredSharedLite @ 0x1400B9A20
 * Callers:
 *     CmpIsRegistryLockAcquired @ 0x1401B30F8 (CmpIsRegistryLockAcquired.c)
 *     PpDevNodeLockTree @ 0x14059CF10 (PpDevNodeLockTree.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1405DE0AC (FsRtlAcquireFileForCcFlushEx.c)
 *     CmpDoReOpenTransKey @ 0x1408087FC (CmpDoReOpenTransKey.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExpFastResourceLegacyIsAcquiredShared @ 0x14031BACC (ExpFastResourceLegacyIsAcquiredShared.c)
 */

ULONG __stdcall ExIsResourceAcquiredSharedLite(PERESOURCE Resource)
{
  USHORT Flag; // cx
  ULONG v3; // edi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SpareByte0; // ebp
  POWNER_ENTRY OwnerTable; // rcx
  unsigned int TableSize; // edx
  int v9; // eax
  bool v10; // zf
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v11; // edi
  unsigned __int8 CurrentIrql; // dl
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
    if ( !Resource->ActiveEntries )
      return 0;
    CurrentThread = KeGetCurrentThread();
    if ( (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
      return Resource->OwnerEntry.TableSize >> 3;
    v3 = 0;
    if ( (Flag & 0x80u) != 0 )
      return v3;
    SpareByte0 = CurrentThread->SchedulerApc.SpareByte0;
    KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
    OwnerTable = Resource->OwnerTable;
    if ( OwnerTable )
    {
      TableSize = OwnerTable->TableSize;
      if ( SpareByte0 < TableSize && (struct _KTHREAD *)OwnerTable[SpareByte0].OwnerThread == CurrentThread )
      {
        v11 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable[SpareByte0].TableSize;
LABEL_19:
        v3 = *(unsigned int *)&v11 >> 3;
        goto LABEL_17;
      }
      v9 = 1;
      if ( TableSize > 1 )
      {
        while ( 1 )
        {
          v10 = OwnerTable[1].OwnerThread == (_QWORD)CurrentThread;
          ++OwnerTable;
          if ( v10 )
            break;
          if ( ++v9 >= TableSize )
            goto LABEL_17;
        }
        v11 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable->TableSize;
        goto LABEL_19;
      }
    }
LABEL_17:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return v3;
  }
  return ExpFastResourceLegacyIsAcquiredShared(Resource);
}
