/*
 * XREFs of lQueryDEVICEMETRICS @ 0x1C021FA24
 * Callers:
 *     ttfdQueryFontData @ 0x1C02205F4 (ttfdQueryFontData.c)
 * Callees:
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     CJGD @ 0x1C021E2F0 (CJGD.c)
 *     bFDXform @ 0x1C022AB04 (bFDXform.c)
 *     FixMul @ 0x1C02B2F90 (FixMul.c)
 */

__int64 __fastcall lQueryDEVICEMETRICS(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int16 *v11; // rax
  int v12; // r15d
  int v13; // r12d
  int v14; // r11d
  int v15; // r13d
  int v16; // eax
  __int64 v17; // rcx
  __int16 v18; // r10
  int v19; // r14d
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // r9d
  int v25; // r8d
  int v26; // r8d
  int v27; // r9d
  int v28; // eax
  int v29; // eax
  int v30; // ecx
  int v31; // edx
  int v32; // eax
  float v33; // xmm0_4
  float v34; // xmm0_4
  int v35; // r8d
  __int64 v36; // r9
  int v37; // r10d
  int v38; // r8d
  int v39; // eax
  unsigned int v40; // edx
  int v41; // ecx
  int v42; // ecx
  int v43; // eax
  int v44; // edx
  int v45; // edx
  int v46; // eax
  __int64 v47; // rax
  int v48; // eax
  float v50; // [rsp+20h] [rbp-50h] BYREF
  _DWORD v51[8]; // [rsp+28h] [rbp-48h] BYREF
  _DWORD v52[8]; // [rsp+48h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v6 = *(unsigned int *)(v3 + 176);
  v7 = *(_QWORD *)(v3 + 64);
  v8 = v7 + v6;
  if ( !(_DWORD)v6 )
    v8 = 0LL;
  v9 = abs32(*(_DWORD *)(a1 + 80));
  v10 = *(unsigned int *)(*(_QWORD *)(a1 + 192) + 16LL);
  *(_QWORD *)(a3 + 4) = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a3 + 12) = *(_QWORD *)(a1 + 256);
  *(_DWORD *)(a3 + 64) = *(_DWORD *)(a1 + 168);
  *(_DWORD *)(a3 + 24) = 16 * *(_DWORD *)(a1 + 144);
  *(_DWORD *)(a3 + 28) = 16 * *(_DWORD *)(a1 + 148);
  v11 = *(__int16 **)(a1 + 8);
  v12 = v11[228];
  v13 = v11[229];
  v14 = v11[226];
  v15 = v11[227];
  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 20) = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x40) != 0 )
  {
    *(_DWORD *)(a3 + 108) = 0;
    v16 = 0;
  }
  else
  {
    *(_DWORD *)(a3 + 108) = *(__int16 *)(*(_QWORD *)(a1 + 8) + 328LL);
    v16 = *(__int16 *)(*(_QWORD *)(a1 + 8) + 330LL);
  }
  *(_DWORD *)(a3 + 112) = v16;
  if ( (*(_DWORD *)(a1 + 40) & 0x4000) != 0 )
  {
    if ( v8 && (*(_DWORD *)(a1 + 116) & 3) != 0 )
      v17 = (unsigned int)(__int16)__ROR2__(*(_WORD *)(v8 + 76), 8);
    else
      v17 = (unsigned int)-(__int16)__ROR2__(*(_WORD *)(v10 + v7 + 38), 8);
    *(_DWORD *)(a3 + 108) -= FixMul(v17, 22272LL);
    *(_DWORD *)(a3 + 112) += FixMul((unsigned int)-v18, 22272LL);
  }
  v19 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 324LL);
  *(_DWORD *)(a3 + 116) = v19;
  if ( (*(_DWORD *)(a1 + 116) & 1) != 0 )
  {
    v20 = *(_DWORD *)(a1 + 96);
    v21 = (((v14 * v20) >> 15) + 1) >> 1;
    if ( !v21 )
    {
      v21 = 1;
      if ( v20 <= 0 )
        v21 = -1;
    }
    *(_DWORD *)(a3 + 52) = v21;
    *(_DWORD *)(a3 + 48) = 0;
    v22 = (((v12 * v20) >> 15) + 1) >> 1;
    if ( !v22 )
    {
      v22 = 1;
      if ( v20 <= 0 )
        v22 = -1;
    }
    *(_DWORD *)(a3 + 60) = v22;
    *(_DWORD *)(a3 + 56) = 0;
    *(_DWORD *)(a3 + 32) = 0;
    *(_DWORD *)(a3 + 40) = 0;
    *(_DWORD *)(a3 + 44) = -((((v13 * v20) >> 15) + 1) >> 1);
    *(_DWORD *)(a3 + 36) = -((((v15 * v20) >> 15) + 1) >> 1);
    *(_DWORD *)(a3 + 108) = (((int)(*(_DWORD *)(a3 + 108) * v9) >> 15) + 1) >> 1;
    *(_DWORD *)(a3 + 112) = (((int)(*(_DWORD *)(a3 + 112) * v9) >> 15) + 1) >> 1;
    v23 = (((int)(v19 * v9) >> 15) + 1) >> 1;
  }
  else
  {
    *(_DWORD *)(a3 + 20) = 0;
    v51[3] = -v13;
    v51[7] = -v15;
    v51[0] = 0;
    v51[1] = v12;
    v51[2] = 0;
    v51[4] = 0;
    v51[5] = v14;
    v51[6] = 0;
    bFDXform(a1 + 56, v52, v51);
    v24 = v52[4];
    v25 = (v52[0] >> 3) + 1;
    *(_DWORD *)(a3 + 60) = ((v52[1] >> 3) + 1) >> 1;
    *(_DWORD *)(a3 + 40) = ((v52[2] >> 3) + 1) >> 1;
    v26 = v25 >> 1;
    *(_DWORD *)(a3 + 44) = ((v52[3] >> 3) + 1) >> 1;
    v27 = ((v24 >> 3) + 1) >> 1;
    *(_DWORD *)(a3 + 52) = ((v52[5] >> 3) + 1) >> 1;
    v28 = (v52[6] >> 3) + 1;
    *(_DWORD *)(a3 + 56) = v26;
    *(_DWORD *)(a3 + 32) = v28 >> 1;
    v29 = (v52[7] >> 3) + 1;
    *(_DWORD *)(a3 + 48) = v27;
    *(_DWORD *)(a3 + 36) = v29 >> 1;
    if ( (*(_DWORD *)(a1 + 116) & 2) != 0 && (!v26 || !v27) )
    {
      v30 = *(_DWORD *)(a1 + 92);
      v31 = -1;
      if ( !v26 )
      {
        v32 = -1;
        if ( v30 <= 0 )
          v32 = 1;
        *(_DWORD *)(a3 + 56) = v32;
      }
      if ( !v27 )
      {
        if ( v30 <= 0 )
          v31 = 1;
        *(_DWORD *)(a3 + 48) = v31;
      }
    }
    v33 = (float)*(int *)(a3 + 108);
    v50 = 0.0;
    bFToL(v33 * *(float *)(a1 + 224), (int *)&v50, 0);
    v34 = (float)*(int *)(a3 + 112);
    v35 = (SLODWORD(v50) >> 3) + 1;
    v50 = 0.0;
    *(_DWORD *)(a3 + 108) = v35 >> 1;
    bFToL(v34 * *(float *)(a1 + 224), (int *)&v50, 0);
    *(_DWORD *)(a3 + 112) = ((SLODWORD(v50) >> 3) + 1) >> 1;
    v50 = 0.0;
    bFToL((float)v19 * *(float *)(a1 + 224), (int *)&v50, 0);
    v23 = ((SLODWORD(v50) >> 3) + 1) >> 1;
  }
  *(_DWORD *)(a3 + 116) = v23;
  if ( (*(_DWORD *)(a1 + 116) & 0x21) != 0 )
  {
    v50 = (float)*(int *)(a1 + 80) * 0.000015258789;
    *(float *)(a3 + 76) = v50;
    v50 = (float)*(int *)(a1 + 96) * 0.000015258789;
    *(float *)(a3 + 88) = v50;
    if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
    {
      v50 = (float)-*(_DWORD *)(a1 + 84) * 0.000015258789;
      *(float *)(a3 + 80) = v50;
      v50 = (float)-*(_DWORD *)(a1 + 92) * 0.000015258789;
      *(float *)(a3 + 84) = v50;
    }
  }
  v36 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(v36 + 300) & 2) != 0 )
  {
    v37 = *(_DWORD *)(a1 + 124);
    v38 = 0;
    if ( *(_DWORD *)(a1 + 144) + *(_DWORD *)(a1 + 148) - v37 >= 0 )
      v38 = *(_DWORD *)(a1 + 144) + *(_DWORD *)(a1 + 148) - v37;
    v39 = *(_BYTE *)(v36 + 397) & 0xF0;
    if ( v39 == 16 )
    {
      v44 = (*(_DWORD *)(a1 + 48) + 18) / 32;
    }
    else
    {
      if ( v39 == 32 )
      {
        v41 = *(_DWORD *)(a1 + 48);
        if ( (int)(((*(int *)(a1 + 128) >> 15) + 1) & 0xFFFFFFFE) >= 28 )
        {
          v42 = v41 + 9;
          v43 = 954437177;
        }
        else
        {
          v42 = v41 + 12;
          v43 = 715827883;
        }
        v40 = (int)((unsigned __int64)(v42 * (__int64)v43) >> 32) >> 2;
      }
      else
      {
        v40 = (int)((unsigned __int64)(53876069772LL * v37) >> 32) >> 6;
      }
      v44 = (v40 >> 31) + v40;
    }
    v45 = 16 * (v44 - v38);
    if ( v45 < 0 )
      v45 = 0;
    *(_DWORD *)(a3 + 92) = v45;
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x2000) != 0 )
  {
    v46 = *(__int16 *)(*(_QWORD *)(a1 + 8) + 430LL);
    if ( (*(_DWORD *)(a1 + 116) & 1) != 0 )
    {
      *(_DWORD *)(a3 + 100) = ((int)(v9 * v46) >> 12) + 16;
      *(_DWORD *)(a3 + 104) = ((int)(v9 * *(__int16 *)(*(_QWORD *)(a1 + 8) + 428LL)) >> 12) + 16;
    }
    else
    {
      v50 = 0.0;
      bFToL((float)v46 * *(float *)(a1 + 224), (int *)&v50, 0);
      *(_DWORD *)(a3 + 100) = LODWORD(v50) + 16;
      v47 = *(_QWORD *)(a1 + 8);
      v50 = 0.0;
      bFToL((float)*(__int16 *)(v47 + 428) * *(float *)(a1 + 224), (int *)&v50, 0);
      *(_DWORD *)(a3 + 104) = LODWORD(v50) + 16;
    }
  }
  if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    *(_DWORD *)(a3 + 68) = 1;
    v48 = CJGD(1u, 1, a1);
  }
  else
  {
    *(_DWORD *)(a3 + 68) = *(_DWORD *)(a1 + 164) - *(_DWORD *)(a1 + 160);
    v48 = *(_DWORD *)(a1 + 172);
  }
  *(_DWORD *)(a3 + 72) = v48;
  return 124LL;
}
