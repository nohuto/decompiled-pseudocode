/*
 * XREFs of ?BltLnkReadPat4@@YAXPEAEK0KKKK@Z @ 0x1C02AC740
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
 */

void __fastcall BltLnkReadPat4(
        unsigned __int8 *a1,
        char a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // esi
  unsigned int v7; // r10d
  unsigned __int8 v10; // cl
  unsigned int v11; // edx
  int v12; // r15d
  unsigned int v13; // esi
  unsigned int v14; // r8d
  unsigned __int64 v15; // rax
  unsigned int v16; // edx
  unsigned __int8 v17; // r11
  unsigned __int8 v18; // cl
  char v19; // al
  unsigned __int64 v20; // rax
  signed int v21; // ebp
  int v22; // edi
  unsigned __int8 v23; // dl
  unsigned __int8 v24; // dl

  v6 = a6;
  v7 = 0;
  if ( (a2 & 1) != 0 && a6 )
  {
    v10 = a3[(unsigned __int64)a5 >> 1];
    if ( (a5 & 1) == 0 )
      v10 >>= 4;
    v11 = a5 + 1;
    *a1++ = v10 & 0xF;
    v6 = a6 - 1;
  }
  else
  {
    v11 = a5;
  }
  v12 = a4;
  if ( (a4 & 1) != 0 )
    v12 = 2 * a4;
  if ( (int)v6 <= v12 )
  {
    v14 = v6 >> 1;
    v13 = v6 & 1;
  }
  else
  {
    v13 = v6 - v12;
    v12 >>= 1;
    v14 = v12;
  }
  while ( v14 )
  {
    --v14;
    v15 = 0LL;
    if ( v11 != a4 )
      v15 = v11;
    v16 = v15 + 1;
    v17 = a3[v15 >> 1];
    if ( (v15 & 1) != 0 )
    {
      v20 = 0LL;
      if ( v16 != a4 )
        v20 = v16;
      v16 = v20;
      v18 = a3[v20 >> 1];
      v19 = 16 * v17;
    }
    else
    {
      if ( v16 != a4 )
        goto LABEL_21;
      v18 = *a3;
      v19 = v17 & 0xF0;
      v16 = 0;
    }
    v17 = v19 | (v18 >> 4);
LABEL_21:
    *a1++ = v17;
    v11 = v16 + 1;
  }
  if ( v13 <= 1 )
  {
    if ( (v13 & 1) != 0 )
    {
      if ( v11 != a4 )
        v7 = v11;
      v23 = a3[(unsigned __int64)v7 >> 1];
      if ( (v7 & 1) != 0 )
        v24 = 16 * v23;
      else
        v24 = v23 & 0xF0;
      *a1 = v24;
    }
  }
  else
  {
    v21 = v13 >> 1;
    while ( 1 )
    {
      v22 = v21;
      if ( v12 <= v21 )
        v22 = v12;
      memmove(a1, &a1[-v12], v22);
      a1 += v22;
      v21 -= v22;
      if ( !v21 )
        break;
      v12 *= 2;
    }
    if ( (v13 & 1) != 0 )
      *a1 = a1[-v12] & 0xF0;
  }
}
