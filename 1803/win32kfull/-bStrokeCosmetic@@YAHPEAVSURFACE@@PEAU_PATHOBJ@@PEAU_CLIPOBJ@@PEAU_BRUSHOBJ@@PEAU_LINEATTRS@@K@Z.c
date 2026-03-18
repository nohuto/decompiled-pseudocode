/*
 * XREFs of ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C012833C
 * Callers:
 *     EngStrokePath @ 0x1C00E3150 (EngStrokePath.c)
 *     EngLineTo @ 0x1C011BFD0 (EngLineTo.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B1040 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C0128638 (-bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRI.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C028B52C (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 *     ?vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C028B874 (-vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
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
  unsigned int v12; // r9d
  ULONG iSolidColor; // ecx
  struct _BMINFO *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  void (* near **v21)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *); // rdx
  __int64 v22; // r8
  void (**v23)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *); // r13
  struct _PATHOBJ v24; // rcx
  int v25; // eax
  ULONG count; // r10d
  int v27; // r12d
  ULONG v28; // r8d
  char flags; // r9
  POINTFIX *pptfx; // rdx
  POINTFIX *v31; // r11
  POINTFIX *v32; // rcx
  int v33; // eax
  __int64 v35; // rcx
  ULONG cstyle; // ebx
  PFLOAT_LONG pstyle; // r9
  bool v38; // zf
  int v39; // r8d
  int *v40; // rdx
  int *v41; // rcx
  LONG l; // eax
  int v43; // eax
  FLOAT_LONG v44; // edx
  int v45; // r8d
  int v46; // eax
  unsigned int v47; // esi
  int v48; // edi
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
    v35 = *((_QWORD *)a1 + 6);
    if ( v35 )
    {
      v53[11] = *(_QWORD *)(v35 + 2204);
      LODWORD(v53[12]) = *(_DWORD *)(v35 + 2212);
    }
    else
    {
      v53[11] = 0x100000001LL;
      LODWORD(v53[12]) = 3;
    }
    v11 = 1024;
    if ( bUMPDSecurityGateEx(v35, 1LL) && (cstyle = 16, a5->cstyle > 0x10) )
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
    v38 = (a5->fl & 4) == 0;
    v39 = 0;
    LODWORD(v53[3]) = 0;
    HIDWORD(v53[10]) = !v38;
    v53[8] = v58;
    v53[9] = v59;
    if ( cstyle )
    {
      v40 = &v58[cstyle - 1];
      if ( v40 >= v58 )
      {
        v41 = (int *)v59;
        do
        {
          l = pstyle->l;
          ++pstyle;
          v43 = LODWORD(v53[12]) * l;
          *v40 = v43;
          *v41++ = v43;
          v39 = *v40-- + LODWORD(v53[3]);
          LODWORD(v53[3]) = v39;
        }
        while ( (unsigned __int64)v40 >= v53[8] );
      }
    }
    LODWORD(v44.e) = a5->elStyleState;
    v45 = 2 * v39;
    HIDWORD(v53[3]) = v45;
    v46 = LODWORD(v53[12]) * HIWORD(v44.l) + LOWORD(v44.e);
    if ( v46 < 0 )
      v46 = 0;
    LODWORD(v53[4]) = v46;
    if ( v46 >= v45 )
      LODWORD(v53[4]) = v46 % v45;
  }
  v12 = *((_DWORD *)a1 + 24);
  iSolidColor = a4->iSolidColor;
  v50 = *((_DWORD *)a1 + 22) / 4;
  v52 = (unsigned int *)*((_QWORD *)a1 + 10);
  v14 = (struct _BMINFO *)((char *)&gabminfo + 32 * v12);
  if ( v12 == 1 )
  {
    iSolidColor |= (4 * ((2 * iSolidColor) | iSolidColor)) | (2 * iSolidColor);
    goto LABEL_47;
  }
  if ( v12 == 2 )
  {
LABEL_47:
    iSolidColor |= 16 * iSolidColor;
    goto LABEL_48;
  }
  if ( v12 != 3 )
  {
    if ( v12 != 4 )
      goto LABEL_7;
    goto LABEL_49;
  }
LABEL_48:
  iSolidColor |= iSolidColor << 8;
LABEL_49:
  iSolidColor |= iSolidColor << 16;
LABEL_7:
  HIDWORD(v57.pptfx) = -1;
  v15 = 8LL;
  v57.count = iSolidColor;
  v57.flags = 0;
  LODWORD(v57.pptfx) = ~iSolidColor;
  v16 = aiLineMix[v51.x & 0xF];
  v17 = (unsigned __int8)v16;
  v18 = v16 >> 8;
  v19 = *(&v57.flags + v17);
  if ( v12 != 5 )
    v15 = 0LL;
  v20 = *(&v57.flags + v18);
  v21 = &gapfnStripCddCallback;
  v53[0] = __PAIR64__(v20, v19);
  v22 = -(__int64)(v11 != 0) & 4 | v15;
  if ( !*((_QWORD *)a1 + 79) )
    v21 = &gapfnStrip;
  v23 = (void (**)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *))&v21[v22];
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
                              v14,
                              &v56[0].ptfxA,
                              &v56[0].ptfxB,
                              v56[0].arun,
                              v56[0].c,
                              (struct _LINESTATE *)v53,
                              v49,
                              v23,
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
    v24 = a2[1];
    a2->fl &= ~8u;
    v57.flags = 0;
    *(_QWORD *)(*(_QWORD *)&v24 + 72LL) = *(_QWORD *)(*(_QWORD *)&v24 + 32LL);
    do
    {
      v25 = EPATHOBJ::bEnum((EPATHOBJ *)a2, &v57);
      count = v57.count;
      v27 = v25;
      v28 = v57.count;
      if ( !v57.count )
        break;
      flags = v57.flags;
      pptfx = v57.pptfx;
      if ( (v57.flags & 1) != 0 )
      {
        v31 = v57.pptfx + 1;
        v55 = *v57.pptfx;
        v28 = v57.count - 1;
        v32 = v57.pptfx;
      }
      else
      {
        v32 = &v51;
        v31 = v57.pptfx;
      }
      v33 = v53[4];
      if ( (v57.flags & 4) != 0 )
        v33 = v54;
      LODWORD(v53[4]) = v33;
      if ( v28 )
      {
        if ( !(unsigned int)bLines(
                              v14,
                              v32,
                              v31,
                              0LL,
                              v28,
                              (struct _LINESTATE *)v53,
                              v49,
                              v23,
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
                            v14,
                            &v51,
                            &v55,
                            0LL,
                            1u,
                            (struct _LINESTATE *)v53,
                            v49,
                            v23,
                            v11,
                            v52,
                            v50,
                            *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 79)) )
      {
        return 0LL;
      }
    }
    while ( v27 );
    if ( v11 )
      a5->elStyleState.l = (unsigned __int16)(LODWORD(v53[4]) % LODWORD(v53[12])) | ((unsigned __int16)(LODWORD(v53[4]) / LODWORD(v53[12])) << 16);
    return 1LL;
  }
}
