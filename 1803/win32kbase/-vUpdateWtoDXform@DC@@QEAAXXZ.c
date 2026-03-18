/*
 * XREFs of ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C0024F00
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C001A750 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C0024E8C (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     bFToL @ 0x1C006312C (bFToL.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C00C8624 (-vMakeIso@DC@@QEAAXXZ.c)
 */

void __fastcall DC::vUpdateWtoDXform(DC *this)
{
  float *v1; // r8
  int v3; // edi
  int v4; // eax
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  float v13; // xmm4_4
  float v14; // edx
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  float v20; // edx
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  float v31; // xmm0_4
  __int64 v32; // rcx
  float v33; // xmm0_4
  __int64 v34; // rcx
  float v35; // xmm0_4
  __int64 v36; // rax
  float v37; // xmm0_4
  float v38; // xmm0_4
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // edx
  int v42; // ecx
  float v43; // xmm1_4
  __int64 v44; // rcx
  float v45; // xmm1_4
  __int64 v46; // rdx
  int v47; // ecx
  unsigned int v48; // ecx
  __int64 v49; // rdx
  int v50; // ecx
  unsigned int v51; // ecx
  int v52; // xmm0_4
  __int64 v53; // rax
  int v54; // xmm1_4
  float v55; // xmm0_4
  __int64 v56; // rcx
  float v57; // xmm0_4
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // r8
  float v62; // xmm3_4
  float v63; // xmm5_4
  __int64 v64; // rcx
  float v65; // xmm2_4
  __int64 v66; // rcx
  __int64 v67; // r8

  v1 = (float *)*((_QWORD *)this + 10);
  v3 = 11;
  v4 = *((_DWORD *)v1 + 88);
  if ( (v4 & 0xE000) != 0 )
  {
    if ( (v4 & 0x4000) != 0 )
    {
      if ( *((_DWORD *)v1 + 77) == 7 )
      {
        DC::vMakeIso(this);
        v1 = (float *)*((_QWORD *)this + 10);
      }
      v41 = *((_DWORD *)v1 + 82);
      v42 = *((_DWORD *)v1 + 86);
      if ( v41 == v42 && *((_DWORD *)v1 + 83) == *((_DWORD *)v1 + 87) )
      {
        v52 = ef16;
        *((_DWORD *)v1 + 73) = ef16;
        v53 = *((_QWORD *)this + 10);
        *((_DWORD *)this + 109) = v52;
        v54 = ef16;
        *(_DWORD *)(v53 + 296) = ef16;
        *((_DWORD *)this + 110) = v54;
        *((_DWORD *)this + 90) = 11;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) |= 0x1000u;
      }
      else
      {
        v43 = (float)(16 * v42) / (float)v41;
        v1[73] = v43;
        v44 = *((_QWORD *)this + 10);
        *((float *)this + 109) = v43;
        v45 = (float)(16 * *(_DWORD *)(v44 + 348)) / (float)*(int *)(v44 + 332);
        *(float *)(v44 + 296) = v45;
        *((float *)this + 110) = v45;
        *((_DWORD *)this + 90) = 9;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFFE7FF;
      }
      v46 = *((_QWORD *)this + 10);
      v47 = *(_DWORD *)(v46 + 352);
      if ( *((float *)this + 109) < 0.0 )
        v48 = v47 | 0x100;
      else
        v48 = v47 & 0xFFFFFEFF;
      *(_DWORD *)(v46 + 352) = v48;
      v49 = *((_QWORD *)this + 10);
      v50 = *(_DWORD *)(v49 + 352);
      if ( *((float *)this + 110) >= 0.0 )
        v51 = v50 & 0xFFFFFDFF;
      else
        v51 = v50 | 0x200;
      *(_DWORD *)(v49 + 352) = v51;
    }
    v5 = *((_QWORD *)this + 10);
    if ( !*(_DWORD *)(v5 + 320) && !*(_DWORD *)(v5 + 324) )
    {
      v6 = *(_DWORD *)(v5 + 336);
      if ( v6 || *(_DWORD *)(v5 + 340) )
      {
        v33 = (float)(16 * v6);
        *(float *)(v5 + 300) = v33;
        v34 = *((_QWORD *)this + 10);
        *((float *)this + 111) = v33;
        v35 = (float)(16 * *(_DWORD *)(v34 + 340));
        *(float *)(v34 + 304) = v35;
        v36 = *((_QWORD *)this + 10);
        *((float *)this + 112) = v35;
        *((_DWORD *)this + 88) = 16 * *(_DWORD *)(v36 + 336);
        LODWORD(v34) = *(_DWORD *)(*((_QWORD *)this + 10) + 340LL);
        *((_DWORD *)this + 90) &= ~0x40u;
        *((_DWORD *)this + 89) = 16 * v34;
        *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= ~0x800u;
      }
      else
      {
        *(_DWORD *)(v5 + 300) = 0;
        v7 = *((_QWORD *)this + 10);
        *((_DWORD *)this + 111) = 0;
        *(_DWORD *)(v7 + 304) = 0;
        *((_DWORD *)this + 112) = 0;
        *((_DWORD *)this + 90) |= 0x40u;
        *((_QWORD *)this + 44) = 0LL;
        v8 = *((_QWORD *)this + 10);
        v9 = *(_DWORD *)(v8 + 352);
        if ( (v9 & 0x1000) != 0 )
          *(_DWORD *)(v8 + 352) = v9 | 0x800;
      }
LABEL_9:
      v1 = (float *)*((_QWORD *)this + 10);
      if ( ((_DWORD)v1[88] & 2) != 0 )
      {
        v10 = *((_DWORD *)this + 132);
        if ( (v10 & 1) == 0 || (v10 & 2) != 0 )
        {
          *((_DWORD *)this + 82) = *((_DWORD *)this + 109);
          *((_DWORD *)this + 85) = *((_DWORD *)this + 110);
          *(_QWORD *)((char *)this + 332) = 0LL;
          *((_DWORD *)this + 86) = *((_DWORD *)this + 111);
          *((_DWORD *)this + 87) = *((_DWORD *)this + 112);
          if ( (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x800) == 0 )
          {
            *((_DWORD *)this + 90) = (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x1000 | 0x4800u) >> 11;
LABEL_13:
            *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFF1FFF;
LABEL_14:
            v11 = *((_QWORD *)this + 10);
            *(_OWORD *)(v11 + 184) = *(_OWORD *)((char *)this + 328);
            *(_OWORD *)(v11 + 200) = *(_OWORD *)((char *)this + 344);
            *(_DWORD *)(v11 + 216) = *((_DWORD *)this + 90);
            return;
          }
LABEL_43:
          *((_DWORD *)this + 90) = 75;
          goto LABEL_13;
        }
      }
      goto LABEL_16;
    }
    *(_DWORD *)(v5 + 352) &= ~0x800u;
    *((_DWORD *)this + 90) &= ~0x40u;
    v28 = *((_QWORD *)this + 10);
    v29 = -*(_DWORD *)(v28 + 320);
    if ( (*(_DWORD *)(v28 + 352) & 0x1000) != 0 )
    {
      *(float *)(v28 + 300) = (float)(-16 * *(_DWORD *)(v28 + 320));
      v30 = *((_QWORD *)this + 10);
      *((float *)this + 111) = (float)(16 * v29);
      v31 = (float)(-16 * *(_DWORD *)(v30 + 324));
      *(float *)(v30 + 304) = v31;
      v32 = *((_QWORD *)this + 10);
      *((float *)this + 112) = v31;
      if ( !*(_DWORD *)(v32 + 336) && !*(_DWORD *)(v32 + 340) )
      {
        *((_DWORD *)this + 88) = -16 * *(_DWORD *)(v32 + 320);
        *((_DWORD *)this + 89) = -16 * *(_DWORD *)(*((_QWORD *)this + 10) + 324LL);
        goto LABEL_9;
      }
    }
    else
    {
      v55 = (float)v29 * *((float *)this + 109);
      *(float *)(v28 + 300) = v55;
      v56 = *((_QWORD *)this + 10);
      *((float *)this + 111) = v55;
      v57 = (float)-*(_DWORD *)(v56 + 324) * *((float *)this + 110);
      *(float *)(v56 + 304) = v57;
      v58 = *((_QWORD *)this + 10);
      *((float *)this + 112) = v57;
      v32 = v58;
      if ( !*(_DWORD *)(v58 + 336) && !*(_DWORD *)(v58 + 340) )
        goto LABEL_46;
    }
    v37 = (float)(16 * *(_DWORD *)(v32 + 336)) + *((float *)this + 111);
    *(float *)(v32 + 300) = v37;
    v32 = *((_QWORD *)this + 10);
    *((float *)this + 111) = v37;
    v38 = (float)(16 * *(_DWORD *)(v32 + 340)) + *((float *)this + 112);
    *(float *)(v32 + 304) = v38;
    *((float *)this + 112) = v38;
LABEL_46:
    bFToL(v32, (char *)this + 352, 6LL);
    bFToL(v39, (char *)this + 356, v40);
    goto LABEL_9;
  }
  if ( (v4 & 2) != 0 && !(unsigned int)DC::bDpiScaleTransform(this) )
  {
    *(_DWORD *)(v59 + 328) = *(_DWORD *)(v59 + 436);
    *(_DWORD *)(v59 + 340) = *(_DWORD *)(v59 + 440);
    *(_QWORD *)(v59 + 332) = 0LL;
    *(_DWORD *)(v59 + 344) = *(_DWORD *)(v59 + 444);
    *(_DWORD *)(v59 + 348) = *(_DWORD *)(v59 + 448);
    bFToL(v59, v59 + 352, 6LL);
    bFToL(v60, (char *)this + 356, v61);
    if ( (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x800) == 0 )
    {
      *((_DWORD *)this + 90) = (*(_DWORD *)(*((_QWORD *)this + 10) + 352LL) & 0x1000 | 0x4800u) >> 11;
      goto LABEL_13;
    }
    goto LABEL_43;
  }
