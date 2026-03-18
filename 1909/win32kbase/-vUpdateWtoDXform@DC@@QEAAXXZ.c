/*
 * XREFs of ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C00191F0
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0019F30 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C0077078 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     bFToL @ 0x1C00865D8 (bFToL.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C0126110 (-vMakeIso@DC@@QEAAXXZ.c)
 */

void __fastcall DC::vUpdateWtoDXform(DC *this)
{
  float *v1; // r8
  int v3; // esi
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
  _DWORD *v25; // rdi
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  float v32; // xmm0_4
  __int64 v33; // rcx
  float v34; // xmm0_4
  __int64 v35; // rcx
  float v36; // xmm0_4
  __int64 v37; // rax
  float v38; // xmm0_4
  __int64 v39; // rcx
  float v40; // xmm0_4
  __int64 v41; // rax
  float v42; // xmm0_4
  float v43; // xmm0_4
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // edx
  int v47; // ecx
  float v48; // xmm1_4
  __int64 v49; // rcx
  float v50; // xmm1_4
  __int64 v51; // rdx
  int v52; // ecx
  unsigned int v53; // ecx
  __int64 v54; // rdx
  int v55; // ecx
  unsigned int v56; // ecx
  int v57; // xmm0_4
  __int64 v58; // rax
  int v59; // xmm1_4
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // r8
  float v63; // xmm3_4
  float v64; // xmm5_4
  __int64 v65; // rax
  __int64 v66; // rcx
  float v67; // xmm2_4
  __int64 v68; // rcx
  __int64 v69; // r8

  v1 = (float *)*((_QWORD *)this + 122);
  v3 = 11;
  v4 = *((_DWORD *)v1 + 85);
  if ( (v4 & 0xE000) != 0 )
  {
    if ( (v4 & 0x4000) != 0 )
    {
      if ( *((_DWORD *)v1 + 26) == 7 )
      {
        DC::vMakeIso(this);
        v1 = (float *)*((_QWORD *)this + 122);
      }
      v46 = *((_DWORD *)v1 + 79);
      v47 = *((_DWORD *)v1 + 83);
      if ( v46 == v47 && *((_DWORD *)v1 + 80) == *((_DWORD *)v1 + 84) )
      {
        v57 = ef16;
        *((_DWORD *)v1 + 98) = ef16;
        v58 = *((_QWORD *)this + 122);
        *((_DWORD *)this + 107) = v57;
        v59 = ef16;
        *(_DWORD *)(v58 + 396) = ef16;
        *((_DWORD *)this + 108) = v59;
        *((_DWORD *)this + 88) = 11;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x1000u;
      }
      else
      {
        v48 = (float)(16 * v47) / (float)v46;
        v1[98] = v48;
        v49 = *((_QWORD *)this + 122);
        *((float *)this + 107) = v48;
        v50 = (float)(16 * *(_DWORD *)(v49 + 336)) / (float)*(int *)(v49 + 320);
        *(float *)(v49 + 396) = v50;
        *((float *)this + 108) = v50;
        *((_DWORD *)this + 88) = 9;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFFE7FF;
      }
      v51 = *((_QWORD *)this + 122);
      v52 = *(_DWORD *)(v51 + 340);
      if ( *((float *)this + 107) < 0.0 )
        v53 = v52 | 0x100;
      else
        v53 = v52 & 0xFFFFFEFF;
      *(_DWORD *)(v51 + 340) = v53;
      v54 = *((_QWORD *)this + 122);
      v55 = *(_DWORD *)(v54 + 340);
      if ( *((float *)this + 108) < 0.0 )
        v56 = v55 | 0x200;
      else
        v56 = v55 & 0xFFFFFDFF;
      *(_DWORD *)(v54 + 340) = v56;
    }
    v5 = *((_QWORD *)this + 122);
    if ( !*(_DWORD *)(v5 + 308) && !*(_DWORD *)(v5 + 312) )
    {
      v6 = *(_DWORD *)(v5 + 324);
      if ( v6 || *(_DWORD *)(v5 + 328) )
      {
        v34 = (float)(16 * v6);
        *(float *)(v5 + 400) = v34;
        v35 = *((_QWORD *)this + 122);
        *((float *)this + 109) = v34;
        v36 = (float)(16 * *(_DWORD *)(v35 + 328));
        *(float *)(v35 + 404) = v36;
        v37 = *((_QWORD *)this + 122);
        *((float *)this + 110) = v36;
        *((_DWORD *)this + 86) = 16 * *(_DWORD *)(v37 + 324);
        LODWORD(v35) = *(_DWORD *)(*((_QWORD *)this + 122) + 328LL);
        *((_DWORD *)this + 88) &= ~0x40u;
        *((_DWORD *)this + 87) = 16 * v35;
        *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= ~0x800u;
      }
      else
      {
        *(_DWORD *)(v5 + 400) = 0;
        v7 = *((_QWORD *)this + 122);
        *((_DWORD *)this + 109) = 0;
        *(_DWORD *)(v7 + 404) = 0;
        *((_DWORD *)this + 110) = 0;
        *((_DWORD *)this + 88) |= 0x40u;
        *((_QWORD *)this + 43) = 0LL;
        v8 = *((_QWORD *)this + 122);
        v9 = *(_DWORD *)(v8 + 340);
        if ( (v9 & 0x1000) != 0 )
          *(_DWORD *)(v8 + 340) = v9 | 0x800;
      }
LABEL_9:
      v1 = (float *)*((_QWORD *)this + 122);
      if ( ((_DWORD)v1[85] & 2) != 0 )
      {
        v10 = *((_DWORD *)this + 130);
        if ( (v10 & 1) == 0 || (v10 & 2) != 0 )
        {
          *((_DWORD *)this + 80) = *((_DWORD *)this + 107);
          *((_DWORD *)this + 83) = *((_DWORD *)this + 108);
          *(_QWORD *)((char *)this + 324) = 0LL;
          *((_DWORD *)this + 84) = *((_DWORD *)this + 109);
          *((_DWORD *)this + 85) = *((_DWORD *)this + 110);
          if ( (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x800) == 0 )
          {
            *((_DWORD *)this + 88) = (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x1000 | 0x4800u) >> 11;
LABEL_13:
            *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFF1FFF;
LABEL_14:
            v11 = *((_QWORD *)this + 122);
            *(_OWORD *)(v11 + 32) = *((_OWORD *)this + 20);
            *(_OWORD *)(v11 + 48) = *((_OWORD *)this + 21);
            *(_DWORD *)(v11 + 64) = *((_DWORD *)this + 88);
            return;
          }
LABEL_43:
          *((_DWORD *)this + 88) = 75;
          goto LABEL_13;
        }
      }
      goto LABEL_16;
    }
    *(_DWORD *)(v5 + 340) &= ~0x800u;
    *((_DWORD *)this + 88) &= ~0x40u;
    v29 = *((_QWORD *)this + 122);
    v30 = -*(_DWORD *)(v29 + 308);
    if ( (*(_DWORD *)(v29 + 340) & 0x1000) != 0 )
    {
      *(float *)(v29 + 400) = (float)(-16 * *(_DWORD *)(v29 + 308));
      v31 = *((_QWORD *)this + 122);
      *((float *)this + 109) = (float)(16 * v30);
      v32 = (float)(-16 * *(_DWORD *)(v31 + 312));
      *(float *)(v31 + 404) = v32;
      v33 = *((_QWORD *)this + 122);
      *((float *)this + 110) = v32;
      if ( !*(_DWORD *)(v33 + 324) && !*(_DWORD *)(v33 + 328) )
      {
        *((_DWORD *)this + 86) = -16 * *(_DWORD *)(v33 + 308);
        *((_DWORD *)this + 87) = -16 * *(_DWORD *)(*((_QWORD *)this + 122) + 312LL);
        goto LABEL_9;
      }
    }
    else
    {
      v38 = (float)v30 * *((float *)this + 107);
      *(float *)(v29 + 400) = v38;
      v39 = *((_QWORD *)this + 122);
      *((float *)this + 109) = v38;
      v40 = (float)-*(_DWORD *)(v39 + 312) * *((float *)this + 108);
      *(float *)(v39 + 404) = v40;
      v41 = *((_QWORD *)this + 122);
      *((float *)this + 110) = v40;
      v33 = v41;
      if ( !*(_DWORD *)(v41 + 324) && !*(_DWORD *)(v41 + 328) )
        goto LABEL_47;
    }
    v42 = (float)(16 * *(_DWORD *)(v33 + 324)) + *((float *)this + 109);
    *(float *)(v33 + 400) = v42;
    v33 = *((_QWORD *)this + 122);
    *((float *)this + 109) = v42;
    v43 = (float)(16 * *(_DWORD *)(v33 + 328)) + *((float *)this + 110);
    *(float *)(v33 + 404) = v43;
    *((float *)this + 110) = v43;
LABEL_47:
    bFToL(v33, (char *)this + 344, 6LL);
    bFToL(v44, (char *)this + 348, v45);
    goto LABEL_9;
  }
  if ( (v4 & 2) != 0 && !(unsigned int)DC::bDpiScaleTransform(this) )
  {
    *(_DWORD *)(v60 + 320) = *(_DWORD *)(v60 + 428);
    *(_DWORD *)(v60 + 332) = *(_DWORD *)(v60 + 432);
    *(_QWORD *)(v60 + 324) = 0LL;
    *(_DWORD *)(v60 + 336) = *(_DWORD *)(v60 + 436);
    *(_DWORD *)(v60 + 340) = *(_DWORD *)(v60 + 440);
    bFToL(v60, v60 + 344, 6LL);
    bFToL(v61, (char *)this + 348, v62);
    if ( (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x800) == 0 )
    {
      *((_DWORD *)this + 88) = (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x1000 | 0x4800u) >> 11;
      goto LABEL_13;
    }
    goto LABEL_43;
  }
LABEL_16:
  v12 = *((_DWORD *)this + 130);
  if ( (v12 & 1) != 0 && (v12 & 2) == 0 )
  {
    *((_DWORD *)v1 + 85) &= 0xFFFFE7FF;
    v1 = (float *)*((_QWORD *)this + 122);
  }
  v13 = *(float *)&_xmm;
  if ( ((_DWORD)v1[85] & 0x1000) != 0 )
  {
    *((_OWORD *)this + 20) = *(_OWORD *)((char *)this + 392);
    *((_OWORD *)this + 21) = *(_OWORD *)((char *)this + 408);
    *((__m128 *)this + 20) = _mm_mul_ps(*((__m128 *)this + 20), (__m128)_xmm);
    *((float *)this + 84) = *((float *)this + 84) * 16.0;
    *((float *)this + 85) = *((float *)this + 85) * 16.0;
  }
  else
  {
    v63 = *((float *)this + 107);
    if ( (unsigned int)DC::bDpiScaleTransform(this) )
    {
      v63 = v63 * *((float *)this + 131);
      v64 = v64 * *((float *)this + 132);
    }
    *((float *)this + 80) = v63 * *((float *)this + 98);
    *((float *)this + 82) = v63 * *((float *)this + 100);
    *((float *)this + 81) = v64 * *((float *)this + 99);
    *((float *)this + 83) = v64 * *((float *)this + 101);
    *((float *)this + 84) = *((float *)this + 107) * *((float *)this + 102);
    *((float *)this + 85) = *((float *)this + 108) * *((float *)this + 103);
  }
  v14 = *((float *)this + 109) + *((float *)this + 84);
  v15 = (unsigned __int8)(SLODWORD(v14) >> 23) - 118;
  *((float *)this + 84) = v14;
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
    *((_DWORD *)this + 86) = v19;
  }
  v20 = *((float *)this + 110) + *((float *)this + 85);
  v21 = (unsigned __int8)(SLODWORD(v20) >> 23) - 118;
  *((float *)this + 85) = v20;
  if ( v21 > 40 )
  {
    v25 = (_DWORD *)((char *)this + 348);
  }
  else
  {
    v22 = LODWORD(v20) & 0x7FFFFFLL | 0x800000;
    if ( v21 < 0 )
      v23 = v22 >> (118 - (unsigned __int8)(SLODWORD(v20) >> 23));
    else
      v23 = v22 << v21;
    v24 = (v23 + 0x80000000LL) >> 32;
    v25 = (_DWORD *)((char *)this + 348);
    v26 = -((unsigned __int64)(v23 + 0x80000000LL) >> 32);
    if ( v20 >= 0.0 )
      v26 = v24;
    *v25 = v26;
  }
  v27 = *((_DWORD *)this + 130);
  if ( (v27 & 1) != 0 && (v27 & 2) == 0 )
  {
    *((float *)this + 84) = *((float *)this + 131) * *((float *)this + 84);
    *((float *)this + 85) = *((float *)this + 132) * *((float *)this + 85);
    v65 = *((_DWORD *)this + 10) & 1;
    v66 = *((unsigned int *)this + 2 * v65 + 255);
    v67 = (float)*((int *)this + 2 * v65 + 255);
    *((float *)this + 84) = (float)((float)((float)((float)*((int *)this + 2 * v65 + 254) * *((float *)this + 131))
                                          - (float)*((int *)this + 2 * v65 + 254))
                                  * v13)
                          + *((float *)this + 84);
    *((float *)this + 85) = (float)((float)((float)(v67 * *((float *)this + 132)) - v67) * v13) + *((float *)this + 85);
    bFToL(v66, (char *)this + 344, 6LL);
    bFToL(v68, v25, v69);
  }
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= ~0x10000u;
  if ( *((float *)this + 81) == 0.0 && *((float *)this + 82) == 0.0 )
  {
    if ( *((float *)this + 80) != v13 || *((float *)this + 83) != v13 )
      v3 = 9;
  }
  else
  {
    v3 = 8;
  }
  *((_DWORD *)this + 88) = v3;
  if ( !*((_DWORD *)this + 86) && !*((_DWORD *)this + 87) )
    *((_DWORD *)this + 88) = v3 | 0x40;
  *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= 0xFFFF1FFF;
  v28 = *((_DWORD *)this + 130);
  if ( (v28 & 1) == 0 || (v28 & 2) != 0 )
    goto LABEL_14;
}
