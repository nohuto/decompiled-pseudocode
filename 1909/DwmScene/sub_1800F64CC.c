/*
 * XREFs of sub_1800F64CC @ 0x1800F64CC
 * Callers:
 *     sub_1800FBAB0 @ 0x1800FBAB0 (sub_1800FBAB0.c)
 * Callees:
 *     sub_18001BB48 @ 0x18001BB48 (sub_18001BB48.c)
 */

__int64 __fastcall sub_1800F64CC(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  char *v5; // rax
  char *v6; // r10
  char *v7; // rdx
  signed __int64 v8; // rcx

  v4 = (a1[1] - *a1) >> 3;
  v5 = (char *)sub_18001BB48((__int64)a1, a2);
  v6 = (char *)a1[1];
  v7 = (char *)*a1;
  if ( (char *)*a1 != v6 )
  {
    v8 = v5 - v7;
    do
    {
      *(_QWORD *)&v7[v8] = *(_QWORD *)v7;
      v7 += 8;
    }
    while ( v7 != v6 );
  }
  return sub_18001B918(a1, (__int64)v5, v4, a2);
}
