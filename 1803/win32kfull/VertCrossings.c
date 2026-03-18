/*
 * XREFs of VertCrossings @ 0x1C02C30BC
 * Callers:
 *     DoHorizDropout @ 0x1C02C2974 (DoHorizDropout.c)
 *     DoVertDropout @ 0x1C02C2B04 (DoVertDropout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VertCrossings(int a1, __int16 a2)
{
  unsigned int v3; // r8d
  int v4; // ecx
  _WORD *v5; // r10
  _WORD *v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // r9
  unsigned int v9; // edx

  if ( a1 < dword_1C032FE28 || a1 >= dword_1C032FE2C )
    return 0LL;
  v3 = 0;
  v4 = a1 - dword_1C032FE28;
  v5 = *(_WORD **)(qword_1C032FE98 + 8LL * v4);
  v6 = *(_WORD **)(qword_1C032FEA0 + 8LL * v4);
  v7 = *(_QWORD *)(qword_1C032FEA8 + 8LL * v4);
  if ( (unsigned __int64)v5 < v7 )
  {
    v8 = 2LL * (__int16)dword_1C032FF32;
    do
    {
      v9 = v3 + 1;
      if ( *v5 != a2 )
        v9 = v3;
      v5 = (_WORD *)((char *)v5 + v8);
      v3 = v9 + 1;
      if ( *v6 != a2 )
        v3 = v9;
      v6 = (_WORD *)((char *)v6 + v8);
    }
    while ( (unsigned __int64)v5 < v7 );
  }
  return v3;
}
