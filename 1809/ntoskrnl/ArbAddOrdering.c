/*
 * XREFs of ArbAddOrdering @ 0x14073AAD8
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x14073A628 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbAddOrdering(unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int16 v6; // ax
  PVOID PoolWithTag; // rax
  PVOID v9; // rbp
  const void *v10; // rdx

  if ( a3 < a2 )
    return 3221225485LL;
  v6 = *a1;
  if ( *a1 != a1[1] )
  {
LABEL_3:
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL * v6) = a2;
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL * (*a1)++ + 8) = a3;
    return 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16 * (v6 + 8LL), 0x4C627241u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    v10 = (const void *)*((_QWORD *)a1 + 1);
    if ( v10 )
    {
      memmove(PoolWithTag, v10, 16LL * *a1);
      ExFreePoolWithTag(*((PVOID *)a1 + 1), 0);
    }
    a1[1] += 8;
    v6 = *a1;
    *((_QWORD *)a1 + 1) = v9;
    goto LABEL_3;
  }
  return 3221225626LL;
}
