/*
 * XREFs of MiGetProcessHotPatchContext @ 0x14088DE88
 * Callers:
 *     MiLogHotPatchRundown @ 0x1405B0E40 (MiLogHotPatchRundown.c)
 *     MiDeleteImageHotPatchState @ 0x14088D96C (MiDeleteImageHotPatchState.c)
 *     MiHotPatchImage @ 0x14088DFC4 (MiHotPatchImage.c)
 *     MiQueryProcessActivePatches @ 0x140890DDC (MiQueryProcessActivePatches.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiGetProcessHotPatchContext(__int64 a1, int a2)
{
  _QWORD *result; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  signed __int64 v7; // rbx

  result = *(_QWORD **)(a1 + 2168);
  if ( !result )
  {
    if ( a2 && (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x43505048u), (v5 = PoolWithTag) != 0LL) )
    {
      PoolWithTag[4] = 0LL;
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      v6 = PoolWithTag + 3;
      v6[1] = v6;
      *v6 = v6;
      v5[2] = 0LL;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2168), (signed __int64)v5, 0LL);
      if ( !v7 )
        return v5;
      ExFreePoolWithTag(v5, 0);
      return (_QWORD *)v7;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
