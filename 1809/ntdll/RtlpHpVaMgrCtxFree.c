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
 *     ZwFreeVirtualMemory @ 0x1800A06A0 (ZwFreeVirtualMemory.c)
 *     RtlSparseArrayElementFindCapped @ 0x18010E118 (RtlSparseArrayElementFindCapped.c)
 */

signed __int64 __fastcall RtlpHpVaMgrCtxFree(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rdi
  _BYTE *v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  signed __int64 result; // rax
  __int64 Capped; // rbx

  v6 = *a3 >> 20;
  v7 = (_BYTE *)RtlSparseArrayElementAllocated(a1 + 16, (*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v11 = (__int64)v7;
  if ( !v7 )
  {
    Capped = RtlSparseArrayElementFindCapped(
               a1 + 16,
               (*a2 - *(_QWORD *)(a1 + 8)) / 0x100000LL,
               ~((*a2 - *(_QWORD *)(a1 + 8)) / 0x100000LL));
    result = ZwFreeVirtualMemory(-1LL, a2, a3, 0x8000LL);
    *(_QWORD *)(Capped + 24) -= *a3 >> 20;
    return result;
  }
  LOBYTE(v8) = *v7;
  v12 = 48LL * (unsigned __int8)v7[1] + a1 + 112;
  if ( (*v7 & 4) != 0 )
  {
    *v7 = v8 & 0xFE;
    return RtlpHpVaMgrRangeFree(v12, v11);
  }
  if ( (*(_BYTE *)(v12 + 46) & 6u) < 4 )
  {
    ZwFreeVirtualMemory(-1LL, a2, a3, 0x4000LL);
    LOBYTE(v8) = *(_BYTE *)v11;
  }
  if ( (v8 & 2) != 0 )
  {
    v15 = v11;
    do
      v11 -= 32LL;
    while ( (*(_BYTE *)v11 & 2) != 0 );
  }
  else
  {
    LOBYTE(v8) = v8 & 4;
    if ( ((*(_BYTE *)(v12 + 46) >> 4) & ((_BYTE)v8 == 0)) == 0 )
    {
      v13 = (_BYTE)v8 ? *(_QWORD *)(v11 + 24) : *(unsigned __int16 *)(v11 + 24);
      if ( v6 != v13 )
        __int2c();
    }
    if ( (_BYTE)v8 )
      v14 = *(_QWORD *)(v11 + 24);
    else
      v14 = *(unsigned __int16 *)(v11 + 24);
    if ( v6 < v14 )
      v15 = v11 + 32 * v6;
    else
      v15 = 0LL;
  }
  RtlAcquireSRWLockExclusive(v12, v8, v9, v10);
  if ( v15 )
    RtlpHpVaMgrRangeSplit(v12, v11, (v15 - v11) >> 5);
  v11 = RtlpHpVaMgrFree(v12);
  result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)v12);
  if ( v11 )
    return RtlpHpVaMgrRangeFree(v12, v11);
  return result;
}
