/*
 * XREFs of ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C01116CC
 * Callers:
 *     GreGetTextExtentW @ 0x1C0111340 (GreGetTextExtentW.c)
 * Callees:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0083C88 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C0085324 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 *     ?bIs1Over16@EFLOAT@@QEBAHXZ @ 0x1C01118BC (-bIs1Over16@EFLOAT@@QEBAHXZ.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C01118DC (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::bTextExtent(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        char a9,
        struct tagSIZE *a10)
{
  struct tagSIZE *v10; // rdi
  int v11; // r12d
  int v12; // r15d
  int v13; // ebx
  __int64 v14; // r13
  unsigned __int16 *v15; // rax
  struct XDCOBJ *v16; // r9
  int v18; // esi
  int v19; // r8d
  int v20; // ecx
  unsigned __int16 *v21; // rdx
  int v22; // r15d
  int v23; // edi
  GLYPHDEF **p_pgdf; // rcx
  __int64 v25; // r8
  int ppo_high; // edx
  bool v27; // zf
  __int64 v28; // r15
  int v29; // esi
  float *v30; // rcx
  LONG v31; // edx
  float *v32; // rcx
  __int64 v34; // rax
  int v35; // ebx
  int v36; // edx
  int v37; // ecx
  __int16 v38; // r8
  unsigned __int16 *v39; // r9
  __int64 v40; // rdx
  __int16 v41; // ax
  LONG cx; // edx
  int v43; // [rsp+30h] [rbp-D0h] BYREF
  int v44; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 *v45; // [rsp+38h] [rbp-C8h]
  struct XDCOBJ *v46; // [rsp+40h] [rbp-C0h]
  unsigned __int16 *v47; // [rsp+48h] [rbp-B8h]
  struct tagSIZE *v48; // [rsp+50h] [rbp-B0h]
  struct _GLYPHPOS v49; // [rsp+60h] [rbp-A0h] BYREF

  v10 = a10;
  v11 = 0;
  v12 = a6;
  v13 = 0;
  v14 = a4;
  v15 = a3;
  v47 = a3;
  v16 = a2;
  v46 = a2;
  v48 = a10;
  if ( a6 )
  {
    v34 = *(_QWORD *)this;
    v44 = 0;
    bFToL((float)a6 * *(float *)(v34 + 404), &v44, 0);
    v15 = v47;
    v16 = v46;
    v11 = v44;
  }
  v18 = 0;
  v45 = v15;
  v19 = 0;
  v20 = v14;
  v43 = v14;
  v21 = v15;
  if ( (_DWORD)v14 )
  {
    v44 = 0;
    while ( 1 )
    {
      v22 = v20;
      if ( v20 > 82 )
        v22 = 82;
      if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, (struct RFONTOBJ *)(unsigned int)v22, &v49, v21, v16, 0LL) )
        return 0LL;
      if ( v22 > 0 )
      {
        v23 = v44;
        p_pgdf = &v49.pgdf;
        v25 = (unsigned int)v22;
        do
        {
          ppo_high = HIDWORD((*p_pgdf)[1].ppo);
          v18 += ppo_high;
          if ( v11 < 0 && ppo_high + v11 <= 0 )
            ++v23;
          p_pgdf += 3;
          --v25;
        }
        while ( v25 );
        v44 = v23;
        v10 = v48;
      }
      v16 = v46;
      v27 = v43 == v22;
      v20 = v43 - v22;
      v43 -= v22;
      v21 = &v45[v22];
      v45 = v21;
      if ( v27 )
      {
        v19 = v44;
        v12 = a6;
        goto LABEL_15;
      }
    }
  }
  else
  {
LABEL_15:
    if ( v12 )
    {
      if ( (a9 & 1) != 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 104LL) + 40LL) & 1) != 0
        && (*(_DWORD *)(*(_QWORD *)this + 716LL) & 4) == 0 )
      {
        v35 = v14;
        if ( v12 <= 0 )
          v35 = v14 - 1;
      }
      else
      {
        v35 = v14 - v19;
      }
      v13 = v11 * v35;
    }
    v28 = *(_QWORD *)this;
    if ( (unsigned __int8)bCalcBreakExtra(*(unsigned int *)(*(_QWORD *)this + 404LL), a7, a8, &v43) )
    {
      v36 = *(_DWORD *)(v28 + 468);
      v37 = v43;
      if ( v11 + v36 + v43 < 0 )
        v37 = -(v36 + v11);
      if ( (a9 & 2) != 0 )
        v38 = *(_WORD *)(v28 + 464);
      else
        v38 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 120) + 32LL) + 118LL);
      if ( (int)v14 > 0 )
      {
        v39 = v47;
        v40 = v14;
        do
        {
          v41 = *v39++;
          if ( v41 == v38 )
            v13 += v37;
          --v40;
        }
        while ( v40 );
      }
    }
    v29 = v13 + v18;
    if ( (a9 & 1) != 0 )
      v29 += 16 * RFONTOBJ::lOverhang(this);
    if ( (unsigned int)EFLOAT::bIs1Over16((EFLOAT *)(*(_QWORD *)this + 680LL)) )
    {
      v10->cx = (v29 + 8) >> 4;
    }
    else
    {
      v43 = 0;
      bFToL((float)v29 * *v30, &v43, 0);
      v10->cx = v43;
    }
    if ( (unsigned int)EFLOAT::bIs1Over16((EFLOAT *)(*(_QWORD *)this + 684LL)) )
    {
      v10->cy = v31;
    }
    else
    {
      v43 = 0;
      bFToL((float)(16 * v31) * *v32, &v43, 0);
      v10->cy = v43;
    }
    if ( gbDBCSCodePage
      && *(_DWORD *)(*(_QWORD *)this + 208LL) == 1
      && (*(_DWORD *)(*(_QWORD *)this + 716LL) & 0x200014) == 0x200000
      && (a5 == 900 || a5 == 2700) )
    {
      cx = v10->cx;
      v10->cx = v10->cy;
      v10->cy = cx;
    }
    return 1LL;
  }
}
