/*
 * XREFs of MiPrepareDriverPatchState @ 0x140887E00
 * Callers:
 *     MiApplyDriverHotPatch @ 0x14088D4B4 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140891D78 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiPrepareDriverPatchState(__int64 a1)
{
  SIZE_T v2; // rdi
  PVOID PoolWithTag; // rax
  PVOID v4; // rsi

  v2 = (unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 16) + 7) >> 3;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x4D425044u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v2);
  *(_QWORD *)(a1 + 24) = *(unsigned int *)(a1 + 16);
  *(_QWORD *)(a1 + 32) = v4;
  *(_DWORD *)(a1 + 40) = 0;
  return 0LL;
}
