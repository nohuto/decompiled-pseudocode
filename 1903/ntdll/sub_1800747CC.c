/*
 * XREFs of sub_1800747CC @ 0x1800747CC
 * Callers:
 *     sub_180068BD4 @ 0x180068BD4 (sub_180068BD4.c)
 *     sub_180074610 @ 0x180074610 (sub_180074610.c)
 * Callees:
 *     sub_18009BC14 @ 0x18009BC14 (sub_18009BC14.c)
 */

__int64 __fastcall sub_1800747CC(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r9d
  _DWORD *v3; // r10
  __int64 result; // rax

  _BitScanReverse(&v2, a2);
  v3 = *(_DWORD **)(a1 + 8LL * (v2 - 4));
  --*v3;
  result = sub_18009BC14(&v3[4 * (a2 ^ (unsigned __int64)(unsigned int)(1 << v2)) + 2]);
  if ( !(_BYTE)result )
    __int2c();
  return result;
}
