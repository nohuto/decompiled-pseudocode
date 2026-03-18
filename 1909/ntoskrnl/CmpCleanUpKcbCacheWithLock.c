/*
 * XREFs of CmpCleanUpKcbCacheWithLock @ 0x140665428
 * Callers:
 *     CmpDereferenceKeyControlBlock @ 0x140603F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpDelayCloseWorker @ 0x140661A50 (CmpDelayCloseWorker.c)
 *     CmpCleanUpKCBCacheTable @ 0x1406BA5C8 (CmpCleanUpKCBCacheTable.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406C53FC (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14082ACBC (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x14063D914 (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     CmpRemoveKeyHash @ 0x14063D96C (CmpRemoveKeyHash.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14063DA9C (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x14063DB68 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14066552C (CmpDelayDerefKeyControlBlock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140667DC8 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpEtwDumpKcb @ 0x140825BE8 (CmpEtwDumpKcb.c)
 */

_UNKNOWN **__fastcall CmpCleanUpKcbCacheWithLock(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  _UNKNOWN **result; // rax
  ULONG_PTR v3; // rbp
  _QWORD *v5; // rcx
  ULONG_PTR v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = 0LL;
  if ( !*(_QWORD *)BugCheckParameter4 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    {
      LOBYTE(a2) = 23;
      CmpEtwDumpKcb(BugCheckParameter4, a2);
    }
    if ( (*(_WORD *)(BugCheckParameter4 + 186) & 0x40) == 0 && (*(_BYTE *)(BugCheckParameter4 + 8) & 8) != 0 )
    {
      CmpDelayDerefKeyControlBlock(*(_QWORD *)(BugCheckParameter4 + 104));
      *(_QWORD *)(BugCheckParameter4 + 104) = 0LL;
      *(_WORD *)(BugCheckParameter4 + 8) &= ~8u;
    }
    CmpDereferenceNameControlBlockWithLock(*(_QWORD *)(BugCheckParameter4 + 80));
    if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter4 + 112), 0x6E494D43u);
    v5 = *(_QWORD **)(BugCheckParameter4 + 192);
    if ( v5 )
    {
      v7 = v5[3];
      if ( v7 )
      {
        v8 = *v5;
        v3 = *(_QWORD *)(v7 + 16);
        if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v9 = (_QWORD *)v5[1], (_QWORD *)*v9 != v5) )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
      }
      ExFreePoolWithTag(v5, 0);
      *(_QWORD *)(BugCheckParameter4 + 192) = 0LL;
    }
    v6 = *(_QWORD *)(BugCheckParameter4 + 72);
    if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 0x20000) != 0 )
    {
      CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4);
      CmpRemoveKeyHashFromDeletedKcbTable(*(_QWORD *)(BugCheckParameter4 + 32), (_DWORD *)(BugCheckParameter4 + 16));
      result = (_UNKNOWN **)CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
    }
    else
    {
      result = (_UNKNOWN **)CmpRemoveKeyHash(*(_QWORD *)(BugCheckParameter4 + 32), (_DWORD *)(BugCheckParameter4 + 16));
    }
    *(_DWORD *)(BugCheckParameter4 + 8) |= 0x80000u;
    if ( v3 )
      result = (_UNKNOWN **)CmpDelayDerefKeyControlBlock(v3);
    if ( v6 )
      return (_UNKNOWN **)CmpDelayDerefKeyControlBlock(v6);
  }
  return result;
}
