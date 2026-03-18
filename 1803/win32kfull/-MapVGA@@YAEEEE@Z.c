/*
 * XREFs of ?MapVGA@@YAEEEE@Z @ 0x1C026B7A4
 * Callers:
 *     ?MakeITableVGA@@YAHPEAE@Z @ 0x1C026B734 (-MakeITableVGA@@YAHPEAE@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall MapVGA(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // esi
  int v4; // edi
  int v5; // r9d
  char v6; // r10
  int v7; // r11d
  __int64 v8; // rax
  int v9; // ecx
  int v10; // edx
  int v11; // ecx

  v3 = a1;
  v4 = a2;
  v5 = (unsigned __int16)word_1C02EB780[(2 * (a1 & 0x18u)) | ((a2 & 0x18 | ((unsigned __int64)a3 >> 2) & 6) >> 1)];
  if ( (v5 & 0xFFF0) == 0 )
    return v5 & 0xF;
  v6 = 0;
  v7 = 0x7FFFFFFF;
  while ( v5 )
  {
    v8 = v5 & 0xF;
    v9 = (unsigned __int8)byte_1C0321BB1[4 * v8];
    v10 = (unsigned __int8)byte_1C0321BB0[4 * v8] - v3;
    LODWORD(v8) = (unsigned __int8)byte_1C0321BB2[4 * v8] - a3;
    v11 = (v9 - v4) * (v9 - v4) + v8 * v8 + v10 * v10;
    if ( v11 < v7 )
      v6 = v5 & 0xF;
    v5 >>= 4;
    if ( v11 >= v7 )
      v11 = v7;
    v7 = v11;
  }
  return v6;
}
