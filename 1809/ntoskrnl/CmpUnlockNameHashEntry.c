/*
 * XREFs of CmpUnlockNameHashEntry @ 0x1405D671C
 * Callers:
 *     CmpDereferenceNameControlBlockWithLock @ 0x1405D449C (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpGetNameControlBlock @ 0x1405D6490 (CmpGetNameControlBlock.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 */

__int64 __fastcall CmpUnlockNameHashEntry(unsigned int a1)
{
  return ExReleasePushLockEx(
           (ULONG_PTR)CmpNameCacheTable
         + 16
         * (((unsigned __int16)(-30045 * (a1 ^ (a1 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027
                                                                                                 * (a1 ^ (a1 >> 9))) >> 9)) & 0x7FF),
           0LL);
}
