/*
 * XREFs of ComputeColorSpaceXForm @ 0x1C011AB08
 * Callers:
 *     pDCIAdjClr @ 0x1C00141A0 (pDCIAdjClr.c)
 * Callees:
 *     MulFD6 @ 0x1C00150C4 (MulFD6.c)
 *     DivFD6 @ 0x1C0015444 (DivFD6.c)
 *     MulDivFD6Pairs @ 0x1C011AE9C (MulDivFD6Pairs.c)
 *     ComputeInverseMatrix3x3 @ 0x1C011B05C (ComputeInverseMatrix3x3.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeColorSpaceXForm(__int64 a1, int *a2, __int64 a3, int a4)
{
  int v4; // r12d
  int v6; // r9d
  int v7; // r13d
  int v8; // r10d
  int v9; // r11d
  int v10; // ebx
  int v11; // r8d
  int v12; // r15d
  int v13; // r14d
  int v14; // ebx
  int v15; // edi
  int v16; // esi
  int v17; // eax
  int v18; // r13d
  int v19; // r15d
  int v20; // r12d
  int v21; // r14d
  int v22; // esi
  int v23; // edi
  int v24; // ebx
  int v25; // esi
  int v26; // r15d
  int v27; // edx
  int v28; // r14d
  int v29; // eax
  __int128 v30; // xmm1
  int v31; // ecx
  int v32; // ebx
  int v33; // r15d
  __int128 v34; // xmm0
  int v35; // ecx
  __int128 v36; // xmm1
  __int64 result; // rax
  int v38; // eax
  int v39; // [rsp+20h] [rbp-69h]
  int v40; // [rsp+24h] [rbp-65h]
  int v41; // [rsp+28h] [rbp-61h]
  int v42; // [rsp+2Ch] [rbp-5Dh]
  int v43; // [rsp+30h] [rbp-59h]
  int v44; // [rsp+34h] [rbp-55h]
  unsigned int v45; // [rsp+38h] [rbp-51h]
  int v47; // [rsp+48h] [rbp-41h]
  int v48; // [rsp+4Ch] [rbp-3Dh]
  int v49; // [rsp+50h] [rbp-39h]
  int v50; // [rsp+54h] [rbp-35h]
  int v51; // [rsp+58h] [rbp-31h]
  unsigned __int64 v52; // [rsp+60h] [rbp-29h]
  __int128 v54; // [rsp+78h] [rbp-11h] BYREF
  __int128 v55; // [rsp+88h] [rbp-1h]
  int v56; // [rsp+98h] [rbp+Fh]
  int v57; // [rsp+9Ch] [rbp+13h]

  v4 = *a2;
  v6 = a2[1];
  v7 = a2[2];
  v8 = a2[3];
  v9 = a2[5];
  v10 = a2[8];
  v11 = a2[4];
  v43 = a4;
  v47 = *a2;
  v42 = v6;
  v49 = v7;
  v39 = v8;
  v41 = v11;
  v40 = v9;
  if ( a4 >= 0 )
  {
    v38 = a4 - 1;
    if ( v38 < 0 )
      v38 = 5;
    v43 = v38;
    v12 = 100 * StdIlluminant[2 * v38];
    a2[6] = v12;
    v13 = 100 * StdIlluminant[2 * v38 + 1];
    a2[7] = v13;
  }
  else
  {
    v12 = a2[6];
    v13 = a2[7];
  }
  *(_QWORD *)((char *)&v54 + 4) = __PAIR64__(v4, v10);
  v45 = v13;
  v44 = v12;
  LODWORD(v54) = 65539;
  v14 = v8 - v9;
  v15 = v9 - v6;
  HIDWORD(v54) = v8 - v9;
  v16 = v6 - v8;
  LODWORD(v55) = v7;
  DWORD1(v55) = v9 - v6;
  DWORD2(v55) = v11;
  HIDWORD(v55) = v6 - v8;
  v17 = MulDivFD6Pairs(&v54);
  DWORD1(v54) = MulFD6(v13, v17);
  DWORD1(v55) = v7 - v41;
  LODWORD(v54) = 65540;
  v56 = -v41;
  v57 = v39;
  *((_QWORD *)&v54 + 1) = __PAIR64__(v14, v12);
  LODWORD(v55) = -v13;
  *((_QWORD *)&v55 + 1) = __PAIR64__(v40, v7);
  v48 = MulDivFD6Pairs(&v54);
  v56 = v41;
  DWORD1(v55) = v41 - v4;
  *((_QWORD *)&v54 + 1) = __PAIR64__(v15, v12);
  DWORD2(v55) = -v4;
  HIDWORD(v55) = v40;
  LODWORD(v55) = -v13;
  v57 = v42;
  v50 = MulDivFD6Pairs(&v54);
  DWORD1(v55) = v4 - v7;
  *((_QWORD *)&v54 + 1) = __PAIR64__(v16, v12);
  v56 = -v7;
  LODWORD(v55) = -v13;
  *((_QWORD *)&v55 + 1) = __PAIR64__(v39, v4);
  v57 = v42;
  v51 = MulDivFD6Pairs(&v54);
  LODWORD(v54) = MulFD6(v4, v48);
  v18 = MulFD6(v7, v50);
  DWORD1(v54) = v18;
  DWORD2(v54) = MulFD6(v41, v51);
  v19 = DWORD2(v54);
  v20 = MulFD6(v42, v48);
  HIDWORD(v54) = v20;
  *(_DWORD *)(a3 + 48) = v20;
  v21 = MulFD6(v39, v50);
  LODWORD(v55) = v21;
  *(_DWORD *)(a3 + 52) = v21;
  DWORD1(v55) = MulFD6(v40, v51);
  v22 = DWORD1(v55);
  *(_DWORD *)(a3 + 56) = DWORD1(v55);
  v23 = MulFD6(1000000 - v42 - v47, v48);
  DWORD2(v55) = v23;
  v24 = MulFD6(1000000 - v39 - v49, v50);
  HIDWORD(v55) = v24;
  v56 = MulFD6(1000000 - v40 - v41, v51);
  v25 = v20 + v21 + v22;
  v26 = v54 + v18 + v19;
  v27 = v56;
  v52 = __PAIR64__(v25, v26);
  v28 = v23 + v56 + v24;
  v29 = 0;
  if ( v43 < 0 )
  {
    v30 = v55;
    *(_OWORD *)a3 = v54;
    *(_OWORD *)(a3 + 16) = v30;
    *(_DWORD *)(a3 + 32) = v27;
    ComputeInverseMatrix3x3(a3, &v54);
    v29 = 0;
  }
  *(_DWORD *)(a3 + 76) = v25;
  v31 = v28;
  if ( v25 != 1000000 )
  {
    if ( v25 )
    {
      LODWORD(v52) = DivFD6(v26, v25);
      v26 = v52;
      v28 = DivFD6(v28, v25);
      v31 = v28;
      v29 = 0;
    }
    else
    {
      v28 = 0;
      LODWORD(v52) = 0;
      v31 = 0;
      v26 = 0;
    }
    HIDWORD(v52) = 1000000;
    v25 = 1000000;
  }
  if ( *(_BYTE *)(a1 + 33) )
  {
    v33 = 0;
  }
  else
  {
    v32 = v26 + 2 * (v25 + v31 + 4 * v25) + v25 + v31 + 4 * v25;
    v33 = DivFD6(4 * v26, v32);
    v29 = DivFD6(9 * v25, v32);
  }
  v34 = v54;
  v35 = v56;
  v36 = v55;
  *(_DWORD *)(a3 + 64) = v29;
  *(_OWORD *)a3 = v34;
  *(_DWORD *)(a3 + 68) = v44;
  result = v45;
  *(_QWORD *)(a3 + 36) = v52;
  *(_OWORD *)(a3 + 16) = v36;
  *(_DWORD *)(a3 + 44) = v28;
  *(_DWORD *)(a3 + 32) = v35;
  *(_DWORD *)(a3 + 60) = v33;
  *(_DWORD *)(a3 + 72) = v45;
  return result;
}
