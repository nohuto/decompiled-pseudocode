/*
 * XREFs of sub_1801120F0 @ 0x1801120F0
 * Callers:
 *     sub_1801131C8 @ 0x1801131C8 (sub_1801131C8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1801120F0(int *a1, unsigned __int64 a2, int *a3)
{
  __int64 v3; // r9
  int *v4; // r10
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rdx
  int v7; // eax
  int *v8; // rdi
  unsigned __int64 v9; // rdx
  unsigned __int64 i; // rcx

  v3 = 0LL;
  v4 = a1;
  v5 = (a2 - (unsigned __int64)a1 + 3) >> 2;
  if ( (unsigned __int64)a1 > a2 )
    v5 = 0LL;
  if ( v5 )
  {
    if ( v5 >= 4 && (a1 > a3 || &a1[v5 - 1] < a3) )
    {
      v6 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
      do
        v3 += 4LL;
      while ( v3 != v6 );
      v7 = *a3;
      v8 = a1;
      v9 = 4 * v6;
      for ( i = v9 >> 2; i; --i )
        *v8++ = v7;
      v4 = (int *)((char *)v4 + v9);
    }
    while ( v3 != v5 )
    {
      ++v3;
      *v4++ = *a3;
    }
  }
}
