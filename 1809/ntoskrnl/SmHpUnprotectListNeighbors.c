/*
 * XREFs of SmHpUnprotectListNeighbors @ 0x14014B160
 * Callers:
 *     SmHpBufferUpdateFullness @ 0x14014A5FC (SmHpBufferUpdateFullness.c)
 * Callees:
 *     SmHpBufferProtectEx @ 0x14014A370 (SmHpBufferProtectEx.c)
 */

__int64 __fastcall SmHpUnprotectListNeighbors(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // r8
  ULONG_PTR v8; // rcx
  __int64 v9; // r8
  ULONG_PTR v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r9

  if ( !a3 )
  {
    v12 = *(unsigned int *)(*(_QWORD *)(a2 + 8) + 16LL);
    _BitScanReverse((unsigned int *)&v10, v12);
    v11 = v12 ^ (unsigned int)(1 << v10);
    return SmHpBufferProtectEx(v10, *(_QWORD *)(a1 + 8 * v10) + 16 * v11, 1, 0LL);
  }
  if ( *a3 != a2 )
  {
    v7 = *(unsigned int *)(*a3 + 16LL);
    _BitScanReverse((unsigned int *)&v8, v7);
    SmHpBufferProtectEx(v8, *(_QWORD *)(a1 + 8 * v8) + 16 * (v7 ^ (unsigned int)(1 << v8)), 1, 0LL);
  }
  result = a3[1];
  if ( result != a2 )
  {
    v9 = *(unsigned int *)(result + 16);
    _BitScanReverse((unsigned int *)&v10, v9);
    v11 = v9 ^ (unsigned int)(1 << v10);
    return SmHpBufferProtectEx(v10, *(_QWORD *)(a1 + 8 * v10) + 16 * v11, 1, 0LL);
  }
  return result;
}
