/*
 * XREFs of EngPlgBlt @ 0x1C0270A50
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C00489E0 (NtGdiAlphaBlend.c)
 *     NtGdiTransparentBlt @ 0x1C014E240 (NtGdiTransparentBlt.c)
 *     ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C0263420 (-SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C02703D0 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0270658 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     EngPlgBlt @ 0x1C0270A50 (EngPlgBlt.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C02808C0 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     NtGdiEngPlgBlt @ 0x1C02972D0 (NtGdiEngPlgBlt.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00539F4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C008FDD0 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009E31C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009EB00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C009FF7C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     EngEraseSurface @ 0x1C00A5C10 (EngEraseSurface.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C015E8A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C015EC40 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C015EEA8 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C015FCB4 (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     EngPlgBlt @ 0x1C0270A50 (EngPlgBlt.c)
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C02B86A4 (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 *     ?lSizeDDA@@YAJPEAU_PLGDDA@@@Z @ 0x1C02BA640 (-lSizeDDA@@YAJPEAU_PLGDDA@@@Z.c)
 *     ?vAdvYDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C02BB6E0 (-vAdvYDDA@@YAXPEAU_PLGDDA@@@Z.c)
 */

BOOL __stdcall EngPlgBlt(
        SURFOBJ *psoTrg,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMsk,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlBrushOrg,
        POINTFIX *pptfx,
        RECTL *prcl,
        POINTL *pptl,
        ULONG iMode)
{
  ULONG v13; // r13d
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  BOOL v17; // esi
  int v18; // ecx
  int v19; // eax
  __int64 v20; // r8
  ULONG v21; // r9d
  char v22; // bl
  LONG v23; // r8d
  LONG v24; // edx
  int v25; // r9d
  int v26; // r10d
  int v27; // eax
  __int64 v28; // r9
  int v29; // eax
  int v30; // edx
  int v31; // r8d
  __int64 v32; // rbx
  CLIPOBJ *v33; // r13
  BOOL (__stdcall *v34)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v35; // rcx
  SURFOBJ *v36; // rcx
  struct _PLGDDA *v38; // rax
  struct _PLGDDA *v39; // rbx
  unsigned int v40; // eax
  unsigned __int64 v41; // rdx
  size_t v42; // rcx
  void (*const near *v43)(struct _PLGRUN *, struct _PLGRUN *, struct SURFACE *, struct _CLIPOBJ *); // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  LONG top; // r9d
  XLATEOBJ *v47; // rcx
  LONG v48; // ecx
  LONG v49; // eax
  POINTL *v50; // r11
  __int64 v51; // rax
  int v52; // r13d
  __int64 v53; // r15
  SURFOBJ *v54; // rcx
  SURFOBJ *v55; // rcx
  SURFOBJ *v56; // rdx
  SURFOBJ *v57; // rcx
  FIX x; // r10d
  FIX y; // ecx
  struct _RECTL *v60; // r9
  CLIPOBJ *v61; // r13
  int (*v62)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v63; // edx
  __int64 v64; // r8
  __int64 v65; // r11
  BOOL (__stdcall *v66)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  __int64 v67; // rdx
  char v68; // [rsp+60h] [rbp-538h]
  char v69; // [rsp+61h] [rbp-537h]
  ULONG v70; // [rsp+64h] [rbp-534h]
  LONG v71; // [rsp+64h] [rbp-534h]
  int v72; // [rsp+68h] [rbp-530h]
  XLATEOBJ *v73; // [rsp+70h] [rbp-528h]
  __int64 v74; // [rsp+78h] [rbp-520h] BYREF
  POINTL *v75; // [rsp+80h] [rbp-518h]
  _DWORD *v76; // [rsp+88h] [rbp-510h]
  LONG v77; // [rsp+90h] [rbp-508h]
  POINTFIX *v78; // [rsp+98h] [rbp-500h]
  void *v79; // [rsp+A0h] [rbp-4F8h]
  __int64 v80; // [rsp+A8h] [rbp-4F0h] BYREF
  char v81; // [rsp+B0h] [rbp-4E8h]
  int v82; // [rsp+B4h] [rbp-4E4h]
  struct _SURFOBJ *v83; // [rsp+B8h] [rbp-4E0h]
  struct _SURFOBJ *v84; // [rsp+C0h] [rbp-4D8h] BYREF
  CLIPOBJ *v85; // [rsp+C8h] [rbp-4D0h]
  __int64 v86; // [rsp+D0h] [rbp-4C8h]
  __int64 v87; // [rsp+D8h] [rbp-4C0h]
  RECTL *v88; // [rsp+E0h] [rbp-4B8h]
  POINTFIX *v89; // [rsp+E8h] [rbp-4B0h]
  CLIPOBJ *v90; // [rsp+F0h] [rbp-4A8h]
  __int64 v91; // [rsp+F8h] [rbp-4A0h] BYREF
  XLATEOBJ *v92; // [rsp+100h] [rbp-498h]
  __int64 v93; // [rsp+108h] [rbp-490h] BYREF
  int v94; // [rsp+110h] [rbp-488h]
  int v95; // [rsp+114h] [rbp-484h]
  __int64 v96; // [rsp+118h] [rbp-480h] BYREF
  char v97; // [rsp+120h] [rbp-478h]
  int v98; // [rsp+124h] [rbp-474h]
  __int64 v99; // [rsp+128h] [rbp-470h] BYREF
  char v100; // [rsp+130h] [rbp-468h]
  int v101; // [rsp+134h] [rbp-464h]
  int v102; // [rsp+138h] [rbp-460h]
  void (*const near *v103)(struct _PLGRUN *, struct _PLGRUN *, struct SURFACE *, struct _CLIPOBJ *); // [rsp+140h] [rbp-458h]
  __int64 v104; // [rsp+148h] [rbp-450h] BYREF
  XLATEOBJ *v105; // [rsp+150h] [rbp-448h]
  __int64 v106; // [rsp+158h] [rbp-440h] BYREF
  char v107; // [rsp+160h] [rbp-438h]
  int v108; // [rsp+164h] [rbp-434h]
  struct REGION *v109[2]; // [rsp+168h] [rbp-430h] BYREF
  struct REGION *v110[2]; // [rsp+178h] [rbp-420h] BYREF
  _QWORD v111[4]; // [rsp+188h] [rbp-410h] BYREF
  struct _PLGRUN *(*const near *v112)(struct _PLGDDA *, struct _PLGRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int); // [rsp+1A8h] [rbp-3F0h]
  __int64 v113; // [rsp+1B0h] [rbp-3E8h]
  struct REGION *v114[2]; // [rsp+1B8h] [rbp-3E0h] BYREF
  _QWORD v115[2]; // [rsp+1C8h] [rbp-3D0h] BYREF
  _QWORD v116[5]; // [rsp+1D8h] [rbp-3C0h] BYREF
  int v117; // [rsp+200h] [rbp-398h]
  __int64 v118; // [rsp+208h] [rbp-390h]
  struct _PLGDDA *v119; // [rsp+210h] [rbp-388h]
  struct _PLGRUN *(*const near *v120)(struct _PLGDDA *, struct _PLGRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int); // [rsp+218h] [rbp-380h]
  CLIPOBJ *v121; // [rsp+220h] [rbp-378h]
  __int64 v122; // [rsp+228h] [rbp-370h] BYREF
  _QWORD v123[4]; // [rsp+230h] [rbp-368h] BYREF
  char v124[8]; // [rsp+250h] [rbp-348h] BYREF
  __int64 v125; // [rsp+258h] [rbp-340h]
  RECTL v126; // [rsp+2D0h] [rbp-2C8h] BYREF
  RECTL v127; // [rsp+2E0h] [rbp-2B8h] BYREF
  __int64 v128; // [rsp+2F0h] [rbp-2A8h] BYREF
  int v129; // [rsp+2F8h] [rbp-2A0h]
  int v130; // [rsp+2FCh] [rbp-29Ch]
  struct _RECTL v131; // [rsp+300h] [rbp-298h] BYREF
  __int64 v132; // [rsp+310h] [rbp-288h] BYREF
  int v133; // [rsp+318h] [rbp-280h]
  int v134; // [rsp+31Ch] [rbp-27Ch]
  struct _RECTL v135; // [rsp+320h] [rbp-278h] BYREF
  _BYTE v136[160]; // [rsp+330h] [rbp-268h] BYREF
  _BYTE v137[4]; // [rsp+3D0h] [rbp-1C8h] BYREF
  char v138[156]; // [rsp+3D4h] [rbp-1C4h] BYREF
  CLIPOBJ pcoa; // [rsp+470h] [rbp-128h] BYREF
  POINTFIX v140; // [rsp+510h] [rbp-88h] BYREF
  POINTFIX v141; // [rsp+518h] [rbp-80h]
  POINTFIX v142; // [rsp+520h] [rbp-78h]
  int v143; // [rsp+528h] [rbp-70h]
  int v144; // [rsp+52Ch] [rbp-6Ch]
  POINTFIX v145; // [rsp+530h] [rbp-68h] BYREF
  POINTFIX v146; // [rsp+538h] [rbp-60h] BYREF
  int v147; // [rsp+540h] [rbp-58h]
  int v148; // [rsp+544h] [rbp-54h]
  FIX v149; // [rsp+548h] [rbp-50h]
  FIX v150; // [rsp+54Ch] [rbp-4Ch]

  v90 = pco;
  v83 = psoSrc;
  v84 = psoTrg;
  v121 = pco;
  v73 = pxlo;
  v78 = pptfx;
  v116[4] = prcl;
  v75 = pptl;
  v13 = iMode;
  v70 = iMode;
  v14 = SURFOBJ_TO_SURFACE(psoTrg);
  v118 = v14;
  v15 = SURFOBJ_TO_SURFACE(psoSrc);
  v16 = SURFOBJ_TO_SURFACE(psoMsk);
  v87 = v16;
  v72 = 0;
  if ( iMode != 4 || v16 )
  {
    v68 = 0;
    v17 = 1;
  }
  else
  {
    v17 = 1;
    v68 = 1;
  }
  if ( iMode - 1 <= 3 )
  {
    v18 = *(_DWORD *)(v14 + 96);
    if ( (unsigned int)(v18 - 7) > 2 )
    {
      v19 = *(_DWORD *)(v15 + 96);
      if ( v19 != 9 && v18 != 10 && v19 != 10 )
      {
        ERECTL::vOrder((ERECTL *)prcl);
        if ( iMode < v21 && !v20 && (*(_DWORD *)(v15 + 96) == 1 || *(_DWORD *)(v14 + 96) == 1) )
        {
          v22 = 1;
        }
        else
        {
          v22 = 0;
          if ( iMode < v21 )
            v13 = v21;
          v70 = v13;
        }
        v69 = v22;
        v91 = *(_QWORD *)(v14 + 48);
        v104 = *(_QWORD *)(v15 + 48);
        v80 = 0LL;
        v81 = 0;
        v82 = 0;
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v136);
        v92 = 0LL;
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v109);
        v23 = *(_DWORD *)(v15 + 60);
        v24 = *(_DWORD *)(v15 + 56);
        *(_QWORD *)&v127.left = 0LL;
        v127.right = v24;
        v127.bottom = v23;
        if ( v104 && v15 == *(_QWORD *)(v104 + 2552) && (*(_DWORD *)(v104 + 40) & 0x20000) != 0 )
        {
          v127.left = *(_DWORD *)(v104 + 2584);
          v127.right = *(_DWORD *)(v104 + 2584) + v24;
          v127.top = *(_DWORD *)(v104 + 2588);
          v127.bottom = v23 + *(_DWORD *)(v104 + 2588);
        }
        if ( !v22 && !*(_WORD *)(v14 + 100) && *(_QWORD *)(v14 + 32) != *(_QWORD *)(v15 + 32) && !v68 )
          goto LABEL_42;
        v140 = *v78;
        v141 = v78[1];
        v142 = v78[2];
        v143 = v141.x + v142.x - v140.x;
        v144 = v142.y - v140.y + v141.y;
        v25 = (v141.x > v140.x) ^ (v141.x <= v143);
        v26 = (v141.y <= v144) ^ (v141.y > v140.y);
        v27 = v25 ^ 3;
        if ( *(&v140.x + 2 * v25) <= *(&v140.x + 2 * (v25 ^ 3LL)) )
          v27 = (v141.x > v140.x) ^ (v141.x <= v143);
        v28 = v27;
        v126.left = (*(&v140.x + 2 * v27) >> 4) - 1;
        v29 = v26 ^ 3;
        if ( *(&v140.y + 2 * v26) <= *(&v140.y + 2 * (v26 ^ 3LL)) )
          v29 = (v141.y <= v144) ^ (v141.y > v140.y);
        v126.top = (*(&v140.y + 2 * v29) >> 4) - 1;
        v126.right = ((*(&v140.x + 2 * (v28 ^ 3)) + 15) >> 4) + 1;
        v126.bottom = ((*(&v140.y + 2 * (v29 ^ 3LL)) + 15) >> 4) + 1;
        v30 = *(_DWORD *)(v14 + 60);
        v31 = *(_DWORD *)(v14 + 56);
        v93 = 0LL;
        v94 = v31;
        v95 = v30;
        if ( v91 && v14 == *(_QWORD *)(v91 + 2552) && (*(_DWORD *)(v91 + 40) & 0x20000) != 0 )
        {
          LODWORD(v93) = *(_DWORD *)(v91 + 2584);
          v94 = v31 + v93;
          HIDWORD(v93) = *(_DWORD *)(v91 + 2588);
          v95 = v30 + HIDWORD(v93);
        }
        ERECTL::operator*=(&v126.left, (int *)&v93);
        if ( ERECTL::bEmpty((ERECTL *)&v126) )
          goto LABEL_61;
        if ( v22
          || *(_WORD *)(v14 + 100)
          || v68
          || v126.left <= prcl->right
          && v126.right >= prcl->left
          && v126.top <= prcl->bottom
          && v126.bottom >= prcl->top )
        {
          v140.x -= 16 * v126.left;
          v140.y -= 16 * v126.top;
          v141.x -= 16 * v126.left;
          v141.y -= 16 * v126.top;
          v142.x -= 16 * v126.left;
          v142.y -= 16 * v126.top;
          memset(v116, 0, 0x20uLL);
          HIDWORD(v116[0]) = v126.right - v126.left + 1;
          LODWORD(v116[1]) = v126.bottom - v126.top + 1;
          v116[2] = 0LL;
          LODWORD(v116[0]) = *(_DWORD *)(v14 + 96);
          LODWORD(v116[3]) = *(_DWORD *)(v14 + 112) & 0x40000;
          if ( v22 )
          {
            LODWORD(v116[0]) = 1;
          }
          else if ( v68 )
          {
            LODWORD(v116[0]) = *(_DWORD *)(v15 + 96);
          }
          SURFMEM::bCreateDIB((SURFMEM *)&v80, (struct _DEVBITMAPINFO *)v116, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v80 )
            goto LABEL_60;
          v74 = *(_QWORD *)&v126.left;
          if ( !v109[0] )
            goto LABEL_60;
          *(_QWORD *)&v126.left = 0LL;
          v126.right -= v74;
          v126.bottom -= HIDWORD(v74);
          RGNOBJ::vSet((RGNOBJ *)v109, &v126);
          XCLIPOBJ::vSetup((XCLIPOBJ *)v136, v109[0], (struct ERECTL *)&v126, 1);
          PDEVOBJ::vSync((PDEVOBJ *)&v91, v84, 0LL, 0);
          if ( v87 )
          {
            if ( (*(_DWORD *)(v14 + 112) & 0x400) != 0 )
              v34 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v91 + 2840);
            else
              v34 = EngCopyBits;
            v35 = 0LL;
            if ( v80 )
              v35 = v80 + 24;
            ((void (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, RECTL *, __int64 *))v34)(
              v35,
              v14 + 24,
              0LL,
              xloIdent,
              &v126,
              &v74);
          }
          if ( v22 )
          {
            v36 = 0LL;
            if ( v80 )
              v36 = (SURFOBJ *)(v80 + 24);
            if ( !EngEraseSurface(v36, &v126, (v13 != 1) - 1) )
            {
LABEL_60:
              v17 = 0;
              goto LABEL_61;
            }
          }
          v32 = v80;
          v76 = (_DWORD *)v80;
          v89 = &v140;
          v33 = (CLIPOBJ *)v136;
          v85 = (CLIPOBJ *)v136;
          if ( v69 && *(_DWORD *)(v15 + 96) == 1 || v68 )
          {
            v92 = pxlo;
            v73 = 0LL;
          }
          else
          {
            v92 = xloIdent;
          }
        }
        else
        {
LABEL_42:
          v32 = v14;
          v76 = (_DWORD *)v14;
          v89 = v78;
          v33 = v90;
          v85 = v90;
        }
        PDEVOBJ::vSync((PDEVOBJ *)&v104, v83, 0LL, 0);
        ERECTL::operator*=(&v127.left, &prcl->left);
        if ( !ERECTL::bEmpty((ERECTL *)&v127) )
        {
          v99 = 0LL;
          v100 = 0;
          v101 = 0;
          if ( *(_WORD *)(v15 + 100) || (unsigned int)(*(_DWORD *)(v15 + 96) - 7) <= 1 )
          {
            memset(v123, 0, sizeof(v123));
            HIDWORD(v123[0]) = v127.right - v127.left + 1;
            LODWORD(v123[1]) = v127.bottom - v127.top + 1;
            v123[2] = 0LL;
            LODWORD(v123[0]) = *(_DWORD *)(v32 + 96);
            LODWORD(v123[3]) = *(_DWORD *)(v15 + 112) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v99, (struct _DEVBITMAPINFO *)v123, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( !v99 )
            {
LABEL_72:
              v17 = 0;
              SURFMEM::~SURFMEM((SURFMEM *)&v99);
              goto LABEL_61;
            }
            v128 = 0LL;
            v129 = v127.right - v127.left;
            v130 = v127.bottom - v127.top;
            if ( (*(_DWORD *)(v15 + 112) & 0x400) != 0 )
              (*(void (__fastcall **)(__int64, __int64, _QWORD, XLATEOBJ *, __int64 *, RECTL *))(v104 + 2840))(
                v99 + 24,
                v15 + 24,
                0LL,
                v73,
                &v128,
                &v127);
            else
              ((void (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *, __int64 *, RECTL *))EngCopyBits)(
                v99 + 24,
                v15 + 24,
                0LL,
                v73,
                &v128,
                &v127);
            LODWORD(v128) = prcl->left - v127.left;
            HIDWORD(v128) = prcl->top - v127.top;
            v129 = prcl->right - v127.left;
            v130 = prcl->bottom - v127.top;
            v15 = v99;
            v73 = 0LL;
            v105 = 0LL;
            v88 = (RECTL *)&v128;
            v127.right -= v127.left;
            v127.bottom -= v127.top;
            *(_QWORD *)&v127.left = 0LL;
          }
          else
          {
            v105 = v73;
            v88 = prcl;
          }
          v113 = v15;
          v122 = *(_QWORD *)(v32 + 48);
          PDEVOBJ::vSync((PDEVOBJ *)&v122, (struct _SURFOBJ *)(v32 + 24), 0LL, 0);
          v38 = (struct _PLGDDA *)PALLOCMEM2(0x18CuLL, 1650946119LL, 1);
          v39 = v38;
          v119 = v38;
          if ( !v38 )
          {
LABEL_157:
            SURFMEM::~SURFMEM((SURFMEM *)&v99);
            v17 = v72;
            goto LABEL_61;
          }
          if ( !(unsigned int)bInitPlgDDA(v38, &v127, v88, v89) )
          {
LABEL_79:
            v72 = 1;
LABEL_156:
            Win32FreePool(v39);
            goto LABEL_157;
          }
          v112 = (&apfnRead)[*(unsigned int *)(v15 + 96)];
          v120 = v112;
          v40 = lSizeDDA(v39);
          v41 = v40 * (unsigned __int64)(unsigned int)(v127.right - v127.left + 2);
          v42 = 0xFFFFFFFFLL;
          if ( v41 <= 0xFFFFFFFF )
            v42 = (unsigned int)v41;
          v117 = v42;
          if ( v41 > 0xFFFFFFFF || !(_DWORD)v42 )
            goto LABEL_156;
          if ( v69 )
          {
            *(_DWORD *)v39 = 1;
            v43 = (&apfnBogus)[v70];
          }
          else
          {
            *(_DWORD *)v39 = 0;
            v43 = (&apfnWrite)[v76[24]];
          }
          v83 = (struct _SURFOBJ *)v43;
          v103 = v43;
          v79 = PALLOCMEM2(v42, 1650946119LL, 1);
          if ( !v79 )
            goto LABEL_156;
          top = v127.top;
          v71 = v127.top;
          v86 = *(_QWORD *)(v15 + 80) + *(_DWORD *)(v15 + 88) * v127.top;
          if ( !v87 )
          {
            v75 = 0LL;
            goto LABEL_96;
          }
          if ( !bUMPDSecurityGateEx(v45, v44) || v75 )
          {
            v102 = v127.left + v75->x - v88->left;
            top = v127.top;
            v71 = v127.top;
            v75 = (POINTL *)(*(_QWORD *)(v87 + 80) + *(_DWORD *)(v87 + 88) * (v127.top + v75->y - v88->top));
LABEL_96:
            v47 = v73;
            if ( v73 )
            {
              if ( (v73->flXlate & 1) != 0 )
                v47 = 0LL;
              v73 = v47;
              v105 = v47;
            }
            if ( !v33 || !v33->iDComplexity )
            {
              v48 = v76[15];
              v49 = v76[14];
              *(_QWORD *)&v131.left = 0LL;
              v131.right = v49;
              v131.bottom = v48;
              RGNOBJ::vSet((RGNOBJ *)v109, &v131);
              XCLIPOBJ::vSetup((XCLIPOBJ *)v136, v109[0], (struct ERECTL *)&v131, 1);
              v33 = (CLIPOBJ *)v136;
              v85 = (CLIPOBJ *)v136;
              top = v127.top;
              v71 = v127.top;
              v47 = v73;
            }
            if ( v33->rclBounds.left >= v33->rclBounds.right || v33->rclBounds.top >= v33->rclBounds.bottom )
            {
              Win32FreePool(v79);
              goto LABEL_156;
            }
            v50 = v75;
            while ( 1 )
            {
              v77 = top;
              if ( top >= v127.bottom )
                break;
              *(_OWORD *)((char *)v39 + 68) = *(_OWORD *)((char *)v39 + 4);
              *(_OWORD *)((char *)v39 + 84) = *(_OWORD *)((char *)v39 + 20);
              *(_OWORD *)((char *)v39 + 100) = *(_OWORD *)((char *)v39 + 36);
              *(_OWORD *)((char *)v39 + 116) = *(_OWORD *)((char *)v39 + 52);
              v51 = ((__int64 (__fastcall *)(struct _PLGDDA *, void *, __int64, POINTL *, XLATEOBJ *, LONG, LONG, int))v112)(
                      v39,
                      v79,
                      v86,
                      v50,
                      v47,
                      v127.left,
                      v127.right,
                      v102);
              ((void (__fastcall *)(void *, __int64, _DWORD *, CLIPOBJ *))v103)(v79, v51, v76, v33);
              vAdvYDDA(v39);
              v86 += *(int *)(v15 + 88);
              if ( v50 )
              {
                v50 = (POINTL *)((char *)v50 + *(int *)(v87 + 88));
                v75 = v50;
              }
              top = ++v71;
              v47 = v73;
            }
            Win32FreePool(v79);
            if ( v76 == (_DWORD *)v14 )
              goto LABEL_79;
            v52 = 0;
            v96 = 0LL;
            v97 = 0;
            v98 = 0;
            v53 = 0LL;
            if ( prcl->right - prcl->left == v127.right && prcl->bottom - prcl->top == v127.bottom )
            {
              v52 = 1;
            }
            else
            {
              memset(v111, 0, sizeof(v111));
              HIDWORD(v111[0]) = v126.right + 1;
              LODWORD(v111[1]) = v126.bottom + 1;
              v111[2] = 0LL;
              LODWORD(v111[0]) = 1;
              LODWORD(v111[3]) = *(_DWORD *)(v14 + 112) & 0x40000;
              SURFMEM::bCreateDIB((SURFMEM *)&v96, (struct _DEVBITMAPINFO *)v111, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
              if ( v96 )
              {
                v106 = 0LL;
                v107 = 0;
                v108 = 0;
                HIDWORD(v111[0]) = v127.right;
                LODWORD(v111[1]) = v127.bottom;
                v111[2] = 0LL;
                LODWORD(v111[0]) = 1;
                LODWORD(v111[3]) = *(_DWORD *)(v14 + 112) & 0x40000;
                SURFMEM::bCreateDIB((SURFMEM *)&v106, (struct _DEVBITMAPINFO *)v111, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v114);
                if ( v106 && v114[0] )
                {
                  RGNOBJ::vSet((RGNOBJ *)v114, &v126);
                  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pcoa, v114[0], (struct ERECTL *)&v126, 1);
                  v54 = v96 ? (SURFOBJ *)(v96 + 24) : 0LL;
                  if ( EngEraseSurface(v54, &v126, 0) )
                  {
                    v55 = 0LL;
                    if ( v106 )
                      v55 = (SURFOBJ *)(v106 + 24);
                    if ( EngEraseSurface(v55, &v127, 0xFFFFFFFF) )
                    {
                      v56 = 0LL;
                      if ( v106 )
                        v56 = (SURFOBJ *)(v106 + 24);
                      v57 = 0LL;
                      if ( v96 )
                        v57 = (SURFOBJ *)(v96 + 24);
                      if ( EngPlgBlt(v57, v56, 0LL, &pcoa, 0LL, 0LL, 0LL, v89, v88, 0LL, 3u) )
                      {
                        v53 = v96;
                        v52 = 1;
                      }
                    }
                  }
                }
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v114);
                SURFMEM::~SURFMEM((SURFMEM *)&v106);
              }
            }
            PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v124);
            if ( !v52 )
              goto LABEL_154;
            if ( !v125 )
              goto LABEL_154;
            v145 = *v78;
            v146 = v78[1];
            x = v78[2].x;
            v147 = v146.x + x - v145.x;
            y = v78[2].y;
            v148 = v146.y + y - v145.y;
            v149 = x;
            v150 = y;
            if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)v124, 0LL, (struct _POINTL *)&v145)
              || !EPATHOBJ::bPolyLineTo((EPATHOBJ *)v124, 0LL, (struct _POINTL *)&v146, 3u) )
            {
LABEL_154:
              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v124);
              SURFMEM::~SURFMEM((SURFMEM *)&v96);
              goto LABEL_156;
            }
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v115, (struct EPATHOBJ *)v124, 1u, v60);
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v110);
            if ( v115[0] && v110[0] )
            {
              v61 = v90;
              if ( !v90 )
              {
                if ( !RGNOBJ::bCopy((RGNOBJ *)v110, (struct RGNOBJ *)v115) )
                  goto LABEL_153;
LABEL_141:
                v135 = *(struct _RECTL *)((char *)v110[0] + 88);
                if ( !v61 || bIntersect(&v135, &v61->rclBounds, &v135) )
                {
                  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v137, v110[0], (struct ERECTL *)&v135, 1);
                  if ( !ERECTL::bEmpty((ERECTL *)v138) )
                  {
                    v126.left += v74;
                    v126.top += HIDWORD(v74);
                    v126.right += v74;
                    v126.bottom += HIDWORD(v74);
                    v74 = 0LL;
                    ++*(_DWORD *)(v14 + 92);
                    if ( v68 )
                    {
                      v132 = 0LL;
                      v133 = v126.right - v126.left;
                      v134 = v126.bottom - v126.top;
                      v84 = 0LL;
                      if ( (*(_DWORD *)(v14 + 112) & 2) != 0 )
                        v66 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v91 + 2848);
                      else
                        v66 = EngStretchBlt;
                      v67 = 0LL;
                      if ( v80 )
                        v67 = v80 + 24;
                      ((void (__fastcall *)(__int64, __int64, __int64, _BYTE *, XLATEOBJ *, _QWORD, struct _SURFOBJ **, RECTL *, __int64 *, __int64 *, int))v66)(
                        v14 + 24,
                        v67,
                        (v53 + 24) & -(__int64)(v53 != 0),
                        v137,
                        v92,
                        0LL,
                        &v84,
                        &v126,
                        &v132,
                        &v74,
                        4);
                    }
                    else
                    {
                      v62 = SURFACE::pfnBitBlt((SURFACE *)v14);
                      ((void (__fastcall *)(__int64, __int64, __int64, _BYTE *, XLATEOBJ *, RECTL *, __int64 *, __int64 *, _QWORD, _QWORD, int))v62)(
                        v14 + 24,
                        v65,
                        v64,
                        v137,
                        v92,
                        &v126,
                        &v74,
                        &v74,
                        0LL,
                        0LL,
                        v63);
                    }
                  }
                }
                v72 = 1;
                goto LABEL_153;
              }
              if ( RGNOBJ::bMerge(
                     (RGNOBJ *)v110,
                     (struct RGNOBJ *)v115,
                     (struct RGNOBJ *)&v90[2].rclBounds.top,
                     BYTE1(gafjRgnOp)) )
              {
                goto LABEL_141;
              }
            }
LABEL_153:
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v110);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v115);
            goto LABEL_154;
          }
          if ( gfUMPDDebug )
            DbgPrint("windows\\core\\ntgdi\\gre\\windows\\plgblt.cxx:%d:EngPlgBlt:pptl/pptlMask == NULL\n", 1758);
          Win32FreePool(v79);
          Win32FreePool(v39);
          goto LABEL_72;
        }
LABEL_61:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v109);
        SURFMEM::~SURFMEM((SURFMEM *)&v80);
        return v17;
      }
    }
  }
  return 0;
}
