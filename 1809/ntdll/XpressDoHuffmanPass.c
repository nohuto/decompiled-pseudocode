/*
 * XREFs of XpressDoHuffmanPass @ 0x180067AF8
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x1800672F0 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x18010B374 (RtlCompressBufferXpressHuffMax.c)
 * Callees:
 *     <none>
 */

char *__fastcall XpressDoHuffmanPass(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3, __int64 a4, int a5)
{
  _OWORD *v7; // rdx
  unsigned __int64 v8; // r13
  __int64 v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  char *v12; // r15
  unsigned __int64 v13; // r8
  char *v14; // r12
  __int16 v15; // dx
  char *v16; // r9
  int v17; // eax
  int v18; // r11d
  __int64 v19; // rsi
  unsigned __int64 v20; // rcx
  unsigned __int16 v21; // di
  __int64 v22; // rdi
  char *v23; // r10
  unsigned __int64 v24; // rcx
  unsigned __int16 v25; // bp
  unsigned __int64 v26; // r8
  __int16 v27; // dx
  unsigned __int16 v28; // si
  unsigned __int8 v29; // di
  int v30; // eax
  bool v31; // sf
  char v32; // al
  unsigned __int16 v33; // cx
  char v34; // al
  unsigned __int64 v35; // rcx
  unsigned __int16 v36; // r10
  __int16 v37; // r11
  char *result; // rax

  v7 = (_OWORD *)(a1 + 31264);
  v8 = a3;
  v9 = 2LL;
  v10 = (_OWORD *)a4;
  do
  {
    *v10 = *v7;
    v10[1] = v7[1];
    v10[2] = v7[2];
    v10[3] = v7[3];
    v10[4] = v7[4];
    v10[5] = v7[5];
    v10[6] = v7[6];
    v10 += 8;
    v11 = v7[7];
    v7 += 8;
    *(v10 - 1) = v11;
    --v9;
  }
  while ( v9 );
  v12 = (char *)(a4 + 256);
  v13 = 16LL;
  v14 = (char *)(a4 + 258);
  v15 = 0;
  v16 = (char *)(a4 + 260);
LABEL_4:
  v17 = *(_DWORD *)a2;
  a2 += 4;
  v18 = 2 * v17 + 1;
  if ( v17 >= 0 )
  {
LABEL_5:
    v19 = *a2++;
    v20 = *(unsigned __int16 *)(a1 + 4 * v19);
    v21 = *(_WORD *)(a1 + 4 * v19 + 2);
    if ( v13 >= v20 )
    {
      v13 -= v20;
      v15 = v21 | (v15 << v20);
    }
    else
    {
      *(_WORD *)v12 = (v15 << v13) | (v21 >> (v20 - v13));
      v12 = v14;
      v15 = *(_WORD *)(a1 + 4 * v19 + 2);
      v14 = v16;
      v16 += 2;
      v13 += 16 - v20;
    }
    goto LABEL_15;
  }
  while ( (unsigned __int64)a2 < v8 )
  {
    _mm_lfence();
    v22 = *a2;
    v23 = (char *)(a2 + 1);
    v24 = *(unsigned __int16 *)(a1 + 4 * v22 + 1024);
    v25 = *(_WORD *)(a1 + 4 * v22 + 1026);
    if ( v13 < v24 )
    {
      *(_WORD *)v12 = (v15 << v13) | (v25 >> (v24 - v13));
      v12 = v14;
      v27 = *(_WORD *)(a1 + 4LL * (unsigned int)v22 + 1026);
      v14 = v16;
      v16 += 2;
      v26 = 16 - v24 + v13;
    }
    else
    {
      v26 = v13 - *(unsigned __int16 *)(a1 + 4 * v22 + 1024);
      v27 = v25 | (v15 << v24);
    }
    if ( (v22 & 0xF) == 0xF )
    {
      v32 = *v23++;
      *v16++ = v32;
      if ( v32 == -1 )
      {
        v33 = *(_WORD *)v23;
        *v16 = *(_WORD *)v23;
        v34 = v23[1];
        v23 += 2;
        v16[1] = v34;
        v16 += 2;
        if ( !v33 )
        {
          *v16 = *v23;
          v16[1] = v23[1];
          v16[2] = v23[2];
          v16[3] = v23[3];
          v16 += 4;
          v23 += 4;
        }
      }
    }
    v28 = *(_WORD *)v23;
    v29 = (unsigned __int8)v22 >> 4;
    if ( v26 < v29 )
    {
      *(_WORD *)v12 = (v27 << v26) | (v28 >> (v29 - v26));
      v12 = v14;
      v15 = *(_WORD *)v23;
      v14 = v16;
      v16 += 2;
      v13 = 16LL - v29 + v26;
    }
    else
    {
      v13 = v26 - v29;
      v15 = v28 | (v27 << v29);
    }
    v8 = a3;
    a2 = (unsigned __int8 *)(v23 + 2);
LABEL_15:
    v30 = 2 * v18;
    v31 = v18 < 0;
    v18 *= 2;
    if ( !v31 )
      goto LABEL_5;
    if ( !v30 )
      goto LABEL_4;
  }
  if ( a5 )
  {
    v35 = *(unsigned __int16 *)(a1 + 1024);
    v36 = *(_WORD *)(a1 + 1026);
    v37 = *(_WORD *)(a1 + 1024);
    if ( v13 >= v35 )
    {
      LOBYTE(v13) = v13 - v37;
      v15 = v36 | (v15 << v35);
    }
    else
    {
      *(_WORD *)v12 = (v15 << v13) | (v36 >> (v35 - v13));
      v12 = v14;
      v15 = *(_WORD *)(a1 + 1026);
      v14 = v16;
      v16 += 2;
      LOBYTE(v13) = 16 - v37 + v13;
    }
  }
  result = v16;
  *(_WORD *)v12 = v15 << v13;
  *(_WORD *)v14 = 0;
  return result;
}
