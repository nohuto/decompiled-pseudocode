/*
 * XREFs of ?vOrNonAlignedGrayGlyphOdd@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1C0122A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vOrNonAlignedGrayGlyphOdd(struct _GLYPHBITS *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  BYTE *aj; // r10
  unsigned __int8 *v5; // rbx
  unsigned __int8 *v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // r14
  BYTE v10; // r9
  unsigned __int64 v11; // r11
  unsigned __int8 *v12; // rax
  unsigned __int64 v13; // r8
  char v14; // dl

  aj = a1->aj;
  v5 = a3;
  v6 = &a3[a4 * a1->sizlBitmap.cy];
  if ( a3 < v6 )
  {
    v7 = (unsigned int)a1->sizlBitmap.cx >> 1;
    v8 = a4;
    v9 = a2;
    do
    {
      v10 = *aj;
      v11 = v7;
      *v5 |= *aj >> 4;
      v12 = v5 + 1;
      if ( v5 + 1 > &v5[v7 + 1] )
        v11 = 0LL;
      if ( v11 )
      {
        v13 = 0LL;
        do
        {
          ++v13;
          ++v12;
          v14 = 16 * v10;
          v10 = aj[v13];
          *(v12 - 1) |= (v10 >> 4) | v14;
        }
        while ( v13 < v11 );
      }
      v5 += v8;
      aj += v9;
    }
    while ( v5 < v6 );
  }
}
