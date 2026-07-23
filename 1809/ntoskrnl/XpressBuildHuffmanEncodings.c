/*
 * XREFs of XpressBuildHuffmanEncodings @ 0x1402FB0A4
 * Callers:
 *     RtlCompressBufferXpressHuffMax @ 0x1402F8D44 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x1402F93D0 (RtlCompressBufferXpressHuffStandard.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall XpressBuildHuffmanEncodings(_QWORD *a1)
{
  char *v2; // rsi
  char *v3; // rdi
  unsigned __int64 v4; // rdx
  _DWORD *v5; // r8
  unsigned __int64 v6; // rcx
  _QWORD *v7; // r14
  unsigned __int64 v9; // r8
  _WORD *v10; // rcx
  __int64 v11; // rdx
  char *v12; // r8
  int v13; // eax
  __int64 v14; // r10
  unsigned __int16 *v15; // r11
  __int64 v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  char *v19; // r8
  char *v20; // rdx
  char *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rbp
  unsigned __int64 *v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // r8
  __int64 i; // rsi
  __int64 v33; // r9
  _BYTE *v34; // r11
  unsigned __int64 v35; // rdx
  unsigned int *v36; // r10
  __int64 v37; // rax
  unsigned __int64 v38; // r9

  memset(a1 + 3331, 0, 0x404uLL);
  v2 = (char *)(a1 + 256);
  v3 = (char *)(a1 + 256);
  memset(a1 + 3588, 0, 0x200uLL);
  v4 = 0LL;
  v5 = a1 + 3652;
  do
  {
    v6 = (unsigned int)*v5;
    if ( *v5 )
    {
      *(_QWORD *)v3 = v6;
      ++*((_WORD *)a1 + (unsigned __int8)v6 + 13325);
      ++*((_WORD *)a1 + (v6 >> 8) + 13582);
      *((_QWORD *)v3 + 1) = 0LL;
      *((_QWORD *)v3 + 2) = v4;
      v3 += 24;
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 0x200 );
  memset(a1 + 3908, 0, 0x100uLL);
  v7 = a1 + 259;
  if ( v3 <= (char *)a1 + 2072 )
  {
    if ( v3 == v2 )
      return 0LL;
    v9 = a1[258];
    *((_BYTE *)a1 + (v9 >> 1) + 31264) = (v9 & 1) != 0 ? 16 : 1;
    *((_DWORD *)a1 + v9) = 1;
    return *(_QWORD *)v2;
  }
  v10 = (_WORD *)a1 + 13325;
  v11 = 255LL;
  do
  {
    *v10 += *(v10 - 1);
    v10[257] += v10[256];
    ++v10;
    --v11;
  }
  while ( v11 );
  v12 = (char *)(a1 + 256);
  if ( v2 < v3 )
  {
    do
    {
      *((_WORD *)a1 + *((unsigned __int16 *)a1 + (unsigned __int8)*(_DWORD *)v12 + 13324) + 13838) = *((_WORD *)v12 + 8);
      v13 = *(_DWORD *)v12;
      v12 += 24;
      ++*((_WORD *)a1 + (unsigned __int8)v13 + 13324);
    }
    while ( v12 < v3 );
  }
  v14 = (v3 - (char *)a1 - 2048) / 24;
  if ( v14 )
  {
    v15 = (unsigned __int16 *)a1 + 13838;
    do
    {
      v16 = *v15++;
      v17 = *((unsigned int *)a1 + v16 + 7304);
      v18 = *((unsigned __int16 *)a1 + (v17 >> 8) + 13581);
      *((_WORD *)a1 + (v17 >> 8) + 13581) = v18 + 1;
      a1[3 * v18 + 258] = v16;
      a1[3 * v18 + 256] = v17;
      --v14;
    }
    while ( v14 );
  }
  while ( 2 )
  {
    *((_QWORD *)v3 + 1) = v2;
    v19 = (char *)(a1 + 262);
    *((_QWORD *)v3 + 2) = v7;
    v20 = v3;
    v21 = v3;
    *(_QWORD *)v3 = *(_QWORD *)v2 + *v7;
    while ( v19 != v3 || v21 != v20 )
    {
      v20 += 24;
      if ( v19 == v3 || v21 < v20 && *(_QWORD *)v21 < *(_QWORD *)v19 )
      {
        *((_QWORD *)v20 + 1) = v21;
        v22 = *(_QWORD *)v21;
        v21 += 24;
      }
      else
      {
        *((_QWORD *)v20 + 1) = v19;
        v22 = *(_QWORD *)v19;
        v19 += 24;
      }
      *(_QWORD *)v20 = v22;
      if ( v19 == v3 || v21 < v20 && *(_QWORD *)v21 < *(_QWORD *)v19 )
      {
        *((_QWORD *)v20 + 2) = v21;
        *(_QWORD *)v20 += *(_QWORD *)v21;
        v21 += 24;
      }
      else
      {
        *((_QWORD *)v20 + 2) = v19;
        *(_QWORD *)v20 += *(_QWORD *)v19;
        v19 += 24;
      }
    }
    v23 = 0LL;
    v24 = 0LL;
    while ( *((_QWORD *)v20 + 1) )
    {
      a1[2 * v24 + 3332] = ++v23;
      a1[2 * v24 + 3331] = *((_QWORD *)v20 + 1);
      v26 = 1LL;
      v20 = (char *)*((_QWORD *)v20 + 2);
LABEL_34:
      v24 += v26;
    }
    v25 = *((_QWORD *)v20 + 2);
    *((_QWORD *)v20 + 1) = v23;
    *((_BYTE *)a1 + v25 + 28704) = v23;
    if ( v24 )
    {
      v20 = (char *)a1[2 * v24 + 3329];
      v23 = a1[2 * v24 + 3330];
      v26 = -1LL;
      goto LABEL_34;
    }
    v27 = a1[257];
    if ( v27 > 0xF )
    {
      v28 = a1 + 256;
      if ( v2 < v3 )
      {
        do
        {
          v29 = *v28 + 1;
          v28[1] = 0LL;
          *v28 = v29 >> 1;
          v28 += 3;
        }
        while ( v28 < (unsigned __int64 *)v3 );
      }
      continue;
    }
    break;
  }
  v30 = *((_QWORD *)v3 - 2);
  v31 = 0LL;
  for ( i = 0LL; v30 <= v27; i += v38 )
  {
    v33 = 0LL;
    v34 = a1 + 3908;
    v35 = 0LL;
    v36 = (unsigned int *)(a1 + 3652);
    do
    {
      if ( *((unsigned __int8 *)a1 + v35 * 2 + 28704) == v30 )
      {
        v37 = *v36;
        *v34 |= v30;
        v33 += v37;
        WORD1(a1[v35]) = v31++;
        LOWORD(a1[v35]) = v30;
      }
      if ( *((unsigned __int8 *)a1 + v35 * 2 + 28705) == v30 )
      {
        v33 += v36[1];
        *v34 |= 16 * (_BYTE)v30;
        HIWORD(a1[v35]) = v31++;
        WORD2(a1[v35]) = v30;
      }
      ++v34;
      ++v35;
      v36 += 2;
    }
    while ( v35 < 256 );
    v38 = v30 * v33;
    v31 *= 2LL;
    ++v30;
  }
  return i;
}
