/*
 * XREFs of CmpLockDeletedHashEntryExclusiveByKcb @ 0x14063DB68
 * Callers:
 *     CmpDiscardKcb @ 0x14063D9F4 (CmpDiscardKcb.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140665428 (CmpCleanUpKcbCacheWithLock.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x1406619EC (CmpReferenceHive.c)
 */

__int64 __fastcall CmpLockDeletedHashEntryExclusiveByKcb(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 v3; // r8
  ULONG_PTR v4; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(BugCheckParameter4 + 32);
  v3 = (unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9)));
  v4 = *(_QWORD *)(v2 + 1656) + 24 * ((unsigned int)(*(_DWORD *)(v2 + 1664) - 1) & (v3 ^ (v3 >> 9)));
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  result = CmpReferenceHive(v2);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x51u, 0x17uLL, v2, 8uLL, BugCheckParameter4);
  return result;
}
