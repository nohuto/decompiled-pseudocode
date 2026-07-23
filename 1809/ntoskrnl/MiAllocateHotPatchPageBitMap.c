/*
 * XREFs of MiAllocateHotPatchPageBitMap @ 0x1408551CC
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1408552E0 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140859374 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiAllocateHotPatchPageBitMap(_QWORD *a1)
{
  unsigned int v2; // esi
  PVOID PoolWithTag; // rax
  PVOID v4; // rdi
  __int64 result; // rax

  v2 = (*(_DWORD *)(*a1 + 64LL) >> 12) + ((*(_DWORD *)(*a1 + 64LL) & 0xFFF) != 0);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int64)(v2 + 7) >> 3, 0x4D425048u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, (unsigned __int64)(v2 + 7) >> 3);
  a1[2] = v2;
  result = 0LL;
  a1[3] = v4;
  return result;
}
