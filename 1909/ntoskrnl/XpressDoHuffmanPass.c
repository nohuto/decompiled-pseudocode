/*
 * XREFs of XpressDoHuffmanPass @ 0x140319648
 * Callers:
 *     RtlCompressBufferXpressHuffMax @ 0x140315C10 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x140316330 (RtlCompressBufferXpressHuffStandard.c)
 * Callees:
 *     <none>
 */

char *__fastcall XpressDoHuffmanPass(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3, char *a4, int a5)
{
  _OWORD *v7; // rdx
  unsigned __int64 v8; // r13
  __int64 v9; // rcx
  char *v10; // rax
  __int128 v11; // xmm1
  char *v12; // r15
  char *v13; // r12
  unsigned __int64 v14; // r8
  __int16 v15; // dx
  char *v16; // r9
  int v17; // eax
  int v18; // r11d
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdi
  unsigned __int16 v22; // bx
  int v23; // eax
  bool v24; // sf
  __int64 v25; // rbx
  char *v26; // r10
  __int64 v27; // r13
  unsigned __int64 v28; // rcx
  unsigned __int16 v29; // bp
  unsigned __int64 v30; // r8
  __int16 v31; // dx
  char v32; // al
  unsigned __int16 v33; // cx
  char v34; // al
  unsigned __int16 v35; // di
  unsigned __int8 v36; // bl
  unsigned __int64 v37; // rcx
  unsigned __int16 v38; // r10
  __int16 v39; // r14

  v7 = (_OWORD *)(a1 + 31264);
  v8 = a3;
  v9 = 2LL;
  v10 = a4;
  do
  {
    v10 += 128;
    *((_OWORD *)v10 - 8) = *v7;
    *((_OWORD *)v10 - 7) = v7[1];
    *((_OWORD *)v10 - 6) = v7[2];
    *((_OWORD *)v10 - 5) = v7[3];
    *((_OWORD *)v10 - 4) = v7[4];
    *((_OWORD *)v10 - 3) = v7[5];
    *((_OWORD *)v10 - 2) = v7[6];
    v11 = v7[7];
    v7 += 8;
    *((_OWORD *)v10 - 1) = v11;
    --v9;
  }
  while ( v9 );
  v12 = a4 + 256;
  v13 = a4 + 258;
  v14 = 16LL;
  v15 = 0;
  v16 = a4 + 260;
LABEL_4:
  v17 = *(_DWORD *)a2;
  a2 += 4;
  v18 = 2 * v17 + 1;
  if ( v17 >= 0 )
  {
LABEL_5:
    v19 = *a2++;
    v20 = *(unsigned __int16 *)(a1 + 4 * v19);
    v21 = a1 + 4 * v19;
    v22 = *(_WORD *)(v21 + 2);
    if ( v14 < v20 )
    {
      *(_WORD *)v12 = (v15 << v14) | (v22 >> (v20 - v14));
      v12 = v13;
      v15 = *(_WORD *)(v21 + 2);
      v13 = v16;
      v16 += 2;
      v14 += 16 - v20;
    }
    else
    {
      v14 -= v20;
      v15 = v22 | (v15 << v20);
    }
    goto LABEL_8;
  }
  while ( (unsigned __int64)a2 < v8 )
  {
    _mm_lfence();
    v25 = *a2;
    v26 = (char *)(a2 + 1);
    v27 = a1 + 4 * v25;
    v28 = *(unsigned __int16 *)(v27 + 1024);
    v29 = *(_WORD *)(v27 + 1026);
    if ( v14 < v28 )
    {
      *(_WORD *)v12 = (v15 << v14) | (v29 >> (v28 - v14));
      v12 = v13;
      v31 = *(_WORD *)(v27 + 1026);
      v13 = v16;
      v16 += 2;
      v30 = 16 - v28 + v14;
    }
    else
    {
      v30 = v14 - v28;
      v31 = v29 | (v15 << v28);
    }
    if ( (v25 & 0xF) == 0xF )
    {
      v32 = *v26++;
      *v16++ = v32;
      if ( v32 == -1 )
      {
        v33 = *(_WORD *)v26;
        *v16 = *(_WORD *)v26;
        v34 = v26[1];
        v26 += 2;
        v16[1] = v34;
        v16 += 2;
        if ( !v33 )
        {
          *v16 = *v26;
          v16[1] = v26[1];
          v16[2] = v26[2];
          v16[3] = v26[3];
          v16 += 4;
          v26 += 4;
        }
      }
    }
    v35 = *(_WORD *)v26;
    v36 = (unsigned __int8)v25 >> 4;
    if ( v30 < v36 )
    {
      *(_WORD *)v12 = (v31 << v30) | (v35 >> (v36 - v30));
      v12 = v13;
      v15 = *(_WORD *)v26;
      v13 = v16;
      v16 += 2;
      v14 = 16LL - v36 + v30;
    }
    else
    {
      v14 = v30 - v36;
      v15 = v35 | (v31 << v36);
    }
    v8 = a3;
    a2 = (unsigned __int8 *)(v26 + 2);
LABEL_8:
    v23 = 2 * v18;
    v24 = v18 < 0;
    v18 *= 2;
    if ( !v24 )
      goto LABEL_5;
    if ( !v23 )
      goto LABEL_4;
  }
  if ( a5 )
  {
    v37 = *(unsigned __int16 *)(a1 + 1024);
    v38 = *(_WORD *)(a1 + 1026);
    if ( v14 < v37 )
    {
      v39 = 16 - *(_WORD *)(a1 + 1024);
      *(_WORD *)v12 = (v15 << v14) | (v38 >> (v37 - v14));
      v12 = v13;
      v15 = *(_WORD *)(a1 + 1026);
      v13 = v16;
      v16 += 2;
      LOBYTE(v14) = v39 + v14;
    }
    else
    {
      LOBYTE(v14) = v14 - v37;
      v15 = v38 | (v15 << v37);
    }
  }
  *(_WORD *)v12 = v15 << v14;
  *(_WORD *)v13 = 0;
  return v16;
}
