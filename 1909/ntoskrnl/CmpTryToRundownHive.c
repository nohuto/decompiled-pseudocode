/*
 * XREFs of CmpTryToRundownHive @ 0x1401129E0
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x1406B9620 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140082C50 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1400EA950 (ExRundownCompleted.c)
 *     ExpUnblockPushLock @ 0x1400F8AC4 (ExpUnblockPushLock.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x1405FF930 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FFA40 (CmpAcquireShutdownRundown.c)
 *     UNLOCK_HIVE_LOAD @ 0x140638630 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140638760 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406387C0 (LOCK_HIVE_LOAD.c)
 *     CmpCleanupRollbackPacket @ 0x1406B9FA4 (CmpCleanupRollbackPacket.c)
 *     CmpInitializeRollbackPacket @ 0x1406B9FDC (CmpInitializeRollbackPacket.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x1406BA404 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmShutdownCmRM @ 0x1406BA828 (CmShutdownCmRM.c)
 *     CmCloseTmHandle @ 0x1406BAB3C (CmCloseTmHandle.c)
 *     CmCloseRmHandle @ 0x1406BAB60 (CmCloseRmHandle.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406BAB84 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmSnapshotRMTxArray @ 0x1406BABA4 (CmSnapshotRMTxArray.c)
 *     CmpAbortRollbackPacket @ 0x1406BACDC (CmpAbortRollbackPacket.c)
 *     CmObliterateRMTxArray @ 0x14082EDBC (CmObliterateRMTxArray.c)
 */

char __fastcall CmpTryToRundownHive(struct _EX_RUNDOWN_REF *a1, __int64 a2, _BYTE *a3, char a4)
{
  char v5; // r15
  char v6; // r14
  char *v9; // r8
  char v10; // r12
  bool v11; // zf
  unsigned __int64 Count; // rcx
  __int64 v14; // rcx
  void *v15; // r14
  void *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  signed __int32 v20[8]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v21[7]; // [rsp+20h] [rbp-38h] BYREF

  v21[0] = 0LL;
  v5 = 0;
  v21[1] = 0LL;
  v6 = 0;
  CmpInitializeRollbackPacket(v21);
  v10 = *v9;
  while ( 1 )
  {
    if ( *a3 )
      CmpReleaseShutdownRundown();
    *a3 = 0;
    if ( !(unsigned __int8)CmpAcquireShutdownRundown() )
      goto LABEL_26;
    v11 = *(_QWORD *)a2 == 2LL;
    *a3 = 1;
    if ( !v11 && ((unsigned __int8)CmpDoesKeyHaveOpenSubkeys(a2) || *(_QWORD *)a2 != 2LL) )
      goto LABEL_26;
    if ( !v5 )
    {
      *(_DWORD *)(a2 + 8) |= 0x40000u;
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      _InterlockedIncrement(&CmpActiveHiveRundownCount);
      ExWaitForRundownProtectionRelease(a1 + 204);
      ExRundownCompleted(a1 + 204);
      v5 = 1;
      LOCK_HIVE_LOAD();
      LOBYTE(v14) = 1;
      goto LABEL_15;
    }
    Count = a1[524].Count;
    if ( !Count || v6 )
      break;
    if ( (int)CmSnapshotRMTxArray(Count, v21) < 0 )
      goto LABEL_26;
    CmpLogTransactionAbortedForRollbackPacket(a2, 11LL, v21);
    CmpUnlockRegistry();
    if ( LODWORD(v21[0]) )
    {
      UNLOCK_HIVE_LOAD();
      if ( (int)CmpAbortRollbackPacket(v21) < 0 )
      {
        LOCK_HIVE_LOAD();
        LOBYTE(v19) = 1;
        CmpLockRegistryFreezeAware(v19);
LABEL_26:
        if ( v5 )
        {
          *(_DWORD *)(a2 + 8) &= ~0x40000u;
          _InterlockedExchange64((volatile __int64 *)&a1[204], 0LL);
          if ( !_InterlockedDecrement(&CmpActiveHiveRundownCount) )
          {
            _InterlockedOr(v20, 0);
            if ( CmpActiveHiveRundownEvent )
              ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0);
          }
        }
        CmpCleanupRollbackPacket(v21);
        if ( *a3 )
        {
          CmpReleaseShutdownRundown();
          *a3 = 0;
        }
        return 0;
      }
      if ( a4 == 1 )
        CmObliterateRMTxArray(a1[524].Count);
      LOCK_HIVE_LOAD();
      LOBYTE(v14) = 1;
LABEL_15:
      CmpLockRegistryFreezeAware(v14);
    }
    else
    {
      v15 = (void *)CmCloseRmHandle(a1[524].Count, 0LL);
      v16 = (void *)CmCloseTmHandle(a1[524].Count);
      UNLOCK_HIVE_LOAD();
      if ( v15 )
        ZwClose(v15);
      if ( v16 )
        ZwClose(v16);
      LOCK_HIVE_LOAD();
      LOBYTE(v17) = 1;
      CmShutdownCmRM(a1[524].Count, v17);
      LOBYTE(v18) = 1;
      CmpLockRegistryFreezeAware(v18);
      v6 = 1;
    }
  }
  if ( !_InterlockedDecrement(&CmpActiveHiveRundownCount) )
  {
    _InterlockedOr(v20, 0);
    if ( CmpActiveHiveRundownEvent )
      ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0);
  }
  CmpCleanupRollbackPacket(v21);
  if ( !v10 )
  {
    CmpReleaseShutdownRundown();
    *a3 = 0;
  }
  return 1;
}
