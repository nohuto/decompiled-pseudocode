/*
 * XREFs of ?vOrNonAlignedGrayGlyphEven@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1C01433F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vOrNonAlignedGrayGlyphEven(struct _GLYPHBITS *a1, __int64 a2, unsigned __int8 *a3, unsigned int a4)
{
  BYTE *aj; // rbx
  unsigned __int8 *v5; // rsi
  unsigned __int64 v6; // rdi
  __int64 v7; // rbp
  BYTE *v8; // r10
  unsigned __int64 v9; // r11
  unsigned __int8 v10; // dl
  unsigned __int8 *v11; // r9
  __int64 v12; // r10
  char v13; // al

  aj = a1->aj;
  v5 = &a3[a4 * a1->sizlBitmap.cy];
  if ( a3 < v5 )
  {
    v6 = (unsigned int)((a1->sizlBitmap.cx + 1) / 2);
    v7 = a4;
    do
    {
      v8 = aj;
      v9 = v6;
      aj += v6;
      v10 = 0;
      v11 = a3;
      if ( v8 > aj )
        v9 = 0LL;
      if ( v9 )
      {
        v12 = v8 - a3;
        do
        {
          v13 = 16 * v10 + (v11[v12] >> 4);
          v10 = v11[v12];
          *v11++ |= v13;
        }
        while ( v11 - a3 < v9 );
      }
      a3 += v7;
      *v11 |= 16 * v10;
    }
    while ( a3 < v5 );
  }
}
