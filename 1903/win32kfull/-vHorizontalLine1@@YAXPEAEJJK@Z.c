/*
 * XREFs of ?vHorizontalLine1@@YAXPEAEJJK@Z @ 0x1C015DB70
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 */

void __fastcall vHorizontalLine1(unsigned __int8 *a1, int a2, int a3, unsigned __int8 a4)
{
  unsigned int v5; // edi
  unsigned __int8 *v6; // rsi
  int v7; // r8d
  char v8; // dl
  unsigned int v9; // eax
  __int64 v10; // rbx

  v5 = a3 - a2;
  if ( a3 != a2 )
  {
    v6 = &a1[(__int64)a2 >> 3];
    v7 = a2 & 7;
    if ( (a2 & 7) == 0 )
      goto LABEL_8;
    if ( v5 >= 8 - v7 )
    {
      v5 += v7 - 8;
      *v6 = a4 & (255 >> v7) | *v6 & ~(255 >> v7);
      ++v6;
      v7 = 0;
    }
    if ( v7 )
    {
      v8 = (255 >> v7) & (-1 << (8 - v7 - v5));
      *v6 = v8 & a4 | *v6 & ~v8;
    }
    else
    {
LABEL_8:
      v9 = v5 >> 3;
      if ( v5 >> 3 )
      {
        v10 = v9;
        memset(v6, a4, v9);
        v6 += v10;
        v5 &= 7u;
      }
      if ( v5 )
        *v6 = (255 >> v5) & *v6 | a4 & ~(255 >> v5);
    }
  }
}
