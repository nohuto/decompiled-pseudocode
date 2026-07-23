/*
 * XREFs of BgpGxConvertRectangleEx @ 0x14016F4C8
 * Callers:
 *     BgpGxDrawRectangle @ 0x14016EF30 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x14016EFB8 (GxpWriteFrameBufferPixels.c)
 *     BgpTxtDisplayCharacter @ 0x14017A014 (BgpTxtDisplayCharacter.c)
 *     BgpGxConvertRectangle @ 0x140192DD8 (BgpGxConvertRectangle.c)
 *     AnFwDisplayFade @ 0x14094FBA8 (AnFwDisplayFade.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     BgpGxRectangleCreate @ 0x14095121C (BgpGxRectangleCreate.c)
 */

__int64 __fastcall BgpGxConvertRectangleEx(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  char v4; // bp
  _QWORD *v5; // r15
  unsigned int v6; // esi
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 v9; // rbx
  unsigned int v10; // eax
  _BYTE *v11; // r9
  char *v12; // r10
  unsigned int v13; // r14d
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // r13d
  char v17; // r11
  unsigned int v18; // r8d
  signed __int64 v19; // rdi
  unsigned int v20; // esi
  unsigned __int8 *v21; // r15
  __int64 v22; // rbp
  int v23; // ecx
  int v24; // eax
  char v25; // cl
  unsigned int v26; // eax
  _BYTE *v27; // rax
  int v28; // [rsp+20h] [rbp-68h]
  int v29; // [rsp+28h] [rbp-60h] BYREF
  _DWORD v30[4]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v31[9]; // [rsp+40h] [rbp-48h] BYREF
  char v34; // [rsp+A8h] [rbp+20h]

  v4 = a4 & 1;
  v5 = a3;
  v34 = a4 & 1;
  v6 = a2;
  v7 = a1;
  if ( (a4 & 1) != 0 )
  {
    if ( (unsigned int)a2 > *(_DWORD *)(a1 + 8) )
      return 3221225485LL;
    v9 = *a3;
    *(_DWORD *)v9 = *(_DWORD *)a1;
    *(_DWORD *)(v9 + 4) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v9 + 8) = a2;
    *(_DWORD *)(v9 + 16) = 0;
    *(_DWORD *)(v9 + 12) = *(_DWORD *)(a1 + 12);
    *(_QWORD *)(v9 + 24) = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v30[1] = *(_DWORD *)a1;
    v30[0] = *(_DWORD *)(a1 + 4);
    v31[0] = 0LL;
    result = BgpGxRectangleCreate(v30, a2, v31);
    if ( (int)result < 0 )
      return result;
    v9 = v31[0];
  }
  v10 = *(_DWORD *)(v7 + 8);
  v11 = *(_BYTE **)(v9 + 24);
  v12 = *(char **)(v7 + 24);
  v13 = v10 >> 3;
  LODWORD(v31[0]) = v10 >> 3;
  if ( v10 != v6 )
  {
    if ( v6 == 4 )
    {
      v16 = 0;
      if ( *(_DWORD *)v9 )
      {
        v17 = v4;
        do
        {
          v18 = 0;
          if ( *(_DWORD *)(v9 + 4) )
          {
            do
            {
              v30[0] = -1;
              v19 = &FourBitPalette - (_UNKNOWN *)&v29;
              v28 = 0;
              v29 = *(_DWORD *)v12;
              do
              {
                v20 = 0;
                v21 = (unsigned __int8 *)&v29;
                v22 = 3LL;
                do
                {
                  v23 = v21[v19];
                  v24 = *v21++;
                  v20 += abs32(v24 - v23) + 2 * abs32(v24 - v23);
                  --v22;
                }
                while ( v22 );
                v25 = v28;
                if ( v20 >= v30[0] )
                  v25 = v17;
                v26 = v28 + 1;
                v19 += 4LL;
                ++v28;
                v17 = v25;
                if ( v20 >= v30[0] )
                  v20 = v30[0];
                v30[0] = v20;
              }
              while ( v26 < 0x10 );
              if ( (v18 & 1) != 0 )
                *v11++ |= v25;
              else
                *v11 = 16 * v25;
              v12 += v13;
              ++v18;
            }
            while ( v18 < *(_DWORD *)(v9 + 4) );
            v13 = v31[0];
          }
          ++v16;
          v27 = v11 + 1;
          if ( (v18 & 1) == 0 )
            v27 = v11;
          v11 = v27;
        }
        while ( v16 < *(_DWORD *)v9 );
        v7 = a1;
        v4 = v34;
        v5 = a3;
      }
    }
    else
    {
      v14 = *(_DWORD *)v9 * *(_DWORD *)(v9 + 4);
      if ( v14 )
      {
        v15 = v14;
        do
        {
          v11[2] = v12[2];
          v11[1] = v12[1];
          *v11 = *v12;
          if ( v6 == 32 )
            v11[3] = 0;
          v12 += v13;
          v11 += v6 >> 3;
          --v15;
        }
        while ( v15 );
      }
    }
    if ( v4 )
      *(_DWORD *)(v7 + 16) |= 0x10u;
    goto LABEL_7;
  }
  if ( !v4 )
  {
    memmove(v11, v12, *(unsigned int *)(v7 + 12));
LABEL_7:
    *v5 = v9;
  }
  return 0LL;
}
