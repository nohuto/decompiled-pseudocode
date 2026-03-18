/*
 * XREFs of ComputeColorSpaceXForm @ 0x1C003ACF4
 * Callers:
 *     pDCIAdjClr @ 0x1C00390BC (pDCIAdjClr.c)
 * Callees:
 *     MulFD6 @ 0x1C0038094 (MulFD6.c)
 *     DivFD6 @ 0x1C0039CA8 (DivFD6.c)
 *     ComputeInverseMatrix3x3 @ 0x1C003AA98 (ComputeInverseMatrix3x3.c)
 *     MulDivFD6Pairs @ 0x1C003C1F0 (MulDivFD6Pairs.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeColorSpaceXForm(__int64 a1, int *a2, __int64 a3, int a4)
{
  int v4; // r15d
  int v6; // r9d
  int v7; // r12d
  int v8; // r13d
  int v9; // r10d
  int v10; // r11d
  int v11; // r8d
  int v12; // r14d
  int v13; // esi
  int v14; // ebx
  int v15; // edi
  int v16; // eax
  int v17; // r13d
  int v18; // r15d
  int v19; // r12d
  int v20; // r14d
  int v21; // esi
  int v22; // edi
  int v23; // ebx
  int v24; // esi
  int v25; // r15d
  int v26; // edx
  int v27; // r14d
  int v28; // eax
  __int128 v29; // xmm1
  int v30; // ecx
  int v31; // r15d
  __int128 v32; // xmm0
  int v33; // ecx
  __int128 v34; // xmm1
  __int64 result; // rax
  int v36; // eax
  int v37; // ebx
  int v38; // [rsp+20h] [rbp-59h]
  int v39; // [rsp+24h] [rbp-55h]
  int v40; // [rsp+28h] [rbp-51h]
  int v41; // [rsp+2Ch] [rbp-4Dh]
  int v42; // [rsp+30h] [rbp-49h]
  int v43; // [rsp+34h] [rbp-45h]
  unsigned int v44; // [rsp+38h] [rbp-41h]
  int v45; // [rsp+3Ch] [rbp-3Dh]
  int v46; // [rsp+40h] [rbp-39h]
  int v47; // [rsp+44h] [rbp-35h]
  int v48; // [rsp+48h] [rbp-31h]
  int v49; // [rsp+4Ch] [rbp-2Dh]
  unsigned __int64 v51; // [rsp+58h] [rbp-21h]
  __int128 v53; // [rsp+70h] [rbp-9h] BYREF
  __int128 v54; // [rsp+80h] [rbp+7h]
  int v55; // [rsp+90h] [rbp+17h]
  int v56; // [rsp+94h] [rbp+1Bh]

  v4 = *a2;
  v6 = a2[1];
  v7 = a2[2];
  v8 = a2[4];
  v9 = a2[5];
  v10 = a2[8];
  v11 = a2[3];
  v42 = a4;
  v45 = *a2;
  v39 = v6;
  v47 = v7;
  v38 = v11;
  v41 = v8;
  v40 = v9;
  if ( a4 >= 0 )
  {
    v36 = a4 - 1;
    if ( v36 < 0 )
      v36 = 5;
    v42 = v36;
    v12 = 100 * StdIlluminant[2 * v36];
    a2[6] = v12;
    v13 = 100 * StdIlluminant[2 * v36 + 1];
    a2[7] = v13;
  }
  else
  {
    v12 = a2[6];
    v13 = a2[7];
  }
  v44 = v13;
  v43 = v12;
  LODWORD(v53) = 65539;
  *(_QWORD *)((char *)&v53 + 4) = __PAIR64__(v4, v10);
  v14 = v9 - v6;
  HIDWORD(v53) = v11 - v9;
  v15 = v6 - v11;
  DWORD1(v54) = v9 - v6;
  HIDWORD(v54) = v6 - v11;
  LODWORD(v54) = v7;
  DWORD2(v54) = v8;
  v16 = MulDivFD6Pairs(&v53);
  DWORD1(v53) = MulFD6(v13, v16);
  LOWORD(v53) = 4;
  DWORD2(v53) = v12;
  LODWORD(v54) = -v13;
  *((_QWORD *)&v54 + 1) = __PAIR64__(v40, v7);
  DWORD1(v54) = v7 - v8;
  v55 = -v8;
  v56 = v38;
  v46 = MulDivFD6Pairs(&v53);
  HIDWORD(v53) = v14;
  DWORD1(v54) = v8 - v4;
  v55 = v8;
  DWORD2(v54) = -v4;
  v56 = v39;
  v48 = MulDivFD6Pairs(&v53);
  HIDWORD(v53) = v15;
  DWORD1(v54) = v4 - v7;
  *((_QWORD *)&v54 + 1) = __PAIR64__(v38, v4);
  v55 = -v7;
  v49 = MulDivFD6Pairs(&v53);
  LODWORD(v53) = MulFD6(v4, v46);
  v17 = MulFD6(v7, v48);
  DWORD1(v53) = v17;
  v18 = MulFD6(v41, v49);
  DWORD2(v53) = v18;
  v19 = MulFD6(v39, v46);
  HIDWORD(v53) = v19;
  *(_DWORD *)(a3 + 48) = v19;
  v20 = MulFD6(v38, v48);
  LODWORD(v54) = v20;
  *(_DWORD *)(a3 + 52) = v20;
  DWORD1(v54) = MulFD6(v40, v49);
  v21 = DWORD1(v54);
  *(_DWORD *)(a3 + 56) = DWORD1(v54);
  v22 = MulFD6(1000000 - v39 - v45, v46);
  DWORD2(v54) = v22;
  v23 = MulFD6(1000000 - v38 - v47, v48);
  HIDWORD(v54) = v23;
  v55 = MulFD6(1000000 - v40 - v41, v49);
  v24 = v19 + v20 + v21;
  v25 = v53 + v17 + v18;
  v26 = v55;
  v51 = __PAIR64__(v24, v25);
  v27 = v22 + v55 + v23;
  v28 = 0;
  if ( v42 < 0 )
  {
    v29 = v54;
    *(_OWORD *)a3 = v53;
    *(_OWORD *)(a3 + 16) = v29;
    *(_DWORD *)(a3 + 32) = v26;
    ComputeInverseMatrix3x3((__int128 *)a3, (__int64)&v53);
    v28 = 0;
  }
  *(_DWORD *)(a3 + 76) = v24;
  v30 = v27;
  if ( v24 != 1000000 )
  {
    if ( v24 )
    {
      LODWORD(v51) = DivFD6(v25, v24);
      v25 = v51;
      v27 = DivFD6(v27, v24);
      v30 = v27;
      v28 = 0;
    }
    else
    {
      v27 = 0;
      LODWORD(v51) = 0;
      v30 = 0;
      v25 = 0;
    }
    HIDWORD(v51) = 1000000;
    v24 = 1000000;
  }
  if ( *(_BYTE *)(a1 + 33) )
  {
    v31 = 0;
  }
  else
  {
    v37 = v25 + 2 * (v24 + v30 + 4 * v24) + v24 + v30 + 4 * v24;
    v31 = DivFD6(4 * v25, v37);
    v28 = DivFD6(9 * v24, v37);
  }
  v32 = v53;
  v33 = v55;
  v34 = v54;
  *(_DWORD *)(a3 + 64) = v28;
  *(_OWORD *)a3 = v32;
  *(_DWORD *)(a3 + 68) = v43;
  result = v44;
  *(_QWORD *)(a3 + 36) = v51;
  *(_OWORD *)(a3 + 16) = v34;
  *(_DWORD *)(a3 + 44) = v27;
  *(_DWORD *)(a3 + 32) = v33;
  *(_DWORD *)(a3 + 60) = v31;
  *(_DWORD *)(a3 + 72) = v44;
  return result;
}
