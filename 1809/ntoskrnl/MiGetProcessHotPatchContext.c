/*
 * XREFs of MiGetProcessHotPatchContext @ 0x140856450
 * Callers:
 *     MiDeleteImageHotPatchState @ 0x140855F3C (MiDeleteImageHotPatchState.c)
 *     MiHotPatchImage @ 0x140856590 (MiHotPatchImage.c)
 *     MiQueryProcessActivePatches @ 0x140858DF0 (MiQueryProcessActivePatches.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiGetProcessHotPatchContext(__int64 a1, int a2)
{
  _QWORD *result; // rax
  PVOID PoolWithTag; // rax
  _QWORD *v5; // rbx
  signed __int64 v6; // rdi

  result = *(_QWORD **)(a1 + 2120);
  if ( !result )
  {
    if ( a2 && (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x43505048u), (v5 = PoolWithTag) != 0LL) )
    {
      memset(PoolWithTag, 0, 0x28uLL);
      *v5 = 0LL;
      v5[1] = 0LL;
      v5[4] = v5 + 3;
      v5[3] = v5 + 3;
      v5[2] = 0LL;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2120), (signed __int64)v5, 0LL);
      if ( !v6 )
        return v5;
      ExFreePoolWithTag(v5, 0);
      return (_QWORD *)v6;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
