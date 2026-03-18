/*
 * XREFs of ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C0084544
 * Callers:
 *     GreGetTextExtentW @ 0x1C00FAEAC (GreGetTextExtentW.c)
 * Callees:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00870C4 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C0087520 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?bIs1Over16@EFLOAT@@QEBAHXZ @ 0x1C0096D5C (-bIs1Over16@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C010A9F0 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
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
  signed int v22; // r15d
  int v23; // edi
  GLYPHDEF **p_pgdf; // rcx
  __int64 v25; // r8
  int ppo_high; // edx
  bool v27; // zf
  __int64 v28; // r15
  int v29; // esi
  __int64 v30; // rcx
  LONG v31; // edx
  __int64 v32; // rcx
  int v34; // ebx
  int v35; // edx
  int v36; // ecx
  __int16 v37; // r8
  unsigned __int16 *v38; // r9
  __int64 v39; // rdx
  __int16 v40; // ax
  LONG cx; // edx
  int v42; // [rsp+30h] [rbp-D0h] BYREF
  int v43; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 *v44; // [rsp+38h] [rbp-C8h]
  struct XDCOBJ *v45; // [rsp+40h] [rbp-C0h]
  unsigned __int16 *v46; // [rsp+48h] [rbp-B8h]
  struct tagSIZE *v47; // [rsp+50h] [rbp-B0h]
  struct _GLYPHPOS v48; // [rsp+60h] [rbp-A0h] BYREF

  v10 = a10;
  v11 = 0;
  v12 = a6;
  v13 = 0;
  v14 = a4;
  v15 = a3;
  v46 = a3;
  v16 = a2;
  v45 = a2;
  v47 = a10;
  if ( a6 )
  {
    v43 = 0;
    bFToL(this, &v43, 0LL);
    v15 = v46;
    v16 = v45;
    v11 = v43;
  }
  v18 = 0;
  v44 = v15;
  v19 = 0;
  v20 = v14;
  v42 = v14;
  v21 = v15;
  if ( (_DWORD)v14 )
  {
    v43 = 0;
    while ( 1 )
    {
      v22 = v20;
      if ( v20 > 82 )
        v22 = 82;
      if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, v22, &v48, v21, v16, 0LL) )
        return 0LL;
      if ( v22 > 0 )
      {
        v23 = v43;
        p_pgdf = &v48.pgdf;
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
        v43 = v23;
        v10 = v47;
      }
      v16 = v45;
      v27 = v42 == v22;
      v20 = v42 - v22;
      v42 -= v22;
      v21 = &v44[v22];
      v44 = v21;
      if ( v27 )
      {
        v19 = v43;
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
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 88LL) + 40LL) & 1) != 0
        && (*(_DWORD *)(*(_QWORD *)this + 460LL) & 4) == 0 )
      {
        v34 = v14;
        if ( v12 <= 0 )
          v34 = v14 - 1;
      }
      else
      {
        v34 = v14 - v19;
      }
      v13 = v11 * v34;
    }
    v28 = *(_QWORD *)this;
    if ( (unsigned __int8)bCalcBreakExtra(*(unsigned int *)(*(_QWORD *)this + 392LL), a7, a8, &v42) )
    {
      v35 = *(_DWORD *)(v28 + 456);
      v36 = v42;
      if ( v11 + v35 + v42 < 0 )
        v36 = -(v35 + v11);
      if ( (a9 & 2) != 0 )
        v37 = *(_WORD *)(v28 + 452);
      else
        v37 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 104) + 32LL) + 118LL);
      if ( (int)v14 > 0 )
      {
        v38 = v46;
        v39 = v14;
        do
        {
          v40 = *v38++;
          if ( v40 == v37 )
            v13 += v36;
          --v39;
        }
        while ( v39 );
      }
    }
    v29 = v13 + v18;
    if ( (a9 & 1) != 0 )
      v29 += 16 * RFONTOBJ::lOverhang(this);
    if ( (unsigned int)EFLOAT::bIs1Over16((EFLOAT *)(*(_QWORD *)this + 664LL)) )
    {
      v10->cx = (v29 + 8) >> 4;
    }
    else
    {
      v42 = 0;
      bFToL(v30, &v42, 0LL);
      v10->cx = v42;
    }
    if ( (unsigned int)EFLOAT::bIs1Over16((EFLOAT *)(*(_QWORD *)this + 668LL)) )
    {
      v10->cy = v31;
    }
    else
    {
      v42 = 0;
      bFToL(v32, &v42, 0LL);
      v10->cy = v42;
    }
    if ( gbDBCSCodePage
      && *(_DWORD *)(*(_QWORD *)this + 192LL) == 1
      && (*(_DWORD *)(*(_QWORD *)this + 460LL) & 0x200014) == 0x200000
      && (a5 == 900 || a5 == 2700) )
    {
      cx = v10->cx;
      v10->cx = v10->cy;
      v10->cy = cx;
    }
    return 1LL;
  }
}
