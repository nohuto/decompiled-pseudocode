/*
 * XREFs of RtlpComputeCrcInternal @ 0x1800820F8
 * Callers:
 *     RtlCrc32 @ 0x1800820E0 (RtlCrc32.c)
 *     RtlCrc64 @ 0x1800F5650 (RtlCrc64.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpComputeCrcInternal(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // r12
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // r10
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // r11
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // r10
  __int64 v32; // rax
  __int64 v33; // rbp
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // r15
  __int64 v38; // rax
  __int64 v39; // r10
  __int64 v40; // rax
  __int64 v41; // rbp
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // rax
  __int64 v45; // r15
  __int64 v46; // rax
  __int64 v47; // r8
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rcx
  __int64 v71; // rdx
  char v72; // cl
  unsigned __int64 v74; // rdx
  __int64 v75; // r9
  char v76; // al

  v4 = a4[4];
  v5 = 0LL;
  v7 = a3 ^ v4;
  v9 = a1;
  v10 = -(int)a1 & 7;
  if ( (-(int)a1 & 7) != 0 )
  {
    v74 = 0LL;
    if ( v10 > a2 )
      v10 = a2;
    if ( v10 )
    {
      v75 = a4[1];
      do
      {
        v76 = *(_BYTE *)(v74 + a1);
        ++v74;
        v7 = (v7 >> 8) ^ *(_QWORD *)(v75 + 8LL * (unsigned __int8)(v7 ^ v76));
      }
      while ( v74 < v10 );
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
      v17 = v13;
      do
      {
        _mm_prefetch((const char *)(v9 + 256), 2);
        v18 = v7 ^ *(_QWORD *)v9;
        v19 = v12 ^ *(_QWORD *)(v9 + 8);
        v20 = v14 ^ *(_QWORD *)(v9 + 16);
        v21 = v15 ^ *(_QWORD *)(v9 + 24);
        v22 = (unsigned __int8)v18;
        v18 >>= 8;
        v23 = *(_QWORD *)(v16 + 8 * v22 + 14336);
        v24 = (unsigned __int8)v19;
        v19 >>= 8;
        v25 = *(_QWORD *)(v16 + 8 * v24 + 14336);
        v26 = (unsigned __int8)v20;
        v20 >>= 8;
        v27 = *(_QWORD *)(v16 + 8 * v26 + 14336);
        v28 = (unsigned __int8)v21;
        v21 >>= 8;
        v29 = *(_QWORD *)(v16 + 8 * v28 + 14336);
        v30 = (unsigned __int8)v18;
        v18 >>= 8;
        v31 = *(_QWORD *)(v16 + 8 * v30 + 12288) ^ v23;
        v32 = (unsigned __int8)v19;
        v19 >>= 8;
        v33 = *(_QWORD *)(v16 + 8 * v32 + 12288) ^ v25;
        v34 = (unsigned __int8)v20;
        v20 >>= 8;
        v35 = *(_QWORD *)(v16 + 8 * v34 + 12288) ^ v27;
        v36 = (unsigned __int8)v21;
        v21 >>= 8;
        v37 = *(_QWORD *)(v16 + 8 * v36 + 12288) ^ v29;
        v38 = (unsigned __int8)v18;
        v18 >>= 8;
        v39 = *(_QWORD *)(v16 + 8 * v38 + 10240) ^ v31;
        v40 = (unsigned __int8)v19;
        v19 >>= 8;
        v41 = *(_QWORD *)(v16 + 8 * v40 + 10240) ^ v33;
        v42 = (unsigned __int8)v20;
        v20 >>= 8;
        v43 = *(_QWORD *)(v16 + 8 * v42 + 10240) ^ v35;
        v44 = (unsigned __int8)v21;
        v21 >>= 8;
        v45 = *(_QWORD *)(v16 + 8 * v44 + 10240) ^ v37;
        v46 = (unsigned __int8)v18;
        v18 >>= 8;
        v9 += 32LL;
        v7 = *(_QWORD *)(v16 + 8 * (v18 >> 24)) ^ *(_QWORD *)(v16 + 8LL * BYTE2(v18) + 2048) ^ *(_QWORD *)(v16 + 8LL * BYTE1(v18) + 4096) ^ *(_QWORD *)(v16 + 8LL * (unsigned __int8)v18 + 6144) ^ *(_QWORD *)(v16 + 8 * v46 + 0x2000) ^ v39;
        v12 = *(_QWORD *)(v16 + 8 * HIDWORD(v19)) ^ *(_QWORD *)(v16 + 8LL * BYTE3(v19) + 2048) ^ *(_QWORD *)(v16 + 8LL * BYTE2(v19) + 4096) ^ *(_QWORD *)(v16 + 8LL * BYTE1(v19) + 6144) ^ *(_QWORD *)(v16 + 8LL * (unsigned __int8)v19 + 0x2000) ^ v41;
        v14 = *(_QWORD *)(v16 + 8 * HIDWORD(v20)) ^ *(_QWORD *)(v16 + 8LL * BYTE3(v20) + 2048) ^ *(_QWORD *)(v16 + 8LL * BYTE2(v20) + 4096) ^ *(_QWORD *)(v16 + 8LL * BYTE1(v20) + 6144) ^ *(_QWORD *)(v16 + 8LL * (unsigned __int8)v20 + 0x2000) ^ v43;
        v15 = *(_QWORD *)(v16 + 8 * HIDWORD(v21)) ^ *(_QWORD *)(v16 + 8LL * BYTE3(v21) + 2048) ^ *(_QWORD *)(v16 + 8LL * BYTE2(v21) + 4096) ^ *(_QWORD *)(v16 + 8LL * BYTE1(v21) + 6144) ^ *(_QWORD *)(v16 + 8LL * (unsigned __int8)v21 + 0x2000) ^ v45;
      }
      while ( v9 < v17 );
      v4 = a4[4];
    }
    v47 = a4[1];
    v48 = ((v7 ^ *(_QWORD *)v9) >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)(v7 ^ *(_BYTE *)v9));
    v49 = (v48 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v48);
    v50 = (v49 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v49);
    v51 = (v50 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v50);
    v52 = (v51 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v51);
    v53 = (v52 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v52);
    v54 = (v53 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v53);
    v55 = v12 ^ *(_QWORD *)(v9 + 8) ^ (v54 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v54);
    v56 = (v55 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v55);
    v57 = (v56 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v56);
    v58 = (v57 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v57);
    v59 = (v58 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v58);
    v60 = (v59 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v59);
    v61 = (v60 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v60);
    v62 = (v61 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v61);
    v63 = v14 ^ *(_QWORD *)(v9 + 16) ^ (v62 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v62);
    v64 = (v63 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v63);
    v65 = (v64 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v64);
    v66 = (v65 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v65);
    v67 = (v66 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v66);
    v68 = (v67 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v67);
    v69 = (v68 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v68);
    v70 = (v69 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v69);
    v71 = 8LL;
    v7 = v15 ^ *(_QWORD *)(v9 + 24) ^ (v70 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v70);
    do
    {
      v7 = (v7 >> 8) ^ *(_QWORD *)(v47 + 8LL * (unsigned __int8)v7);
      --v71;
    }
    while ( v71 );
    v9 += 32LL;
  }
  if ( a2 )
  {
    do
    {
      v72 = *(_BYTE *)(v5 + v9);
      ++v5;
      v7 = (v7 >> 8) ^ *(_QWORD *)(a4[1] + 8LL * (unsigned __int8)(v7 ^ v72));
    }
    while ( v5 < a2 );
  }
  return v7 ^ v4;
}
