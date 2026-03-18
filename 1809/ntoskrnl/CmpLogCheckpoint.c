/*
 * XREFs of CmpLogCheckpoint @ 0x140701D98
 * Callers:
 *     CmpStopRMLog @ 0x1406931DC (CmpStopRMLog.c)
 *     CmpTransWriteLog @ 0x1406F7EB8 (CmpTransWriteLog.c)
 *     CmpCleanupTransactionState @ 0x140701C4C (CmpCleanupTransactionState.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     CmListGetNextElement @ 0x1406948E0 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpLogCheckpoint(__int64 a1, __int64 a2, char a3)
{
  int v3; // edi
  struct _KTHREAD *CurrentThread; // rax
  char *NextElement; // rax
  NTSTATUS LogFileInformation; // eax
  CLFS_LSN LastLsn; // rcx
  CLFS_INFORMATION *PoolWithTag; // rax
  CLFS_INFORMATION *v11; // rbx
  void *v12; // rcx
  NTSTATUS v13; // eax
  CLFS_INFORMATION *v14; // rax
  CLFS_INFORMATION *v15; // rbx
  const CLFS_LSN *v17; // r14
  CLFS_CONTAINER_ID v18; // ebx
  CLFS_LSN plsn; // [rsp+48h] [rbp-89h] BYREF
  ULONG pcbInfoBuffer; // [rsp+50h] [rbp-81h] BYREF
  ULONG v21; // [rsp+54h] [rbp-7Dh] BYREF
  ULONG v22; // [rsp+58h] [rbp-79h] BYREF
  _QWORD *v23; // [rsp+60h] [rbp-71h] BYREF
  CLFS_LSN plsnNext; // [rsp+68h] [rbp-69h] BYREF
  CLFS_LSN pvRestartBuffer; // [rsp+70h] [rbp-61h] BYREF
  CLFS_INFORMATION pinfoBuffer; // [rsp+78h] [rbp-59h] BYREF

  v3 = 0;
  v23 = 0LL;
  plsn.ullOffset = CLFS_LSN_INVALID_EXT;
  plsnNext.ullOffset = CLFS_LSN_NULL_EXT;
  pcbInfoBuffer = 120;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  while ( 1 )
  {
    NextElement = CmListGetNextElement((_QWORD **)(a1 + 16), &v23, 0);
    if ( !NextElement )
      break;
    v17 = (const CLFS_LSN *)(NextElement + 104);
    if ( !ClfsLsnInvalid((const CLFS_LSN *)NextElement + 13) )
    {
      v18 = ClfsLsnContainer((const CLFS_LSN *)(a1 + 120));
      if ( ClfsLsnContainer(v17) == v18 )
      {
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        return 0LL;
      }
    }
    if ( ClfsLsnInvalid(&plsn) || ClfsLsnLess(v17, &plsn) )
      plsn = *v17;
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( ClfsLsnInvalid(&plsn) )
  {
    LogFileInformation = ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), &pinfoBuffer, &pcbInfoBuffer);
    LastLsn = plsn;
    v3 = LogFileInformation;
    if ( LogFileInformation >= 0 )
      LastLsn = pinfoBuffer.LastLsn;
    plsn = LastLsn;
  }
  v21 = 120;
  PoolWithTag = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), PoolWithTag, &v21);
    ExFreePoolWithTag(v11, 0);
  }
  if ( v3 >= 0 )
  {
    v12 = *(void **)(a1 + 96);
    pvRestartBuffer = plsn;
    v13 = ClfsWriteRestartArea(
            v12,
            &pvRestartBuffer,
            8u,
            (PCLFS_LSN)((unsigned __int64)&plsn & -(__int64)(a3 != 0)),
            0,
            &pcbInfoBuffer,
            &plsnNext);
    v3 = v13;
    if ( a3 )
    {
      if ( v13 >= 0 )
        *(CLFS_LSN *)(a1 + 120) = plsn;
    }
  }
  v22 = 120;
  v14 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
  v15 = v14;
  if ( v14 )
  {
    ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), v14, &v22);
    ExFreePoolWithTag(v15, 0);
  }
  return (unsigned int)v3;
}
