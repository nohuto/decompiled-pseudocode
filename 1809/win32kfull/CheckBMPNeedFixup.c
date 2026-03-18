/*
 * XREFs of CheckBMPNeedFixup @ 0x1C00FAEE8
 * Callers:
 *     SetupAAHeader @ 0x1C0015694 (SetupAAHeader.c)
 * Callees:
 *     ComputeByteOffset @ 0x1C0016028 (ComputeByteOffset.c)
 *     IntersectRECTL @ 0x1C00165E0 (IntersectRECTL.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
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
  int v18; // r8d
  unsigned int v19; // eax
  unsigned __int64 v20; // rcx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // r14d
  int v25; // esi
  int v26; // edi
  unsigned __int64 v27; // rax
  char *v28; // r12
  __int64 v29; // rax
  int v30; // r14d
  unsigned int *v31; // r13
  __int64 v32; // rax
  unsigned int *v33; // r8
  _BYTE *v34; // rdx
  unsigned __int64 v35; // r15
  unsigned int v36; // eax
  unsigned int *i; // rcx
  int v38; // eax
  __int64 result; // rax
  unsigned int v40; // [rsp+20h] [rbp-79h]
  __int64 v41; // [rsp+28h] [rbp-71h] BYREF
  int v42; // [rsp+30h] [rbp-69h]
  int v43; // [rsp+34h] [rbp-65h]
  int v44; // [rsp+38h] [rbp-61h]
  int v45; // [rsp+3Ch] [rbp-5Dh]
  unsigned int *v46; // [rsp+40h] [rbp-59h]
  unsigned int *v47; // [rsp+48h] [rbp-51h]
  __m128i v48; // [rsp+50h] [rbp-49h] BYREF
  __int128 v49; // [rsp+60h] [rbp-39h]
  __int128 v50; // [rsp+70h] [rbp-29h]
  __int128 v51; // [rsp+80h] [rbp-19h]
  __int128 v52; // [rsp+90h] [rbp-9h]
  __int64 v53; // [rsp+A0h] [rbp+7h]

  v4 = *a4;
  v5 = a4;
  v6 = *(unsigned __int8 *)(a3 + 10);
  v47 = a4;
  if ( (v4 & 0x40) == 0 )
    return 0LL;
  if ( !v6 )
    goto LABEL_43;
  if ( v6 <= 2 )
    goto LABEL_45;
  if ( v6 > 6 )
  {
    if ( v6 <= 0xFB )
      goto LABEL_43;
    if ( v6 > 0xFE )
    {
LABEL_45:
      result = 1LL;
      *a4 = v4 | 0x240;
      return result;
    }
  }
  v9 = *(_DWORD *)(a3 + 12);
  v41 = 0LL;
  v42 = v9;
  v43 = *(_DWORD *)(a3 + 16);
  if ( !IntersectRECTL((int *)&v41, (int *)a4 + 16) )
    return 0LL;
  v10 = *(__m128i *)(a2 + 8);
  v11 = *(_OWORD *)(a2 + 40);
  v12 = *(_DWORD *)(a3 + 20);
  v49 = *(_OWORD *)(a2 + 24);
  v51 = *(_OWORD *)(a2 + 56);
  v13 = *(_QWORD *)(a2 + 88);
  v50 = v11;
  v14 = *(_OWORD *)(a2 + 72);
  HIDWORD(v51) = v12;
  v48 = v10;
  v53 = v13;
  v52 = v14;
  v48.m128i_i8[0] = _mm_cvtsi128_si32(v10) & 0xF3;
  DWORD1(v51) = v43 - HIDWORD(v41);
  v15 = ComputeByteOffset(v6, v41, &v48.m128i_i8[1]);
  v18 = v42 - v41;
  v45 = v42 - v41;
  LODWORD(v51) = v42 - v41;
  *((_QWORD *)&v50 + 1) = *(_QWORD *)(a3 + 24) + HIDWORD(v41) * v17 + (__int64)v15;
  DWORD2(v51) = 3 * (v42 - v41);
  v19 = v42 - v41 + 2;
  if ( v19 < v42 - (int)v41 )
    return 0LL;
  v20 = 3LL * v19;
  if ( v20 > 0xFFFFFFFF )
    return 0LL;
  v21 = 3 * v19;
  v22 = v20 + 8;
  v23 = -1;
  if ( v21 + 8 >= v21 )
    v23 = v21 + 8;
  v24 = v23 & 0xFFFFFFF8;
  if ( v22 < v21 )
    return 0LL;
  v25 = v18 * v16;
  if ( v18 * v16 <= 2304 )
  {
    v4 |= 0x200u;
    goto LABEL_43;
  }
  if ( v25 <= 0x4000 )
  {
    v26 = v25 >> 3;
  }
  else
  {
    v26 = 20;
    DWORD1(v51) = (v16 + 5) / 6;
    HIDWORD(v51) *= 6;
  }
  if ( v26 + 1 < (unsigned int)v26
    || (v27 = 4LL * (unsigned int)(v26 + 1), v27 > 0xFFFFFFFF)
    || v24 + (unsigned int)v27 < v24
    || (v28 = (char *)EngAllocMem(1u, v24 + (unsigned int)v27, 0x38355448u)) == 0LL )
  {
    *v5 = v4 & 0xFFFFFFBF;
    return 0LL;
  }
  v29 = (int)v24;
  v30 = 0;
  v46 = (unsigned int *)&v28[v29];
  v31 = (unsigned int *)&v28[v29];
  HIBYTE(v40) = 0;
  v41 = (__int64)&v28[2 * v45 + v45];
  while ( 2 )
  {
    v44 = 0;
    v32 = ((__int64 (__fastcall *)(__m128i *, char *))v49)(&v48, v28);
    v33 = v46;
    v34 = (_BYTE *)v32;
    v35 = v41;
    do
    {
      LOBYTE(v40) = v34[1];
      BYTE2(v40) = *v34;
      BYTE1(v40) = v34[2];
      v36 = v40;
      if ( BYTE1(v40) == *v34 )
      {
        v36 = v40 & 0xFCFCFCFC;
        HIBYTE(v40) &= 0xFCu;
      }
      *v33 = v36;
      for ( i = v31; *i != v36; --i )
        ;
      if ( i != v33 )
        goto LABEL_24;
      if ( ++v30 > v26 )
        break;
      ++v31;
      v44 = 1;
      *v31 = v36;
LABEL_24:
      v34 += 3;
    }
    while ( (unsigned __int64)v34 < v35 );
    v5 = v47;
    if ( v26 == 20 || v44 )
    {
LABEL_29:
      if ( v30 > v26 || !DWORD1(v51) )
        goto LABEL_37;
      continue;
    }
    break;
  }
  v25 -= v45;
  if ( v25 > 2304 )
  {
    v26 = v25 >> 4;
    goto LABEL_29;
  }
  v4 |= 0x200u;
LABEL_37:
  v38 = v4 | 0x200;
  if ( v30 >= 20 )
    v38 = v4;
  if ( v26 == 20 )
  {
    v4 = v38 & 0xFFFFFFBF;
    if ( v30 <= 20 )
      v4 = v38;
  }
  else if ( v30 > 20 || (v4 = v38, v30 <= v26) )
  {
    v4 = v38 & 0xFFFFFFBF;
  }
  EngFreeMem(v28);
LABEL_43:
  *v5 = v4;
  return v4 & 0x40;
}
