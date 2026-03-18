/*
 * XREFs of CmReleaseLoadKeyContext @ 0x1405B7C30
 * Callers:
 *     CmLoadDifferencingKey @ 0x1405B4DBC (CmLoadDifferencingKey.c)
 * Callees:
 *     UNLOCK_HIVE_LOAD @ 0x1405B1514 (UNLOCK_HIVE_LOAD.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1405B1550 (CmpDoQueueLateUnloadWorker.c)
 *     LOCK_HIVE_LOAD @ 0x1405B1690 (LOCK_HIVE_LOAD.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406441C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x140645120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140645170 (CmpUnlockRegistry.c)
 */

_QWORD *__fastcall CmReleaseLoadKeyContext(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v4; // rcx
  char v5; // bl
  __int64 v6; // rcx

  if ( a2 >= 0 )
    return (_QWORD *)CmpDereferenceKeyControlBlock(BugCheckParameter2);
  LOCK_HIVE_LOAD();
  CmpLockRegistry(v4);
  v5 = *(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 24) + 2936LL);
  CmpDereferenceKeyControlBlock(BugCheckParameter2);
  if ( v5 == 1 )
    CmpDoQueueLateUnloadWorker(*(_QWORD *)(BugCheckParameter2 + 24));
  CmpUnlockRegistry(v6);
  return UNLOCK_HIVE_LOAD();
}
