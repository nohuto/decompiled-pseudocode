/*
 * XREFs of sub_1800F15CC @ 0x1800F15CC
 * Callers:
 *     sub_1800F1A04 @ 0x1800F1A04 (sub_1800F1A04.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800F15CC(__int16 *a1, unsigned __int64 a2, __int16 *a3)
{
  __int64 v3; // r9
  __int16 *v4; // r10
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int16 v8; // ax
  __int16 *v9; // rdi
  unsigned __int64 i; // rcx

  v3 = 0LL;
  v4 = a1;
  v5 = (a2 - (unsigned __int64)a1 + 1) >> 1;
  if ( (unsigned __int64)a1 > a2 )
    v5 = 0LL;
  if ( v5 )
  {
    if ( v5 >= 8 && (a1 > a3 || &a1[v5 - 1] < a3) )
    {
      v6 = v5 & 0xFFFFFFFFFFFFFFF8uLL;
      do
        v3 += 8LL;
      while ( v3 != v6 );
      v7 = 2 * v6;
      v8 = *a3;
      v9 = a1;
      for ( i = v7 >> 1; i; --i )
        *v9++ = v8;
      v4 = (__int16 *)((char *)v4 + v7);
    }
    while ( v3 != v5 )
    {
      ++v3;
      *v4++ = *a3;
    }
  }
}
