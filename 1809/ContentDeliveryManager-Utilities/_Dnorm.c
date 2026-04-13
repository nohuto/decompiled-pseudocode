/*
 * XREFs of _Dnorm @ 0x1800C5BFC
 * Callers:
 *     _Dscale @ 0x1800B28A8 (_Dscale.c)
 *     _Dunscale @ 0x1800C5F28 (_Dunscale.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Dnorm(unsigned __int16 *a1)
{
  __int16 v1; // di
  unsigned __int16 v2; // r8
  unsigned __int16 v4; // r11
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // r9
  unsigned __int16 v7; // r10
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // r9
  unsigned __int16 v10; // r8
  unsigned __int16 v11; // bx
  unsigned __int16 v12; // r10
  int v13; // kr00_4
  unsigned __int16 v14; // r10
  unsigned __int16 v15; // r9
  __int64 result; // rax

  v1 = a1[3] & 0x8000;
  v2 = a1[3] & 0xF;
  a1[3] = v2;
  v4 = 1;
  if ( v2 || a1[2] || a1[1] || *a1 )
  {
    v5 = v2;
    if ( !v2 )
    {
      v6 = a1[2];
      v7 = a1[1];
      do
      {
        v8 = v6;
        v5 = v6;
        v2 = v6;
        v4 -= 16;
        v6 = v7;
        v7 = *a1;
        *a1 = 0;
      }
      while ( !v8 );
      a1[3] = v5;
      a1[2] = v6;
      a1[1] = v7;
    }
    v9 = v2;
    v10 = v5;
    if ( v5 < 0x10u )
    {
      v11 = a1[2];
      v12 = a1[1];
      do
      {
        v10 = (v11 >> 15) | (2 * v9);
        --v4;
        v11 = (2 * v11) | (v12 >> 15);
        v9 = v10;
        v13 = 2 * *a1;
        v12 = HIWORD(v13) | (2 * v12);
        *a1 = v13;
      }
      while ( v10 < 0x10u );
      a1[3] = v10;
      a1[2] = v11;
      a1[1] = v12;
    }
    if ( v10 >= 0x20u )
    {
      v14 = a1[1];
      v10 = v9;
      v15 = a1[2];
      do
      {
        ++v4;
        *a1 = (*a1 >> 1) | (v14 << 15);
        v14 = (v14 >> 1) | (v15 << 15);
        v15 = (v10 << 15) | (v15 >> 1);
        v10 >>= 1;
      }
      while ( v10 >= 0x20u );
      a1[3] = v10;
      a1[2] = v15;
      a1[1] = v14;
    }
    v2 = v10 & 0xF;
    a1[3] = v2;
  }
  result = v4;
  a1[3] = v1 | v2;
  return result;
}
