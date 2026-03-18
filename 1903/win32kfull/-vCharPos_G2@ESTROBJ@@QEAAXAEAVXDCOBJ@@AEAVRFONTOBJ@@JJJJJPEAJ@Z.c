/*
 * XREFs of ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C00062D8
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0068D50 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     bFToL @ 0x1C01014BC (bFToL.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0109D98 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C011DF8C (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1C0126AC0 (-vSqrt@EFLOAT@@QEAAXXZ.c)
 *     ??4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z @ 0x1C02B5F80 (--4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z.c)
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
  __int64 v39; // rcx
  int v40; // eax
  bool v41; // cc
  int v42; // ecx
  __int64 v43; // r11
  int v44; // ecx
  int v45; // edx
  int v46; // r11d
  int v47; // [rsp+48h] [rbp-49h] BYREF
  int v48; // [rsp+4Ch] [rbp-45h] BYREF
  int v49; // [rsp+50h] [rbp-41h]
  __int64 v50; // [rsp+58h] [rbp-39h] BYREF
  __int64 v51; // [rsp+60h] [rbp-31h]
  unsigned int v52; // [rsp+68h] [rbp-29h]
  __int64 v53; // [rsp+70h] [rbp-21h] BYREF
  __int64 v54; // [rsp+78h] [rbp-19h]
  __int64 v55; // [rsp+80h] [rbp-11h]

  v9 = *(_QWORD *)a3;
  v10 = a4;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 640LL) )
  {
    v52 = 0;
    if ( a6 )
    {
      v48 = 0;
      bFToL(this, &v48, 0LL);
      *((_DWORD *)this + 29) = v48;
      v9 = *(_QWORD *)a3;
      EPOINTQF::operator=(&v53, *(_QWORD *)a3 + 396LL);
      v55 = v43 * v53;
      v53 = v43 * v54;
      v10 = a4;
    }
    else
    {
      v53 = v54;
      v55 = v54;
    }
    v13 = (_DWORD *)((char *)this + 120);
    v14 = bCalcBreakExtra(*(unsigned int *)(v9 + 404), a7, a8, (char *)this + 120);
    v15 = *(_QWORD *)a3;
    if ( v14 )
    {
      v44 = *(_DWORD *)(v15 + 468);
      v45 = *((_DWORD *)this + 29);
      if ( v45 + v44 + *v13 < 0 )
      {
        *v13 = -(v44 + v45);
        v15 = *(_QWORD *)a3;
      }
      EPOINTQF::operator=(&v50, v15 + 396);
      v16 = v46 * v50;
      v50 = v46 * v51;
      v52 = *(_DWORD *)(v15 + 464);
    }
    else
    {
      v50 = v51;
      v16 = v51;
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
    v48 = 0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v23, v17, v19, &v47, a2, this) )
    {
      if ( *(float *)&v47 != 0.0 )
      {
        v24 = *((_QWORD *)this + 8);
        *((_DWORD *)this + 58) |= 2u;
        *((_QWORD *)this + 4) = v24;
      }
      v25 = *(_DWORD *)this;
      v26 = 0;
      v27 = v50;
      v28 = a9;
      v47 = *(int *)this;
      while ( 1 )
      {
        v29 = p_ptl[-1];
        v30 = v26;
        v31 = *((unsigned int *)this + 29);
        v32 = v22 + *(_DWORD *)(*(_QWORD *)&v29 + 16LL);
        if ( v48 < v32 )
          v32 = v48;
        v26 = v22 + *(_DWORD *)(*(_QWORD *)&v29 + 20LL);
        v48 = v32;
        if ( v30 > v26 )
          v26 = v30;
        v33 = *(_DWORD *)(*(_QWORD *)&v29 + 12LL);
        v18 += *(_QWORD *)(*(_QWORD *)&v29 + 48LL);
        v22 += v33;
        v20 += *(_QWORD *)(*(_QWORD *)&v29 + 56LL);
        v49 = v26;
        if ( (_DWORD)v31 && v33 + (int)v31 > 0 )
        {
          v18 += v55;
          v22 += v31;
          v20 += v53;
        }
        v34 = *((_DWORD *)this + 30);
        if ( v34 )
        {
          v31 = v52;
          if ( p_ptl[-2].x == v52 )
          {
            v22 += v34;
            v18 += v16;
            v20 += v27;
          }
        }
        if ( v28 )
        {
          LODWORD(v50) = 0;
          bFToL(v31, &v50, 0LL);
          v25 = v47;
          v26 = v49;
          *a9++ = v50;
          v28 = a9;
        }
        v35 = v25-- == 1;
        v47 = v25;
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
      if ( v26 - v22 <= 0 )
        v38 = 0;
      *(float *)&v47 = (float)((float)((float)(int)v37 * 0.0625) * (float)((float)(int)v37 * 0.0625))
                     + (float)((float)((float)(int)v36 * 0.0625) * (float)((float)(int)v36 * 0.0625));
      EFLOAT::vSqrt((EFLOAT *)&v47);
      v35 = (unsigned int)bFToL(v39, &v50, 10LL) == 0;
      v40 = v49;
      if ( !v35 )
        v40 = v50;
      v41 = v22 < v48;
      *((_DWORD *)this + 28) = v40;
      if ( !v41 )
        v22 = v48;
      *((_DWORD *)this + 26) = v38 + v40;
      *((_DWORD *)this + 24) = v22;
      *((_DWORD *)this + 25) = *(_DWORD *)(*(_QWORD *)a3 + 316LL);
      v42 = *(_DWORD *)(*(_QWORD *)a3 + 320LL);
      *((_DWORD *)this + 58) |= 4u;
      *((_DWORD *)this + 27) = v42;
    }
  }
}
