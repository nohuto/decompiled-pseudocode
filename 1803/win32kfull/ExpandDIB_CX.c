/*
 * XREFs of ExpandDIB_CX @ 0x1C0235C70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall ExpandDIB_CX(__int128 *a1, __int16 *a2, _BYTE *a3, __int64 a4, int a5)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int16 v9; // r8
  char v10; // r10
  __int64 v11; // r11
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // r11
  int v15; // r9d
  int v16; // edx
  __int64 v17; // r8
  __int128 v18; // xmm0
  unsigned __int8 v19; // di
  __int16 v20; // ax
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  __int16 v24; // r10
  char v25; // al
  __int64 v26; // r8
  _BYTE *v27; // rcx
  __int64 *v28; // rdi
  _BYTE *v29; // r13
  __int64 v30; // rdx
  __int128 v31; // xmm0
  unsigned __int8 v32; // r8
  __int16 v33; // ax
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  int v39; // r10d
  int v40; // r14d
  int v41; // r15d
  int v42; // r12d
  __int64 v43; // [rsp+0h] [rbp-100h]
  __int128 v44; // [rsp+10h] [rbp-F0h]
  __int128 v45; // [rsp+30h] [rbp-D0h]
  _BYTE v46[24]; // [rsp+100h] [rbp+0h] BYREF

  v44 = *a1;
  v45 = a1[2];
  result = 0LL;
  memset(v46, 0, sizeof(v46));
  if ( a2 )
  {
    v8 = (__int64)&a2[(int)v44 + 3] + (int)v44;
    *(_WORD *)(v8 - 6) = *(_WORD *)(v8 - 9);
    *(_BYTE *)(v8 - 4) = *(_BYTE *)(v8 - 7);
    *(_WORD *)(v8 - 3) = *(_WORD *)(v8 - 6);
    *(_BYTE *)(v8 - 1) = *(_BYTE *)(v8 - 4);
    *(_WORD *)v8 = *(_WORD *)(v8 - 3);
    *(_BYTE *)(v8 + 2) = *(_BYTE *)(v8 - 1);
    v9 = *a2;
    v10 = *((_BYTE *)a2 + 2);
    *(_WORD *)&v46[15] = *a2;
    v46[17] = v10;
    v11 = (__int64)&a2[BYTE8(v44) & 1] + (BYTE8(v44) & 1);
    v12 = v11;
    *(_WORD *)&v46[18] = *(_WORD *)v11;
    v13 = *(_BYTE *)(v11 + 2);
    v14 = v11 + 3;
    v46[20] = v13;
    v15 = WORD6(v44) >> 4;
    v16 = BYTE12(v44) & 0xF;
    if ( !v16 && v15 )
    {
      *(_WORD *)&v46[18] = v9;
      v16 = 1;
      v46[20] = v10;
      --v15;
      v14 = v12;
    }
    v17 = (unsigned int)(4 - v16);
    while ( v16 )
    {
      --v16;
      v18 = *(_OWORD *)&v46[3];
      v19 = *(_BYTE *)(v14 + 2);
      *(_WORD *)&v46[16] = *(_WORD *)&v46[19];
      v20 = *(_WORD *)v14;
      v14 += 3LL;
      *(_WORD *)&v46[18] = v20;
      v46[20] = v19;
      *(_OWORD *)v46 = v18;
      if ( (BYTE8(v44) & 4) != 0 )
      {
        *(_WORD *)&v46[9] = *(_WORD *)&v46[15];
        v46[11] = v46[17];
      }
      else
      {
        v21 = (6 * v46[15] - v46[18] - v46[12]) >> 2;
        if ( (v21 & 0xFF00) != 0 )
          LOBYTE(v21) = ~HIBYTE(v21);
        v46[9] = v21;
        v22 = (6 * v46[16] - v46[19] - v46[13]) >> 2;
        if ( (v22 & 0xFF00) != 0 )
          LOBYTE(v22) = ~HIBYTE(v22);
        v46[10] = v22;
        v23 = (6 * v46[17] - v19 - v46[14]) >> 2;
        if ( (v23 & 0xFF00) != 0 )
          LOBYTE(v23) = ~HIBYTE(v23);
        v46[11] = v23;
      }
    }
    v24 = *(_WORD *)&v46[2 * v17 + (unsigned int)v17];
    *(_WORD *)&v46[21] = v24;
    v25 = v46[2 * v17 + 2 + (unsigned int)v17];
    v26 = (unsigned int)(v17 - 1);
    v46[23] = v25;
    if ( v15 )
    {
      while ( 1 )
      {
        v27 = &v46[(unsigned int)v26];
        *(_WORD *)&v27[2 * v26] = v24;
        v27[2 * v26 + 2] = v46[23];
        v26 = (unsigned int)(v26 - 1);
        if ( !--v15 )
          break;
        v24 = *(_WORD *)&v46[21];
      }
    }
    v28 = (__int64 *)*((_QWORD *)&v45 + 1);
    v29 = (_BYTE *)(a5 + a4);
    do
    {
      v30 = *v28++;
      v43 = v30;
      if ( (v30 & 0x8000u) != 0LL )
      {
        v31 = *(_OWORD *)&v46[3];
        v32 = *(_BYTE *)(v14 + 2);
        *(_WORD *)&v46[16] = *(_WORD *)&v46[19];
        v33 = *(_WORD *)v14;
        v14 += 3LL;
        *(_OWORD *)v46 = v31;
        *(_WORD *)&v46[18] = v33;
        v46[20] = v32;
        if ( (BYTE8(v44) & 4) != 0 )
        {
          *(_WORD *)&v46[9] = *(_WORD *)&v46[15];
          v46[11] = v46[17];
        }
        else
        {
          v34 = (6 * v46[15] - v46[18] - v46[12]) >> 2;
          if ( (v34 & 0xFF00) != 0 )
            LOBYTE(v34) = ~HIBYTE(v34);
          v46[9] = v34;
          v35 = (6 * v46[16] - v46[19] - v46[13]) >> 2;
          if ( (v35 & 0xFF00) != 0 )
            LOBYTE(v35) = ~HIBYTE(v35);
          v46[10] = v35;
          v36 = (6 * v46[17] - v32 - v46[14]) >> 2;
          if ( (v36 & 0xFF00) != 0 )
            LOBYTE(v36) = ~HIBYTE(v36);
          v46[11] = v36;
        }
        LOWORD(v30) = v30 & 0x3FFF;
      }
      v37 = HIWORD(v43) * v46[11];
      v38 = HIWORD(v43) * v46[10];
      v39 = HIWORD(v43) * v46[9];
      if ( WORD2(v43) )
      {
        v40 = v37 + WORD2(v43) * v46[8];
        v41 = v38 + WORD2(v43) * v46[7];
        v37 = v40;
        v42 = WORD2(v43) * v46[6] + v39;
        v38 = v41;
        v39 = v42;
        if ( WORD1(v43) )
        {
          v37 = v40 + WORD1(v43) * v46[5];
          v38 = v41 + WORD1(v43) * v46[4];
          v39 = v42 + WORD1(v43) * v46[3];
          if ( (_WORD)v30 )
          {
            v37 += (unsigned __int16)v30 * v46[2];
            v38 += (unsigned __int16)v30 * v46[1];
            v39 += (unsigned __int16)v30 * v46[0];
          }
        }
      }
      a3[2] = (unsigned int)(v37 + 4096) >> 13;
      a3[1] = (unsigned int)(v38 + 4096) >> 13;
      result = (unsigned int)(v39 + 4096) >> 13;
      *a3 = result;
      a3 += a5;
    }
    while ( a3 != v29 );
  }
  return result;
}
