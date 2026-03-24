/*
 * XREFs of CmpRemoveKeyHashFromDeletedKcbTable @ 0x14069FFF0
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x1405D43B8 (CmpCleanUpKcbCacheWithLock.c)
 * Callees:
 *     CmpRemoveKeyHashFromTableEntry @ 0x1406A00A0 (CmpRemoveKeyHashFromTableEntry.c)
 */

__int64 __fastcall CmpRemoveKeyHashFromDeletedKcbTable(__int64 a1, _DWORD *a2)
{
  return CmpRemoveKeyHashFromTableEntry(
           a2,
           *(_QWORD *)(a1 + 1656)
         + 24
         * ((unsigned int)(*(_DWORD *)(a1 + 1664) - 1) & ((unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*a2 ^ (*a2 >> 9))) >> 9))));
}
