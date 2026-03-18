/*
 * XREFs of ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C0002C48
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0094D40 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1C0002FD0 (-vSqrt@EFLOAT@@QEAAXXZ.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00031C0 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C010A9F0 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ??4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z @ 0x1C022AAD8 (--4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G2(
        ESTROBJ *this,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        LONG a4,
        LONG a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        int *a9)
{
  __int64 v9; // rbx
  LONG v10; // r14d
  _DWORD *v13; // rsi
  char v14; // al
  __int64 v15; // rbx
  __int64 v16; // r13
  struct _GLYPHPOS *v17; // r8
  __int64 v18; // rsi
  unsigned __int16 *v19; // r9
  __int64 v20; // r12
  POINTL *p_ptl; // rbx
  int v22; // r14d
  unsigned int v23; // edx
  __int64 v24; // rax
  int v25; // r10d
  int v26; // r11d
  __int64 v27; // r15
  int *v28; // r9
  POINTL v29; // r8
  int v30; // edx
  __int64 v31; // rcx
  int v32; // eax
  int v33; // edx
  int v34; // eax
  bool v35; // zf
  __int64 v36; // rsi
  __int64 v37; // r12
  int v38; // ebx
  __m128i v39; // xmm2
  float v40; // xmm2_4
  __int64 v41; // rcx
  int v42; // eax
  bool v43; // cc
  int v44; // ecx
  __int64 v45; // r11
  int v46; // ecx
  int v47; // edx
  int v48; // r11d
  int v49; // [rsp+48h] [rbp-49h] BYREF
  int v50; // [rsp+4Ch] [rbp-45h] BYREF
  int v51; // [rsp+50h] [rbp-41h]
  __int64 v52; // [rsp+58h] [rbp-39h] BYREF
  __int64 v53; // [rsp+60h] [rbp-31h]
  unsigned int v54; // [rsp+68h] [rbp-29h]
  __int64 v55; // [rsp+70h] [rbp-21h] BYREF
  __int64 v56; // [rsp+78h] [rbp-19h]
  __int64 v57; // [rsp+80h] [rbp-11h]

  v9 = *(_QWORD *)a3;
  v10 = a4;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 628LL) )
  {
    v54 = 0;
    if ( a6 )
    {
      v50 = 0;
      bFToL(this, &v50, 0LL);
      *((_DWORD *)this + 29) = v50;
      v9 = *(_QWORD *)a3;
      EPOINTQF::operator=(&v55, *(_QWORD *)a3 + 384LL);
      v57 = v45 * v55;
      v55 = v45 * v56;
      v10 = a4;
    }
    else
    {
      v55 = v56;
      v57 = v56;
    }
    v13 = (_DWORD *)((char *)this + 120);
    v14 = bCalcBreakExtra(*(unsigned int *)(v9 + 392), a7, a8, (char *)this + 120);
    v15 = *(_QWORD *)a3;
    if ( v14 )
    {
      v46 = *(_DWORD *)(v15 + 456);
      v47 = *((_DWORD *)this + 29);
      if ( v47 + v46 + *v13 < 0 )
      {
        *v13 = -(v46 + v47);
        v15 = *(_QWORD *)a3;
      }
      EPOINTQF::operator=(&v52, v15 + 384);
      v16 = v48 * v52;
      v52 = v48 * v53;
      v54 = *(_DWORD *)(v15 + 452);
    }
    else
    {
      v52 = v53;
      v16 = v53;
    }
    v17 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
    v18 = 0x80000000LL;
    v19 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v20 = 0x80000000LL;
    v17->ptl.y = a5;
    p_ptl = &v17->ptl;
    v17->ptl.x = v10;
    v22 = 0;
    v23 = *(_DWORD *)this;
    v50 = 0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v23, v17, v19, &v49, a2, this) )
    {
      if ( *(float *)&v49 != 0.0 )
      {
        v24 = *((_QWORD *)this + 8);
        *((_DWORD *)this + 58) |= 2u;
        *((_QWORD *)this + 4) = v24;
      }
      v25 = *(_DWORD *)this;
      v26 = 0;
      v27 = v52;
      v28 = a9;
      v49 = *(int *)this;
      while ( 1 )
      {
        v29 = p_ptl[-1];
        v30 = v26;
        v31 = *((unsigned int *)this + 29);
        v32 = v22 + *(_DWORD *)(*(_QWORD *)&v29 + 16LL);
        if ( v50 < v32 )
          v32 = v50;
        v26 = v22 + *(_DWORD *)(*(_QWORD *)&v29 + 20LL);
        v50 = v32;
        if ( v30 > v26 )
          v26 = v30;
        v33 = *(_DWORD *)(*(_QWORD *)&v29 + 12LL);
        v18 += *(_QWORD *)(*(_QWORD *)&v29 + 48LL);
        v22 += v33;
        v20 += *(_QWORD *)(*(_QWORD *)&v29 + 56LL);
        v51 = v26;
        if ( (_DWORD)v31 && v33 + (int)v31 > 0 )
        {
          v18 += v57;
          v22 += v31;
          v20 += v55;
        }
        v34 = *((_DWORD *)this + 30);
        if ( v34 )
        {
          v31 = v54;
          if ( p_ptl[-2].x == v54 )
          {
            v22 += v34;
            v18 += v16;
            v20 += v27;
          }
        }
        if ( v28 )
        {
          LODWORD(v52) = 0;
          bFToL(v31, &v52, 0LL);
          v25 = v49;
          v26 = v51;
          *a9++ = v52;
          v28 = a9;
        }
        v35 = v25-- == 1;
        v49 = v25;
        if ( v35 )
          break;
        p_ptl += 3;
        p_ptl->x = a4 + HIDWORD(v18);
        p_ptl->y = a5 + HIDWORD(v20);
      }
      v36 = v18 >> 32;
      v37 = v20 >> 32;
      v38 = v26 - v22;
      *((_DWORD *)this + 20) = v36;
      *((_DWORD *)this + 21) = v37;
      v39 = _mm_cvtsi32_si128(v36);
      if ( v26 - v22 <= 0 )
        v38 = 0;
      v40 = _mm_cvtepi32_ps(v39).m128_f32[0];
      *(float *)&v49 = (float)((float)((float)(int)v37 * 0.0625) * (float)((float)(int)v37 * 0.0625))
                     + (float)((float)(v40 * 0.0625) * (float)(v40 * 0.0625));
      EFLOAT::vSqrt((EFLOAT *)&v49);
      v35 = (unsigned int)bFToL(v41, &v52, 10LL) == 0;
      v42 = v51;
      if ( !v35 )
        v42 = v52;
      v43 = v22 < v50;
      *((_DWORD *)this + 28) = v42;
      if ( !v43 )
        v22 = v50;
      *((_DWORD *)this + 26) = v38 + v42;
      *((_DWORD *)this + 24) = v22;
      *((_DWORD *)this + 25) = *(_DWORD *)(*(_QWORD *)a3 + 300LL);
      v44 = *(_DWORD *)(*(_QWORD *)a3 + 304LL);
      *((_DWORD *)this + 58) |= 4u;
      *((_DWORD *)this + 27) = v44;
    }
  }
}
