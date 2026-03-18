/*
 * XREFs of BgpGxConvertRectangleEx @ 0x1401792C0
 * Callers:
 *     BgpGxDrawRectangle @ 0x140178D30 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x140178DC0 (GxpWriteFrameBufferPixels.c)
 *     BgpTxtDisplayCharacter @ 0x140183298 (BgpTxtDisplayCharacter.c)
 *     BgpGxConvertRectangle @ 0x14019D780 (BgpGxConvertRectangle.c)
 *     AnFwDisplayFade @ 0x14098EBD8 (AnFwDisplayFade.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     BgpGxRectangleCreate @ 0x14099026C (BgpGxRectangleCreate.c)
 */

__int64 __fastcall BgpGxConvertRectangleEx(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  _QWORD *v4; // r15
  unsigned int v5; // esi
  __int64 v6; // rdi
  char v7; // r14
  __int64 result; // rax
  __int64 v9; // rbx
  unsigned int v10; // eax
  _BYTE *v11; // r9
  char *v12; // r10
  unsigned int v13; // ebp
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // r13d
  char v17; // r11
  unsigned int v18; // r8d
  __int64 v19; // r14
  signed __int64 v20; // rdi
  unsigned int v21; // esi
  unsigned __int8 *v22; // r15
  __int64 v23; // rbp
  int v24; // ecx
  int v25; // eax
  char v26; // cl
  unsigned int v27; // eax
  _BYTE *v28; // rax
  int v29; // [rsp+20h] [rbp-68h]
  int v30; // [rsp+28h] [rbp-60h] BYREF
  _DWORD v31[4]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v32[9]; // [rsp+40h] [rbp-48h] BYREF
  char v35; // [rsp+A8h] [rbp+20h]

  v4 = a3;
  v31[2] = 0;
  v5 = a2;
  v6 = a1;
  if ( (a4 & 1) != 0 )
  {
    v7 = 1;
    v35 = 1;
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
    v31[1] = *(_DWORD *)a1;
    v7 = 0;
    v35 = 0;
    v31[0] = *(_DWORD *)(a1 + 4);
    v32[0] = 0LL;
    result = BgpGxRectangleCreate(v31, a2, v32);
    if ( (int)result < 0 )
      return result;
    v9 = v32[0];
  }
  v10 = *(_DWORD *)(v6 + 8);
  v11 = *(_BYTE **)(v9 + 24);
  v12 = *(char **)(v6 + 24);
  v13 = v10 >> 3;
  LODWORD(v32[0]) = v10 >> 3;
  if ( v10 != v5 )
  {
    if ( v5 == 4 )
    {
      v16 = 0;
      if ( *(_DWORD *)v9 )
      {
        v17 = v35;
        do
        {
          v18 = 0;
          if ( *(_DWORD *)(v9 + 4) )
          {
            v19 = v13;
            do
            {
              v31[0] = -1;
              v20 = &FourBitPalette - (_UNKNOWN *)&v30;
              v29 = 0;
              v30 = *(_DWORD *)v12;
              do
              {
                v21 = 0;
                v22 = (unsigned __int8 *)&v30;
                v23 = 3LL;
                do
                {
                  v24 = v22[v20];
                  v25 = *v22++;
                  v21 += abs32(v25 - v24) + 2 * abs32(v25 - v24);
                  --v23;
                }
                while ( v23 );
                v26 = v29;
                if ( v21 >= v31[0] )
                  v26 = v17;
                v27 = v29 + 1;
                v20 += 4LL;
                ++v29;
                v17 = v26;
                if ( v21 >= v31[0] )
                  v21 = v31[0];
                v31[0] = v21;
              }
              while ( v27 < 0x10 );
              if ( (v18 & 1) != 0 )
                *v11++ |= v26;
              else
                *v11 = 16 * v26;
              v12 += v19;
              ++v18;
            }
            while ( v18 < *(_DWORD *)(v9 + 4) );
            v13 = v32[0];
          }
          ++v16;
          v28 = v11 + 1;
          if ( (v18 & 1) == 0 )
            v28 = v11;
          v11 = v28;
        }
        while ( v16 < *(_DWORD *)v9 );
        v6 = a1;
        v7 = v35;
        v4 = a3;
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
          if ( v5 == 32 )
            v11[3] = 0;
          v12 += v13;
          v11 += v5 >> 3;
          --v15;
        }
        while ( v15 );
      }
    }
    if ( v7 )
      *(_DWORD *)(v6 + 16) |= 0x10u;
    goto LABEL_7;
  }
  if ( !v7 )
  {
    memmove(v11, v12, *(unsigned int *)(v6 + 12));
LABEL_7:
    *v4 = v9;
  }
  return 0LL;
}
