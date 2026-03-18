/*
 * XREFs of EngTextOut @ 0x1C00AA120
 * Callers:
 *     NtGdiEngTextOut @ 0x1C011EBB0 (NtGdiEngTextOut.c)
 *     ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0266640 (-PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C026AA90 (-BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C026D480 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0274D30 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0090AA4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0090CA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C0091D20 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C00AB030 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00AB618 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     STROBJ_bEnum @ 0x1C00AC810 (STROBJ_bEnum.c)
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C00AC8E0 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B1040 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C0139568 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C01395C4 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C02607A8 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 */

BOOL __stdcall EngTextOut(
        SURFOBJ *pso,
        STROBJ *pstro,
        FONTOBJ *pfo,
        CLIPOBJ *pco,
        RECTL *prclExtra,
        RECTL *prclOpaque,
        BRUSHOBJ *pboFore,
        BRUSHOBJ *pboOpaque,
        POINTL *pptlOrg,
        MIX mix)
{
  int v10; // r15d
  LONG left; // esi
  LONG top; // ebx
  LONG right; // edi
  LONG bottom; // r14d
  struct _GLYPHPOS *pgp; // r13
  ULONG v17; // eax
  unsigned int cGlyphs; // r15d
  __int64 v19; // r8
  __int64 v20; // r9
  GLYPHBITS *pgb; // rdx
  int v22; // r10d
  int v23; // r9d
  int v24; // r11d
  LONG v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r13
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  FLONG flFontType; // eax
  int v35; // r15d
  FLONG v36; // eax
  LONG v37; // edx
  unsigned int v38; // r9d
  LONG v39; // ecx
  unsigned int v40; // r8d
  LONG v41; // ecx
  unsigned int v42; // r14d
  unsigned int v43; // r8d
  unsigned int v44; // r14d
  _DWORD *v45; // rax
  _DWORD *v46; // r15
  __int64 v47; // rax
  __int64 flAccel; // rdx
  unsigned int v49; // ebx
  unsigned __int8 *v50; // rcx
  int v51; // ecx
  int v52; // eax
  struct _BRUSHOBJ *v53; // rsi
  struct _KTHREAD *v54; // rdi
  struct _SURFOBJ *v55; // r9
  __int64 *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rcx
  BOOL v60; // r14d
  ULONG v61; // esi
  RECTL *v62; // r10
  LONG v63; // edi
  LONG v64; // ecx
  LONG v65; // r8d
  LONG v66; // ecx
  int v67; // eax
  LONG v68; // r9d
  RECTL *p_rclBkGround; // r11
  LONG v70; // edx
  LONG v71; // r9d
  LONG v72; // edi
  LONG v73; // ecx
  LONG v74; // eax
  unsigned int v75; // ebx
  int v76; // eax
  int v77; // eax
  __int64 v78; // rdi
  LONG v79; // ecx
  LONG v80; // r10d
  LONG v81; // edx
  LONG v82; // r9d
  LONG v83; // r8d
  RECTL rclBkGround; // xmm0
  LONG v85; // ecx
  LONG v86; // ecx
  LONG v87; // r10d
  int v88; // eax
  BOOL (__stdcall *v89)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  char *v90; // rcx
  int v91; // edi
  void *v92; // r8
  unsigned __int64 v93; // rdx
  void *v94; // r8
  unsigned __int64 v95; // rdx
  struct _GLYPHPOS *v96; // rbx
  ULONG v97; // esi
  ULONG v98; // eax
  CLIPOBJ *v99; // rdi
  int v100; // r15d
  unsigned __int8 *v101; // r14
  int v102; // eax
  struct _FONTOBJ *v103; // rdx
  int v104; // edi
  LONG v105; // r9d
  bool v106; // zf
  struct _FONTOBJ *v107; // rbx
  __int64 v108; // rdi
  int v109; // eax
  BOOL (__stdcall *v110)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  struct _GLYPHPOS *v111; // r8
  char *v112; // rdx
  bool v113; // sf
  int i; // eax
  int v115; // eax
  char *v116; // rbx
  int (*v117)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rsi
  _DWORD *j; // rdi
  unsigned __int8 *v119; // [rsp+20h] [rbp-100h]
  struct _XLATEOBJ *v120; // [rsp+30h] [rbp-F0h]
  struct _POINTL *v121; // [rsp+40h] [rbp-E0h]
  struct _RECTL *v122; // [rsp+48h] [rbp-D8h]
  struct _RECTL *v123; // [rsp+50h] [rbp-D0h]
  unsigned int v124; // [rsp+60h] [rbp-C0h]
  unsigned int v125; // [rsp+80h] [rbp-A0h]
  int v126; // [rsp+A0h] [rbp-80h]
  ULONG v127; // [rsp+A4h] [rbp-7Ch] BYREF
  ULONG pc; // [rsp+A8h] [rbp-78h] BYREF
  PGLYPHPOS ppgpos; // [rsp+B0h] [rbp-70h] BYREF
  unsigned int v130; // [rsp+B8h] [rbp-68h]
  unsigned int v131; // [rsp+BCh] [rbp-64h]
  struct _FONTOBJ *v132; // [rsp+C0h] [rbp-60h]
  CLIPOBJ *v133; // [rsp+C8h] [rbp-58h]
  int iDComplexity; // [rsp+D0h] [rbp-50h]
  int iSolidColor; // [rsp+D4h] [rbp-4Ch]
  struct _BRUSHOBJ *v136; // [rsp+D8h] [rbp-48h]
  PGLYPHPOS v137; // [rsp+E0h] [rbp-40h] BYREF
  struct SURFACE *v138; // [rsp+E8h] [rbp-38h]
  unsigned int v139; // [rsp+F0h] [rbp-30h]
  RECTL *v140; // [rsp+F8h] [rbp-28h]
  struct _POINTL *v141; // [rsp+100h] [rbp-20h]
  struct _BRUSHOBJ *v142; // [rsp+108h] [rbp-18h]
  struct SURFACE *v143; // [rsp+110h] [rbp-10h]
  struct _RECTL v144; // [rsp+120h] [rbp+0h] BYREF
  struct SURFACE *v145; // [rsp+130h] [rbp+10h] BYREF
  char v146; // [rsp+138h] [rbp+18h]
  int v147; // [rsp+13Ch] [rbp+1Ch]
  struct _RECTL *v148; // [rsp+140h] [rbp+20h]
  unsigned __int8 *v149; // [rsp+148h] [rbp+28h]
  SURFOBJ *v150; // [rsp+150h] [rbp+30h]
  _DWORD *v151; // [rsp+158h] [rbp+38h]
  __int64 v152; // [rsp+160h] [rbp+40h] BYREF
  __int64 v153; // [rsp+168h] [rbp+48h]
  __int64 v154; // [rsp+170h] [rbp+50h]
  __int64 v155; // [rsp+178h] [rbp+58h]
  int v156; // [rsp+180h] [rbp+60h] BYREF
  struct _RECTL v157[20]; // [rsp+184h] [rbp+64h] BYREF
  struct _RECTL v158; // [rsp+2D0h] [rbp+1B0h] BYREF
  LONG v159; // [rsp+2E0h] [rbp+1C0h] BYREF
  LONG v160; // [rsp+2E4h] [rbp+1C4h]
  LONG v161; // [rsp+2E8h] [rbp+1C8h]
  LONG v162; // [rsp+2ECh] [rbp+1CCh]
  RECTL v163; // [rsp+2F0h] [rbp+1D0h] BYREF
  SURFACE *v164; // [rsp+300h] [rbp+1E0h]
  __int64 v165; // [rsp+308h] [rbp+1E8h]
  struct _CLIPOBJ *v166; // [rsp+310h] [rbp+1F0h]
  struct _BRUSHOBJ *v167; // [rsp+318h] [rbp+1F8h]
  int v168; // [rsp+320h] [rbp+200h]
  _DWORD v169[17]; // [rsp+324h] [rbp+204h] BYREF
  struct _FONTOBJ *v170; // [rsp+368h] [rbp+248h]
  _BYTE v171[96]; // [rsp+370h] [rbp+250h] BYREF
  _BYTE v172[96]; // [rsp+3D0h] [rbp+2B0h] BYREF
  _BYTE v173[96]; // [rsp+430h] [rbp+310h] BYREF
  struct _RECTL si128; // [rsp+490h] [rbp+370h] BYREF
  int v175; // [rsp+4ACh] [rbp+38Ch]

  v10 = 0;
  left = pstro->rclBkGround.left;
  top = pstro->rclBkGround.top;
  right = pstro->rclBkGround.right;
  bottom = pstro->rclBkGround.bottom;
  v140 = prclOpaque;
  v148 = prclExtra;
  v142 = pboFore;
  v136 = pboOpaque;
  v141 = pptlOrg;
  v133 = pco;
  v132 = pfo;
  v150 = pso;
  v137 = 0LL;
  v130 = 0;
  v126 = 0;
  v138 = 0LL;
  v158.left = left;
  v158.top = top;
  v158.right = right;
  v158.bottom = bottom;
  if ( !pstro->ulCharInc )
  {
    pgp = pstro->pgp;
    v17 = 0;
    cGlyphs = pstro->cGlyphs;
    ppgpos = pgp;
    pc = cGlyphs;
    v127 = 0;
    if ( !pgp )
    {
      *(_QWORD *)&pstro[1].cGlyphs = 0LL;
      v17 = 1;
      v127 = 1;
    }
    if ( !v17 )
      goto LABEL_6;
    while ( 1 )
    {
      v17 = STROBJ_bEnum(pstro, &pc, &ppgpos);
      pgp = ppgpos;
      cGlyphs = pc;
      v127 = v17;
LABEL_6:
      v19 = 0LL;
      if ( cGlyphs )
        break;
LABEL_21:
      if ( !v17 )
        goto LABEL_22;
    }
    while ( 1 )
    {
      v20 = v19;
      pgb = pgp[v19].pgdf->pgb;
      if ( !pgb )
        break;
      v22 = pgb->ptlOrigin.x + pgp[v20].ptl.x;
      v23 = pgb->ptlOrigin.y + pgp[v20].ptl.y;
      v24 = v22 + pgb->sizlBitmap.cx;
      v25 = v23 + pgb->sizlBitmap.cy;
      v144.left = v22;
      *(_QWORD *)&v144.top = __PAIR64__(v24, v23);
      v144.bottom = v25;
      if ( left == right || top == bottom )
      {
        v158 = v144;
        bottom = v144.bottom;
        right = v144.right;
        top = v144.top;
        left = v144.left;
      }
      else
      {
        if ( v22 < left )
          left = v22;
        v158.left = left;
        if ( v23 < top )
          top = v23;
        v158.top = top;
        if ( v24 > right )
          right = v24;
        v158.right = right;
        if ( v25 > bottom )
        {
          bottom = v25;
          v158.bottom = v25;
        }
      }
      v19 = (unsigned int)(v19 + 1);
      if ( (unsigned int)v19 >= cGlyphs )
      {
        v17 = v127;
        goto LABEL_21;
      }
    }
LABEL_22:
    v10 = 0;
  }
  v28 = SURFOBJ_TO_SURFACE(v150);
  v143 = (struct SURFACE *)v28;
  if ( (v132->flFontType & 0x10000) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v27, v26)
      && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
      && (v31 = *ThreadWin32Thread) != 0 )
    {
      v32 = *(_QWORD *)(v31 + 304);
    }
    else
    {
      v32 = *(_QWORD *)(v28 + 104);
    }
    v138 = v32 ? *(struct SURFACE **)(*(_QWORD *)(*(_QWORD *)v32 + 48LL) + 2544LL) : (struct SURFACE *)v28;
    bottom = v158.bottom;
    right = v158.right;
    top = v158.top;
    left = v158.left;
    v10 = *(_WORD *)(v28 + 100) != 0 ? 0x10 : 0;
    v126 = v10;
    if ( (*(_WORD *)(v28 + 102) & 0x100) != 0 )
    {
      v10 |= 0x80u;
      v126 = v10;
    }
  }
  flFontType = v132->flFontType;
  if ( (flFontType & 2) != 0 )
    return 0;
  if ( v133 )
    iDComplexity = v133->iDComplexity;
  else
    iDComplexity = 0;
  LODWORD(ppgpos) = -1;
  iSolidColor = v142->iSolidColor;
  if ( (flFontType & 0x10000) != 0 )
  {
    if ( *(_DWORD *)(v28 + 96) != 3 )
      goto LABEL_46;
    if ( (unsigned int)bUMPDSecurityGateEx() && !v136 )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n", 637);
      return 0;
    }
    if ( v136->iSolidColor != -1 )
    {
LABEL_46:
      v35 = v10 | 8;
      v126 = v35;
      v36 = v132->flFontType;
      if ( (v36 & 0x10000000) != 0 )
      {
        v37 = pstro->rclBkGround.right;
        v126 = v35 | 0x20;
        v38 = 8;
        if ( v37 > 2147483643 )
          return 0;
        v39 = pstro->rclBkGround.left;
        if ( (unsigned int)(v37 - v39 + 4) >= 0x7FFFFFFF )
          return 0;
        v40 = ((v37 + 4) & 0xFFFFFFFC) - (v39 & 0xFFFFFFFC);
        v41 = pstro->rclBkGround.left;
      }
      else if ( (v36 & 0x20000000) != 0 )
      {
        v40 = v130;
        v38 = v130;
        v41 = pstro->rclBkGround.left;
        v37 = pstro->rclBkGround.right;
      }
      else
      {
        v38 = 4;
        v41 = pstro->rclBkGround.left;
        v37 = pstro->rclBkGround.right;
        v40 = (((v37 + 8) >> 1) & 0xFFFFFFFC) - ((v41 >> 1) & 0xFFFFFFFC);
      }
      goto LABEL_54;
    }
    return 0;
  }
  v37 = pstro->rclBkGround.right;
  v38 = 1;
  v41 = pstro->rclBkGround.left;
  v40 = (int)(((v37 + 32) & 0xFFFFFFE0) - (v41 & 0xFFFFFFE0)) >> 3;
