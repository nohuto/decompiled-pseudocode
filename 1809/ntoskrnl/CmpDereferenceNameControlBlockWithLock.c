/*
 * XREFs of CmpDereferenceNameControlBlockWithLock @ 0x1405D449C
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x1405D43B8 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1405D5EB0 (CmpCreateKeyControlBlock.c)
 *     CmRenameKey @ 0x1407EDB14 (CmRenameKey.c)
 *     CmpCloneToUnbackedKcb @ 0x1407F0AD0 (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     CmpLockNameHashEntryExclusive @ 0x1405D66DC (CmpLockNameHashEntryExclusive.c)
 *     CmpUnlockNameHashEntry @ 0x1405D671C (CmpUnlockNameHashEntry.c)
 */

__int64 __fastcall CmpDereferenceNameControlBlockWithLock(unsigned int *a1)
{
  _DWORD *v1; // rsi
  unsigned int v3; // ebx
  unsigned int v4; // eax
  __int64 *v5; // rcx
  __int64 v6; // rax

  v1 = a1 + 2;
  v3 = a1[2];
  CmpLockNameHashEntryExclusive(v3);
  v4 = *a1 & 1 | (2 * (*a1 >> 1) - 2);
  *a1 = v4;
  if ( v4 < 2 )
  {
    v5 = (__int64 *)((char *)CmpNameCacheTable
                   + 16
                   * (((unsigned __int16)(-30045 * (v3 ^ (v3 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (v3 ^ (v3 >> 9))) >> 9)) & 0x7FF)
                   + 8);
    if ( v5 )
    {
      do
      {
        v6 = *v5;
        if ( !*v5 )
          break;
        if ( (_DWORD *)v6 == v1 )
        {
          *v5 = *(_QWORD *)(v6 + 8);
          break;
        }
        v5 = (__int64 *)(v6 + 8);
      }
      while ( v6 != -8 );
    }
    CmpFreeTransientPoolWithTag(a1, 0x624E4D43u);
  }
  return CmpUnlockNameHashEntry(v3);
}
