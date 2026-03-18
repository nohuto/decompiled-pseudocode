/*
 * XREFs of ?vOrClearTypeGlyph@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1C025C9C0
 * Callers:
 *     draw_clrt_f_ntb_o_to_temp_start @ 0x1C025CD00 (draw_clrt_f_ntb_o_to_temp_start.c)
 * Callees:
 *     <none>
 */

void __fastcall vOrClearTypeGlyph(struct _GLYPHBITS *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  BYTE *aj; // r14
  unsigned __int8 *v5; // r11
  unsigned __int8 *v6; // rsi
  __int64 v7; // r12
  unsigned __int64 cx; // r15
  unsigned __int64 v9; // rbp
  unsigned __int8 *v10; // rbx
  unsigned __int8 *v11; // rsi
  BYTE v12; // cl
  unsigned int v13; // r10d
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  unsigned __int8 *v16; // [rsp+38h] [rbp+8h]
  __int64 v17; // [rsp+48h] [rbp+18h]

  aj = a1->aj;
  v5 = a3;
  v6 = &a3[a4 * a1->sizlBitmap.cy];
  v16 = v6;
  if ( a3 < v6 )
  {
    v7 = a4;
    cx = (unsigned int)a1->sizlBitmap.cx;
    v17 = a4;
    do
    {
      v9 = cx;
      v10 = v5;
      if ( v5 > &v5[cx] )
        v9 = 0LL;
      if ( v9 )
      {
        v11 = (unsigned __int8 *)off_1C030C100;
        do
        {
          v12 = aj[v10 - v5];
          if ( *v10 )
          {
            if ( v12 )
            {
              v13 = v11[4 * *v10] + v11[4 * v12];
              v14 = v11[4 * *v10 + 1] + v11[4 * v12 + 1];
              v15 = v11[4 * *v10 + 2] + v11[4 * v12 + 2];
              if ( v13 > 6 )
                v13 = 6;
              if ( v14 > 6 )
                v14 = 6;
              if ( v15 > 6 )
                v15 = 6;
              *v10 = gajStorage1[49 * v13 + 7 * v14 + v15];
            }
          }
          else
          {
            *v10 = v12;
          }
          ++v10;
        }
        while ( v10 - v5 < v9 );
        v6 = v16;
        v7 = v17;
      }
      v5 += v7;
      aj += a2;
    }
    while ( v5 < v6 );
  }
}
