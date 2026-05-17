/*
 * XREFs of RtlpCSparseBitmapUnlock @ 0x18004E77C
 * Callers:
 *     RtlSparseArrayElementAllocate @ 0x18004E500 (RtlSparseArrayElementAllocate.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x18004E6C4 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpCSparseBitmapPageCommit @ 0x18004E798 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x1800502F8 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800F1230 (RtlpUnlockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlpCSparseBitmapUnlock(__int64 a1)
{
  bool v1; // zf
  volatile signed __int64 *v2; // rcx

  v1 = *(_DWORD *)a1 == 1;
  v2 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 24LL);
  if ( v1 )
    return RtlReleaseSRWLockExclusive(v2);
  else
    return RtlReleaseSRWLockShared(v2);
}