LABEL_54:
  v42 = bottom - top;
  v131 = ((v38 * (v41 - left) + 31) >> 3) & 0x1FFFFFFC;
  v43 = v131 + (((v38 * (right - v37) + 31) >> 3) & 0x1FFFFFFC) + v40;
  v130 = v43;
  if ( v43 > 0x7FFF || v42 > 0x7FFF )
    return 0;
  v44 = v43 * v42;
  v139 = v44;
  v45 = v44 >= 0x10000 ? EngAllocUserMem(v44, 0x6F746547u) : (_DWORD *)AllocThreadBufferWithTag(v44, 1869899079LL, 32LL);
  v151 = v45;
  v46 = v45;
  if ( !v45 )
    return 0;
  v47 = v130 * (pstro->rclBkGround.top - top);
  flAccel = pstro->flAccel;
  v49 = v126;
  v50 = (unsigned __int8 *)v46 + v47 + v131;
  LOBYTE(v47) = pstro->flAccel & 0xA;
  v149 = v50;
  if ( (_BYTE)v47 == 2 )
  {
    v51 = 0;
    if ( (flAccel & 0x51) == 0x51 )
      v51 = 4;
    flAccel &= 0x11u;
    v52 = 0;
    if ( (_BYTE)flAccel != 17 )
      v52 = 2;
    v50 = (unsigned __int8 *)((pstro->ulCharInc != 0) | v52 | (unsigned int)v51);
    v49 = (unsigned int)v50 | v126;
    v126 |= (unsigned int)v50;
  }
  v164 = (SURFACE *)v28;
  if ( *(_WORD *)(v28 + 100) )
    v165 = 0LL;
  else
    v165 = *(_QWORD *)(v28 + 72);
  v53 = v136;
  v166 = v133;
  v170 = v132;
  v167 = v136;
  v168 = 0;
  if ( v140 )
  {
    v54 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v50, flAccel) )
    {
      v56 = (__int64 *)PsGetThreadWin32Thread(v54);
      if ( v56 )
      {
        v57 = *v56;
        if ( v57 )
        {
          v58 = *(_QWORD *)(v57 + 40);
          if ( v58 != v57 + 40 )
          {
            v59 = v58 - 40;
            if ( v59 )
            {
              if ( (*(_DWORD *)(v59 + 412) & 0x100) != 0 && *(_DWORD *)(v59 + 420) && !v53 )
              {
                if ( gfUMPDDebug )
                  DbgPrint("windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n", 857);
                if ( v44 >= 0x10000 )
                  EngFreeUserMem(v46);
                else
                  FreeThreadBufferWithTag(v46);
                v60 = 0;
                goto LABEL_173;
              }
            }
          }
        }
      }
    }
    v61 = v53->iSolidColor;
    LODWORD(ppgpos) = v61;
    if ( v61 == -1 || iSolidColor == -1 )
    {
      EngTextOutBitBlt(
        (struct SURFACE *)v28,
        v132,
        v49,
        v55,
        (struct _SURFOBJ *)v119,
        v133,
        v120,
        v140,
        v121,
        (struct _POINTL *)v122,
        v136,
        v141,
        v124);
      p_rclBkGround = &pstro->rclBkGround;
    }
    else
    {
      v62 = v140;
      v63 = pstro->rclBkGround.top;
      v64 = v140->top;
      v65 = v140->left;
      if ( v63 <= v64 )
      {
        v66 = v140->right;
        v67 = v168;
      }
      else
      {
        v169[4 * v168] = v65;
        v169[4 * v168 + 1] = v64;
        v66 = v62->right;
        v169[4 * v168 + 2] = v66;
        v169[4 * v168 + 3] = v63;
        v67 = ++v168;
      }
      v68 = pstro->rclBkGround.left;
      p_rclBkGround = &pstro->rclBkGround;
      v70 = pstro->rclBkGround.bottom;
      if ( v68 > v65 )
      {
        v169[4 * v67] = v65;
        v169[4 * v168 + 1] = v63;
        v169[4 * v168 + 2] = v68;
        v169[4 * v168 + 3] = v70;
        v67 = ++v168;
      }
      v71 = pstro->rclBkGround.right;
      if ( v71 < v66 )
      {
        v169[4 * v67] = v71;
        v169[4 * v168 + 1] = v63;
        v169[4 * v168 + 2] = v66;
        v169[4 * v168 + 3] = v70;
        v67 = ++v168;
      }
      v72 = v62->bottom;
      if ( v70 < v72 )
      {
        v169[4 * v67] = v65;
        v169[4 * v168 + 1] = v70;
        v169[4 * v168 + 2] = v66;
        v169[4 * v168++ + 3] = v72;
      }
    }
  }
  else
  {
    v61 = (unsigned int)ppgpos;
    p_rclBkGround = &pstro->rclBkGround;
  }
  v145 = 0LL;
  v152 = 0LL;
  v153 = 0LL;
  v154 = 0LL;
  v155 = 0LL;
  v146 = 0;
  LODWORD(v136) = v49 & 0x10;
  v147 = 0;
  if ( (v49 & 0x10) != 0 )
  {
    v73 = pstro->rclBkGround.top;
    LODWORD(v152) = *(_DWORD *)(v28 + 96);
    v74 = pstro->rclBkGround.right;
    v131 = v73;
    v154 = 0LL;
    v75 = p_rclBkGround->left & ((v49 >> 3) & 4 | 0xFFFFFFF8);
    HIDWORD(v152) = v74 - v75;
    v76 = pstro->rclBkGround.bottom - v73;
    LODWORD(v155) = 1;
    LODWORD(v153) = v76;
    v77 = 1;
    if ( (*(_DWORD *)(v28 + 112) & 0x40000) != 0 )
      v77 = 262145;
    LODWORD(v155) = v77;
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v145, (struct _DEVBITMAPINFO *)&v152, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    {
      if ( v44 >= 0x10000 )
        EngFreeUserMem(v46);
      else
        FreeThreadBufferWithTag(v46);
      v60 = 0;
      goto LABEL_172;
    }
    v78 = *(_QWORD *)(v28 + 48);
    v79 = 0;
    v80 = 0;
    v143 = v145;
    if ( v28 == *(_QWORD *)(v78 + 2544) && (*(_DWORD *)(v78 + 40) & 0x20000) != 0 )
    {
      v79 = *(_DWORD *)(v78 + 2576);
      v80 = *(_DWORD *)(v78 + 2580);
    }
    v81 = pstro->rclBkGround.left;
    v82 = pstro->rclBkGround.top;
    if ( v79 > v81 )
      v81 = v79;
    v83 = pstro->rclBkGround.right;
    rclBkGround = pstro->rclBkGround;
    if ( v80 > v82 )
      v82 = v80;
    v159 = v81;
    v85 = v150->sizlBitmap.cx + v79;
    v163 = rclBkGround;
    v160 = v82;
    if ( v85 < v83 )
      v83 = v85;
    v86 = v80 + v150->sizlBitmap.cy;
    v161 = v83;
    v87 = pstro->rclBkGround.bottom;
    if ( v86 < v87 )
      v87 = v86;
    v162 = v87;
    if ( iDComplexity )
    {
      if ( !(unsigned int)bIntersect(&v159, &v133->rclBounds) )
        goto LABEL_168;
      v87 = v162;
      v83 = v161;
      v82 = v160;
      v81 = v159;
    }
    v163.right = v161 - v75;
    v163.left = v81 - v75;
    v163.top = v160 - v131;
    v163.bottom = v162 - v131;
    if ( v61 == -1 && v81 < v83 && v82 < v87 )
    {
      v88 = bUMPDSecurityGateEx();
      UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
        (UMPDReleaseAcquireRFONTSem *)v171,
        (struct SURFACE *)v28,
        v132,
        v88);
      if ( (*(_DWORD *)(v28 + 112) & 0x400) != 0 )
        v89 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v78 + 2832);
      else
        v89 = EngCopyBits;
      if ( v145 )
        v90 = (char *)v145 + 24;
      else
        v90 = 0LL;
      ((void (__fastcall *)(char *, __int64, _QWORD, XLATEOBJ *const, RECTL *, LONG *))v89)(
        v90,
        v28 + 24,
        0LL,
        xloIdent,
        &v163,
        &v159);
      UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v171);
    }
  }
  v91 = (int)ppgpos;
  *(_QWORD *)&pstro[1].cGlyphs = 0LL;
  if ( v91 == -1 )
    goto LABEL_137;
  v92 = v46;
  v93 = (unsigned __int64)v44 >> 2;
  if ( v44 >= 4 )
  {
    if ( ((unsigned __int8)v46 & 4) != 0 )
    {
      *v46 = 0;
      if ( !--v93 )
        goto LABEL_136;
      v92 = v46 + 1;
    }
    memset(v92, 0, 8 * (v93 >> 1));
    v91 = (int)ppgpos;
    if ( (v93 & 1) != 0 )
      *((_DWORD *)v92 + v93 - 1) = 0;
  }
  do
  {
LABEL_136:
    if ( v91 != -1 )
      goto LABEL_143;
LABEL_137:
    v94 = v46;
    v95 = (unsigned __int64)v44 >> 2;
    if ( v95 )
    {
      if ( ((unsigned __int8)v46 & 4) != 0 )
      {
        *v46 = 0;
        if ( !--v95 )
          goto LABEL_143;
        v94 = v46 + 1;
      }
      memset(v94, 0, 8 * (v95 >> 1));
      v91 = (int)ppgpos;
      if ( (v95 & 1) != 0 )
        *((_DWORD *)v94 + v95 - 1) = 0;
    }
LABEL_143:
    v96 = pstro->pgp;
    if ( v96 )
    {
      v97 = pstro->cGlyphs;
      v127 = pstro->cGlyphs;
      v137 = v96;
      pc = 0;
    }
    else
    {
      if ( ((__int64)pstro[4].pwszOrg & 2) != 0 )
        v98 = STROBJ_bEnum(pstro, &v127, &v137);
      else
        v98 = STROBJ_bEnumCheckBounds(pstro, &v127, &v137, &v158);
      v97 = v127;
      v96 = v137;
      pc = v98;
    }
    if ( !v97 )
      goto LABEL_156;
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
    v175 = 0;
    if ( iDComplexity )
    {
      if ( iDComplexity != 1 )
      {
        if ( iDComplexity == 3 )
        {
          v99 = v133;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v133, 0, 0, 4u, 0);
          v100 = (int)ppgpos;
          v101 = v149;
          do
          {
            v102 = XCLIPOBJ::bEnum((XCLIPOBJ *)v99, 0x134u, (char *)&v156, 0LL);
            v103 = v132;
            v104 = v102;
            v157[v156].bottom = v105;
            vExpandAndCopyText(
              (struct SURFACE *)v28,
              v103,
              v96,
              v97,
              v101,
              v130,
              pstro->ulCharInc,
              v143,
              v138,
              &pstro->rclBkGround,
              v123,
              iSolidColor,
              v100,
              v126,
              v157,
              v148,
              v125,
              v142,
              v141);
            v106 = v104 == 0;
            v99 = v133;
          }
          while ( !v106 );
          v44 = v139;
          v46 = v151;
        }
LABEL_156:
        v107 = v132;
        goto LABEL_157;
      }
      v175 = 0;
      si128 = v133->rclBounds;
    }
    v111 = v96;
    v107 = v132;
    vExpandAndCopyText(
      (struct SURFACE *)v28,
      v132,
      v111,
      v97,
      v149,
      v130,
      pstro->ulCharInc,
      v143,
      v138,
      &pstro->rclBkGround,
      v123,
      iSolidColor,
      v91,
      v126,
      &si128,
      v148,
      v125,
      v142,
      v141);
