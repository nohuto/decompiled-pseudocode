/*
 * XREFs of XpressDoHuffmanPass @ 0x1402FB47C
 * Callers:
 *     RtlCompressBufferXpressHuffMax @ 0x1402F8D44 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x1402F93D0 (RtlCompressBufferXpressHuffStandard.c)
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
  int v22; // eax
  bool v23; // sf
  __int64 v24; // rdi
  char *v25; // r10
  unsigned __int64 v26; // rcx
  unsigned __int16 v27; // bp
  unsigned __int64 v28; // r8
  __int16 v29; // dx
  char v30; // al
  unsigned __int16 v31; // cx
  char v32; // al
  unsigned __int16 v33; // si
  unsigned __int8 v34; // di
  unsigned __int64 v35; // rcx
  unsigned __int16 v36; // r10
  __int16 v37; // r14
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
    if ( v13 < v20 )
    {
      *(_WORD *)v12 = (v15 << v13) | (v21 >> (v20 - v13));
      v12 = v14;
      v15 = *(_WORD *)(a1 + 4 * v19 + 2);
      v14 = v16;
      v16 += 2;
      v13 += 16 - v20;
    }
    else
    {
      v13 -= v20;
      v15 = v21 | (v15 << v20);
    }
    goto LABEL_8;
  }
  while ( (unsigned __int64)a2 < v8 )
  {
    _mm_lfence();
    v24 = *a2;
    v25 = (char *)(a2 + 1);
    v26 = *(unsigned __int16 *)(a1 + 4 * v24 + 1024);
    v27 = *(_WORD *)(a1 + 4 * v24 + 1026);
    if ( v13 < v26 )
    {
      *(_WORD *)v12 = (v15 << v13) | (v27 >> (v26 - v13));
      v12 = v14;
      v29 = *(_WORD *)(a1 + 4LL * (unsigned int)v24 + 1026);
      v14 = v16;
      v16 += 2;
      v28 = 16 - v26 + v13;
    }
    else
    {
      v28 = v13 - *(unsigned __int16 *)(a1 + 4 * v24 + 1024);
      v29 = v27 | (v15 << v26);
    }
    if ( (v24 & 0xF) == 0xF )
    {
      v30 = *v25++;
      *v16++ = v30;
      if ( v30 == -1 )
      {
        v31 = *(_WORD *)v25;
        *v16 = *(_WORD *)v25;
        v32 = v25[1];
        v25 += 2;
        v16[1] = v32;
        v16 += 2;
        if ( !v31 )
        {
          *v16 = *v25;
          v16[1] = v25[1];
          v16[2] = v25[2];
          v16[3] = v25[3];
          v16 += 4;
          v25 += 4;
        }
      }
    }
    v33 = *(_WORD *)v25;
    v34 = (unsigned __int8)v24 >> 4;
    if ( v28 < v34 )
    {
      *(_WORD *)v12 = (v29 << v28) | (v33 >> (v34 - v28));
      v12 = v14;
      v15 = *(_WORD *)v25;
      v14 = v16;
      v16 += 2;
      v13 = 16LL - v34 + v28;
    }
    else
    {
      v13 = v28 - v34;
      v15 = v33 | (v29 << v34);
    }
    v8 = a3;
    a2 = (unsigned __int8 *)(v25 + 2);
LABEL_8:
    v22 = 2 * v18;
    v23 = v18 < 0;
    v18 *= 2;
    if ( !v23 )
      goto LABEL_5;
    if ( !v22 )
      goto LABEL_4;
  }
  if ( a5 )
  {
    v35 = *(unsigned __int16 *)(a1 + 1024);
    v36 = *(_WORD *)(a1 + 1026);
    if ( v13 < v35 )
    {
      v37 = 16 - *(_WORD *)(a1 + 1024);
      *(_WORD *)v12 = (v15 << v13) | (v36 >> (v35 - v13));
      v12 = v14;
      v15 = *(_WORD *)(a1 + 1026);
      v14 = v16;
      v16 += 2;
      LOBYTE(v13) = v37 + v13;
    }
    else
    {
      LOBYTE(v13) = v13 - v35;
      v15 = v36 | (v15 << v35);
    }
  }
  result = v16;
  *(_WORD *)v12 = v15 << v13;
  *(_WORD *)v14 = 0;
  return result;
}
