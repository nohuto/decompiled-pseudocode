/*
 * XREFs of EmboldPoint @ 0x1C02BB384
 * Callers:
 *     fsg_Embold @ 0x1C02BCCE8 (fsg_Embold.c)
 * Callees:
 *     Mul26Dot6 @ 0x1C02B3178 (Mul26Dot6.c)
 *     Intersect26Dot6 @ 0x1C02BB730 (Intersect26Dot6.c)
 *     itrp_Normalize @ 0x1C02CCCD0 (itrp_Normalize.c)
 */

__int64 __fastcall EmboldPoint(
        unsigned int a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        _QWORD *a13)
{
  int v13; // r15d
  int v15; // r9d
  unsigned int v16; // ebx
  int v17; // r8d
  int v18; // ecx
  int v19; // r13d
  __int64 v20; // rdx
  unsigned int v21; // r14d
  int v22; // r12d
  int v23; // r10d
  int v24; // esi
  bool v25; // zf
  int v26; // esi
  int v27; // edi
  int v28; // edx
  int v29; // ebx
  int v30; // edi
  int v31; // edx
  int v32; // esi
  int v33; // r14d
  int v34; // eax
  int v35; // edx
  int v36; // ebx
  int v37; // eax
  int v38; // edx
  int v39; // eax
  int v40; // edx
  int v41; // ebx
  int v42; // eax
  _QWORD *v43; // r9
  int v44; // r14d
  __int64 v45; // r8
  int v46; // edx
  int v47; // ecx
  int v48; // edi
  int v49; // esi
  int v50; // r10d
  int v51; // ecx
  __int64 result; // rax
  __int64 i; // r10
  __int64 v54; // rcx
  __int64 v55; // [rsp+30h] [rbp-10h]
  int v58; // [rsp+90h] [rbp+50h] BYREF

  v58 = a3;
  v13 = a6;
  v15 = a7;
  v16 = a1;
  v17 = a6;
  v18 = a5;
  v19 = a11;
  v20 = (unsigned int)(a6 - a5);
  v21 = a7 - a6;
  v22 = a8;
  v23 = HIDWORD(a5) - HIDWORD(a6);
  v24 = HIDWORD(a6) - HIDWORD(a7);
  v25 = a4 == 0;
  if ( a4 )
  {
    v23 = HIDWORD(a6) - HIDWORD(a5);
    v20 = (unsigned int)(a5 - a6);
    v21 = a6 - a7;
    v25 = a4 == 0;
  }
  if ( v25 )
    v24 = HIDWORD(a7) - HIDWORD(a6);
  v55 = a6;
  v26 = -v24;
  if ( !v58 )
  {
    itrp_Normalize((unsigned int)v23, v20, &v58);
    v29 = (__int16)v58 >> 8;
    v30 = SHIWORD(v58) >> 8;
    itrp_Normalize((unsigned int)v26, v21, &v58);
    v31 = v22;
    v32 = (__int16)v58 >> 8;
    v33 = SHIWORD(v58) >> 8;
    if ( v29 <= 0 )
      v31 = a9;
    v34 = Mul26Dot6(v29, v31);
    v35 = v19;
    v36 = v34;
    if ( v30 >= 0 )
      v35 = a10;
    v37 = Mul26Dot6(v30, v35);
    HIDWORD(a5) += v37;
    v27 = v36 + v13;
    HIDWORD(v55) += v37;
    v38 = v22;
    LODWORD(a5) = v36 + a5;
    LODWORD(v55) = v36 + v13;
    if ( v32 <= 0 )
      v38 = a9;
    v39 = Mul26Dot6(v32, v38);
    v40 = v19;
    v41 = v39;
    if ( v33 >= 0 )
      v40 = a10;
    v42 = Mul26Dot6(v33, v40);
    LODWORD(a7) = v41 + a7;
    v13 += v41;
    HIDWORD(a7) += v42;
    v15 = a7;
    v28 = v42 + HIDWORD(a6);
    v18 = a5;
    v16 = a1;
    HIDWORD(a6) += v42;
    goto LABEL_20;
  }
  if ( v23 <= 0 )
  {
    v27 = a6;
  }
  else
  {
    v27 = a6 + a8;
    LODWORD(v55) = a6 + a8;
  }
  v28 = HIDWORD(a6);
  if ( v26 > 0 )
  {
    v13 = a8 + a6;
LABEL_20:
    LODWORD(a6) = v13;
    v17 = v13;
  }
  if ( v27 == v13 && HIDWORD(v55) == v28 )
  {
    v43 = a13;
    v44 = a9;
    v45 = v16;
    *(_DWORD *)(*a13 + 4LL * v16) = v13;
    *(_DWORD *)(v43[1] + 4LL * v16) = v28;
  }
  else
  {
    Intersect26Dot6(v18, v55, v17, v15, (__int64)&a6);
    v43 = a13;
    v46 = a6;
    v47 = HIDWORD(a6);
    v45 = v16;
    v48 = *(_DWORD *)(*a13 + 4LL * v16);
    v49 = *(_DWORD *)(a13[1] + 4LL * v16);
    v50 = HIDWORD(a6) - v49;
    if ( (int)a6 - v48 > v22 )
      v46 = v48 + v22;
    v44 = a9;
    if ( (int)a6 - v48 < -a9 )
      v46 = v48 - a9;
    if ( v50 < -v19 )
      v47 = v49 - v19;
    if ( v50 > a10 )
      v47 = v49 + v19;
    *(_DWORD *)(*a13 + 4LL * v16) = v46;
    *(_DWORD *)(v43[1] + 4LL * v16) = v47;
  }
  v51 = a12;
  *(_DWORD *)(*v43 + 4 * v45) += v44;
  *(_DWORD *)(v43[1] + 4 * v45) += v19;
  result = v43[1];
  if ( *(_DWORD *)(result + 4 * v45) < v51 )
    *(_DWORD *)(result + 4 * v45) = v51;
  if ( v16 != a2 )
  {
    for ( i = v16 + 1; (unsigned int)i <= a2; i = (unsigned int)(i + 1) )
    {
      *(_DWORD *)(*v43 + 4 * i) = *(_DWORD *)(*v43 + 4 * v45);
      v54 = v43[1];
      result = *(unsigned int *)(v54 + 4 * v45);
      *(_DWORD *)(v54 + 4 * i) = result;
    }
  }
  return result;
}
