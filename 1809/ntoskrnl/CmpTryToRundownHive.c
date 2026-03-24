/*
 * XREFs of CmpTryToRundownHive @ 0x14000FCAC
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x1405AFC50 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140089890 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x14008F8D0 (ExRundownCompleted.c)
 *     ExpUnblockPushLock @ 0x140111B80 (ExpUnblockPushLock.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     CmpInitializeRollbackPacket @ 0x1405AFF68 (CmpInitializeRollbackPacket.c)
 *     CmpCleanupRollbackPacket @ 0x1405AFF78 (CmpCleanupRollbackPacket.c)
 *     CmpAcquireShutdownRundown @ 0x1405B0138 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x1405B0174 (CmpReleaseShutdownRundown.c)
 *     UNLOCK_HIVE_LOAD @ 0x1405B1514 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1405B1640 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1405B1690 (LOCK_HIVE_LOAD.c)
 *     CmpUnlockRegistry @ 0x140645150 (CmpUnlockRegistry.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x1406928AC (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmShutdownCmRM @ 0x140692F6C (CmShutdownCmRM.c)
 *     CmCloseTmHandle @ 0x140693280 (CmCloseTmHandle.c)
 *     CmCloseRmHandle @ 0x1406932A4 (CmCloseRmHandle.c)
 *     CmSnapshotRMTxArray @ 0x140694768 (CmSnapshotRMTxArray.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406D01D0 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpAbortRollbackPacket @ 0x1407027CC (CmpAbortRollbackPacket.c)
 *     CmObliterateRMTxArray @ 0x1407F612C (CmObliterateRMTxArray.c)
 */

char CmpTryToRundownHive(struct _EX_RUNDOWN_REF *a1, _DWORD *a2, _BYTE *a3, ...)
{
  char v4; // r15
  char v5; // r14
  char *v8; // r8
  char v9; // r12
  bool v10; // zf
  unsigned __int64 Count; // rcx
  __int64 v13; // rcx
  void *v14; // r14
  void *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  signed __int32 v19[8]; // [rsp+0h] [rbp-58h] BYREF
  _DWORD v20[14]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, _QWORD);
  v4 = 0;
  v5 = 0;
  CmpInitializeRollbackPacket(v20);
  v9 = *v8;
  while ( 1 )
  {
    if ( *a3 )
      CmpReleaseShutdownRundown();
    *a3 = 0;
    if ( !(unsigned __int8)CmpAcquireShutdownRundown() )
      goto LABEL_26;
    v10 = *a2 == 2;
    *a3 = 1;
    if ( !v10 && ((unsigned __int8)CmpDoesKeyHaveOpenSubkeys(a2) || *a2 != 2) )
      goto LABEL_26;
    if ( !v4 )
    {
      a2[1] |= 0x40000u;
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      _InterlockedIncrement(&CmpActiveHiveRundownCount);
      ExWaitForRundownProtectionRelease(a1 + 204);
      ExRundownCompleted(a1 + 204);
      v4 = 1;
      LOCK_HIVE_LOAD();
      LOBYTE(v13) = 1;
      goto LABEL_15;
    }
    Count = a1[524].Count;
    if ( !Count || v5 )
      break;
    if ( (int)CmSnapshotRMTxArray(Count, v20) < 0 )
      goto LABEL_26;
    CmpLogTransactionAbortedForRollbackPacket(a2, 11LL, v20);
    CmpUnlockRegistry();
    if ( v20[0] )
    {
      UNLOCK_HIVE_LOAD();
      if ( (int)CmpAbortRollbackPacket(v20, (__int64 *)va) < 0 )
      {
        LOCK_HIVE_LOAD();
        LOBYTE(v18) = 1;
        CmpLockRegistryFreezeAware(v18);
LABEL_26:
        if ( v4 )
        {
          a2[1] &= ~0x40000u;
          _InterlockedExchange64((volatile __int64 *)&a1[204], 0LL);
          if ( !_InterlockedDecrement(&CmpActiveHiveRundownCount) )
          {
            _InterlockedOr(v19, 0);
            if ( CmpActiveHiveRundownEvent )
              ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0LL);
          }
        }
        CmpCleanupRollbackPacket(v20);
        if ( *a3 )
        {
          CmpReleaseShutdownRundown();
          *a3 = 0;
        }
        return 0;
      }
      if ( (_BYTE)v21 == 1 )
        CmObliterateRMTxArray(a1[524].Count);
      LOCK_HIVE_LOAD();
      LOBYTE(v13) = 1;
LABEL_15:
      CmpLockRegistryFreezeAware(v13);
    }
    else
    {
      v14 = (void *)CmCloseRmHandle(a1[524].Count, 0LL);
      v15 = (void *)CmCloseTmHandle(a1[524].Count);
      UNLOCK_HIVE_LOAD();
      if ( v14 )
        ZwClose(v14);
      if ( v15 )
        ZwClose(v15);
      LOCK_HIVE_LOAD();
      LOBYTE(v16) = 1;
      CmShutdownCmRM(a1[524].Count, v16);
      LOBYTE(v17) = 1;
      CmpLockRegistryFreezeAware(v17);
      v5 = 1;
    }
  }
  if ( !_InterlockedDecrement(&CmpActiveHiveRundownCount) )
  {
    _InterlockedOr(v19, 0);
    if ( CmpActiveHiveRundownEvent )
      ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0LL);
  }
  CmpCleanupRollbackPacket(v20);
  if ( !v9 )
  {
    CmpReleaseShutdownRundown();
    *a3 = 0;
  }
  return 1;
}
