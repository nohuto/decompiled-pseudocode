/*
 * XREFs of XpressBuildHuffmanEncodings @ 0x180067DA8
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x1800672F0 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x18010B374 (RtlCompressBufferXpressHuffMax.c)
 * Callees:
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall XpressBuildHuffmanEncodings(_QWORD *a1)
{
  unsigned __int8 *v2; // rsi
  unsigned __int8 *v3; // rdi
  unsigned __int64 v4; // rdx
  _DWORD *v5; // r8
  unsigned __int64 v6; // rcx
  _QWORD *v7; // r14
  _WORD *v8; // rcx
  __int64 v9; // rdx
  unsigned __int8 *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r10
  unsigned __int16 *v13; // r11
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int8 *v17; // r8
  unsigned __int8 *v18; // rdx
  unsigned __int8 *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  __int64 i; // rsi
  __int64 v29; // r9
  _BYTE *v30; // r11
  unsigned __int64 v31; // rdx
  unsigned int *v32; // r10
  unsigned __int64 v33; // r9
  __int64 v35; // rax
  unsigned __int64 v36; // r8
  unsigned __int64 *v37; // rcx
  unsigned __int64 v38; // rax

  memset(a1 + 3331, 0, 0x404uLL);
  v2 = (unsigned __int8 *)(a1 + 256);
  v3 = (unsigned __int8 *)(a1 + 256);
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
  if ( v3 <= (unsigned __int8 *)a1 + 2072 )
  {
    if ( v3 == v2 )
      return 0LL;
    v36 = a1[258];
    *((_BYTE *)a1 + (v36 >> 1) + 31264) = (v36 & 1) != 0 ? 16 : 1;
    *((_DWORD *)a1 + v36) = 1;
    return *(_QWORD *)v2;
  }
  v8 = (_WORD *)a1 + 13325;
  v9 = 255LL;
  do
  {
    *v8 += *(v8 - 1);
    v8[257] += v8[256];
    ++v8;
    --v9;
  }
  while ( v9 );
  v10 = (unsigned __int8 *)(a1 + 256);
  if ( v2 < v3 )
  {
    do
    {
      *((_WORD *)a1 + *((unsigned __int16 *)a1 + *v10 + 13324) + 13838) = *((_WORD *)v10 + 8);
      v11 = *v10;
      v10 += 24;
      ++*((_WORD *)a1 + v11 + 13324);
    }
    while ( v10 < v3 );
  }
  v12 = (v3 - (unsigned __int8 *)a1 - 2048) / 24;
  if ( v12 )
  {
    v13 = (unsigned __int16 *)a1 + 13838;
    do
    {
      v14 = *v13++;
      v15 = *((unsigned int *)a1 + v14 + 7304);
      v16 = *((unsigned __int16 *)a1 + (v15 >> 8) + 13581);
      *((_WORD *)a1 + (v15 >> 8) + 13581) = v16 + 1;
      a1[3 * v16 + 258] = v14;
      a1[3 * v16 + 256] = v15;
      --v12;
    }
    while ( v12 );
  }
  while ( 2 )
  {
    *((_QWORD *)v3 + 1) = v2;
    v17 = (unsigned __int8 *)(a1 + 262);
    *((_QWORD *)v3 + 2) = v7;
    v18 = v3;
    v19 = v3;
    *(_QWORD *)v3 = *(_QWORD *)v2 + *v7;
    while ( v17 != v3 || v19 != v18 )
    {
      v18 += 24;
      if ( v17 == v3 || v19 < v18 && *(_QWORD *)v19 < *(_QWORD *)v17 )
      {
        *((_QWORD *)v18 + 1) = v19;
        v20 = *(_QWORD *)v19;
        v19 += 24;
      }
      else
      {
        *((_QWORD *)v18 + 1) = v17;
        v20 = *(_QWORD *)v17;
        v17 += 24;
      }
      *(_QWORD *)v18 = v20;
      if ( v17 == v3 || v19 < v18 && *(_QWORD *)v19 < *(_QWORD *)v17 )
      {
        *((_QWORD *)v18 + 2) = v19;
        *(_QWORD *)v18 += *(_QWORD *)v19;
        v19 += 24;
      }
      else
      {
        *((_QWORD *)v18 + 2) = v17;
        *(_QWORD *)v18 += *(_QWORD *)v17;
        v17 += 24;
      }
    }
    v21 = 0LL;
    v22 = 0LL;
    while ( *((_QWORD *)v18 + 1) )
    {
      a1[2 * v22 + 3332] = ++v21;
      a1[2 * v22 + 3331] = *((_QWORD *)v18 + 1);
      v24 = 1LL;
      v18 = (unsigned __int8 *)*((_QWORD *)v18 + 2);
LABEL_30:
      v22 += v24;
    }
    v23 = *((_QWORD *)v18 + 2);
    *((_QWORD *)v18 + 1) = v21;
    *((_BYTE *)a1 + v23 + 28704) = v21;
    if ( v22 )
    {
      v18 = (unsigned __int8 *)a1[2 * v22 + 3329];
      v21 = a1[2 * v22 + 3330];
      v24 = -1LL;
      goto LABEL_30;
    }
    v25 = a1[257];
    if ( v25 > 0xF )
    {
      v37 = a1 + 256;
      if ( v2 < v3 )
      {
        do
        {
          v38 = *v37 + 1;
          v37[1] = 0LL;
          *v37 = v38 >> 1;
          v37 += 3;
        }
        while ( v37 < (unsigned __int64 *)v3 );
      }
      continue;
    }
    break;
  }
  v26 = *((_QWORD *)v3 - 2);
  v27 = 0LL;
  for ( i = 0LL; v26 <= v25; i += v33 )
  {
    v29 = 0LL;
    v30 = a1 + 3908;
    v31 = 0LL;
    v32 = (unsigned int *)(a1 + 3652);
    do
    {
      if ( *((unsigned __int8 *)a1 + v31 * 2 + 28704) == v26 )
      {
        v35 = *v32;
        *v30 |= v26;
        v29 += v35;
        WORD1(a1[v31]) = v27++;
        LOWORD(a1[v31]) = v26;
      }
      if ( *((unsigned __int8 *)a1 + v31 * 2 + 28705) == v26 )
      {
        v29 += v32[1];
        *v30 |= 16 * (_BYTE)v26;
        HIWORD(a1[v31]) = v27++;
        WORD2(a1[v31]) = v26;
      }
      ++v30;
      ++v31;
      v32 += 2;
    }
    while ( v31 < 256 );
    v33 = v26 * v29;
    v27 *= 2LL;
    ++v26;
  }
  return i;
}
