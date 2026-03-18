/*
 * XREFs of GrayExpandDIB_CX @ 0x1C02665A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

_OWORD *__fastcall GrayExpandDIB_CX(__int128 *a1, char *a2, _BYTE *a3, __int64 a4, int a5)
{
  __int128 v7; // xmm0
  _OWORD *result; // rax
  _OWORD *v9; // rcx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  char v16; // al
  char v17; // cl
  unsigned __int8 *v18; // r10
  unsigned __int8 *v19; // rdx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // r10
  unsigned __int8 v23; // bl
  int v24; // ecx
  char v25; // cl
  __int64 v26; // r10
  __int64 *v27; // r10
  _BYTE *v28; // r14
  __int64 v29; // rax
  unsigned __int16 v30; // r9
  unsigned __int8 v31; // r8
  int v32; // ecx
  int v33; // r8d
  __int128 v34; // [rsp+10h] [rbp-F0h]
  __int64 *v35; // [rsp+38h] [rbp-C8h]
  _OWORD v36[7]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v37; // [rsp+100h] [rbp+0h]

  v34 = *a1;
  v7 = a1[2];
  v37 = 0LL;
  v35 = (__int64 *)*((_QWORD *)&v7 + 1);
  result = v36;
  v9 = a1 + 8;
  v10 = v9[1];
  v36[0] = *v9;
  v11 = v9[2];
  v36[1] = v10;
  v12 = v9[3];
  v36[2] = v11;
  v13 = v9[4];
  v36[3] = v12;
  v14 = v9[5];
  v36[4] = v13;
  v15 = v9[6];
  v36[5] = v14;
  v36[6] = v15;
  if ( a2 )
  {
    v16 = a2[(int)v34 - 1];
    a2[(int)v34] = v16;
    a2[(int)v34 + 1] = v16;
    a2[(int)v34 + 2] = v16;
    v17 = *a2;
    BYTE5(v37) = *a2;
    v18 = (unsigned __int8 *)&a2[BYTE8(v34) & 1];
    v19 = v18 + 1;
    BYTE6(v37) = *v18;
    v20 = WORD6(v34) >> 4;
    v21 = BYTE12(v34) & 0xF;
    if ( !v21 && v20 )
    {
      BYTE6(v37) = v17;
      v21 = 1;
      --v20;
      v19 = v18;
    }
    v22 = (unsigned int)(4 - v21);
    while ( v21 )
    {
      --v21;
      v23 = *v19++;
      LODWORD(v37) = *(_DWORD *)((char *)&v37 + 1);
      WORD2(v37) = *(_WORD *)((char *)&v37 + 5);
      BYTE6(v37) = v23;
      if ( (BYTE8(v34) & 4) != 0 )
      {
        BYTE3(v37) = BYTE5(v37);
      }
      else
      {
        v24 = (6 * BYTE5(v37) - v23 - BYTE4(v37)) >> 2;
        if ( (v24 & 0xFF00) != 0 )
          LOBYTE(v24) = ~HIBYTE(v24);
        BYTE3(v37) = v24;
      }
    }
    v25 = *((_BYTE *)&v37 + v22);
    v26 = (unsigned int)(v22 - 1);
    HIBYTE(v37) = v25;
    if ( v20 )
    {
      while ( 1 )
      {
        *((_BYTE *)&v37 + v26) = v25;
        v26 = (unsigned int)(v26 - 1);
        if ( !--v20 )
          break;
        v25 = HIBYTE(v37);
      }
    }
    v27 = v35;
    v28 = (_BYTE *)(a5 + a4);
    do
    {
      v29 = *v27++;
      v30 = v29;
      if ( (v29 & 0x8000u) != 0LL )
      {
        v31 = *v19++;
        LODWORD(v37) = *(_DWORD *)((char *)&v37 + 1);
        WORD2(v37) = *(_WORD *)((char *)&v37 + 5);
        BYTE6(v37) = v31;
        if ( (BYTE8(v34) & 4) != 0 )
        {
          BYTE3(v37) = BYTE5(v37);
        }
        else
        {
          v32 = (6 * BYTE5(v37) - v31 - BYTE4(v37)) >> 2;
          if ( (v32 & 0xFF00) != 0 )
            LOBYTE(v32) = ~HIBYTE(v32);
          BYTE3(v37) = v32;
        }
        v30 = v29 & 0x3FFF;
      }
      v33 = BYTE3(v37) * HIWORD(v29);
      if ( WORD2(v29) )
      {
        v33 += WORD2(v29) * BYTE2(v37);
        if ( WORD1(v29) )
        {
          v33 += WORD1(v29) * BYTE1(v37);
          if ( v30 )
            v33 += v30 * (unsigned __int8)v37;
        }
      }
      result = (_OWORD *)((unsigned int)(v33 + 4096) >> 13);
      *a3 = (_BYTE)result;
      a3 += a5;
    }
    while ( a3 != v28 );
  }
  return result;
}
