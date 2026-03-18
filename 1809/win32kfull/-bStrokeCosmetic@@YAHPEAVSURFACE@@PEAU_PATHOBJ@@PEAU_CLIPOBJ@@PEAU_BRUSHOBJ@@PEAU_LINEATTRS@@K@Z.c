/*
 * XREFs of ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C013BEA4
 * Callers:
 *     EngLineTo @ 0x1C00FD110 (EngLineTo.c)
 *     EngStrokePath @ 0x1C013BB90 (EngStrokePath.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C008FDD0 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C013A054 (-vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C013A5A8 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 *     ?bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C013C354 (-bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRI.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall bStrokeCosmetic(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *this,
        struct _BRUSHOBJ *a4,
        struct _LINEATTRS *a5,
        FIX a6)
{
  FLONG fl; // eax
  unsigned int v11; // esi
  __int64 v12; // rcx
  ULONG cstyle; // ebx
  PFLOAT_LONG pstyle; // r9
  bool v15; // zf
  int v16; // r8d
  int *v17; // rdx
  int *v18; // rcx
  LONG l; // eax
  int v20; // eax
  FLOAT_LONG v21; // edx
  int v22; // r8d
  int v23; // eax
  unsigned int v24; // r9d
  ULONG iSolidColor; // ecx
  struct _BMINFO *v26; // rbx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned int v31; // ecx
  unsigned int v32; // eax
  void (* near **v33)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *); // rdx
  __int64 v34; // r8
  void (**v35)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *); // r13
  struct _PATHOBJ v36; // rcx
  int v37; // eax
  ULONG count; // r10d
  int v39; // r12d
  ULONG v40; // r8d
  char flags; // r9
  POINTFIX *pptfx; // rdx
  POINTFIX *v43; // r11
  POINTFIX *v44; // rcx
  int v45; // eax
  unsigned int v47; // esi
  BOOL v48; // edi
  struct _RECTL *v49; // [rsp+30h] [rbp-D0h]
  int v50; // [rsp+60h] [rbp-A0h]
  struct _POINTFIX v51; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v52; // [rsp+70h] [rbp-90h]
  _QWORD v53[14]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v54; // [rsp+F0h] [rbp-10h]
  struct _POINTFIX v55; // [rsp+F8h] [rbp-8h] BYREF
  struct _CLIPLINE v56[6]; // [rsp+100h] [rbp+0h] BYREF
  struct _PATHDATA v57; // [rsp+1C0h] [rbp+C0h] BYREF
  _DWORD v58[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v59[64]; // [rsp+210h] [rbp+110h] BYREF

  v51.x = a6;
  memset(v53, 0, 0x68uLL);
  fl = a5->fl;
  v54 = 0LL;
  v11 = 0;
  if ( (fl & 2) != 0 )
  {
    HIDWORD(v53[10]) = 0;
    v53[8] = &gaspAlternateStyle;
    v11 = 1024;
    v53[9] = &gaspAlternateStyle;
    LODWORD(v53[4]) = HIWORD(a5->elStyleState.l) & 1;
    v53[11] = 0x100000001LL;
    v53[3] = 0x200000001LL;
    v53[12] = 0x100000001LL;
  }
  else if ( a5->pstyle )
  {
    v12 = *((_QWORD *)a1 + 6);
    if ( v12 )
    {
      v53[11] = *(_QWORD *)(v12 + 2212);
      LODWORD(v53[12]) = *(_DWORD *)(v12 + 2220);
    }
    else
    {
      v53[11] = 0x100000001LL;
      LODWORD(v53[12]) = 3;
    }
    v11 = 1024;
    if ( bUMPDSecurityGateEx(v12, 1LL) && (cstyle = 16, a5->cstyle > 0x10) )
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "windows\\core\\ntgdi\\gre\\windows\\engstrok.cxx:%d:bStrokeCosmetic:bStorkeCosmetic's style index (pla->cstyle"
          ") is greater than STYLE_MAX_COUNT.\n",
          289);
    }
    else
    {
      cstyle = a5->cstyle;
    }
    pstyle = a5->pstyle;
    HIDWORD(v53[12]) = cstyle;
    v15 = (a5->fl & 4) == 0;
    v16 = 0;
    LODWORD(v53[3]) = 0;
    HIDWORD(v53[10]) = !v15;
    v53[8] = v58;
    v53[9] = v59;
    if ( cstyle )
    {
      v17 = &v58[cstyle - 1];
      if ( v17 >= v58 )
      {
        v18 = (int *)v59;
        do
        {
          l = pstyle->l;
          ++pstyle;
          v20 = LODWORD(v53[12]) * l;
          *v17 = v20;
          *v18++ = v20;
          v16 = *v17-- + LODWORD(v53[3]);
          LODWORD(v53[3]) = v16;
        }
        while ( (unsigned __int64)v17 >= v53[8] );
      }
    }
    LODWORD(v21.e) = a5->elStyleState;
    v22 = 2 * v16;
    HIDWORD(v53[3]) = v22;
    v23 = LODWORD(v53[12]) * HIWORD(v21.l) + LOWORD(v21.e);
    if ( v23 < 0 )
      v23 = 0;
    LODWORD(v53[4]) = v23;
    if ( v23 >= v22 )
      LODWORD(v53[4]) = v23 % v22;
  }
  v24 = *((_DWORD *)a1 + 24);
  iSolidColor = a4->iSolidColor;
  v50 = *((_DWORD *)a1 + 22) / 4;
  v52 = (unsigned int *)*((_QWORD *)a1 + 10);
  v26 = (struct _BMINFO *)((char *)&gabminfo + 32 * v24);
  if ( v24 == 1 )
  {
    iSolidColor |= (4 * ((2 * iSolidColor) | iSolidColor)) | (2 * iSolidColor);
    goto LABEL_54;
  }
  if ( v24 == 2 )
  {
LABEL_54:
    iSolidColor |= 16 * iSolidColor;
    goto LABEL_55;
  }
  if ( v24 != 3 )
  {
    if ( v24 != 4 )
      goto LABEL_19;
    goto LABEL_56;
  }
LABEL_55:
  iSolidColor |= iSolidColor << 8;
LABEL_56:
  iSolidColor |= iSolidColor << 16;
LABEL_19:
  HIDWORD(v57.pptfx) = -1;
  v27 = 8LL;
  v57.count = iSolidColor;
  v57.flags = 0;
  LODWORD(v57.pptfx) = ~iSolidColor;
  v28 = aiLineMix[v51.x & 0xF];
  v29 = (unsigned __int8)v28;
  v30 = v28 >> 8;
  v31 = *(&v57.flags + v29);
  if ( v24 != 5 )
    v27 = 0LL;
  v32 = *(&v57.flags + v30);
  v33 = &gapfnStripCddCallback;
  v53[0] = __PAIR64__(v32, v31);
  v34 = -(__int64)(v11 != 0) & 4 | v27;
  if ( !*((_QWORD *)a1 + 79) )
    v33 = &gapfnStrip;
  v35 = (void (**)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *))&v33[v34];
  if ( this && this->iDComplexity )
  {
    v47 = v11 | 0x40;
    XCLIPOBJ::vEnumPathStart((XCLIPOBJ *)this, a2, a1, a5);
    while ( 1 )
    {
      v48 = XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)&a2[9], a2, 0xB8u, v56, 1);
      if ( v56[0].c )
      {
        if ( (v47 & 0x400) != 0 )
          HIDWORD(v53[4]) = LOWORD(v56[0].lStyleState) + LODWORD(v53[12]) * HIWORD(v56[0].lStyleState);
        if ( !(unsigned int)bLines(
                              v26,
                              &v56[0].ptfxA,
                              &v56[0].ptfxB,
                              v56[0].arun,
                              v56[0].c,
                              (struct _LINESTATE *)v53,
                              v49,
                              v35,
                              v47,
                              v52,
                              v50,
                              *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 79)) )
          break;
      }
      if ( !v48 )
        return 1LL;
    }
    return 0LL;
  }
  else
  {
    v36 = a2[1];
    a2->fl &= ~8u;
    v57.flags = 0;
    *(_QWORD *)(*(_QWORD *)&v36 + 72LL) = *(_QWORD *)(*(_QWORD *)&v36 + 32LL);
    do
    {
      v37 = EPATHOBJ::bEnum((EPATHOBJ *)a2, &v57);
      count = v57.count;
      v39 = v37;
      v40 = v57.count;
      if ( !v57.count )
        break;
      flags = v57.flags;
      pptfx = v57.pptfx;
      if ( (v57.flags & 1) != 0 )
      {
        v43 = v57.pptfx + 1;
        v55 = *v57.pptfx;
        v40 = v57.count - 1;
        v44 = v57.pptfx;
      }
      else
      {
        v44 = &v51;
        v43 = v57.pptfx;
      }
      v45 = v53[4];
      if ( (v57.flags & 4) != 0 )
        v45 = v54;
      LODWORD(v53[4]) = v45;
      if ( v40 )
      {
        if ( !(unsigned int)bLines(
                              v26,
                              v44,
                              v43,
                              0LL,
                              v40,
                              (struct _LINESTATE *)v53,
                              v49,
                              v35,
                              v11,
                              v52,
                              v50,
                              *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 79)) )
          return 0LL;
        pptfx = v57.pptfx;
        count = v57.count;
        flags = v57.flags;
      }
      v51 = pptfx[count - 1];
      if ( (flags & 8) != 0
        && !(unsigned int)bLines(
                            v26,
                            &v51,
                            &v55,
                            0LL,
                            1u,
                            (struct _LINESTATE *)v53,
                            v49,
                            v35,
                            v11,
                            v52,
                            v50,
                            *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 79)) )
      {
        return 0LL;
      }
    }
    while ( v39 );
    if ( v11 )
      a5->elStyleState.l = (unsigned __int16)(LODWORD(v53[4]) % LODWORD(v53[12])) | ((unsigned __int16)(LODWORD(v53[4]) / LODWORD(v53[12])) << 16);
    return 1LL;
  }
}