LABEL_16:
  v12 = *((_DWORD *)this + 132);
  if ( (v12 & 1) != 0 && (v12 & 2) == 0 )
  {
    *((_DWORD *)v1 + 88) &= 0xFFFFE7FF;
    v1 = (float *)*((_QWORD *)this + 10);
  }
  v13 = *(float *)&_xmm;
  if ( ((_DWORD)v1[88] & 0x1000) != 0 )
  {
    *(_OWORD *)((char *)this + 328) = *((_OWORD *)this + 25);
    *(_OWORD *)((char *)this + 344) = *((_OWORD *)this + 26);
    *(__m128 *)((char *)this + 328) = _mm_mul_ps(*(__m128 *)((char *)this + 328), (__m128)_xmm);
    *((float *)this + 86) = *((float *)this + 86) * 16.0;
    *((float *)this + 87) = *((float *)this + 87) * 16.0;
  }
  else
  {
    v62 = *((float *)this + 109);
    if ( (unsigned int)DC::bDpiScaleTransform(this) )
    {
      v62 = v62 * *((float *)this + 133);
      v63 = v63 * *((float *)this + 134);
    }
    *((float *)this + 82) = v62 * *((float *)this + 100);
    *((float *)this + 84) = v62 * *((float *)this + 102);
    *((float *)this + 83) = v63 * *((float *)this + 101);
    *((float *)this + 85) = v63 * *((float *)this + 103);
    *((float *)this + 86) = *((float *)this + 109) * *((float *)this + 104);
    *((float *)this + 87) = *((float *)this + 110) * *((float *)this + 105);
  }
  v14 = *((float *)this + 111) + *((float *)this + 86);
  v15 = (unsigned __int8)(SLODWORD(v14) >> 23) - 118;
  *((float *)this + 86) = v14;
  if ( v15 <= 40 )
  {
    v16 = LODWORD(v14) & 0x7FFFFFLL | 0x800000;
    if ( v15 < 0 )
      v17 = v16 >> (118 - (unsigned __int8)(SLODWORD(v14) >> 23));
    else
      v17 = v16 << v15;
    v18 = (v17 + 0x80000000LL) >> 32;
    v19 = -((unsigned __int64)(v17 + 0x80000000LL) >> 32);
    if ( v14 >= 0.0 )
      v19 = v18;
    *((_DWORD *)this + 88) = v19;
  }
  v20 = *((float *)this + 112) + *((float *)this + 87);
  v21 = (unsigned __int8)(SLODWORD(v20) >> 23) - 118;
  *((float *)this + 87) = v20;
  if ( v21 <= 40 )
  {
    v22 = LODWORD(v20) & 0x7FFFFFLL | 0x800000;
    if ( v21 < 0 )
      v23 = v22 >> (118 - (unsigned __int8)(SLODWORD(v20) >> 23));
    else
      v23 = v22 << v21;
    v24 = (v23 + 0x80000000LL) >> 32;
    v25 = -((unsigned __int64)(v23 + 0x80000000LL) >> 32);
    if ( v20 >= 0.0 )
      v25 = v24;
    *((_DWORD *)this + 89) = v25;
  }
  v26 = *((_DWORD *)this + 132);
  if ( (v26 & 1) != 0 && (v26 & 2) == 0 )
  {
    *((float *)this + 86) = *((float *)this + 133) * *((float *)this + 86);
    *((float *)this + 87) = *((float *)this + 134) * *((float *)this + 87);
    v64 = *((_DWORD *)this + 10) & 1;
    v65 = (float)*((int *)this + 2 * v64 + 357);
    *((float *)this + 86) = (float)((float)((float)((float)*((int *)this + 2 * v64 + 356) * *((float *)this + 133))
                                          - (float)*((int *)this + 2 * v64 + 356))
                                  * v13)
                          + *((float *)this + 86);
    *((float *)this + 87) = (float)((float)((float)(v65 * *((float *)this + 134)) - v65) * v13) + *((float *)this + 87);
    bFToL(v64, (char *)this + 352, 6LL);
    bFToL(v66, (char *)this + 356, v67);
  }
  *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= ~0x10000u;
  if ( *((float *)this + 83) == 0.0 && *((float *)this + 84) == 0.0 )
  {
    if ( *((float *)this + 82) != v13 || *((float *)this + 85) != v13 )
      v3 = 9;
  }
  else
  {
    v3 = 8;
  }
  *((_DWORD *)this + 90) = v3;
  if ( !*((_DWORD *)this + 88) && !*((_DWORD *)this + 89) )
    *((_DWORD *)this + 90) = v3 | 0x40;
  *(_DWORD *)(*((_QWORD *)this + 10) + 352LL) &= 0xFFFF1FFF;
  v27 = *((_DWORD *)this + 132);
  if ( (v27 & 1) == 0 || (v27 & 2) != 0 )
    goto LABEL_14;
}
