/*
 * XREFs of CmpTryToRundownHive @ 0x1400993CC
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x140662850 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140082850 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1400E59B0 (ExRundownCompleted.c)
 *     ExpUnblockPushLock @ 0x14010BB14 (ExpUnblockPushLock.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x1405FDF00 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FE010 (CmpAcquireShutdownRundown.c)
 *     UNLOCK_HIVE_LOAD @ 0x140661F00 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140662030 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x140662090 (LOCK_HIVE_LOAD.c)
 *     CmpCleanupRollbackPacket @ 0x1406627FC (CmpCleanupRollbackPacket.c)
 *     CmpInitializeRollbackPacket @ 0x140662834 (CmpInitializeRollbackPacket.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x14069B44C (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmShutdownCmRM @ 0x14069B8F8 (CmShutdownCmRM.c)
 *     CmCloseTmHandle @ 0x14069BC0C (CmCloseTmHandle.c)
 *     CmCloseRmHandle @ 0x14069BC30 (CmCloseRmHandle.c)
 *     CmpAbortRollbackPacket @ 0x14069BC54 (CmpAbortRollbackPacket.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x14069BCB0 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmSnapshotRMTxArray @ 0x14069BCD0 (CmSnapshotRMTxArray.c)
 *     CmObliterateRMTxArray @ 0x14082EF4C (CmObliterateRMTxArray.c)
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
              ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0LL);
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
      ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0LL);
  }
  CmpCleanupRollbackPacket(v21);
  if ( !v10 )
  {
    CmpReleaseShutdownRundown();
    *a3 = 0;
  }
  return 1;
}