LABEL_157:
    v91 = (int)ppgpos;
  }
  while ( pc );
  if ( (_DWORD)v136 )
  {
    v108 = *(_QWORD *)(v28 + 48);
    v109 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
      (UMPDReleaseAcquireRFONTSem *)v172,
      (struct SURFACE *)v28,
      v107,
      v109);
    if ( (*(_DWORD *)(v28 + 112) & 0x400) != 0 )
      v110 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v108 + 2832);
    else
      v110 = EngCopyBits;
    if ( v145 )
      v112 = (char *)v145 + 24;
    else
      v112 = 0LL;
    ((void (__fastcall *)(__int64, char *, CLIPOBJ *, _QWORD, LONG *, RECTL *))v110)(
      v28 + 24,
      v112,
      v133,
      0LL,
      &v159,
      &v163);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v172);
  }
LABEL_168:
  if ( v44 >= 0x10000 )
    EngFreeUserMem(v46);
  else
    FreeThreadBufferWithTag(v46);
  v60 = 1;
LABEL_172:
  SURFMEM::~SURFMEM((SURFMEM *)&v145);
LABEL_173:
  if ( v165 )
  {
    v113 = v168 - 1 < 0;
    for ( i = --v168; !v113; --v168 )
    {
      vDIBSolidBlt(v164, (struct _RECTL *)&v169[4 * i], v166, v167->iSolidColor, 0);
      v113 = v168 - 1 < 0;
      i = v168 - 1;
    }
    return v60;
  }
  else
  {
    v115 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v173, v164, v170, v115);
    v116 = 0LL;
    *(_QWORD *)&v144.left = 0LL;
    if ( v164 )
      v116 = (char *)v164 + 24;
    v117 = SURFACE::pfnBitBlt(v164);
    for ( j = v169; j < &v169[4 * v168]; j += 4 )
      ((void (__fastcall *)(char *, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD, _DWORD *, _QWORD, _QWORD, struct _BRUSHOBJ *, struct _RECTL *, int))v117)(
        v116,
        0LL,
        0LL,
        v166,
        0LL,
        j,
        0LL,
        0LL,
        v167,
        &v144,
        61680);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v173);
    return v60;
  }
}
