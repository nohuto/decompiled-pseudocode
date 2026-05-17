/*
 * XREFs of RtlpCSparseBitmapUnlock @ 0x18005D4B4
 * Callers:
 *     RtlSparseArrayElementAllocate @ 0x18005CD00 (RtlSparseArrayElementAllocate.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x18005D3FC (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpCSparseBitmapPageCommit @ 0x18005D4D0 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180065F00 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpUnlockHeapManagerForCloning @ 0x1800F3E80 (RtlpUnlockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlpCSparseBitmapUnlock(__int64 a1)
{
  bool v1; // zf
  volatile signed __int64 *v2; // rcx

  v1 = *(_DWORD *)a1 == 1;
  v2 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 32LL);
  if ( v1 )
    return RtlReleaseSRWLockExclusive(v2);
  else
    return RtlReleaseSRWLockShared(v2);
}
