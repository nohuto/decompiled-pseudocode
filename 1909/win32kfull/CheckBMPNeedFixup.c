/*
 * XREFs of CheckBMPNeedFixup @ 0x1C00C7124
 * Callers:
 *     SetupAAHeader @ 0x1C00C28DC (SetupAAHeader.c)
 * Callees:
 *     ComputeByteOffset @ 0x1C00C31A8 (ComputeByteOffset.c)
 *     IntersectRECTL @ 0x1C00C3758 (IntersectRECTL.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CheckBMPNeedFixup(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  unsigned int *v5; // r15
  unsigned int v6; // edi
  int v9; // eax
  __m128i v10; // xmm2
  __int128 v11; // xmm1
  int v12; // r9d
  __int64 v13; // xmm0_8
  __int128 v14; // xmm1
  int v15; // eax
  int v16; // r10d
  int v17; // r9d
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // r14d
  int v23; // esi
  int v24; // edi
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  char *v27; // r12
  __int64 v28; // rax
  int v29; // r14d
  unsigned int *v30; // r13
  __int64 v31; // rax
  unsigned int *v32; // r8
  _BYTE *v33; // rdx
  unsigned __int64 v34; // r15
  unsigned int v35; // eax
  unsigned int *i; // rcx
  int v37; // eax
  __int64 result; // rax
  unsigned int v39; // [rsp+20h] [rbp-79h]
  __int64 v40; // [rsp+28h] [rbp-71h] BYREF
  int v41; // [rsp+30h] [rbp-69h]
  int v42; // [rsp+34h] [rbp-65h]
  int v43; // [rsp+38h] [rbp-61h]
  int v44; // [rsp+3Ch] [rbp-5Dh]
  unsigned int *v45; // [rsp+40h] [rbp-59h]
  unsigned int *v46; // [rsp+48h] [rbp-51h]
  __m128i v47; // [rsp+50h] [rbp-49h] BYREF
  __int128 v48; // [rsp+60h] [rbp-39h]
  __int128 v49; // [rsp+70h] [rbp-29h]
  __int128 v50; // [rsp+80h] [rbp-19h]
  __int128 v51; // [rsp+90h] [rbp-9h]
  __int64 v52; // [rsp+A0h] [rbp+7h]

  v4 = *a4;
  v5 = a4;
  v6 = *(unsigned __int8 *)(a3 + 10);
  v46 = a4;
  if ( (v4 & 0x40) == 0 )
    return 0LL;
  if ( !v6 )
    goto LABEL_41;
  if ( v6 <= 2 )
    goto LABEL_42;
  if ( v6 > 6 )
  {
    if ( v6 <= 0xFB )
      goto LABEL_41;
    if ( v6 > 0xFE )
    {
LABEL_42:
      result = 1LL;
      *a4 = v4 | 0x240;
      return result;
    }
  }
  v9 = *(_DWORD *)(a3 + 12);
  v40 = 0LL;
  v41 = v9;
  v42 = *(_DWORD *)(a3 + 16);
  if ( !IntersectRECTL((int *)&v40, (int *)a4 + 16) )
    return 0LL;
  v10 = *(__m128i *)(a2 + 8);
  v11 = *(_OWORD *)(a2 + 40);
  v12 = *(_DWORD *)(a3 + 20);
  v48 = *(_OWORD *)(a2 + 24);
  v50 = *(_OWORD *)(a2 + 56);
  v13 = *(_QWORD *)(a2 + 88);
  v49 = v11;
  v14 = *(_OWORD *)(a2 + 72);
  HIDWORD(v50) = v12;
  v47 = v10;
  v52 = v13;
  v51 = v14;
  v47.m128i_i8[0] = _mm_cvtsi128_si32(v10) & 0xF3;
  DWORD1(v50) = v42 - HIDWORD(v40);
  v15 = ComputeByteOffset(v6, v40, &v47.m128i_i8[1]);
  v18 = v41 - v40;
  v44 = v41 - v40;
  LODWORD(v50) = v41 - v40;
  v19 = *(_QWORD *)(a3 + 24) + HIDWORD(v40) * v17 + (__int64)v15;
  DWORD2(v50) = 3 * (v41 - v40);
  v20 = (unsigned int)(v41 - v40 + 2);
  *((_QWORD *)&v49 + 1) = v19;
  if ( (unsigned int)v20 < v41 - (int)v40 )
    return 0LL;
  v21 = 3 * v20;
  if ( (unsigned __int64)(3 * v20) > 0xFFFFFFFF || v21 + 8 < v21 )
    return 0LL;
  v22 = (v21 + 8) & 0xFFFFFFF8;
  v23 = v18 * v16;
  if ( v18 * v16 <= 2304 )
  {
    v4 |= 0x200u;
    goto LABEL_41;
  }
  if ( v23 <= 0x4000 )
  {
    v24 = v23 >> 3;
  }
  else
  {
    v24 = 20;
    DWORD1(v50) = (v16 + 5) / 6;
    HIDWORD(v50) *= 6;
  }
  v25 = (unsigned int)(v24 + 1);
  if ( (unsigned int)v25 < v24
    || (v26 = 4 * v25, v26 > 0xFFFFFFFF)
    || (unsigned int)v26 + v22 < v22
    || (v27 = (char *)EngAllocMem(1u, (unsigned int)v26 + v22, 0x38355448u)) == 0LL )
  {
    *v5 = v4 & 0xFFFFFFBF;
    return 0LL;
  }
  v28 = (int)v22;
  v29 = 0;
  v45 = (unsigned int *)&v27[v28];
  v30 = (unsigned int *)&v27[v28];
  HIBYTE(v39) = 0;
  v40 = (__int64)&v27[2 * v44 + v44];
  while ( 2 )
  {
    v43 = 0;
    v31 = ((__int64 (__fastcall *)(__m128i *, char *))v48)(&v47, v27);
    v32 = v45;
    v33 = (_BYTE *)v31;
    v34 = v40;
    do
    {
      LOBYTE(v39) = v33[1];
      BYTE2(v39) = *v33;
      BYTE1(v39) = v33[2];
      v35 = v39;
      if ( BYTE1(v39) == *v33 )
      {
        v35 = v39 & 0xFCFCFCFC;
        HIBYTE(v39) &= 0xFCu;
      }
      *v32 = v35;
      for ( i = v30; *i != v35; --i )
        ;
      if ( i != v32 )
        goto LABEL_22;
      if ( ++v29 > v24 )
        break;
      ++v30;
      v43 = 1;
      *v30 = v35;
LABEL_22:
      v33 += 3;
    }
    while ( (unsigned __int64)v33 < v34 );
    v5 = v46;
    if ( v24 == 20 || v43 )
    {
LABEL_27:
      if ( v29 > v24 || !DWORD1(v50) )
        goto LABEL_35;
      continue;
    }
    break;
  }
  v23 -= v44;
  if ( v23 > 2304 )
  {
    v24 = v23 >> 4;
    goto LABEL_27;
  }
  v4 |= 0x200u;
LABEL_35:
  v37 = v4 | 0x200;
  if ( v29 >= 20 )
    v37 = v4;
  if ( v24 == 20 )
  {
    v4 = v37 & 0xFFFFFFBF;
    if ( v29 <= 20 )
      v4 = v37;
  }
  else if ( v29 > 20 || (v4 = v37, v29 <= v24) )
  {
    v4 = v37 & 0xFFFFFFBF;
  }
  EngFreeMem(v27);
LABEL_41:
  *v5 = v4;
  return v4 & 0x40;
}
