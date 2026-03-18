/*
 * XREFs of ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C014CFE4
 * Callers:
 *     EngLineTo @ 0x1C00DEFD0 (EngLineTo.c)
 *     EngStrokePath @ 0x1C014CCD0 (EngStrokePath.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D5048 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C014C7FC (-vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     ?bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C014D4B4 (-bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRI.c)
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C014DCF4 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
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
  ULONG cstyle; // edi
  PFLOAT_LONG pstyle; // r9
  bool v15; // zf
  int v16; // r8d
  int *v17; // rdx
  int *v18; // rcx
  LONG l; // eax
  int v20; // eax
  int v21; // r8d
  unsigned int v22; // ecx
  int e_low; // eax
  int v24; // eax
  unsigned int v25; // r8d
  ULONG iSolidColor; // ecx
  struct _BMINFO *v27; // rdi
  __int64 v28; // rdx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rdx
  void (* near **v33)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *); // rcx
  void (**v34)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *); // r13
  struct _PATHOBJ v35; // rcx
  int v36; // eax
  ULONG count; // r10d
  int v38; // r12d
  ULONG v39; // r8d
  char flags; // r9
  POINTFIX *pptfx; // rdx
  POINTFIX *v42; // r11
  POINTFIX *v43; // rcx
  int v44; // eax
  unsigned int v46; // esi
  int v47; // ebx
  unsigned int v48; // eax
  struct _RECTL *v49; // [rsp+30h] [rbp-D0h]
  int v50; // [rsp+60h] [rbp-A0h]
  struct _POINTFIX v51; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v52; // [rsp+70h] [rbp-90h]
  _QWORD v53[14]; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTFIX v54; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v55; // [rsp+F8h] [rbp-8h]
  struct _CLIPLINE v56[6]; // [rsp+100h] [rbp+0h] BYREF
  struct _PATHDATA v57; // [rsp+1C0h] [rbp+C0h] BYREF
  _DWORD v58[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v59[64]; // [rsp+210h] [rbp+110h] BYREF

  v51.x = a6;
  memset(v53, 0, 0x68uLL);
  fl = a5->fl;
  v55 = 0LL;
  v11 = 0;
  if ( (fl & 2) != 0 )
  {
    v53[8] = &gaspAlternateStyle;
    v11 = 1024;
    v53[9] = &gaspAlternateStyle;
    v48 = HIWORD(a5->elStyleState.l) & 1;
    v53[11] = 0x100000001LL;
    LODWORD(v53[4]) = v48;
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
    if ( bUMPDSecurityGateEx(v12, 1LL, 1024LL) && (cstyle = 16, a5->cstyle > 0x10) )
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
    v21 = 2 * v16;
    v22 = LODWORD(v53[12]) * HIWORD(a5->elStyleState.l);
    e_low = LOWORD(a5->elStyleState.e);
    HIDWORD(v53[3]) = v21;
    v24 = v22 + e_low;
    if ( v24 < 0 )
      v24 = 0;
    LODWORD(v53[4]) = v24;
    if ( v24 >= v21 )
      LODWORD(v53[4]) = v24 % v21;
  }
  v25 = *((_DWORD *)a1 + 24);
  iSolidColor = a4->iSolidColor;
  v50 = *((_DWORD *)a1 + 22) / 4;
  v52 = (unsigned int *)*((_QWORD *)a1 + 10);
  v27 = (struct _BMINFO *)((char *)&gabminfo + 32 * v25);
  if ( v25 == 1 )
  {
    iSolidColor |= (4 * ((2 * iSolidColor) | iSolidColor)) | (2 * iSolidColor);
    goto LABEL_54;
  }
  if ( v25 == 2 )
  {
LABEL_54:
    iSolidColor |= 16 * iSolidColor;
    goto LABEL_55;
  }
  if ( v25 != 3 )
  {
    if ( v25 != 4 )
      goto LABEL_19;
    goto LABEL_56;
  }
LABEL_55:
  iSolidColor |= iSolidColor << 8;
LABEL_56:
  iSolidColor |= iSolidColor << 16;
LABEL_19:
  HIDWORD(v57.pptfx) = -1;
  v57.count = iSolidColor;
  v57.flags = 0;
  LODWORD(v57.pptfx) = ~iSolidColor;
  v28 = aiLineMix[v51.x & 0xF];
  v29 = *(&v57.flags + (unsigned __int8)v28);
  v30 = *(&v57.flags + (v28 >> 8));
  v31 = 8LL;
  if ( v25 != 5 )
    v31 = 0LL;
  v53[0] = __PAIR64__(v30, v29);
  v32 = -(__int64)(v11 != 0) & 4 | v31;
  v33 = &gapfnStripCddCallback;
  if ( !*((_QWORD *)a1 + 79) )
    v33 = &gapfnStrip;
  v34 = (void (**)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *))&v33[v32];
  if ( this && this->iDComplexity )
  {
    memset(v56, 0, 0xB8uLL);
    v46 = v11 | 0x40;
    XCLIPOBJ::vEnumPathStart((XCLIPOBJ *)this, a2, a1, a5);
    while ( 1 )
    {
      v47 = XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)&a2[9], a2, 0xB8u, v56, 1);
      if ( v56[0].c )
      {
        if ( (v46 & 0x400) != 0 )
          HIDWORD(v53[4]) = LOWORD(v56[0].lStyleState) + LODWORD(v53[12]) * HIWORD(v56[0].lStyleState);
        if ( !(unsigned int)bLines(
                              v27,
                              &v56[0].ptfxA,
                              &v56[0].ptfxB,
                              v56[0].arun,
                              v56[0].c,
                              (struct _LINESTATE *)v53,
                              v49,
                              v34,
                              v46,
                              v52,
                              v50,
                              *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 79)) )
          break;
      }
      if ( !v47 )
        return 1LL;
    }
    return 0LL;
  }
  else
  {
    v35 = a2[1];
    a2->fl &= ~8u;
    *(_QWORD *)&v57.flags = 0LL;
    v57.pptfx = 0LL;
    *(_QWORD *)(*(_QWORD *)&v35 + 72LL) = *(_QWORD *)(*(_QWORD *)&v35 + 32LL);
    v54 = 0LL;
    v51 = 0LL;
    do
    {
      v36 = EPATHOBJ::bEnum((EPATHOBJ *)a2, &v57);
      count = v57.count;
      v38 = v36;
      v39 = v57.count;
      if ( !v57.count )
        break;
      flags = v57.flags;
      pptfx = v57.pptfx;
      if ( (v57.flags & 1) != 0 )
      {
        v42 = v57.pptfx + 1;
        v54 = *v57.pptfx;
        v39 = v57.count - 1;
        v43 = v57.pptfx;
      }
      else
      {
        v43 = &v51;
        v42 = v57.pptfx;
      }
      v44 = v53[4];
      if ( (v57.flags & 4) != 0 )
        v44 = v55;
      LODWORD(v53[4]) = v44;
      if ( v39 )
      {
        if ( !(unsigned int)bLines(
                              v27,
                              v43,
                              v42,
                              0LL,
                              v39,
                              (struct _LINESTATE *)v53,
                              v49,
                              v34,
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
                            v27,
                            &v51,
                            &v54,
                            0LL,
                            1u,
                            (struct _LINESTATE *)v53,
                            v49,
                            v34,
                            v11,
                            v52,
                            v50,
                            *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 79)) )
      {
        return 0LL;
      }
    }
    while ( v38 );
    if ( v11 )
      a5->elStyleState.l = (unsigned __int16)(LODWORD(v53[4]) % LODWORD(v53[12])) | ((unsigned __int16)(LODWORD(v53[4]) / LODWORD(v53[12])) << 16);
    return 1LL;
  }
}
