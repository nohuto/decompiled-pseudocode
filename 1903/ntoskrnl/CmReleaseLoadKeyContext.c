/*
 * XREFs of CmReleaseLoadKeyContext @ 0x14063AD60
 * Callers:
 *     CmLoadDifferencingKey @ 0x140638BDC (CmLoadDifferencingKey.c)
 * Callees:
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140602480 (CmpDereferenceKeyControlBlock.c)
 *     UNLOCK_HIVE_LOAD @ 0x140661F00 (UNLOCK_HIVE_LOAD.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140661F3C (CmpDoQueueLateUnloadWorker.c)
 *     LOCK_HIVE_LOAD @ 0x140662090 (LOCK_HIVE_LOAD.c)
 */

void __fastcall CmReleaseLoadKeyContext(ULONG_PTR BugCheckParameter4, int a2)
{
  char v3; // bl

  if ( a2 < 0 )
  {
    LOCK_HIVE_LOAD();
    CmpLockRegistry();
    v3 = *(_BYTE *)(*(_QWORD *)(BugCheckParameter4 + 32) + 2936LL);
    CmpDereferenceKeyControlBlock(BugCheckParameter4);
    if ( v3 == 1 )
      CmpDoQueueLateUnloadWorker(*(_QWORD *)(BugCheckParameter4 + 32));
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
  }
  else
  {
    CmpDereferenceKeyControlBlock(BugCheckParameter4);
  }
}
