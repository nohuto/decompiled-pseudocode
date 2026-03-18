/*
 * XREFs of EngPlgBlt @ 0x1C0002DF0
 * Callers:
 *     EngPlgBlt @ 0x1C0002DF0 (EngPlgBlt.c)
 *     NtGdiAlphaBlend @ 0x1C0069D70 (NtGdiAlphaBlend.c)
 *     NtGdiTransparentBlt @ 0x1C0147950 (NtGdiTransparentBlt.c)
 *     ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C027CAA0 (-SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C0288478 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C02886F4 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C0296DF0 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     NtGdiEngPlgBlt @ 0x1C02AC390 (NtGdiEngPlgBlt.c)
 * Callees:
 *     EngPlgBlt @ 0x1C0002DF0 (EngPlgBlt.c)
 *     ?vAdvYDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C0003538 (-vAdvYDDA@@YAXPEAU_PLGDDA@@@Z.c)
 *     ?lSizeDDA@@YAJPEAU_PLGDDA@@@Z @ 0x1C00037B4 (-lSizeDDA@@YAJPEAU_PLGDDA@@@Z.c)
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C00038AC (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00589F4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00600A4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EE7C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00F4F58 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     EngEraseSurface @ 0x1C00FBD70 (EngEraseSurface.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C010A7E0 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C016486C (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C01648D4 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C01648FC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C016507C (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
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
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rax
  BOOL v17; // edi
  int v18; // ecx
  int v19; // eax
  __int64 v20; // r8
  ULONG v21; // r9d
  char v22; // r12
  LONG v23; // r8d
  LONG v24; // edx
  __int64 v25; // r12
  CLIPOBJ *v26; // r13
  struct _PLGDDA *v27; // rax
  struct _PLGDDA *v28; // r15
  unsigned int v29; // eax
  unsigned __int64 v30; // r9
  void (*const near *v31)(struct _PLGRUN *, struct _PLGRUN *, struct SURFACE *, struct _CLIPOBJ *); // rax
  LONG top; // r9d
  XLATEOBJ *v33; // rcx
  LONG v34; // ecx
  LONG v35; // eax
  POINTL *v36; // r11
  __int64 v37; // rax
  int v39; // r9d
  int v40; // r10d
  int v41; // eax
  __int64 v42; // r9
  int v43; // eax
  int v44; // edx
  int v45; // r8d
  BOOL (__stdcall *v46)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v47; // rcx
  SURFOBJ *v48; // rcx
  int v49; // r12d
  __int64 v50; // r14
  SURFOBJ *v51; // rcx
  SURFOBJ *v52; // rcx
  SURFOBJ *v53; // rdx
  SURFOBJ *v54; // rcx
  FIX x; // edx
  FIX y; // eax
  struct _RECTL *v57; // r9
  CLIPOBJ *v58; // r13
  int (*v59)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v60; // edx
  __int64 v61; // r8
  __int64 v62; // r11
  BOOL (__stdcall *v63)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  __int64 v64; // rdx
  char v65; // [rsp+60h] [rbp-548h]
  char v66; // [rsp+61h] [rbp-547h]
  ULONG v67; // [rsp+64h] [rbp-544h]
  LONG v68; // [rsp+64h] [rbp-544h]
  int v69; // [rsp+68h] [rbp-540h]
  XLATEOBJ *v70; // [rsp+70h] [rbp-538h]
  __int64 v71; // [rsp+78h] [rbp-530h] BYREF
  POINTL *v72; // [rsp+80h] [rbp-528h]
  LONG v73; // [rsp+88h] [rbp-520h]
  POINTFIX *v74; // [rsp+90h] [rbp-518h]
  __int64 v75; // [rsp+98h] [rbp-510h]
  __int64 v76; // [rsp+A0h] [rbp-508h] BYREF
  char v77; // [rsp+A8h] [rbp-500h]
  int v78; // [rsp+ACh] [rbp-4FCh]
  CLIPOBJ *v79; // [rsp+B0h] [rbp-4F8h]
  __int64 v80; // [rsp+B8h] [rbp-4F0h]
  __int64 v81; // [rsp+C0h] [rbp-4E8h]
  RECTL *v82; // [rsp+C8h] [rbp-4E0h]
  POINTFIX *v83; // [rsp+D0h] [rbp-4D8h]
  CLIPOBJ *v84; // [rsp+D8h] [rbp-4D0h]
  __int64 v85; // [rsp+E0h] [rbp-4C8h] BYREF
  XLATEOBJ *v86; // [rsp+E8h] [rbp-4C0h]
  struct _SURFOBJ *v87; // [rsp+F0h] [rbp-4B8h]
  struct _SURFOBJ *v88; // [rsp+F8h] [rbp-4B0h] BYREF
  __int64 v89; // [rsp+100h] [rbp-4A8h] BYREF
  char v90; // [rsp+108h] [rbp-4A0h]
  int v91; // [rsp+10Ch] [rbp-49Ch]
  __int64 v92; // [rsp+110h] [rbp-498h] BYREF
  char v93; // [rsp+118h] [rbp-490h]
  int v94; // [rsp+11Ch] [rbp-48Ch]
  __int64 v95; // [rsp+120h] [rbp-488h] BYREF
  int v96; // [rsp+128h] [rbp-480h]
  int v97; // [rsp+12Ch] [rbp-47Ch]
  struct REGION *v98[2]; // [rsp+138h] [rbp-470h] BYREF
  __int64 v99; // [rsp+148h] [rbp-460h] BYREF
  __int64 v100; // [rsp+150h] [rbp-458h]
  void (*const near *v101)(struct _PLGRUN *, struct _PLGRUN *, struct SURFACE *, struct _CLIPOBJ *); // [rsp+158h] [rbp-450h]
  XLATEOBJ *v102; // [rsp+160h] [rbp-448h]
  __int64 v103; // [rsp+168h] [rbp-440h] BYREF
  char v104; // [rsp+170h] [rbp-438h]
  int v105; // [rsp+174h] [rbp-434h]
  struct REGION *v106[2]; // [rsp+178h] [rbp-430h] BYREF
  int v107; // [rsp+188h] [rbp-420h] BYREF
  LONG right; // [rsp+18Ch] [rbp-41Ch]
  LONG bottom; // [rsp+190h] [rbp-418h]
  int v110; // [rsp+194h] [rbp-414h]
  __int64 v111; // [rsp+198h] [rbp-410h]
  int v112; // [rsp+1A0h] [rbp-408h]
  int v113; // [rsp+1A4h] [rbp-404h]
  RECTL *v114; // [rsp+1A8h] [rbp-400h]
  struct _PLGRUN *(*const near *v115)(struct _PLGDDA *, struct _PLGRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int); // [rsp+1B0h] [rbp-3F8h]
  __int64 v116; // [rsp+1B8h] [rbp-3F0h]
  __int64 v117; // [rsp+1C0h] [rbp-3E8h]
  struct REGION *v118[2]; // [rsp+1C8h] [rbp-3E0h] BYREF
  _QWORD v119[2]; // [rsp+1D8h] [rbp-3D0h] BYREF
  _DWORD v120[4]; // [rsp+1E8h] [rbp-3C0h] BYREF
  __int64 v121; // [rsp+1F8h] [rbp-3B0h]
  int v122; // [rsp+200h] [rbp-3A8h]
  int v123; // [rsp+204h] [rbp-3A4h]
  int v124; // [rsp+208h] [rbp-3A0h]
  struct _PLGDDA *v125; // [rsp+210h] [rbp-398h]
  struct _PLGRUN *(*const near *v126)(struct _PLGDDA *, struct _PLGRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int); // [rsp+218h] [rbp-390h]
  CLIPOBJ *v127; // [rsp+220h] [rbp-388h]
  _QWORD v128[2]; // [rsp+228h] [rbp-380h] BYREF
  _DWORD v129[4]; // [rsp+238h] [rbp-370h] BYREF
  __int64 v130; // [rsp+248h] [rbp-360h]
  int v131; // [rsp+250h] [rbp-358h]
  int v132; // [rsp+254h] [rbp-354h]
  char v133[8]; // [rsp+260h] [rbp-348h] BYREF
  __int64 v134; // [rsp+268h] [rbp-340h]
  RECTL v135; // [rsp+2E0h] [rbp-2C8h] BYREF
  RECTL v136; // [rsp+2F0h] [rbp-2B8h] BYREF
  __int64 v137; // [rsp+300h] [rbp-2A8h] BYREF
  __int64 v138; // [rsp+308h] [rbp-2A0h]
  struct _RECTL v139; // [rsp+310h] [rbp-298h] BYREF
  __int64 v140; // [rsp+320h] [rbp-288h] BYREF
  int v141; // [rsp+328h] [rbp-280h]
  int v142; // [rsp+32Ch] [rbp-27Ch]
  struct _RECTL v143; // [rsp+330h] [rbp-278h] BYREF
  _BYTE v144[160]; // [rsp+340h] [rbp-268h] BYREF
  _BYTE v145[4]; // [rsp+3E0h] [rbp-1C8h] BYREF
  char v146[156]; // [rsp+3E4h] [rbp-1C4h] BYREF
  CLIPOBJ pcoa; // [rsp+480h] [rbp-128h] BYREF
  POINTFIX v148; // [rsp+520h] [rbp-88h] BYREF
  POINTFIX v149; // [rsp+528h] [rbp-80h]
  POINTFIX v150; // [rsp+530h] [rbp-78h]
  int v151; // [rsp+538h] [rbp-70h]
  int v152; // [rsp+53Ch] [rbp-6Ch]
  POINTFIX v153; // [rsp+540h] [rbp-68h] BYREF
  POINTFIX v154; // [rsp+548h] [rbp-60h] BYREF
  int v155; // [rsp+550h] [rbp-58h]
  int v156; // [rsp+554h] [rbp-54h]
  FIX v157; // [rsp+558h] [rbp-50h]
  FIX v158; // [rsp+55Ch] [rbp-4Ch]

  v84 = pco;
  v87 = psoSrc;
  v88 = psoTrg;
  v127 = pco;
  v70 = pxlo;
  v74 = pptfx;
  v114 = prcl;
  v72 = pptl;
  v13 = iMode;
  v67 = iMode;
  v14 = ((__int64 (*)(void))SURFOBJ_TO_SURFACE)();
  v128[1] = v14;
  v15 = SURFOBJ_TO_SURFACE(psoSrc);
  v16 = SURFOBJ_TO_SURFACE(psoMsk);
  v81 = v16;
  v69 = 0;
  if ( iMode != 4 || v16 )
  {
    v65 = 0;
    v17 = 1;
  }
  else
  {
    v17 = 1;
    v65 = 1;
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
          v66 = 1;
        }
        else
        {
          v22 = 0;
          v66 = 0;
          if ( iMode < v21 )
            v13 = v21;
          v67 = v13;
        }
        v85 = *(_QWORD *)(v14 + 48);
        v99 = *(_QWORD *)(v15 + 48);
        v76 = 0LL;
        v77 = 0;
        v78 = 0;
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v144);
        v86 = 0LL;
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v98);
        v23 = *(_DWORD *)(v15 + 60);
        v24 = *(_DWORD *)(v15 + 56);
        *(_QWORD *)&v136.left = 0LL;
        v136.right = v24;
        v136.bottom = v23;
        if ( v99 && v15 == *(_QWORD *)(v99 + 2552) && (*(_DWORD *)(v99 + 40) & 0x20000) != 0 )
        {
          v136.left = *(_DWORD *)(v99 + 2584);
          v136.right = *(_DWORD *)(v99 + 2584) + v24;
          v136.top = *(_DWORD *)(v99 + 2588);
          v136.bottom = v23 + *(_DWORD *)(v99 + 2588);
        }
        if ( !v22 && !*(_WORD *)(v14 + 100) && *(_QWORD *)(v14 + 32) != *(_QWORD *)(v15 + 32) && !v65 )
          goto LABEL_21;
        v148 = *v74;
        v149 = v74[1];
        v150 = v74[2];
        v151 = v150.x + v149.x - v148.x;
        v152 = v74[1].y + v74[2].y - v74->y;
        v39 = (v149.x <= v151) ^ (v149.x > v148.x);
        v40 = (v149.y > v148.y) ^ (v149.y <= v152);
        v41 = v39 ^ 3;
        if ( *(&v148.x + 2 * v39) <= *(&v148.x + 2 * (v39 ^ 3LL)) )
          v41 = (v149.x <= v151) ^ (v149.x > v148.x);
        v42 = v41;
        v135.left = (*(&v148.x + 2 * v41) >> 4) - 1;
        v43 = v40 ^ 3;
        if ( *(&v148.y + 2 * v40) <= *(&v148.y + 2 * (v40 ^ 3LL)) )
          v43 = (v149.y > v148.y) ^ (v149.y <= v152);
        v135.top = (*(&v148.y + 2 * v43) >> 4) - 1;
        v135.right = ((*(&v148.x + 2 * (v42 ^ 3)) + 15) >> 4) + 1;
        v135.bottom = ((*(&v148.y + 2 * (v43 ^ 3LL)) + 15) >> 4) + 1;
        v44 = *(_DWORD *)(v14 + 60);
        v45 = *(_DWORD *)(v14 + 56);
        v95 = 0LL;
        v96 = v45;
        v97 = v44;
        if ( v85 && v14 == *(_QWORD *)(v85 + 2552) && (*(_DWORD *)(v85 + 40) & 0x20000) != 0 )
        {
          LODWORD(v95) = *(_DWORD *)(v85 + 2584);
          v96 = v45 + v95;
          HIDWORD(v95) = *(_DWORD *)(v85 + 2588);
          v97 = v44 + HIDWORD(v95);
        }
        ERECTL::operator*=(&v135, &v95);
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v135) )
          goto LABEL_53;
        if ( v22
          || *(_WORD *)(v14 + 100)
          || v65
          || v135.left <= prcl->right
          && v135.right >= prcl->left
          && v135.top <= prcl->bottom
          && v135.bottom >= prcl->top )
        {
          v148.x -= 16 * v135.left;
          v148.y -= 16 * v135.top;
          v149.x -= 16 * v135.left;
          v149.y -= 16 * v135.top;
          v150.x -= 16 * v135.left;
          v150.y -= 16 * v135.top;
          v120[3] = 0;
          v123 = 0;
          v120[1] = v135.right - v135.left + 1;
          v120[2] = v135.bottom - v135.top + 1;
          v121 = 0LL;
          v120[0] = *(_DWORD *)(v14 + 96);
          v122 = *(_DWORD *)(v14 + 112) & 0x40000;
          if ( v22 )
          {
            v120[0] = 1;
          }
          else if ( v65 )
          {
            v120[0] = *(_DWORD *)(v15 + 96);
          }
          SURFMEM::bCreateDIB((SURFMEM *)&v76, (struct _DEVBITMAPINFO *)v120, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v76 )
            goto LABEL_93;
          v71 = *(_QWORD *)&v135.left;
          if ( !v98[0] )
            goto LABEL_93;
          *(_QWORD *)&v135.left = 0LL;
          v135.right -= v71;
          v135.bottom -= HIDWORD(v71);
          RGNOBJ::vSet((RGNOBJ *)v98, &v135);
          XCLIPOBJ::vSetup((XCLIPOBJ *)v144, v98[0], (struct ERECTL *)&v135, 1);
          PDEVOBJ::vSync((PDEVOBJ *)&v85, v88, 0LL, 0);
          if ( v81 )
          {
            if ( (*(_DWORD *)(v14 + 112) & 0x400) != 0 )
              v46 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v85 + 2840);
            else
              v46 = EngCopyBits;
            v47 = 0LL;
            if ( v76 )
              v47 = v76 + 24;
            ((void (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, RECTL *, __int64 *))v46)(
              v47,
              v14 + 24,
              0LL,
              xloIdent,
              &v135,
              &v71);
          }
          if ( v22 )
          {
            v48 = 0LL;
            if ( v76 )
              v48 = (SURFOBJ *)(v76 + 24);
            if ( !EngEraseSurface(v48, &v135, (v13 != 1) - 1) )
            {
LABEL_93:
              v17 = 0;
              goto LABEL_53;
            }
          }
          v25 = v76;
          v100 = v76;
          v83 = &v148;
          v26 = (CLIPOBJ *)v144;
          v79 = (CLIPOBJ *)v144;
          if ( v66 && *(_DWORD *)(v15 + 96) == 1 || v65 )
          {
            v86 = pxlo;
            v70 = 0LL;
          }
          else
          {
            v86 = xloIdent;
          }
        }
        else
        {
LABEL_21:
          v25 = v14;
          v100 = v14;
          v83 = v74;
          v26 = v84;
          v79 = v84;
        }
        PDEVOBJ::vSync((PDEVOBJ *)&v99, v87, 0LL, 0);
        ERECTL::operator*=(&v136, prcl);
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v136) )
        {
LABEL_53:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v98);
          SURFMEM::~SURFMEM((SURFMEM *)&v76);
          return v17;
        }
        v89 = 0LL;
        v90 = 0;
        v91 = 0;
        v137 = 0LL;
        v138 = 0LL;
        if ( *(_WORD *)(v15 + 100) || (unsigned int)(*(_DWORD *)(v15 + 96) - 7) <= 1 )
        {
          v129[3] = 0;
          v132 = 0;
          v129[1] = v136.right - v136.left + 1;
          v129[2] = v136.bottom - v136.top + 1;
          v130 = 0LL;
          v129[0] = *(_DWORD *)(v25 + 96);
          v131 = *(_DWORD *)(v15 + 112) & 0x40000;
          SURFMEM::bCreateDIB((SURFMEM *)&v89, (struct _DEVBITMAPINFO *)v129, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v89 )
            goto LABEL_103;
          LODWORD(v138) = v136.right - v136.left;
          HIDWORD(v138) = v136.bottom - v136.top;
          if ( (*(_DWORD *)(v15 + 112) & 0x400) != 0 )
            (*(void (__fastcall **)(__int64, __int64, _QWORD, XLATEOBJ *, __int64 *, RECTL *))(v99 + 2840))(
              v89 + 24,
              v15 + 24,
              0LL,
              v70,
              &v137,
              &v136);
          else
            ((void (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *, __int64 *, RECTL *))EngCopyBits)(
              v89 + 24,
              v15 + 24,
              0LL,
              v70,
              &v137,
              &v136);
          LODWORD(v137) = prcl->left - v136.left;
          HIDWORD(v137) = prcl->top - v136.top;
          LODWORD(v138) = prcl->right - v136.left;
          HIDWORD(v138) = prcl->bottom - v136.top;
          v15 = v89;
          v70 = 0LL;
          v102 = 0LL;
          v82 = (RECTL *)&v137;
          v136.right -= v136.left;
          v136.bottom -= v136.top;
          *(_QWORD *)&v136.left = 0LL;
        }
        else
        {
          v102 = v70;
          v82 = prcl;
        }
        v116 = v15;
        v128[0] = *(_QWORD *)(v25 + 48);
        PDEVOBJ::vSync((PDEVOBJ *)v128, (struct _SURFOBJ *)(v25 + 24), 0LL, 0);
        v27 = (struct _PLGDDA *)PALLOCMEM2(0x18CuLL);
        v28 = v27;
        v125 = v27;
        if ( !v27 )
        {
LABEL_52:
          SURFMEM::~SURFMEM((SURFMEM *)&v89);
          v17 = v69;
          goto LABEL_53;
        }
        if ( !(unsigned int)bInitPlgDDA(v27, &v136, v82, v83) )
        {
LABEL_50:
          v69 = 1;
LABEL_51:
          Win32FreePool(v28);
          goto LABEL_52;
        }
        v115 = (&apfnRead)[*(unsigned int *)(v15 + 96)];
        v126 = v115;
        v29 = lSizeDDA(v28);
        v30 = v29 * (unsigned __int64)(unsigned int)(v136.right - v136.left + 2);
        if ( v30 > 0xFFFFFFFF )
          goto LABEL_51;
        v124 = v29 * (v136.right - v136.left + 2);
        if ( !(_DWORD)v30 )
          goto LABEL_51;
        if ( v66 )
        {
          *(_DWORD *)v28 = 1;
          v31 = (&apfnBogus)[v67];
        }
        else
        {
          *(_DWORD *)v28 = 0;
          v31 = (&apfnWrite)[*(unsigned int *)(v25 + 96)];
        }
        v87 = (struct _SURFOBJ *)v31;
        v101 = v31;
        v75 = PALLOCMEM2((unsigned int)v30);
        if ( !v75 )
          goto LABEL_51;
        top = v136.top;
        v68 = v136.top;
        v80 = *(_QWORD *)(v15 + 80) + *(_DWORD *)(v15 + 88) * v136.top;
        v117 = 0LL;
        if ( !v81 )
        {
          v72 = 0LL;
          goto LABEL_35;
        }
        if ( !(unsigned int)bUMPDSecurityGateEx() || v72 )
        {
          LODWORD(v117) = v136.left + v72->x - v82->left;
          top = v136.top;
          v68 = v136.top;
          v72 = (POINTL *)(*(_QWORD *)(v81 + 80) + *(_DWORD *)(v81 + 88) * (v136.top + v72->y - v82->top));
LABEL_35:
          v33 = v70;
          if ( v70 )
          {
            if ( (v70->flXlate & 1) != 0 )
              v33 = 0LL;
            v70 = v33;
            v102 = v33;
          }
          if ( !v26 || !v26->iDComplexity )
          {
            v34 = *(_DWORD *)(v25 + 60);
            v35 = *(_DWORD *)(v25 + 56);
            *(_QWORD *)&v139.left = 0LL;
            v139.right = v35;
            v139.bottom = v34;
            RGNOBJ::vSet((RGNOBJ *)v98, &v139);
            XCLIPOBJ::vSetup((XCLIPOBJ *)v144, v98[0], (struct ERECTL *)&v139, 1);
            v26 = (CLIPOBJ *)v144;
            v79 = (CLIPOBJ *)v144;
            top = v136.top;
            v68 = v136.top;
            v33 = v70;
          }
          if ( v26->rclBounds.left >= v26->rclBounds.right || v26->rclBounds.top >= v26->rclBounds.bottom )
          {
            Win32FreePool(v75);
            goto LABEL_51;
          }
          v36 = v72;
          while ( 1 )
          {
            v73 = top;
            if ( top >= v136.bottom )
              break;
            *(_OWORD *)((char *)v28 + 68) = *(_OWORD *)((char *)v28 + 4);
            *(_OWORD *)((char *)v28 + 84) = *(_OWORD *)((char *)v28 + 20);
            *(_OWORD *)((char *)v28 + 100) = *(_OWORD *)((char *)v28 + 36);
            *(_OWORD *)((char *)v28 + 116) = *(_OWORD *)((char *)v28 + 52);
            v37 = ((__int64 (__fastcall *)(struct _PLGDDA *, __int64, __int64, POINTL *, XLATEOBJ *, LONG, LONG, _DWORD))v115)(
                    v28,
                    v75,
                    v80,
                    v36,
                    v33,
                    v136.left,
                    v136.right,
                    v117);
            ((void (__fastcall *)(__int64, __int64, __int64, CLIPOBJ *))v101)(v75, v37, v25, v26);
            vAdvYDDA(v28);
            v80 += *(int *)(v15 + 88);
            if ( v36 )
            {
              v36 = (POINTL *)((char *)v36 + *(int *)(v81 + 88));
              v72 = v36;
            }
            top = ++v68;
            v33 = v70;
          }
          Win32FreePool(v75);
          if ( v25 == v14 )
            goto LABEL_50;
          v49 = 0;
          v92 = 0LL;
          v93 = 0;
          v94 = 0;
          v50 = 0LL;
          if ( v114->right - v114->left == v136.right && v114->bottom - v114->top == v136.bottom )
          {
            v49 = 1;
          }
          else
          {
            v110 = 0;
            v113 = 0;
            right = v135.right + 1;
            bottom = v135.bottom + 1;
            v111 = 0LL;
            v107 = 1;
            v112 = *(_DWORD *)(v14 + 112) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v92, (struct _DEVBITMAPINFO *)&v107, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( v92 )
            {
              v103 = 0LL;
              v104 = 0;
              v105 = 0;
              right = v136.right;
              bottom = v136.bottom;
              v111 = 0LL;
              v107 = 1;
              v112 = *(_DWORD *)(v14 + 112) & 0x40000;
              SURFMEM::bCreateDIB((SURFMEM *)&v103, (struct _DEVBITMAPINFO *)&v107, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v118);
              if ( v103 && v118[0] )
              {
                RGNOBJ::vSet((RGNOBJ *)v118, &v135);
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pcoa, v118[0], (struct ERECTL *)&v135, 1);
                v51 = v92 ? (SURFOBJ *)(v92 + 24) : 0LL;
                if ( EngEraseSurface(v51, &v135, 0) )
                {
                  v52 = 0LL;
                  if ( v103 )
                    v52 = (SURFOBJ *)(v103 + 24);
                  if ( EngEraseSurface(v52, &v136, 0xFFFFFFFF) )
                  {
                    v53 = 0LL;
                    if ( v103 )
                      v53 = (SURFOBJ *)(v103 + 24);
                    v54 = 0LL;
                    if ( v92 )
                      v54 = (SURFOBJ *)(v92 + 24);
                    if ( EngPlgBlt(v54, v53, 0LL, &pcoa, 0LL, 0LL, 0LL, v83, v82, 0LL, 3u) )
                    {
                      v50 = v92;
                      v49 = 1;
                    }
                  }
                }
              }
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v118);
              SURFMEM::~SURFMEM((SURFMEM *)&v103);
            }
          }
          PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v133);
          if ( !v49 )
            goto LABEL_155;
          if ( !v134 )
            goto LABEL_155;
          v153 = *v74;
          v154 = v74[1];
          x = v74[2].x;
          v155 = x + v154.x - v153.x;
          y = v74[2].y;
          v156 = y + v154.y - v153.y;
          v157 = x;
          v158 = y;
          if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)v133, 0LL, (struct _POINTL *)&v153)
            || !EPATHOBJ::bPolyLineTo((EPATHOBJ *)v133, 0LL, (struct _POINTL *)&v154, 3u) )
          {
LABEL_155:
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v133);
            SURFMEM::~SURFMEM((SURFMEM *)&v92);
            goto LABEL_51;
          }
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v119, (struct EPATHOBJ *)v133, 1u, v57);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v106);
          if ( v119[0] && v106[0] )
          {
            v58 = v84;
            if ( !v84 )
            {
              if ( !RGNOBJ::bCopy((RGNOBJ *)v106, (struct RGNOBJ *)v119) )
                goto LABEL_154;
LABEL_142:
              v143 = *(struct _RECTL *)((char *)v106[0] + 88);
              if ( !v58 || bIntersect(&v143, &v58->rclBounds, &v143) )
              {
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v145, v106[0], (struct ERECTL *)&v143, 1);
                if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v146) )
                {
                  v135.left += v71;
                  v135.top += HIDWORD(v71);
                  v135.right += v71;
                  v135.bottom += HIDWORD(v71);
                  v71 = 0LL;
                  ++*(_DWORD *)(v14 + 92);
                  if ( v65 )
                  {
                    v140 = 0LL;
                    v141 = v135.right - v135.left;
                    v142 = v135.bottom - v135.top;
                    v88 = 0LL;
                    if ( (*(_DWORD *)(v14 + 112) & 2) != 0 )
                      v63 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v85 + 2848);
                    else
                      v63 = EngStretchBlt;
                    v64 = 0LL;
                    if ( v76 )
                      v64 = v76 + 24;
                    ((void (__fastcall *)(__int64, __int64, __int64, _BYTE *, XLATEOBJ *, _QWORD, struct _SURFOBJ **, RECTL *, __int64 *, __int64 *, int))v63)(
                      v14 + 24,
                      v64,
                      (v50 + 24) & -(__int64)(v50 != 0),
                      v145,
                      v86,
                      0LL,
                      &v88,
                      &v135,
                      &v140,
                      &v71,
                      4);
                  }
                  else
                  {
                    v59 = SURFACE::pfnBitBlt((SURFACE *)v14);
                    ((void (__fastcall *)(__int64, __int64, __int64, _BYTE *, XLATEOBJ *, RECTL *, __int64 *, __int64 *, _QWORD, _QWORD, int))v59)(
                      v14 + 24,
                      v62,
                      v61,
                      v145,
                      v86,
                      &v135,
                      &v71,
                      &v71,
                      0LL,
                      0LL,
                      v60);
                  }
                }
              }
              v69 = 1;
              goto LABEL_154;
            }
            if ( RGNOBJ::bMerge(
                   (RGNOBJ *)v106,
                   (struct RGNOBJ *)v119,
                   (struct RGNOBJ *)&v84[2].rclBounds.top,
                   BYTE1(gafjRgnOp)) )
            {
              goto LABEL_142;
            }
          }
LABEL_154:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v106);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v119);
          goto LABEL_155;
        }
        if ( gfUMPDDebug )
          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\plgblt.cxx:%d:EngPlgBlt:pptl/pptlMask == NULL\n", 1732);
        Win32FreePool(v75);
        Win32FreePool(v28);
LABEL_103:
        v17 = 0;
        SURFMEM::~SURFMEM((SURFMEM *)&v89);
        goto LABEL_53;
      }
    }
  }
  return 0;
}
