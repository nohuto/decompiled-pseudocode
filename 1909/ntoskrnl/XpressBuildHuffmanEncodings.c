/*
 * XREFs of XpressBuildHuffmanEncodings @ 0x140319268
 * Callers:
 *     RtlCompressBufferXpressHuffMax @ 0x140315C10 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x140316330 (RtlCompressBufferXpressHuffStandard.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall XpressBuildHuffmanEncodings(_QWORD *a1)
{
  char *v2; // rsi
  char *v3; // rdi
  _DWORD *v4; // r8
  unsigned __int64 i; // rdx
  unsigned __int64 v6; // rcx
  _QWORD *v7; // r14
  __int64 v9; // r8
  char v10; // dl
  _WORD *v11; // rcx
  __int64 v12; // rdx
  char *v13; // r8
  int v14; // eax
  __int64 v15; // r10
  unsigned __int16 *v16; // r11
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  char *v19; // rcx
  __int64 v20; // rdx
  char *v21; // r8
  char *v22; // rdx
  char *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rbp
  unsigned __int64 *v30; // rcx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // r8
  __int64 j; // rsi
  __int64 v35; // r9
  _BYTE *v36; // r11
  unsigned __int64 v37; // rdx
  unsigned int *v38; // r10
  __int64 v39; // rax
  unsigned __int64 v40; // r9

  memset(a1 + 3331, 0, 0x404uLL);
  v2 = (char *)(a1 + 256);
  v3 = (char *)(a1 + 256);
  memset(a1 + 3588, 0, 0x200uLL);
  v4 = a1 + 3652;
  for ( i = 0LL; i < 0x200; ++i )
  {
    v6 = (unsigned int)*v4;
    if ( *v4 )
    {
      *(_QWORD *)v3 = v6;
      ++*((_WORD *)a1 + (unsigned __int8)v6 + 13325);
      ++*((_WORD *)a1 + (v6 >> 8) + 13582);
      *((_QWORD *)v3 + 1) = 0LL;
      *((_QWORD *)v3 + 2) = i;
      v3 += 24;
    }
    ++v4;
  }
  memset(a1 + 3908, 0, 0x100uLL);
  v7 = a1 + 259;
  if ( v3 <= (char *)a1 + 2072 )
  {
    if ( v3 == v2 )
      return 0LL;
    v9 = a1[258];
    v10 = 16;
    if ( (v9 & 1) == 0 )
      v10 = 1;
    *((_BYTE *)a1 + (a1[258] >> 1) + 31264) = v10;
    *((_DWORD *)a1 + v9) = 1;
    return *(_QWORD *)v2;
  }
  v11 = (_WORD *)a1 + 13325;
  v12 = 255LL;
  do
  {
    *v11 += *(v11 - 1);
    v11[257] += v11[256];
    ++v11;
    --v12;
  }
  while ( v12 );
  v13 = (char *)(a1 + 256);
  if ( v2 < v3 )
  {
    do
    {
      *((_WORD *)a1 + *((unsigned __int16 *)a1 + (unsigned __int8)*(_DWORD *)v13 + 13324) + 13838) = *((_WORD *)v13 + 8);
      v14 = *(_DWORD *)v13;
      v13 += 24;
      ++*((_WORD *)a1 + (unsigned __int8)v14 + 13324);
    }
    while ( v13 < v3 );
  }
  v15 = (v3 - (char *)a1 - 2048) / 24;
  if ( v15 )
  {
    v16 = (unsigned __int16 *)a1 + 13838;
    do
    {
      v17 = *v16++;
      v18 = *((unsigned int *)a1 + v17 + 7304);
      v19 = (char *)a1 + 2 * (v18 >> 8);
      v20 = *((unsigned __int16 *)v19 + 13581);
      *((_WORD *)v19 + 13581) = v20 + 1;
      a1[3 * v20 + 258] = v17;
      a1[3 * v20 + 256] = v18;
      --v15;
    }
    while ( v15 );
  }
  while ( 2 )
  {
    *((_QWORD *)v3 + 1) = v2;
    v21 = (char *)(a1 + 262);
    *((_QWORD *)v3 + 2) = v7;
    v22 = v3;
    v23 = v3;
    *(_QWORD *)v3 = *(_QWORD *)v2 + *v7;
    while ( v21 != v3 || v23 != v22 )
    {
      v22 += 24;
      if ( v21 == v3 || v23 < v22 && *(_QWORD *)v23 < *(_QWORD *)v21 )
      {
        *((_QWORD *)v22 + 1) = v23;
        v24 = *(_QWORD *)v23;
        v23 += 24;
      }
      else
      {
        *((_QWORD *)v22 + 1) = v21;
        v24 = *(_QWORD *)v21;
        v21 += 24;
      }
      *(_QWORD *)v22 = v24;
      if ( v21 == v3 || v23 < v22 && *(_QWORD *)v23 < *(_QWORD *)v21 )
      {
        *((_QWORD *)v22 + 2) = v23;
        *(_QWORD *)v22 += *(_QWORD *)v23;
        v23 += 24;
      }
      else
      {
        *((_QWORD *)v22 + 2) = v21;
        *(_QWORD *)v22 += *(_QWORD *)v21;
        v21 += 24;
      }
    }
    v25 = 0LL;
    v26 = 0LL;
    while ( *((_QWORD *)v22 + 1) )
    {
      a1[2 * v26 + 3332] = ++v25;
      a1[2 * v26 + 3331] = *((_QWORD *)v22 + 1);
      v28 = 1LL;
      v22 = (char *)*((_QWORD *)v22 + 2);
LABEL_36:
      v26 += v28;
    }
    v27 = *((_QWORD *)v22 + 2);
    *((_QWORD *)v22 + 1) = v25;
    *((_BYTE *)a1 + v27 + 28704) = v25;
    if ( v26 )
    {
      v22 = (char *)a1[2 * v26 + 3329];
      v25 = a1[2 * v26 + 3330];
      v28 = -1LL;
      goto LABEL_36;
    }
    v29 = a1[257];
    if ( v29 > 0xF )
    {
      v30 = a1 + 256;
      if ( v2 < v3 )
      {
        do
        {
          v31 = *v30 + 1;
          v30[1] = 0LL;
          *v30 = v31 >> 1;
          v30 += 3;
        }
        while ( v30 < (unsigned __int64 *)v3 );
      }
      continue;
    }
    break;
  }
  v32 = *((_QWORD *)v3 - 2);
  v33 = 0LL;
  for ( j = 0LL; v32 <= v29; j += v40 )
  {
    v35 = 0LL;
    v36 = a1 + 3908;
    v37 = 0LL;
    v38 = (unsigned int *)(a1 + 3652);
    do
    {
      if ( *((unsigned __int8 *)a1 + v37 * 2 + 28704) == v32 )
      {
        v39 = *v38;
        *v36 |= v32;
        v35 += v39;
        WORD1(a1[v37]) = v33++;
        LOWORD(a1[v37]) = v32;
      }
      if ( *((unsigned __int8 *)a1 + v37 * 2 + 28705) == v32 )
      {
        v35 += v38[1];
        *v36 |= 16 * (_BYTE)v32;
        HIWORD(a1[v37]) = v33++;
        WORD2(a1[v37]) = v32;
      }
      ++v36;
      ++v37;
      v38 += 2;
    }
    while ( v37 < 256 );
    v40 = v32 * v35;
    v33 *= 2LL;
    ++v32;
  }
  return j;
}
