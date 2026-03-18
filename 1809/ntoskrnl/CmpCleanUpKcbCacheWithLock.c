/*
 * XREFs of CmpCleanUpKcbCacheWithLock @ 0x1405D43B8
 * Callers:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1405A942C (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDelayCloseWorker @ 0x1405D1760 (CmpDelayCloseWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406441C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpCleanUpKCBCacheTable @ 0x140692B3C (CmpCleanUpKCBCacheTable.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1407F12DC (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1405A942C (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1405AA748 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1405AA814 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1405D4264 (CmpDelayDerefKeyControlBlock.c)
 *     CmpCleanUpKcbValueCache @ 0x1405D432C (CmpCleanUpKcbValueCache.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1405D449C (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x1406A0010 (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     CmpRemoveKeyHash @ 0x1406A0068 (CmpRemoveKeyHash.c)
 *     CmpEtwDumpKcb @ 0x1407EB9A0 (CmpEtwDumpKcb.c)
 */

void __fastcall CmpCleanUpKcbCacheWithLock(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  ULONG_PTR v2; // rsi
  char v3; // r14
  _QWORD *v5; // rcx
  ULONG_PTR v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rax

  v2 = 0LL;
  v3 = a2;
  if ( !*(_DWORD *)BugCheckParameter4 )
  {
    if ( CmpTraceRoutine )
    {
      LOBYTE(a2) = 23;
      CmpEtwDumpKcb(BugCheckParameter4, a2);
    }
    CmpCleanUpKcbValueCache(BugCheckParameter4);
    CmpDereferenceNameControlBlockWithLock(*(_QWORD *)(BugCheckParameter4 + 72));
    if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter4 + 104), 0x6E494D43u);
    v5 = *(_QWORD **)(BugCheckParameter4 + 184);
    if ( v5 )
    {
      v7 = v5[3];
      if ( v7 )
      {
        v8 = *v5;
        v2 = *(_QWORD *)(v7 + 16);
        if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v9 = (_QWORD *)v5[1], (_QWORD *)*v9 != v5) )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
      }
      ExFreePoolWithTag(v5, 0);
      *(_QWORD *)(BugCheckParameter4 + 184) = 0LL;
    }
    v6 = *(_QWORD *)(BugCheckParameter4 + 64);
    if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 0x20000) != 0 )
    {
      CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4);
      CmpRemoveKeyHashFromDeletedKcbTable(*(_QWORD *)(BugCheckParameter4 + 24), BugCheckParameter4 + 8);
      CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
    }
    else
    {
      CmpRemoveKeyHash(*(_QWORD *)(BugCheckParameter4 + 24), BugCheckParameter4 + 8);
    }
    *(_DWORD *)(BugCheckParameter4 + 4) |= 0x80000u;
    if ( v2 )
    {
      if ( v3 )
        CmpDereferenceKeyControlBlockWithLock(v2);
      else
        CmpDelayDerefKeyControlBlock(v2);
    }
    if ( v6 )
    {
      if ( v3 )
        CmpDereferenceKeyControlBlockWithLock(v6);
      else
        CmpDelayDerefKeyControlBlock(v6);
    }
  }
}
