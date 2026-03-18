/*
 * XREFs of MiReduceShareCount @ 0x1401317DC
 * Callers:
 *     MiDeletePteList @ 0x140027380 (MiDeletePteList.c)
 *     MiDeleteNonPagedPoolTail @ 0x140131750 (MiDeleteNonPagedPoolTail.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x140026F20 (MiPfnShareCountIsZero.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReduceShareCount(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8

  v2 = *(_QWORD *)(a1 + 24);
  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    KeBugCheckEx(
      0x4Eu,
      0x99uLL,
      (__int64)(a1 + 0x58000000000LL) / 48,
      *(_BYTE *)(a1 + 34) & 7,
      *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v3 = (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) - a2;
  *(_QWORD *)(a1 + 24) = v2 ^ (v3 ^ v2) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v3 )
    return 2LL;
  else
    return MiPfnShareCountIsZero(a1, 0LL, 0LL, v2);
}
