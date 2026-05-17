/*
 * XREFs of RtlpCSparseBitmapLock @ 0x18005D5B4
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x18005D4D0 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180065F00 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F21A0 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpCSparseBitmapLock(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v6; // rcx
  int v7; // edi
  signed __int64 result; // rax

  v6 = (volatile signed __int64 *)(a1 + 32);
  v7 = (int)a2;
  if ( (_DWORD)a2 == 1 )
    result = RtlAcquireSRWLockExclusive((unsigned __int64)v6, (unsigned __int64)a2, (unsigned __int64 *)a3, a4);
  else
    result = RtlAcquireSRWLockShared(v6, a2, a3, a4);
  *(_QWORD *)(a3 + 8) = a1;
  *(_BYTE *)(a3 + 4) = -1;
  *(_DWORD *)a3 = v7;
  return result;
}
