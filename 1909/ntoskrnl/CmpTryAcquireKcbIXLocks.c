/*
 * XREFs of CmpTryAcquireKcbIXLocks @ 0x1407470A4
 * Callers:
 *     CmpPerformUnloadKey @ 0x1406B91E4 (CmpPerformUnloadKey.c)
 *     CmpPrepareForSubtreeInvalidationWorker @ 0x140729590 (CmpPrepareForSubtreeInvalidationWorker.c)
 *     CmpSaveBootControlSet @ 0x140822C90 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14082937C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1408297E0 (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x140839F74 (CmRestoreKey.c)
 * Callees:
 *     CmpTryAcquireIXLockWithRollbackPacket @ 0x140747110 (CmpTryAcquireIXLockWithRollbackPacket.c)
 */

__int64 __fastcall CmpTryAcquireKcbIXLocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  __int64 v7; // rdx
  int v8; // esi
  __int64 result; // rax

  v6 = CmpTryAcquireIXLockWithRollbackPacket(a1 + 248, a2, a4);
  LOBYTE(v7) = 1;
  v8 = v6;
  result = CmpTryAcquireIXLockWithRollbackPacket(a1 + 264, v7, a4);
  if ( v8 < 0 )
  {
    if ( v8 != -1073741267 )
      return (unsigned int)v8;
    if ( (int)result >= 0 )
      return 3221226029LL;
  }
  else if ( (int)result >= 0 )
  {
    return 0LL;
  }
  if ( (_DWORD)result == -1073741267 )
    return 3221226029LL;
  return result;
}
