/*
 * XREFs of bComputeMaxGlyph @ 0x1C0221F34
 * Callers:
 *     bNewXform @ 0x1C0222920 (bNewXform.c)
 * Callees:
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     CJGD @ 0x1C021E2F0 (CJGD.c)
 *     fxPtSize @ 0x1C0223028 (fxPtSize.c)
 *     vAdjustGrayStateAndBoldOptions__FONTCONTEXT @ 0x1C0223470 (vAdjustGrayStateAndBoldOptions__FONTCONTEXT.c)
 *     vFindHdmxTable @ 0x1C022373C (vFindHdmxTable.c)
 *     vSetClearTypeState__FONTCONTEXT @ 0x1C0223864 (vSetClearTypeState__FONTCONTEXT.c)
 *     vSetGrayState__FONTCONTEXT @ 0x1C0223A18 (vSetGrayState__FONTCONTEXT.c)
 *     vQuantizeXform @ 0x1C0224660 (vQuantizeXform.c)
 *     bFDXform @ 0x1C022AB04 (bFDXform.c)
 *     bXformUnitVector @ 0x1C022AC30 (bXformUnitVector.c)
 *     CompDiv @ 0x1C02B2EE4 (CompDiv.c)
 *     FixMul @ 0x1C02B2F90 (FixMul.c)
 */

