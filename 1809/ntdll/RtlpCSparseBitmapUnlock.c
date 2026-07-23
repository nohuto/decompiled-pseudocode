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

void __fastcall RtlpCSparseBitmapUnlock(__int64 a1)
{
  bool v1; // zf
  _RTL_SRWLOCK *v2; // rcx

  v1 = *(_DWORD *)a1 == 1;
  v2 = (_RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 32LL);
  if ( v1 )
    RtlReleaseSRWLockExclusive(v2);
  else
    RtlReleaseSRWLockShared(v2);
}
