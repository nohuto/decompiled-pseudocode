/*
 * XREFs of sub_1800D89B0 @ 0x1800D89B0
 * Callers:
 *     sub_1800D8C58 @ 0x1800D8C58 (sub_1800D8C58.c)
 *     sub_1800D9558 @ 0x1800D9558 (sub_1800D9558.c)
 * Callees:
 *     sub_180011764 @ 0x180011764 (sub_180011764.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800D89B0(__int64 *a1, __int64 *a2)
{
  unsigned __int8 *v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned __int8 *v6; // r8

  v2 = (unsigned __int8 *)a2;
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  sub_180011764(a1, a2);
  v4 = *((_QWORD *)v2 + 2);
  if ( *((_QWORD *)v2 + 3) >= 0x10uLL )
    v2 = *(unsigned __int8 **)v2;
  v5 = 0xCBF29CE484222325uLL;
  v6 = v2;
  if ( v2 > &v2[v4] )
    v4 = 0LL;
  if ( v4 )
  {
    do
      v5 = 0x100000001B3LL * (*v6++ ^ (unsigned __int64)v5);
    while ( v6 - v2 != v4 );
  }
  a1[4] = v5;
  return a1;
}
