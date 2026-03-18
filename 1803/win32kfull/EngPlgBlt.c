/*
 * XREFs of EngPlgBlt @ 0x1C025CFE0
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0095810 (NtGdiAlphaBlend.c)
 *     NtGdiTransparentBlt @ 0x1C0118C30 (NtGdiTransparentBlt.c)
 *     ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C024BF10 (-SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C025C970 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C025CBF0 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     EngPlgBlt @ 0x1C025CFE0 (EngPlgBlt.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C026C900 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     NtGdiEngPlgBlt @ 0x1C0283C60 (NtGdiEngPlgBlt.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007A080 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A512C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A51E0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00AB618 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B1040 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     EngEraseSurface @ 0x1C00DD4B0 (EngEraseSurface.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0138FF0 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C0139028 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C01392B4 (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0139314 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     EngPlgBlt @ 0x1C025CFE0 (EngPlgBlt.c)
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C02A6578 (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 *     ?lSizeDDA@@YAJPEAU_PLGDDA@@@Z @ 0x1C02A840C (-lSizeDDA@@YAJPEAU_PLGDDA@@@Z.c)
 *     ?vAdvYDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C02A94D4 (-vAdvYDDA@@YAXPEAU_PLGDDA@@@Z.c)
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
  __int64 v13; // rax
  BOOL v14; // esi
  SURFACE *v15; // rbx
  int v16; // ecx
  int v17; // eax
  __int64 v18; // r8
  ULONG v19; // r9d
  __int64 v20; // r10
  ULONG v21; // r11d
  struct _PLGDDA *v22; // rdx
  LONG v23; // r8d
  LONG v24; // r9d
  int v25; // r9d
  int v26; // r10d
  int v27; // eax
  __int64 v28; // r9
  int v29; // eax
  int v30; // edx
  int v31; // r8d
  SURFOBJ *v32; // rcx
  XLATEOBJ *v34; // r9
  struct _PLGDDA *v35; // rbx
  RECTL *v36; // rax
  struct _PLGDDA *v37; // rax
  unsigned int v38; // eax
  unsigned __int64 v39; // rdx
  size_t v40; // rcx
  void (*const near *v41)(struct _PLGRUN *, struct _PLGRUN *, struct SURFACE *, struct _CLIPOBJ *); // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  LONG top; // r9d
  XLATEOBJ *v45; // rdx
  CLIPOBJ *v46; // rcx
  LONG v47; // ecx
  LONG v48; // eax
  SURFACE *v49; // rbx
  SURFOBJ *v50; // rcx
  SURFOBJ *v51; // rcx
  SURFOBJ *v52; // rdx
  SURFOBJ *v53; // rax
  FIX x; // r10d
  FIX y; // ecx
  struct _RECTL *v56; // r9
  char v57; // [rsp+60h] [rbp-538h]
  char v58; // [rsp+61h] [rbp-537h]
  ULONG v59; // [rsp+64h] [rbp-534h]
  LONG v60; // [rsp+64h] [rbp-534h]
  int v61; // [rsp+64h] [rbp-534h]
  struct _PLGDDA *v62; // [rsp+68h] [rbp-530h]
  struct _PLGDDA *v63; // [rsp+68h] [rbp-530h]
  int v64; // [rsp+70h] [rbp-528h]
  XLATEOBJ *v65; // [rsp+78h] [rbp-520h]
  __int64 v66; // [rsp+80h] [rbp-518h]
  __int64 v67; // [rsp+88h] [rbp-510h]
  SURFACE *v68; // [rsp+90h] [rbp-508h]
  void *v70; // [rsp+B8h] [rbp-4E0h]
  __int64 v71; // [rsp+C0h] [rbp-4D8h] BYREF
  char v72; // [rsp+C8h] [rbp-4D0h]
  int v73; // [rsp+CCh] [rbp-4CCh]
  CLIPOBJ *v74; // [rsp+D0h] [rbp-4C8h]
  RECTL *v75; // [rsp+D8h] [rbp-4C0h]
  POINTFIX *v76; // [rsp+E0h] [rbp-4B8h]
  XLATEOBJ *v77; // [rsp+E8h] [rbp-4B0h]
  struct _SURFOBJ *v78; // [rsp+F0h] [rbp-4A8h]
  struct _SURFOBJ *v79; // [rsp+F8h] [rbp-4A0h]
  __int64 v80; // [rsp+100h] [rbp-498h]
  POINTFIX *v81; // [rsp+108h] [rbp-490h]
  __int64 v82; // [rsp+110h] [rbp-488h] BYREF
  __int64 v83; // [rsp+118h] [rbp-480h] BYREF
  char v84; // [rsp+120h] [rbp-478h]
  int v85; // [rsp+124h] [rbp-474h]
  __int64 v86; // [rsp+128h] [rbp-470h] BYREF
  int v87; // [rsp+130h] [rbp-468h]
  int v88; // [rsp+134h] [rbp-464h]
  struct _PLGDDA *v89; // [rsp+138h] [rbp-460h] BYREF
  char v90; // [rsp+140h] [rbp-458h]
  int v91; // [rsp+144h] [rbp-454h]
  struct REGION *v92[2]; // [rsp+150h] [rbp-448h] BYREF
  __int64 v93; // [rsp+160h] [rbp-438h] BYREF
  XLATEOBJ *v94; // [rsp+168h] [rbp-430h]
  void (*const near *v95)(struct _PLGRUN *, struct _PLGRUN *, struct SURFACE *, struct _CLIPOBJ *); // [rsp+170h] [rbp-428h]
  SURFACE *v96; // [rsp+178h] [rbp-420h]
  int v97; // [rsp+180h] [rbp-418h]
  __int64 v98; // [rsp+188h] [rbp-410h] BYREF
  char v99; // [rsp+190h] [rbp-408h]
  int v100; // [rsp+194h] [rbp-404h]
  struct REGION *v101[2]; // [rsp+198h] [rbp-400h] BYREF
  _QWORD v102[5]; // [rsp+1A8h] [rbp-3F0h] BYREF
  CLIPOBJ *v103; // [rsp+1D0h] [rbp-3C8h]
  struct _PLGRUN *(*const near *v104)(struct _PLGDDA *, struct _PLGRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int); // [rsp+1D8h] [rbp-3C0h]
  struct REGION *v105[2]; // [rsp+1E0h] [rbp-3B8h] BYREF
  _QWORD v106[2]; // [rsp+1F0h] [rbp-3A8h] BYREF
  _QWORD v107[4]; // [rsp+200h] [rbp-398h] BYREF
  int v108; // [rsp+220h] [rbp-378h]
  _QWORD v109[4]; // [rsp+228h] [rbp-370h] BYREF
  _QWORD v110[5]; // [rsp+248h] [rbp-350h] BYREF
  char v111[8]; // [rsp+270h] [rbp-328h] BYREF
  __int64 v112; // [rsp+278h] [rbp-320h]
  RECTL v113; // [rsp+2F0h] [rbp-2A8h] BYREF
  RECTL v114; // [rsp+300h] [rbp-298h] BYREF
  __int64 v115; // [rsp+310h] [rbp-288h] BYREF
  int v116; // [rsp+318h] [rbp-280h]
  int v117; // [rsp+31Ch] [rbp-27Ch]
  struct _RECTL v118; // [rsp+320h] [rbp-278h] BYREF
  __int64 v119; // [rsp+330h] [rbp-268h]
  int v120; // [rsp+338h] [rbp-260h]
  int v121; // [rsp+33Ch] [rbp-25Ch]
  struct _RECTL v122; // [rsp+340h] [rbp-258h] BYREF
  _BYTE v123[160]; // [rsp+350h] [rbp-248h] BYREF
  char v124[4]; // [rsp+3F0h] [rbp-1A8h] BYREF
  char v125[156]; // [rsp+3F4h] [rbp-1A4h] BYREF
  CLIPOBJ pcoa; // [rsp+490h] [rbp-108h] BYREF
  POINTFIX v127; // [rsp+530h] [rbp-68h] BYREF
  POINTFIX v128; // [rsp+538h] [rbp-60h]
  POINTFIX v129; // [rsp+540h] [rbp-58h]
  int v130; // [rsp+548h] [rbp-50h]
  int v131; // [rsp+54Ch] [rbp-4Ch]
  POINTFIX v132; // [rsp+550h] [rbp-48h] BYREF
  POINTFIX v133; // [rsp+558h] [rbp-40h] BYREF
  int v134; // [rsp+560h] [rbp-38h]
  int v135; // [rsp+564h] [rbp-34h]
  FIX v136; // [rsp+568h] [rbp-30h]
  FIX v137; // [rsp+56Ch] [rbp-2Ch]

  v79 = psoSrc;
  v78 = psoTrg;
  v103 = pco;
  v109[2] = pco;
  v65 = pxlo;
  v76 = pptfx;
  v59 = iMode;
  v96 = (SURFACE *)SURFOBJ_TO_SURFACE(psoTrg);
  v62 = (struct _PLGDDA *)SURFOBJ_TO_SURFACE(psoSrc);
  v13 = SURFOBJ_TO_SURFACE(psoMsk);
  v67 = v13;
  v64 = 0;
  if ( iMode != 4 || v13 )
  {
    v58 = 0;
    v14 = 1;
  }
  else
  {
    v14 = 1;
    v58 = 1;
  }
  if ( iMode - 1 <= 3 )
  {
    v15 = v96;
    v16 = *((_DWORD *)v96 + 24);
    if ( (unsigned int)(v16 - 7) > 2 )
    {
      v17 = *((_DWORD *)v62 + 24);
      if ( v17 != 9 && v16 != 10 && v17 != 10 )
      {
        ERECTL::vOrder((ERECTL *)prcl);
        if ( v19 < v21 && !v20 && (*(_DWORD *)(v18 + 96) == 1 || *((_DWORD *)v96 + 24) == 1) )
        {
          v57 = 1;
        }
        else
        {
          v57 = 0;
          if ( v19 < v21 )
            v19 = v21;
          v59 = v19;
        }
        v82 = *((_QWORD *)v96 + 6);
        v93 = *(_QWORD *)(v18 + 48);
        v71 = 0LL;
        v72 = 0;
        v73 = 0;
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v123);
        v77 = 0LL;
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v92);
        v22 = v62;
        v23 = *((_DWORD *)v62 + 15);
        v24 = *((_DWORD *)v62 + 14);
        *(_QWORD *)&v114.left = 0LL;
        v114.right = v24;
        v114.bottom = v23;
        if ( v93 && v62 == *(struct _PLGDDA **)(v93 + 2544) && (*(_DWORD *)(v93 + 40) & 0x20000) != 0 )
        {
          v114.left = *(_DWORD *)(v93 + 2576);
          v114.right = v24 + *(_DWORD *)(v93 + 2576);
          v114.top = *(_DWORD *)(v93 + 2580);
          v114.bottom = v23 + *(_DWORD *)(v93 + 2580);
          v22 = v62;
        }
        if ( !v57 && !*((_WORD *)v15 + 50) && *((_QWORD *)v15 + 4) != *((_QWORD *)v22 + 4) && !v58 )
          goto LABEL_42;
        v127 = *v76;
        v128 = v76[1];
        v129 = v76[2];
        v130 = v128.x + v129.x - v127.x;
        v131 = v129.y - v127.y + v128.y;
        v25 = (v128.x > v127.x) ^ (v128.x <= v130);
        v26 = (v128.y <= v131) ^ (v128.y > v127.y);
        v27 = v25 ^ 3;
        if ( *(&v127.x + 2 * v25) <= *(&v127.x + 2 * (v25 ^ 3LL)) )
          v27 = (v128.x > v127.x) ^ (v128.x <= v130);
        v28 = v27;
        v113.left = (*(&v127.x + 2 * v27) >> 4) - 1;
        v29 = v26 ^ 3;
        if ( *(&v127.y + 2 * v26) <= *(&v127.y + 2 * (v26 ^ 3LL)) )
          v29 = (v128.y <= v131) ^ (v128.y > v127.y);
        v113.top = (*(&v127.y + 2 * v29) >> 4) - 1;
        v113.right = ((*(&v127.x + 2 * (v28 ^ 3)) + 15) >> 4) + 1;
        v113.bottom = ((*(&v127.y + 2 * (v29 ^ 3LL)) + 15) >> 4) + 1;
        v15 = v96;
        v30 = *((_DWORD *)v96 + 15);
        v31 = *((_DWORD *)v96 + 14);
        v86 = 0LL;
        v87 = v31;
        v88 = v30;
        if ( v82 && v96 == *(SURFACE **)(v82 + 2544) && (*(_DWORD *)(v82 + 40) & 0x20000) != 0 )
        {
          LODWORD(v86) = *(_DWORD *)(v82 + 2576);
          v87 = v31 + v86;
          HIDWORD(v86) = *(_DWORD *)(v82 + 2580);
          v88 = v30 + HIDWORD(v86);
        }
        ERECTL::operator*=(&v113.left, (int *)&v86);
        if ( ERECTL::bEmpty((ERECTL *)&v113) )
          goto LABEL_56;
        if ( v57
          || *((_WORD *)v15 + 50)
          || v58
          || v113.left <= prcl->right
          && v113.right >= prcl->left
          && v113.top <= prcl->bottom
          && v113.bottom >= prcl->top )
        {
          v127.x -= 16 * v113.left;
          v127.y -= 16 * v113.top;
          v128.x -= 16 * v113.left;
          v128.y -= 16 * v113.top;
          v129.x -= 16 * v113.left;
          v129.y -= 16 * v113.top;
          memset(v107, 0, sizeof(v107));
          HIDWORD(v107[0]) = v113.right - v113.left + 1;
          LODWORD(v107[1]) = v113.bottom - v113.top + 1;
          v107[2] = 0LL;
          LODWORD(v107[0]) = *((_DWORD *)v15 + 24);
          LODWORD(v107[3]) = *((_DWORD *)v15 + 28) & 0x40000;
          if ( v57 )
          {
            LODWORD(v107[0]) = 1;
          }
          else if ( v58 )
          {
            LODWORD(v107[0]) = *((_DWORD *)v62 + 24);
          }
          SURFMEM::bCreateDIB((SURFMEM *)&v71, (struct _DEVBITMAPINFO *)v107, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v71 )
            goto LABEL_55;
          v66 = *(_QWORD *)&v113.left;
          if ( !v92[0] )
            goto LABEL_55;
          *(_QWORD *)&v113.left = 0LL;
          v113.right -= v66;
          v113.bottom -= HIDWORD(v66);
          RGNOBJ::vSet((RGNOBJ *)v92, &v113);
          XCLIPOBJ::vSetup((XCLIPOBJ *)v123, v92[0], (struct ERECTL *)&v113, 1);
          PDEVOBJ::vSync((PDEVOBJ *)&v82, v78, 0LL, 0);
          if ( v67 )
            _guard_dispatch_icall_fptr();
          if ( v57 )
          {
            v32 = 0LL;
            if ( v71 )
              v32 = (SURFOBJ *)(v71 + 24);
            if ( !EngEraseSurface(v32, &v113, (v59 != 1) - 1) )
            {
LABEL_55:
              v14 = 0;
              goto LABEL_56;
            }
          }
          v68 = (SURFACE *)v71;
          v81 = &v127;
          v74 = (CLIPOBJ *)v123;
          if ( v57 && *((_DWORD *)v62 + 24) == 1 || v58 )
          {
            v34 = pxlo;
            v65 = 0LL;
          }
          else
          {
            v34 = xloIdent;
          }
          v77 = v34;
        }
        else
        {
LABEL_42:
          v68 = v15;
          v81 = v76;
          v74 = pco;
        }
        PDEVOBJ::vSync((PDEVOBJ *)&v93, v79, 0LL, 0);
        ERECTL::operator*=(&v114.left, &prcl->left);
        if ( !ERECTL::bEmpty((ERECTL *)&v114) )
        {
          v89 = 0LL;
          v90 = 0;
          v91 = 0;
          v35 = v62;
          if ( *((_WORD *)v62 + 50) || (unsigned int)(*((_DWORD *)v62 + 24) - 7) <= 1 )
          {
            memset(v110, 0, 0x20uLL);
            HIDWORD(v110[0]) = v114.right - v114.left + 1;
            LODWORD(v110[1]) = v114.bottom - v114.top + 1;
            v110[2] = 0LL;
            LODWORD(v110[0]) = *((_DWORD *)v68 + 24);
            LODWORD(v110[3]) = *((_DWORD *)v62 + 28) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v89, (struct _DEVBITMAPINFO *)v110, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( !v89 )
            {
LABEL_68:
              v14 = 0;
              SURFMEM::~SURFMEM((SURFMEM *)&v89);
              goto LABEL_56;
            }
            v115 = 0LL;
            v116 = v114.right - v114.left;
            v117 = v114.bottom - v114.top;
            _guard_dispatch_icall_fptr();
            LODWORD(v115) = prcl->left - v114.left;
            HIDWORD(v115) = prcl->top - v114.top;
            v116 = prcl->right - v114.left;
            v117 = prcl->bottom - v114.top;
            v35 = v89;
            v65 = 0LL;
            v94 = 0LL;
            v36 = (RECTL *)&v115;
            v114.right -= v114.left;
            v114.bottom -= v114.top;
            *(_QWORD *)&v114.left = 0LL;
          }
          else
          {
            v94 = v65;
            v36 = prcl;
          }
          v75 = v36;
          v102[4] = v35;
          v109[0] = *((_QWORD *)v68 + 6);
          PDEVOBJ::vSync((PDEVOBJ *)v109, (struct _SURFOBJ *)((char *)v68 + 24), 0LL, 0);
          v37 = (struct _PLGDDA *)PALLOCMEM2(0x18CuLL, 1650946119LL, 1);
          v63 = v37;
          if ( !v37 )
          {
LABEL_143:
            SURFMEM::~SURFMEM((SURFMEM *)&v89);
            v14 = v64;
            goto LABEL_56;
          }
          if ( !(unsigned int)bInitPlgDDA(v37, &v114, v75, v81) )
          {
LABEL_72:
            v64 = 1;
LABEL_142:
            Win32FreePool(v63);
            goto LABEL_143;
          }
          v104 = (&apfnRead)[*((unsigned int *)v35 + 24)];
          v109[1] = v104;
          v38 = lSizeDDA(v63);
          v39 = v38 * (unsigned __int64)(unsigned int)(v114.right - v114.left + 2);
          v40 = 0xFFFFFFFFLL;
          if ( v39 <= 0xFFFFFFFF )
            v40 = (unsigned int)v39;
          v108 = v40;
          if ( v39 > 0xFFFFFFFF || !(_DWORD)v40 )
            goto LABEL_142;
          if ( v57 )
          {
            *(_DWORD *)v63 = 1;
            v41 = (&apfnBogus)[v59];
          }
          else
          {
            *(_DWORD *)v63 = 0;
            v41 = (&apfnWrite)[*((unsigned int *)v68 + 24)];
          }
          v79 = (struct _SURFOBJ *)v41;
          v95 = v41;
          v70 = PALLOCMEM2(v40, 1650946119LL, 1);
          if ( !v70 )
            goto LABEL_142;
          top = v114.top;
          v60 = v114.top;
          v80 = *((_QWORD *)v35 + 10) + *((_DWORD *)v35 + 22) * v114.top;
          if ( v67 )
          {
            if ( bUMPDSecurityGateEx(v43, v42) && !pptl )
            {
              if ( gfUMPDDebug )
                DbgPrint("windows\\core\\ntgdi\\gre\\windows\\plgblt.cxx:%d:EngPlgBlt:pptl/pptlMask == NULL\n", 1732);
              Win32FreePool(v70);
              Win32FreePool(v63);
              goto LABEL_68;
            }
            v97 = v114.left + pptl->x - v75->left;
            top = v114.top;
            v60 = v114.top;
          }
          v45 = v65;
          if ( v65 )
          {
            if ( (v65->flXlate & 1) != 0 )
              v45 = 0LL;
            v94 = v45;
          }
          v46 = v74;
          if ( !v74 || !v74->iDComplexity )
          {
            v47 = *((_DWORD *)v68 + 15);
            v48 = *((_DWORD *)v68 + 14);
            *(_QWORD *)&v118.left = 0LL;
            v118.right = v48;
            v118.bottom = v47;
            RGNOBJ::vSet((RGNOBJ *)v92, &v118);
            XCLIPOBJ::vSetup((XCLIPOBJ *)v123, v92[0], (struct ERECTL *)&v118, 1);
            v46 = (CLIPOBJ *)v123;
            v74 = (CLIPOBJ *)v123;
            top = v114.top;
            v60 = v114.top;
          }
          if ( v46->rclBounds.left >= v46->rclBounds.right || v46->rclBounds.top >= v46->rclBounds.bottom )
          {
            Win32FreePool(v70);
            goto LABEL_142;
          }
          while ( top < v114.bottom )
          {
            *(_OWORD *)((char *)v63 + 68) = *(_OWORD *)((char *)v63 + 4);
            *(_OWORD *)((char *)v63 + 84) = *(_OWORD *)((char *)v63 + 20);
            *(_OWORD *)((char *)v63 + 100) = *(_OWORD *)((char *)v63 + 36);
            *(_OWORD *)((char *)v63 + 116) = *(_OWORD *)((char *)v63 + 52);
            _guard_dispatch_icall_fptr();
            _guard_dispatch_icall_fptr();
            vAdvYDDA(v63);
            v80 += *((int *)v35 + 22);
            top = ++v60;
          }
          Win32FreePool(v70);
          v49 = v96;
          if ( v68 == v96 )
            goto LABEL_72;
          v61 = 0;
          v83 = 0LL;
          v84 = 0;
          v85 = 0;
          if ( prcl->right - prcl->left == v114.right && prcl->bottom - prcl->top == v114.bottom )
          {
            v61 = 1;
          }
          else
          {
            memset(v102, 0, 0x20uLL);
            HIDWORD(v102[0]) = v113.right + 1;
            LODWORD(v102[1]) = v113.bottom + 1;
            v102[2] = 0LL;
            LODWORD(v102[0]) = 1;
            LODWORD(v102[3]) = *((_DWORD *)v96 + 28) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v83, (struct _DEVBITMAPINFO *)v102, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( v83 )
            {
              v98 = 0LL;
              v99 = 0;
              v100 = 0;
              HIDWORD(v102[0]) = v114.right;
              LODWORD(v102[1]) = v114.bottom;
              v102[2] = 0LL;
              LODWORD(v102[0]) = 1;
              LODWORD(v102[3]) = *((_DWORD *)v49 + 28) & 0x40000;
              SURFMEM::bCreateDIB((SURFMEM *)&v98, (struct _DEVBITMAPINFO *)v102, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v105);
              if ( v98 && v105[0] )
              {
                RGNOBJ::vSet((RGNOBJ *)v105, &v113);
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pcoa, v105[0], (struct ERECTL *)&v113, 1);
                v50 = v83 ? (SURFOBJ *)(v83 + 24) : 0LL;
                if ( EngEraseSurface(v50, &v113, 0) )
                {
                  v51 = 0LL;
                  if ( v98 )
                    v51 = (SURFOBJ *)(v98 + 24);
                  if ( EngEraseSurface(v51, &v114, 0xFFFFFFFF) )
                  {
                    v52 = 0LL;
                    if ( v98 )
                      v52 = (SURFOBJ *)(v98 + 24);
                    if ( v83 )
                      v53 = (SURFOBJ *)(v83 + 24);
                    else
                      v53 = 0LL;
                    if ( EngPlgBlt(v53, v52, 0LL, &pcoa, 0LL, 0LL, 0LL, v81, v75, 0LL, 3u) )
                      v61 = 1;
                  }
                }
              }
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v105);
              SURFMEM::~SURFMEM((SURFMEM *)&v98);
            }
          }
          PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v111);
          if ( !v61 )
            goto LABEL_140;
          if ( !v112 )
            goto LABEL_140;
          v132 = *v76;
          v133 = v76[1];
          x = v76[2].x;
          v134 = v133.x + x - v132.x;
          y = v76[2].y;
          v135 = v133.y + y - v132.y;
          v136 = x;
          v137 = y;
          if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)v111, 0LL, (struct _POINTL *)&v132)
            || !EPATHOBJ::bPolyLineTo((EPATHOBJ *)v111, 0LL, (struct _POINTL *)&v133, 3u) )
          {
LABEL_140:
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v111);
            SURFMEM::~SURFMEM((SURFMEM *)&v83);
            goto LABEL_142;
          }
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v106, (struct EPATHOBJ *)v111, 1u, v56);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v101);
          if ( v106[0] && v101[0] )
          {
            if ( !pco )
            {
              if ( !RGNOBJ::bCopy((RGNOBJ *)v101, (struct RGNOBJ *)v106) )
                goto LABEL_139;
LABEL_131:
              v122 = *(struct _RECTL *)((char *)v101[0] + 88);
              if ( !pco || bIntersect(&v122, &pco->rclBounds, &v122) )
              {
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v124, v101[0], (struct ERECTL *)&v122, 1);
                if ( !ERECTL::bEmpty((ERECTL *)v125) )
                {
                  v113.left += v66;
                  v113.top += HIDWORD(v66);
                  v113.right += v66;
                  v113.bottom += HIDWORD(v66);
                  ++*((_DWORD *)v49 + 23);
                  if ( v58 )
                  {
                    v119 = 0LL;
                    v120 = v113.right - v113.left;
                    v121 = v113.bottom - v113.top;
                    v78 = 0LL;
                  }
                  else
                  {
                    SURFACE::pfnBitBlt(v49);
                  }
                  _guard_dispatch_icall_fptr();
                }
              }
              v64 = 1;
              goto LABEL_139;
            }
            if ( RGNOBJ::bMerge(
                   (RGNOBJ *)v101,
                   (struct RGNOBJ *)v106,
                   (struct RGNOBJ *)((unsigned __int64)&v103[2].rclBounds.top & -(__int64)(v103 != 0LL)),
                   BYTE1(gafjRgnOp)) )
            {
              goto LABEL_131;
            }
          }
LABEL_139:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v101);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v106);
          goto LABEL_140;
        }
LABEL_56:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v92);
        SURFMEM::~SURFMEM((SURFMEM *)&v71);
        return v14;
      }
    }
  }
  return 0;
}