__int64 __fastcall bComputeMaxGlyph(__int64 a1)
{
  __int64 v1; // r10
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rcx
  _WORD *v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // esi
  __int16 v9; // ax
  unsigned int v10; // r15d
  __int32 v11; // r14d
  __int32 v12; // r12d
  unsigned int v13; // r11d
  char v14; // al
  unsigned int v15; // r10d
  unsigned int v16; // r10d
  int fixed; // r15d
  int *v18; // rbx
  int v19; // esi
  int v20; // r10d
  int v21; // esi
  int v22; // eax
  int v23; // eax
  unsigned int v24; // r13d
  int v25; // eax
  unsigned int v26; // r11d
  int v27; // eax
  int v28; // r10d
  int v29; // r11d
  int v30; // ecx
  unsigned int v31; // ecx
  int v32; // r10d
  int v33; // r14d
  int v34; // eax
  int v35; // r14d
  __m128i v36; // xmm0
  int v37; // ecx
  int v38; // eax
  int *v39; // rdx
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // esi
  int v44; // r15d
  int v45; // r12d
  int *v46; // r8
  int v47; // edx
  __int64 v48; // r11
  int v49; // r9d
  int v50; // r10d
  int v51; // ecx
  int v52; // eax
  int v53; // ecx
  int v54; // eax
  int v55; // ecx
  int v56; // r12d
  int v57; // ebx
  float v58; // xmm1_4
  char v59; // r8
  float v60; // xmm3_4
  float v61; // xmm2_4
  int v62; // r8d
  int v63; // ecx
  float v64; // xmm0_4
  int v65; // eax
  float v66; // xmm1_4
  float v67; // xmm1_4
  int v68; // r8d
  int v69; // eax
  int v70; // eax
  __int64 v71; // rdx
  unsigned __int16 v72; // dx
  int v73; // r8d
  unsigned int v74; // r14d
  __int64 v75; // rdx
  int v76; // eax
  int v77; // r8d
  unsigned int v79; // [rsp+38h] [rbp-29h] BYREF
  int v80; // [rsp+3Ch] [rbp-25h] BYREF
  int v81; // [rsp+40h] [rbp-21h]
  int v82; // [rsp+44h] [rbp-1Dh]
  int v83; // [rsp+48h] [rbp-19h]
  __m128i si128; // [rsp+50h] [rbp-11h] BYREF
  __int32 v85; // [rsp+60h] [rbp-1h]
  int v86; // [rsp+64h] [rbp+3h]
  __int32 v87; // [rsp+68h] [rbp+7h]
  int v88; // [rsp+6Ch] [rbp+Bh]
  int v89; // [rsp+70h] [rbp+Fh] BYREF
  int v90; // [rsp+74h] [rbp+13h]
  char v91; // [rsp+7Ch] [rbp+1Bh] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 192);
  v4 = *(_QWORD *)(v1 + 64);
  v5 = *(unsigned int *)(v3 + 64);
  v6 = (_WORD *)(v4 + *(unsigned int *)(v3 + 16));
  if ( (_DWORD)v5 )
    v7 = v4 + v5;
  else
    v7 = 0LL;
  if ( v7 && (*(_DWORD *)(a1 + 116) & 3) != 0 )
  {
    v8 = (__int16)__ROR2__(*(_WORD *)(v7 + 76), 8);
    v9 = *(_WORD *)(v7 + 74);
  }
  else
  {
    v9 = v6[21];
    v8 = -(__int16)__ROR2__(v6[19], 8);
  }
  v10 = -(__int16)__ROR2__(v9, 8);
  if ( (int)v10 >= (int)v8 )
    return 0LL;
  v11 = (__int16)__ROR2__(v6[18], 8);
  v12 = (__int16)__ROR2__(v6[20], 8);
  if ( (*(_DWORD *)(a1 + 40) & 0x4000) != 0 )
  {
    v11 -= FixMul(v8, 22272LL);
    v12 -= FixMul(v10, v13);
  }
  if ( v11 >= v12 )
    return 0LL;
  v14 = *(_DWORD *)(a1 + 116) & 9;
  *(_QWORD *)(a1 + 124) = 0LL;
  *(_DWORD *)(a1 + 404) = 0;
  *(_QWORD *)(a1 + 136) = 0LL;
  if ( v14 == 1 )
  {
    v15 = *(_DWORD *)(a1 + 96);
    v79 = *(_DWORD *)(a1 + 80);
    v80 = v15;
    fixed = FixMul(v15, v10);
    v18 = (int *)(a1 + 164);
    v19 = FixMul(v16, v8);
    if ( v20 <= 0 )
    {
      *(_DWORD *)(a1 + 160) = v19;
      v21 = -v19;
      *v18 = fixed;
    }
    else
    {
      vQuantizeXform(a1);
      if ( (*(_DWORD *)(a1 + 116) & 4) != 0 )
      {
        fixed = *(_DWORD *)(a1 + 160);
      }
      else
      {
        *(_DWORD *)(a1 + 160) = fixed;
        *v18 = v19;
      }
      v21 = *v18;
      fixed = -fixed;
      v20 = v80;
    }
    *(_DWORD *)(a1 + 144) = fixed;
    *(_DWORD *)(a1 + 148) = v21;
    v22 = *(_DWORD *)(a1 + 124);
    if ( !v22 )
    {
      v22 = FixMul((unsigned int)v20, (unsigned int)*(__int16 *)(*(_QWORD *)(a1 + 8) + 408LL));
      *(_DWORD *)(a1 + 124) = v22;
      if ( v22 < 0 )
      {
        v22 = -v22;
        *(_DWORD *)(a1 + 124) = v22;
      }
    }
    v23 = CompDiv(*(unsigned int *)(a1 + 48), 72LL * (v22 << 16));
    v24 = *v18 - *(_DWORD *)(a1 + 160);
    *(_DWORD *)(a1 + 128) = v23;
    v25 = *(_DWORD *)(a1 + 96);
    if ( *(_DWORD *)(a1 + 80) == v25 && v25 > 0 )
    {
      *(_DWORD *)(a1 + 116) |= 0x10u;
      vFindHdmxTable(a1);
    }
    FixMul((unsigned int)(16 * v11), v79);
    v27 = FixMul((unsigned int)(16 * v12), v26);
    if ( v29 < 0 )
    {
      v30 = v28;
      v28 = v27;
      v27 = v30;
    }
    v31 = -1;
    v32 = (v28 >> 4) - 2;
    *(_DWORD *)(a1 + 220) = 0;
    *(_DWORD *)(a1 + 152) = v32;
    v33 = ((v27 + 15) >> 4) + 1;
    *(_DWORD *)(a1 + 256) = 0;
    *(_DWORD *)(a1 + 156) = v33;
    v34 = 1;
    v35 = v33 - v32;
    *(_DWORD *)(a1 + 200) = 0;
    if ( v29 <= 0 )
      v34 = -1;
    if ( v80 <= 0 )
      v31 = 1;
    *(float *)(a1 + 216) = (float)v34;
    v36 = _mm_cvtsi32_si128(v31);
    v37 = *(_DWORD *)(a1 + 144);
    *(_DWORD *)(a1 + 260) = _mm_cvtepi32_ps(v36).m128_u32[0];
    if ( v37 <= 0 || *(int *)(a1 + 148) <= 0 )
    {
      v39 = (int *)(a1 + 204);
      v40 = *(_DWORD *)(a1 + 148);
      if ( *(int *)(a1 + 96) <= 0 )
        v41 = v37 - v40;
      else
        v41 = v40 - v37;
      v38 = v41 >> 1;
    }
    else
    {
      v38 = 0;
      v39 = (int *)(a1 + 204);
    }
    *v39 = v38;
  }
  else
  {
    v42 = *(unsigned __int16 *)(v1 + 308) >> 6;
    v43 = v42 + v8;
    si128.m128i_i32[0] = v11;
    v44 = v10 - v42;
    v86 = v43;
    si128.m128i_i32[1] = v44;
    v88 = v43;
    si128.m128i_i64[1] = __PAIR64__(v44, v12);
    v85 = v11;
    v87 = v12;
    if ( !(unsigned int)bFDXform(a1 + 56, &v89, &si128) )
      return 0LL;
    v45 = v89;
    v46 = (int *)&v91;
    v47 = v90;
    v48 = 3LL;
    v49 = v89;
    v50 = v90;
    do
    {
      v51 = *(v46 - 1);
      v52 = v51;
      if ( v51 >= v45 )
        v52 = v45;
      v45 = v52;
      if ( v51 <= v49 )
        v51 = v49;
      v49 = v51;
      v53 = *v46;
      v54 = *v46;
      if ( *v46 >= v47 )
        v54 = v47;
      v47 = v54;
      if ( v53 <= v50 )
        v53 = v50;
      v46 += 2;
      v50 = v53;
      --v48;
    }
    while ( v48 );
    v55 = *(_DWORD *)(a1 + 40) & 0x2000;
    v24 = ((v50 + 15) >> 4) - (v54 >> 4);
    v82 = v54 >> 4;
    v56 = v45 >> 4;
    v83 = (v50 + 15) >> 4;
    v81 = (v49 + 15) >> 4;
    v35 = v81 - v56;
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffff000000000000000000000001);
    v57 = bXformUnitVector(
            (unsigned int)&si128,
            (int)a1 + 56,
            (int)a1 + 208,
            (int)a1 + 216,
            (a1 + 232) & -(__int64)(v55 != 0),
            a1 + 224);
    if ( ((unsigned int)bXformUnitVector(
                          (unsigned int)&si128.m128i_u32[2],
                          (int)a1 + 56,
                          (int)a1 + 248,
                          (int)a1 + 256,
                          (a1 + 272) & -(__int64)((*(_DWORD *)(a1 + 40) & 0x2000) != 0),
                          a1 + 264) & v57) == 0 )
      return 0LL;
    v58 = *(float *)(a1 + 264);
    v80 = 0;
    bFToL((float)v44 * v58, &v80, 0);
    v79 = 0;
    bFToL((float)v43 * v58, (int *)&v79, v59);
    v60 = *(float *)(a1 + 256);
    v61 = *(float *)(a1 + 260);
    v62 = (15 - v80) >> 4;
    v63 = (int)(v79 + 15) >> 4;
    *(_DWORD *)(a1 + 144) = v62;
    *(_DWORD *)(a1 + 148) = v63;
    *(_DWORD *)(a1 + 288) = (int)(float)(v60 * (float)(16 * v62));
    *(_DWORD *)(a1 + 292) = (int)(float)(v61 * (float)(16 * v62));
    v64 = (float)(-16 * v63);
    *(_DWORD *)(a1 + 296) = (int)(float)(v64 * v60);
    *(_DWORD *)(a1 + 300) = (int)(float)(v64 * v61);
    if ( v44 >= 0 || v43 <= 0 || v62 + v63 < 3 )
    {
      v79 = 0;
      v66 = (float)((1 - v43 - v44) >> 1);
      bFToL(v66 * *(float *)(a1 + 248), (int *)&v79, 0);
      v67 = v66 * *(float *)(a1 + 252);
      v68 = ((int)v79 >> 3) + 1;
      v79 = 0;
      *(_DWORD *)(a1 + 200) = v68 >> 1;
      bFToL(v67, (int *)&v79, 0);
      v69 = v79;
      *(_DWORD *)(a1 + 204) = v79;
      v65 = ((v69 >> 3) + 1) >> 1;
    }
    else
    {
      *(_DWORD *)(a1 + 200) = 0;
      v65 = 0;
    }
    *(_DWORD *)(a1 + 204) = v65;
    *(_DWORD *)(a1 + 156) = v81;
    *(_DWORD *)(a1 + 160) = v82;
    *(_DWORD *)(a1 + 164) = v83;
    *(_DWORD *)(a1 + 152) = v56;
    v70 = fxPtSize(a1);
    v71 = *(int *)(a1 + 48);
    *(_DWORD *)(a1 + 128) = v70;
    *(_DWORD *)(a1 + 124) = ((unsigned int)CompDiv(72LL, v70 * v71) + 0x8000) >> 16;
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x2000) != 0 )
    v72 = (2 * *(_DWORD *)(a1 + 124) - 1) / 100 + 1;
  else
    v72 = 0;
  *(_WORD *)(a1 + 400) = v72;
  if ( !v35 || !v24 )
    return 0LL;
  v73 = *(_DWORD *)(a1 + 40);
  if ( (v73 & 0x2000) != 0 )
  {
    v35 += v72;
    v24 += v72;
  }
  v74 = (v35 + 7) & 0xFFFFFFF8;
  *(_DWORD *)(a1 + 168) = v74;
  v75 = (unsigned int)((int)((v74 + 31) & 0xFFFFFFE0) >> 31);
  LODWORD(v75) = (int)((v74 + 31) & 0xFFFFFFE0) % 8;
  if ( v24 * (unsigned __int64)(unsigned int)((int)((v74 + 31) & 0xFFFFFFE0) / 8) > 0xFFFFFFFF )
    return 0LL;
  if ( (v73 & 0x10000000) != 0 )
    vSetClearTypeState__FONTCONTEXT(a1, v75);
  else
    vSetGrayState__FONTCONTEXT(a1, v75);
  vAdjustGrayStateAndBoldOptions__FONTCONTEXT(a1);
  v76 = CJGD(v74, v24, a1);
  v77 = *(_DWORD *)(a1 + 116);
  *(_DWORD *)(a1 + 172) = v76;
  if ( (v77 & 0x11) == 17 && (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 300LL) & 0x40) != 0 )
    *(_DWORD *)(a1 + 116) = v77 | 0x40;
  return 1LL;
}
