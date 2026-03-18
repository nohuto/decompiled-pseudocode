/*
 * XREFs of HorizCrossings @ 0x1C02C2E30
 * Callers:
 *     DoHorizDropout @ 0x1C02C2974 (DoHorizDropout.c)
 *     DoVertDropout @ 0x1C02C2B04 (DoVertDropout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HorizCrossings(__int16 a1, int a2)
{
  unsigned int v2; // r8d
  int v3; // edx
  _WORD *v4; // r10
  _WORD *v5; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // r9
  unsigned int v8; // edx

  if ( a2 < dword_1C032FE40 || a2 >= dword_1C032FE3C )
    return 0LL;
  v2 = 0;
  v3 = a2 - dword_1C032FE40;
  v4 = *(_WORD **)(qword_1C032FE58 + 8LL * v3);
  v5 = *(_WORD **)(qword_1C032FE60 + 8LL * v3);
  v6 = *(_QWORD *)(qword_1C032FE68 + 8LL * v3);
  if ( (unsigned __int64)v4 < v6 )
  {
    v7 = 2LL * (__int16)dword_1C032FF32;
    do
    {
      v8 = v2 + 1;
      if ( *v4 != a1 )
        v8 = v2;
      v4 = (_WORD *)((char *)v4 + v7);
      v2 = v8 + 1;
      if ( *v5 != a1 )
        v2 = v8;
      v5 = (_WORD *)((char *)v5 + v7);
    }
    while ( (unsigned __int64)v4 < v6 );
  }
  return v2;
}
