/*
 * XREFs of RtlpComputeCrcInternal @ 0x14015CA3C
 * Callers:
 *     RtlCrc64 @ 0x14015CA20 (RtlCrc64.c)
 *     PopEnsureErratumSubscribed @ 0x1402DBBD4 (PopEnsureErratumSubscribed.c)
 *     RtlCrc32 @ 0x1402EFF00 (RtlCrc32.c)
 *     MdlInvariantPostProcessing1 @ 0x14030A83C (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x14030AA30 (MdlInvariantPreProcessing1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpComputeCrcInternal(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // r9
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r10
  __int64 v21; // rax
  __int64 v22; // r11
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // r11
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 v38; // r11
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // r8
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  __int64 v70; // rdx
  unsigned __int64 v72; // rdx
  char v73; // al
  char v74; // cl
  __int64 v75; // [rsp+40h] [rbp+10h]

  v5 = 0LL;
  v6 = a4[4];
  v75 = v6;
  v8 = a3 ^ v6;
  v9 = a1;
  v10 = -(int)a1 & 7;
  if ( (-(int)a1 & 7) != 0 )
  {
    v72 = 0LL;
    if ( v10 > a2 )
      v10 = a2;
    if ( v10 )
    {
      do
      {
        v73 = *(_BYTE *)(v72 + a1);
        ++v72;
        v8 = (v8 >> 8) ^ *(_QWORD *)(a4[1] + 8LL * (unsigned __int8)(v8 ^ v73));
      }
      while ( v72 < v10 );
    }
    a2 -= v10;
    v9 = v10 + a1;
  }
  v11 = a2 & 0x1F;
  if ( a2 - v11 >= 0x40 )
  {
    v12 = 0LL;
    v13 = v9 + a2 - v11 - 32;
    v14 = 0LL;
    v15 = 0LL;
    a2 &= 0x1Fu;
    if ( v9 < v13 )
    {
      v16 = a4[2];
      do
      {
        _mm_prefetch((const char *)(v9 + 256), 2);
        v17 = v8 ^ *(_QWORD *)v9;
        v18 = v12 ^ *(_QWORD *)(v9 + 8);
        v19 = v14 ^ *(_QWORD *)(v9 + 16);
        v20 = v15 ^ *(_QWORD *)(v9 + 24);
        v21 = (unsigned __int8)v17;
        v17 >>= 8;
        v22 = *(_QWORD *)(v16 + 8 * v21 + 14336);
        v23 = (unsigned __int8)v18;
        v18 >>= 8;
        v24 = *(_QWORD *)(v16 + 8 * v23 + 14336);
        v25 = (unsigned __int8)v19;
        v19 >>= 8;
        v26 = *(_QWORD *)(v16 + 8 * v25 + 14336);
        v27 = (unsigned __int8)v20;
        v20 >>= 8;
        v28 = *(_QWORD *)(v16 + 8 * v27 + 14336);
        v29 = (unsigned __int8)v17;
        v17 >>= 8;
        v30 = *(_QWORD *)(v16 + 8 * v29 + 12288) ^ v22;
        v31 = (unsigned __int8)v18;
        v18 >>= 8;
        v32 = *(_QWORD *)(v16 + 8 * v31 + 12288) ^ v24;
        v33 = (unsigned __int8)v19;
        v19 >>= 8;
        v34 = *(_QWORD *)(v16 + 8 * v33 + 12288) ^ v26;
        v35 = (unsigned __int8)v20;
        v20 >>= 8;
        v36 = *(_QWORD *)(v16 + 8 * v35 + 12288) ^ v28;
        v37 = (unsigned __int8)v17;
        v17 >>= 8;
        v38 = *(_QWORD *)(v16 + 8 * v37 + 10240) ^ v30;
        v39 = (unsigned __int8)v18;
        v18 >>= 8;
        v40 = *(_QWORD *)(v16 + 8 * v39 + 10240) ^ v32;
        v41 = (unsigned __int8)v19;
        v19 >>= 8;
        v42 = *(_QWORD *)(v16 + 8 * v41 + 10240) ^ v34;
        v43 = (unsigned __int8)v20;
        v20 >>= 8;
        v44 = *(_QWORD *)(v16 + 8 * v43 + 10240) ^ v36;
        v45 = (unsigned __int8)v20;
        v20 >>= 8;
        v9 += 32LL;
        v8 = *(_QWORD *)(v16 + 8 * HIDWORD(v17)) ^ *(_QWORD *)(v16 + 8LL * BYTE3(v17) + 2048) ^ *(_QWORD *)(v16 + 8LL * BYTE2(v17) + 4096) ^ *(_QWORD *)(v16 + 8LL * BYTE1(v17) + 6144) ^ *(_QWORD *)(v16 + 8LL * (unsigned __int8)v17 + 0x2000) ^ v38;
        v12 = *(_QWORD *)(v16 + 8 * HIDWORD(v18)) ^ *(_QWORD *)(v16 + 8LL * BYTE3(v18) + 2048) ^ *(_QWORD *)(v16 + 8LL * BYTE2(v18) + 4096) ^ *(_QWORD *)(v16 + 8LL * BYTE1(v18) + 6144) ^ *(_QWORD *)(v16 + 8LL * (unsigned __int8)v18 + 0x2000) ^ v40;
        v14 = *(_QWORD *)(v16 + 8 * HIDWORD(v19)) ^ *(_QWORD *)(v16 + 8LL * BYTE3(v19) + 2048) ^ *(_QWORD *)(v16 + 8LL * BYTE2(v19) + 4096) ^ *(_QWORD *)(v16 + 8LL * BYTE1(v19) + 6144) ^ *(_QWORD *)(v16 + 8LL * (unsigned __int8)v19 + 0x2000) ^ v42;
        v15 = *(_QWORD *)(v16 + 8 * (v20 >> 24)) ^ *(_QWORD *)(v16 + 8LL * BYTE2(v20) + 2048) ^ *(_QWORD *)(v16 + 8LL * BYTE1(v20) + 4096) ^ *(_QWORD *)(v16 + 8LL * (unsigned __int8)v20 + 6144) ^ *(_QWORD *)(v16 + 8 * v45 + 0x2000) ^ v44;
      }
      while ( v9 < v13 );
      v6 = v75;
      v5 = 0LL;
    }
    v46 = a4[1];
    v47 = ((v8 ^ *(_QWORD *)v9) >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)(v8 ^ *(_BYTE *)v9));
    v48 = (v47 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v47);
    v49 = (v48 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v48);
    v50 = (v49 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v49);
    v51 = (v50 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v50);
    v52 = (v51 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v51);
    v53 = (v52 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v52);
    v54 = v12 ^ *(_QWORD *)(v9 + 8) ^ (v53 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v53);
    v55 = (v54 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v54);
    v56 = (v55 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v55);
    v57 = (v56 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v56);
    v58 = (v57 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v57);
    v59 = (v58 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v58);
    v60 = (v59 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v59);
    v61 = (v60 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v60);
    v62 = v14 ^ *(_QWORD *)(v9 + 16) ^ (v61 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v61);
    v63 = (v62 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v62);
    v64 = (v63 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v63);
    v65 = (v64 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v64);
    v66 = (v65 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v65);
    v67 = (v66 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v66);
    v68 = (v67 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v67);
    v69 = (v68 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v68);
    v70 = 8LL;
    v8 = v15 ^ *(_QWORD *)(v9 + 24) ^ (v69 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v69);
    do
    {
      v8 = (v8 >> 8) ^ *(_QWORD *)(v46 + 8LL * (unsigned __int8)v8);
      --v70;
    }
    while ( v70 );
    v9 += 32LL;
  }
  if ( a2 )
  {
    do
    {
      v74 = *(_BYTE *)(v5 + v9);
      ++v5;
      v8 = (v8 >> 8) ^ *(_QWORD *)(a4[1] + 8LL * (unsigned __int8)(v8 ^ v74));
    }
    while ( v5 < a2 );
  }
  return v8 ^ v6;
}
