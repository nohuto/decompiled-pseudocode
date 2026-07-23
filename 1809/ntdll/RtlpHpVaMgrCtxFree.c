/*
 * XREFs of RtlpHpVaMgrCtxFree @ 0x180065734
 * Callers:
 *     RtlpHpFreeVA @ 0x1800611FC (RtlpHpFreeVA.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVaMgrFree @ 0x180063908 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x180063A94 (RtlpHpVaMgrRangeSplit.c)
 *     RtlSparseArrayElementAllocated @ 0x18006586C (RtlSparseArrayElementAllocated.c)
 *     RtlpHpVaMgrRangeFree @ 0x180065B04 (RtlpHpVaMgrRangeFree.c)
 *     ZwFreeVirtualMemory @ 0x1800A06C0 (ZwFreeVirtualMemory.c)
 *     RtlSparseArrayElementFindCapped @ 0x18010E118 (RtlSparseArrayElementFindCapped.c)
 */

void __fastcall RtlpHpVaMgrCtxFree(__int64 a1, PVOID *a2, ULONG_PTR *a3)
{
  ULONG_PTR v6; // rdi
  char *v7; // rax
  __int64 v8; // rbx
  char v9; // dl
  __int64 v10; // rsi
  char v11; // dl
  __int64 v12; // rax
  ULONG_PTR v13; // rax
  __int64 v14; // rdi
  __int64 Capped; // rbx

  v6 = *a3 >> 20;
  v7 = (char *)RtlSparseArrayElementAllocated(a1 + 16, ((unsigned __int64)*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v8 = (__int64)v7;
  if ( !v7 )
  {
    Capped = RtlSparseArrayElementFindCapped(
               a1 + 16,
               ((__int64)*a2 - *(_QWORD *)(a1 + 8)) / 0x100000,
               ~(((__int64)*a2 - *(_QWORD *)(a1 + 8)) / 0x100000));
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, a3, 0x8000u);
    *(_QWORD *)(Capped + 24) -= *a3 >> 20;
    return;
  }
  v9 = *v7;
  v10 = 48LL * (unsigned __int8)v7[1] + a1 + 112;
  if ( (*v7 & 4) != 0 )
  {
    *v7 = v9 & 0xFE;
LABEL_20:
    RtlpHpVaMgrRangeFree(v10, v8);
    return;
  }
  if ( (*(_BYTE *)(v10 + 46) & 6u) < 4 )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, a3, 0x4000u);
    v9 = *(_BYTE *)v8;
  }
  if ( (v9 & 2) != 0 )
  {
    v14 = v8;
    do
      v8 -= 32LL;
    while ( (*(_BYTE *)v8 & 2) != 0 );
  }
  else
  {
    v11 = v9 & 4;
    if ( ((*(_BYTE *)(v10 + 46) >> 4) & (v11 == 0)) == 0 )
    {
      v12 = v11 ? *(_QWORD *)(v8 + 24) : *(unsigned __int16 *)(v8 + 24);
      if ( v6 != v12 )
        __int2c();
    }
    if ( v11 )
      v13 = *(_QWORD *)(v8 + 24);
    else
      v13 = *(unsigned __int16 *)(v8 + 24);
    if ( v6 < v13 )
      v14 = v8 + 32 * v6;
    else
      v14 = 0LL;
  }
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v10);
  if ( v14 )
    RtlpHpVaMgrRangeSplit(v10, v8, (v14 - v8) >> 5);
  v8 = RtlpHpVaMgrFree(v10);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v10);
  if ( v8 )
    goto LABEL_20;
}
