/*
 * XREFs of ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C014C218
 * Callers:
 *     EngLineTo @ 0x1C0102EC0 (EngLineTo.c)
 *     EngStrokePath @ 0x1C014BF20 (EngStrokePath.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00F4F58 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C014BA4C (-vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     ?bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRIP@@03@ZKPEAKJPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C014C6E8 (-bLines@@YAHPEAU_BMINFO@@PEAU_POINTFIX@@1PEAU_RUN@@KPEAU_LINESTATE@@PEAU_RECTL@@PEAP6AXPEAU_STRI.c)
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C014CF28 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall bStrokeCosmetic(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _CLIPOBJ *this,
        struct _BRUSHOBJ *a4,
        struct _LINEATTRS *a5,
        FIX a6)
{
  __int64 v10; // r9
  FLONG fl; // eax
  unsigned int v12; // esi
  __int64 v13; // rcx
  ULONG cstyle; // edi
  PFLOAT_LONG pstyle; // r9
  bool v16; // zf
  int v17; // r8d
  int *v18; // rdx
  int *v19; // rcx
  LONG l; // eax
  int v21; // eax
  int v22; // r8d
  unsigned int v23; // ecx
  int e_low; // eax
  int v25; // eax
  unsigned int v26; // r8d
  ULONG iSolidColor; // ecx
  struct _BMINFO *v28; // rdi
  __int64 v29; // rdx
  unsigned int v30; // ecx
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rdx
  void (* near **v34)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *); // rcx
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
  int v48; // ebx
  unsigned int v49; // eax
  struct _RECTL *v50; // [rsp+30h] [rbp-D0h]
  int v51; // [rsp+60h] [rbp-A0h]
  struct _POINTFIX v52; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v53; // [rsp+70h] [rbp-90h]
  _QWORD v54[14]; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTFIX v55; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v56; // [rsp+F8h] [rbp-8h]
  struct _CLIPLINE v57[6]; // [rsp+100h] [rbp+0h] BYREF
  struct _PATHDATA v58; // [rsp+1C0h] [rbp+C0h] BYREF
  _DWORD v59[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v60[64]; // [rsp+210h] [rbp+110h] BYREF

  v52.x = a6;
  memset(v54, 0, 0x68uLL);
  fl = a5->fl;
  v56 = 0LL;
  v12 = 0;
  if ( (fl & 2) != 0 )
  {
    v54[8] = &gaspAlternateStyle;
    v12 = 1024;
    v54[9] = &gaspAlternateStyle;
    v49 = HIWORD(a5->elStyleState.l) & 1;
    v54[11] = 0x100000001LL;
    LODWORD(v54[4]) = v49;
    v54[3] = 0x200000001LL;
    v54[12] = 0x100000001LL;
  }
  else if ( a5->pstyle )
  {
    v13 = *((_QWORD *)a1 + 6);
    if ( v13 )
    {
      v54[11] = *(_QWORD *)(v13 + 2212);
      LODWORD(v54[12]) = *(_DWORD *)(v13 + 2220);
    }
    else
    {
      v54[11] = 0x100000001LL;
      LODWORD(v54[12]) = 3;
    }
    v12 = 1024;
    if ( bUMPDSecurityGateEx(v13, 1LL, 1024LL, v10) && (cstyle = 16, a5->cstyle > 0x10) )
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
    HIDWORD(v54[12]) = cstyle;
    v16 = (a5->fl & 4) == 0;
    v17 = 0;
    LODWORD(v54[3]) = 0;
    HIDWORD(v54[10]) = !v16;
    v54[8] = v59;
    v54[9] = v60;
    if ( cstyle )
    {
      v18 = &v59[cstyle - 1];
      if ( v18 >= v59 )
      {
        v19 = (int *)v60;
        do
        {
          l = pstyle->l;
          ++pstyle;
          v21 = LODWORD(v54[12]) * l;
          *v18 = v21;
          *v19++ = v21;
          v17 = *v18-- + LODWORD(v54[3]);
          LODWORD(v54[3]) = v17;
        }
        while ( (unsigned __int64)v18 >= v54[8] );
      }
    }
    v22 = 2 * v17;
    v23 = LODWORD(v54[12]) * HIWORD(a5->elStyleState.l);
    e_low = LOWORD(a5->elStyleState.e);
    HIDWORD(v54[3]) = v22;
    v25 = v23 + e_low;
    if ( v25 < 0 )
      v25 = 0;
    LODWORD(v54[4]) = v25;
    if ( v25 >= v22 )
      LODWORD(v54[4]) = v25 % v22;
  }
  v26 = *((_DWORD *)a1 + 24);
  iSolidColor = a4->iSolidColor;
  v51 = *((_DWORD *)a1 + 22) / 4;
  v53 = (unsigned int *)*((_QWORD *)a1 + 10);
  v28 = (struct _BMINFO *)((char *)&gabminfo + 32 * v26);
  if ( v26 == 1 )
  {
    iSolidColor |= (4 * ((2 * iSolidColor) | iSolidColor)) | (2 * iSolidColor);
    goto LABEL_54;
  }
  if ( v26 == 2 )
  {
LABEL_54:
    iSolidColor |= 16 * iSolidColor;
    goto LABEL_55;
  }
  if ( v26 != 3 )
  {
    if ( v26 != 4 )
      goto LABEL_19;
    goto LABEL_56;
  }
LABEL_55:
  iSolidColor |= iSolidColor << 8;
LABEL_56:
  iSolidColor |= iSolidColor << 16;
LABEL_19:
  HIDWORD(v58.pptfx) = -1;
  v58.count = iSolidColor;
  v58.flags = 0;
  LODWORD(v58.pptfx) = ~iSolidColor;
  v29 = aiLineMix[v52.x & 0xF];
  v30 = *(&v58.flags + (unsigned __int8)v29);
  v31 = *(&v58.flags + (v29 >> 8));
  v32 = 8LL;
  if ( v26 != 5 )
    v32 = 0LL;
  v54[0] = __PAIR64__(v31, v30);
  v33 = -(__int64)(v12 != 0) & 4 | v32;
  v34 = &gapfnStripCddCallback;
  if ( !*((_QWORD *)a1 + 79) )
    v34 = &gapfnStrip;
  v35 = (void (**)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *))&v34[v33];
  if ( this && this->iDComplexity )
  {
    memset(v57, 0, 0xB8uLL);
    v47 = v12 | 0x40;
    XCLIPOBJ::vEnumPathStart((XCLIPOBJ *)this, a2, a1, a5);
    while ( 1 )
    {
      v48 = XCLIPOBJ::bEnumPath(*(XCLIPOBJ **)&a2[9], a2, 0xB8u, v57, 1);
      if ( v57[0].c )
      {
        if ( (v47 & 0x400) != 0 )
          HIDWORD(v54[4]) = LOWORD(v57[0].lStyleState) + LODWORD(v54[12]) * HIWORD(v57[0].lStyleState);
        if ( !(unsigned int)bLines(
                              v28,
                              &v57[0].ptfxA,
                              &v57[0].ptfxB,
                              v57[0].arun,
                              v57[0].c,
                              (struct _LINESTATE *)v54,
                              v50,
                              v35,
                              v47,
                              v53,
                              v51,
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
    *(_QWORD *)&v58.flags = 0LL;
    v58.pptfx = 0LL;
    *(_QWORD *)(*(_QWORD *)&v36 + 72LL) = *(_QWORD *)(*(_QWORD *)&v36 + 32LL);
    v55 = 0LL;
    v52 = 0LL;
    do
    {
      v37 = EPATHOBJ::bEnum((EPATHOBJ *)a2, &v58);
      count = v58.count;
      v39 = v37;
      v40 = v58.count;
      if ( !v58.count )
        break;
      flags = v58.flags;
      pptfx = v58.pptfx;
      if ( (v58.flags & 1) != 0 )
      {
        v43 = v58.pptfx + 1;
        v55 = *v58.pptfx;
        v40 = v58.count - 1;
        v44 = v58.pptfx;
      }
      else
      {
        v44 = &v52;
        v43 = v58.pptfx;
      }
      v45 = v54[4];
      if ( (v58.flags & 4) != 0 )
        v45 = v56;
      LODWORD(v54[4]) = v45;
      if ( v40 )
      {
        if ( !(unsigned int)bLines(
                              v28,
                              v44,
                              v43,
                              0LL,
                              v40,
                              (struct _LINESTATE *)v54,
                              v50,
                              v35,
                              v12,
                              v53,
                              v51,
                              *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 79)) )
          return 0LL;
        pptfx = v58.pptfx;
        count = v58.count;
        flags = v58.flags;
      }
      v52 = pptfx[count - 1];
      if ( (flags & 8) != 0
        && !(unsigned int)bLines(
                            v28,
                            &v52,
                            &v55,
                            0LL,
                            1u,
                            (struct _LINESTATE *)v54,
                            v50,
                            v35,
                            v12,
                            v53,
                            v51,
                            *((struct _W32KCDD_ENG_CALLBACKS **)a1 + 79)) )
      {
        return 0LL;
      }
    }
    while ( v39 );
    if ( v12 )
      a5->elStyleState.l = (unsigned __int16)(LODWORD(v54[4]) % LODWORD(v54[12])) | ((unsigned __int16)(LODWORD(v54[4]) / LODWORD(v54[12])) << 16);
    return 1LL;
  }
}
