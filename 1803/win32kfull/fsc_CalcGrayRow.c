/*
 * XREFs of fsc_CalcGrayRow @ 0x1C02D0FD0
 * Callers:
 *     fsc_CalcGrayMap @ 0x1C02B613C (fsc_CalcGrayMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsc_CalcGrayRow(char **a1)
{
  char *v1; // r11
  char *v2; // r9
  char **v3; // r8
  __int16 v4; // bx
  __int16 v5; // cx
  unsigned __int16 v6; // r10
  __int16 v7; // dx
  char *v8; // r11
  __int16 i; // r8
  __int16 v10; // di

  v1 = a1[1];
  v2 = *a1;
  v3 = a1;
  v4 = *((_WORD *)a1 + 9);
  v5 = *((_WORD *)a1 + 10);
  LOWORD(v3) = *((_WORD *)v3 + 8);
  v6 = (unsigned __int16)*v2 >> v5;
  v7 = 8 - v5;
  *v1 += byte_1C02ECFA0[v6 & (255 >> (8 - v4))];
  v8 = v1 - 1;
  for ( i = (_WORD)v3 - 1; i > 0; --i )
  {
    v7 -= v4;
    v10 = v7;
    if ( v7 )
    {
      v6 >>= v4;
    }
    else
    {
      v6 = *(v2 - 1);
      v7 = 8;
    }
    *v8-- += byte_1C02ECFA0[v6 & (255 >> (8 - v4))];
    if ( !v10 )
      --v2;
  }
  return 0LL;
}
