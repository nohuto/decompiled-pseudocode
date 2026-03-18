/*
 * XREFs of EngTextOut @ 0x1C0055580
 * Callers:
 *     NtGdiEngTextOut @ 0x1C0057310 (NtGdiEngTextOut.c)
 *     ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0290640 (-PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0294D70 (-BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0297B50 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C029E250 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 * Callees:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C0056510 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C0056AC0 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C0056E10 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     STROBJ_bEnum @ 0x1C0057080 (STROBJ_bEnum.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00F4F58 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00F5428 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F5BF8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C010A7E0 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C01650B8 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C0165138 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C028A49C (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
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
  LONG left; // esi
  ULONG v12; // eax
  LONG top; // ebx
  int v14; // r12d
  LONG right; // edi
  LONG bottom; // r14d
  struct _GLYPHPOS *pgp; // r13
  unsigned int cGlyphs; // r12d
  __int64 v19; // r8
  __int64 v20; // r9
  GLYPHBITS *pgb; // rdx
  int v22; // r10d
  int v23; // r9d
  int v24; // r11d
  LONG v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r13
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  FLONG flFontType; // eax
  int v37; // r12d
  FLONG v38; // eax
  LONG v39; // edx
  unsigned int v40; // r8d
  LONG v41; // ecx
  LONG v42; // r12d
  unsigned int v43; // edx
  LONG v44; // ecx
  unsigned int v45; // r12d
  unsigned int v46; // edx
  unsigned __int64 v47; // rcx
  char v48; // si
  _DWORD *v49; // rax
  __int64 v50; // r8
  _DWORD *v51; // r14
  __int64 flAccel; // rdx
  __int64 v53; // rax
  unsigned int v54; // ebx
  unsigned __int8 *v55; // rcx
  int v56; // ecx
  int v57; // eax
  CLIPOBJ *v58; // r12
  struct _KTHREAD *v59; // rdi
  struct _SURFOBJ *v60; // r9
  __int64 *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  bool v64; // zf
  struct _BRUSHOBJ *v65; // rax
  __int64 v66; // rcx
  BOOL v67; // r14d
  ULONG v68; // esi
  RECTL *v69; // r10
  LONG v70; // edx
  LONG v71; // ecx
  LONG v72; // edi
  int v73; // eax
  LONG v74; // r8d
  RECTL *p_rclBkGround; // r11
  LONG v76; // ecx
  LONG v77; // r9d
  LONG v78; // r8d
  LONG v79; // edx
  LONG v80; // r12d
  LONG v81; // eax
  unsigned int v82; // ebx
  int v83; // eax
  __int64 v84; // rdi
  LONG v85; // ecx
  LONG v86; // r10d
  LONG v87; // edx
  LONG v88; // r9d
  __int64 v89; // r8
  RECTL rclBkGround; // xmm0
  int v91; // ecx
  LONG v92; // ecx
  LONG v93; // r10d
  int v94; // eax
  BOOL (__stdcall *v95)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  char *v96; // rcx
  int v97; // edi
  unsigned int v98; // eax
  void *v99; // r8
  unsigned __int64 v100; // rdx
  void *v101; // r8
  unsigned __int64 v102; // rdx
  struct _GLYPHPOS *v103; // rbx
  ULONG v104; // esi
  ULONG v105; // r12d
  ULONG v106; // eax
  CLIPOBJ *v107; // rdi
  int v108; // r14d
  unsigned __int8 *v109; // r12
  int v110; // eax
  struct _FONTOBJ *v111; // rdx
  int v112; // edi
  int v113; // r9d
  struct _FONTOBJ *v114; // rbx
  __int64 v115; // rdi
  int v116; // eax
  BOOL (__stdcall *v117)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  struct _GLYPHPOS *v118; // r8
  char *v119; // rdx
  bool v120; // sf
  int i; // eax
  int v122; // eax
  char *v123; // rbx
  int (*v124)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rsi
  _DWORD *j; // rdi
  unsigned __int8 *v126; // [rsp+20h] [rbp-100h]
  struct _XLATEOBJ *v127; // [rsp+30h] [rbp-F0h]
  struct _POINTL *v128; // [rsp+40h] [rbp-E0h]
  struct _RECTL *v129; // [rsp+48h] [rbp-D8h]
  struct _RECTL *v130; // [rsp+50h] [rbp-D0h]
  unsigned int v131; // [rsp+60h] [rbp-C0h]
  unsigned int v132; // [rsp+80h] [rbp-A0h]
  char v133; // [rsp+A0h] [rbp-80h]
  int v134; // [rsp+A4h] [rbp-7Ch]
  ULONG v135; // [rsp+A8h] [rbp-78h] BYREF
  ULONG pc; // [rsp+ACh] [rbp-74h] BYREF
  PGLYPHPOS ppgpos; // [rsp+B0h] [rbp-70h] BYREF
  unsigned int v138; // [rsp+B8h] [rbp-68h]
  struct _BRUSHOBJ *v139; // [rsp+C0h] [rbp-60h]
  struct _FONTOBJ *v140; // [rsp+C8h] [rbp-58h]
  int iDComplexity; // [rsp+D0h] [rbp-50h]
  int iSolidColor; // [rsp+D4h] [rbp-4Ch]
  int v143; // [rsp+D8h] [rbp-48h]
  CLIPOBJ *v144; // [rsp+E0h] [rbp-40h]
  PGLYPHPOS v145; // [rsp+E8h] [rbp-38h] BYREF
  unsigned __int64 v146; // [rsp+F0h] [rbp-30h]
  struct SURFACE *v147; // [rsp+F8h] [rbp-28h]
  RECTL *v148; // [rsp+100h] [rbp-20h]
  struct _POINTL *v149; // [rsp+108h] [rbp-18h]
  struct _BRUSHOBJ *v150; // [rsp+110h] [rbp-10h]
  struct SURFACE *v151; // [rsp+118h] [rbp-8h]
  struct _RECTL v152; // [rsp+120h] [rbp+0h] BYREF
  struct SURFACE *v153; // [rsp+130h] [rbp+10h] BYREF
  char v154; // [rsp+138h] [rbp+18h]
  int v155; // [rsp+13Ch] [rbp+1Ch]
  struct _RECTL *v156; // [rsp+140h] [rbp+20h]
  unsigned __int8 *v157; // [rsp+148h] [rbp+28h]
  SURFOBJ *v158; // [rsp+150h] [rbp+30h]
  _DWORD *v159; // [rsp+158h] [rbp+38h]
  __int64 v160; // [rsp+160h] [rbp+40h] BYREF
  __int64 v161; // [rsp+168h] [rbp+48h]
  __int64 v162; // [rsp+170h] [rbp+50h]
  __int64 v163; // [rsp+178h] [rbp+58h]
  _OWORD v164[21]; // [rsp+180h] [rbp+60h] BYREF
  struct _RECTL v165; // [rsp+2D0h] [rbp+1B0h] BYREF
  __int128 v166; // [rsp+2E0h] [rbp+1C0h] BYREF
  RECTL v167; // [rsp+2F0h] [rbp+1D0h] BYREF
  SURFACE *v168; // [rsp+300h] [rbp+1E0h]
  __int64 v169; // [rsp+308h] [rbp+1E8h]
  struct _CLIPOBJ *v170; // [rsp+310h] [rbp+1F0h]
  struct _BRUSHOBJ *v171; // [rsp+318h] [rbp+1F8h]
  int v172; // [rsp+320h] [rbp+200h]
  _DWORD v173[17]; // [rsp+324h] [rbp+204h] BYREF
  struct _FONTOBJ *v174; // [rsp+368h] [rbp+248h]
  _BYTE v175[80]; // [rsp+370h] [rbp+250h] BYREF
  _BYTE v176[80]; // [rsp+3C0h] [rbp+2A0h] BYREF
  _BYTE v177[80]; // [rsp+410h] [rbp+2F0h] BYREF
  struct _RECTL si128; // [rsp+460h] [rbp+340h] BYREF
  int v179; // [rsp+47Ch] [rbp+35Ch]

  v156 = prclExtra;
  v148 = prclOpaque;
  v150 = pboFore;
  v139 = pboOpaque;
  v140 = pfo;
  v158 = pso;
  v149 = pptlOrg;
  v144 = pco;
  memset(v164, 0, 0x144uLL);
  left = pstro->rclBkGround.left;
  v12 = 0;
  top = pstro->rclBkGround.top;
  v14 = 0;
  right = pstro->rclBkGround.right;
  bottom = pstro->rclBkGround.bottom;
  v145 = 0LL;
  v138 = 0;
  v134 = 0;
  v166 = 0uLL;
  v167 = (RECTL)0LL;
  v147 = 0LL;
  v165.left = left;
  v165.top = top;
  v165.right = right;
  v165.bottom = bottom;
  if ( !pstro->ulCharInc )
  {
    pgp = pstro->pgp;
    cGlyphs = pstro->cGlyphs;
    ppgpos = pgp;
    pc = cGlyphs;
    v135 = 0;
    if ( !pgp )
    {
      *(_QWORD *)&pstro[1].cGlyphs = 0LL;
      v12 = 1;
      v135 = 1;
    }
    if ( !v12 )
      goto LABEL_6;
    while ( 1 )
    {
      v12 = STROBJ_bEnum(pstro, &pc, &ppgpos);
      pgp = ppgpos;
      cGlyphs = pc;
      v135 = v12;
LABEL_6:
      v19 = 0LL;
      if ( cGlyphs )
        break;
LABEL_21:
      if ( !v12 )
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
      v152.left = v22;
      *(_QWORD *)&v152.top = __PAIR64__(v24, v23);
      v152.bottom = v25;
      if ( left == right || top == bottom )
      {
        v165 = v152;
        bottom = v152.bottom;
        right = v152.right;
        top = v152.top;
        left = v152.left;
      }
      else
      {
        if ( v22 < left )
          left = v22;
        v165.left = left;
        if ( v23 < top )
          top = v23;
        v165.top = top;
        if ( v24 > right )
          right = v24;
        v165.right = right;
        if ( v25 > bottom )
        {
          bottom = v25;
          v165.bottom = v25;
        }
      }
      v19 = (unsigned int)(v19 + 1);
      if ( (unsigned int)v19 >= cGlyphs )
      {
        v12 = v135;
        goto LABEL_21;
      }
    }
LABEL_22:
    v14 = 0;
  }
  v30 = SURFOBJ_TO_SURFACE(v158);
  v151 = (struct SURFACE *)v30;
  if ( (v140->flFontType & 0x10000) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v27, v26, v28, v29)
      && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
      && (v33 = *ThreadWin32Thread) != 0 )
    {
      v34 = *(_QWORD *)(v33 + 304);
    }
    else
    {
      v34 = *(_QWORD *)(v30 + 104);
    }
    v147 = v34 ? *(struct SURFACE **)(*(_QWORD *)(*(_QWORD *)v34 + 48LL) + 2552LL) : (struct SURFACE *)v30;
    bottom = v165.bottom;
    right = v165.right;
    top = v165.top;
    left = v165.left;
    v14 = *(_WORD *)(v30 + 100) != 0 ? 0x10 : 0;
    v134 = v14;
    if ( (*(_WORD *)(v30 + 102) & 0x100) != 0 )
    {
      v14 |= 0x80u;
      v134 = v14;
    }
  }
  flFontType = v140->flFontType;
  if ( (flFontType & 2) != 0 )
    return 0;
  if ( v144 )
    iDComplexity = v144->iDComplexity;
  else
    iDComplexity = 0;
  LODWORD(ppgpos) = -1;
  iSolidColor = v150->iSolidColor;
  if ( (flFontType & 0x10000) != 0 )
  {
    if ( *(_DWORD *)(v30 + 96) != 3 )
      goto LABEL_46;
    if ( (unsigned int)bUMPDSecurityGateEx() && !v139 )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n", 639);
      return 0;
    }
    if ( v139->iSolidColor != -1 )
    {
LABEL_46:
      v37 = v14 | 8;
      v134 = v37;
      v38 = v140->flFontType;
      if ( (v38 & 0x10000000) != 0 )
      {
        v39 = pstro->rclBkGround.right;
        v134 = v37 | 0x20;
        v40 = 8;
        if ( v39 > 2147483643 )
          return 0;
        v41 = pstro->rclBkGround.left;
        if ( (unsigned int)(v39 - v41 + 4) >= 0x7FFFFFFF )
          return 0;
        v42 = pstro->rclBkGround.left;
        v43 = ((v39 + 4) & 0xFFFFFFFC) - (v41 & 0xFFFFFFFC);
        v44 = pstro->rclBkGround.right;
      }
      else if ( (v38 & 0x20000000) != 0 )
      {
        v43 = v138;
        v40 = v138;
        v42 = pstro->rclBkGround.left;
        v44 = pstro->rclBkGround.right;
      }
      else
      {
        v40 = 4;
        v42 = pstro->rclBkGround.left;
        v44 = pstro->rclBkGround.right;
        v43 = (((v44 + 8) >> 1) & 0xFFFFFFFC) - ((v42 >> 1) & 0xFFFFFFFC);
      }
      goto LABEL_54;
    }
    return 0;
  }
  v44 = pstro->rclBkGround.right;
  v40 = 1;
  v42 = pstro->rclBkGround.left;
  v43 = (int)(((v44 + 32) & 0xFFFFFFE0) - (v42 & 0xFFFFFFE0)) >> 3;
LABEL_54:
  v45 = ((v40 * (v42 - left) + 31) >> 3) & 0x1FFFFFFC;
  v46 = v45 + (((v40 * (right - v44) + 31) >> 3) & 0x1FFFFFFC) + v43;
  v47 = v46 * (unsigned __int64)(unsigned int)(bottom - top);
  v138 = v46;
  v146 = v47;
  if ( v47 > 0xFFFFFFFF )
    return 0;
  if ( (unsigned int)v47 >= 0x10000 )
  {
    v48 = 0;
    v133 = 0;
    v49 = EngAllocUserMem((unsigned int)v47, 0x6F746547u);
  }
  else
  {
    v48 = 1;
    v133 = 1;
    v49 = (_DWORD *)AllocThreadBufferWithTag(v47, 1869899079LL, 32LL);
  }
  v159 = v49;
  v51 = v49;
  if ( !v49 )
    return 0;
  flAccel = pstro->flAccel;
  v53 = v138 * (pstro->rclBkGround.top - top);
  v54 = v134;
  v55 = (unsigned __int8 *)v51 + v53 + v45;
  LOBYTE(v53) = pstro->flAccel & 0xA;
  v157 = v55;
  if ( (_BYTE)v53 == 2 )
  {
    v56 = 0;
    if ( (flAccel & 0x51) == 0x51 )
      v56 = 4;
    flAccel &= 0x11u;
    v57 = 0;
    if ( (_BYTE)flAccel != 17 )
      v57 = 2;
    v55 = (unsigned __int8 *)((pstro->ulCharInc != 0) | v57 | (unsigned int)v56);
    v54 = (unsigned int)v55 | v134;
    v134 |= (unsigned int)v55;
  }
  v168 = (SURFACE *)v30;
  if ( *(_WORD *)(v30 + 100) )
    v169 = 0LL;
  else
    v169 = *(_QWORD *)(v30 + 72);
  v58 = v144;
  v171 = v139;
  v174 = v140;
  v170 = v144;
  v172 = 0;
  if ( v148 )
  {
    v59 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v55, flAccel, v50, 0LL)
      && (v61 = (__int64 *)PsGetThreadWin32Thread(v59)) != 0LL
      && (v62 = *v61) != 0 )
    {
      v63 = *(_QWORD *)(v62 + 40);
      v64 = v63 == v62 + 40;
      v65 = v139;
      if ( !v64 )
      {
        v66 = v63 - 40;
        if ( v66 )
        {
          if ( (*(_DWORD *)(v66 + 412) & 0x100) != 0 && *(_DWORD *)(v66 + 420) && !v139 )
          {
            if ( gfUMPDDebug )
              DbgPrint("windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n", 857);
            if ( v48 )
              FreeThreadBufferWithTag(v51);
            else
              EngFreeUserMem(v51);
            v67 = 0;
            goto LABEL_173;
          }
        }
      }
    }
    else
    {
      v65 = v139;
    }
    v68 = v65->iSolidColor;
    LODWORD(ppgpos) = v68;
    if ( v68 == -1 || iSolidColor == -1 )
    {
      EngTextOutBitBlt(
        (struct SURFACE *)v30,
        v140,
        v54,
        v60,
        (struct _SURFOBJ *)v126,
        v58,
        v127,
        v148,
        v128,
        (struct _POINTL *)v129,
        v65,
        v149,
        v131);
      p_rclBkGround = &pstro->rclBkGround;
    }
    else
    {
      v69 = v148;
      v70 = pstro->rclBkGround.top;
      v71 = v148->top;
      v72 = v148->left;
      if ( v70 <= v71 )
      {
        v73 = v172;
      }
      else
      {
        v173[4 * v172] = v72;
        v173[4 * v172 + 1] = v71;
        v173[4 * v172 + 2] = v69->right;
        v173[4 * v172 + 3] = v70;
        v73 = ++v172;
      }
      v74 = pstro->rclBkGround.left;
      p_rclBkGround = &pstro->rclBkGround;
      v76 = pstro->rclBkGround.bottom;
      if ( v74 > v72 )
      {
        v173[4 * v73] = v72;
        v173[4 * v172 + 1] = v70;
        v173[4 * v172 + 2] = v74;
        v173[4 * v172 + 3] = v76;
        v73 = ++v172;
      }
      v77 = pstro->rclBkGround.right;
      v78 = v69->right;
      if ( v77 < v78 )
      {
        v173[4 * v73] = v77;
        v173[4 * v172 + 1] = v70;
        v173[4 * v172 + 2] = v78;
        v173[4 * v172 + 3] = v76;
        v73 = ++v172;
      }
      v79 = v69->bottom;
      if ( v76 < v79 )
      {
        v173[4 * v73] = v72;
        v173[4 * v172 + 1] = v76;
        v173[4 * v172 + 2] = v78;
        v173[4 * v172++ + 3] = v79;
      }
    }
  }
  else
  {
    v68 = (unsigned int)ppgpos;
    p_rclBkGround = &pstro->rclBkGround;
  }
  v153 = 0LL;
  v160 = 0LL;
  v161 = 0LL;
  v162 = 0LL;
  v163 = 0LL;
  v154 = 0;
  v143 = v54 & 0x10;
  v155 = 0;
  if ( (v54 & 0x10) != 0 )
  {
    v80 = pstro->rclBkGround.top;
    LODWORD(v160) = *(_DWORD *)(v30 + 96);
    v81 = pstro->rclBkGround.right;
    LODWORD(v163) = 1;
    v82 = p_rclBkGround->left & ((v54 >> 3) & 4 | 0xFFFFFFF8);
    v162 = 0LL;
    HIDWORD(v160) = v81 - v82;
    LODWORD(v161) = pstro->rclBkGround.bottom - v80;
    v83 = 1;
    if ( (*(_DWORD *)(v30 + 112) & 0x40000) != 0 )
      v83 = 262145;
    LODWORD(v163) = v83;
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v153, (struct _DEVBITMAPINFO *)&v160, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    {
      if ( v133 )
        FreeThreadBufferWithTag(v51);
      else
        EngFreeUserMem(v51);
      v67 = 0;
      goto LABEL_172;
    }
    v84 = *(_QWORD *)(v30 + 48);
    v85 = 0;
    v86 = 0;
    v151 = v153;
    if ( v30 == *(_QWORD *)(v84 + 2552) && (*(_DWORD *)(v84 + 40) & 0x20000) != 0 )
    {
      v85 = *(_DWORD *)(v84 + 2584);
      v86 = *(_DWORD *)(v84 + 2588);
    }
    v87 = pstro->rclBkGround.left;
    v88 = pstro->rclBkGround.top;
    if ( v85 > v87 )
      v87 = v85;
    v89 = (unsigned int)pstro->rclBkGround.right;
    rclBkGround = pstro->rclBkGround;
    if ( v86 > v88 )
      v88 = v86;
    *(_QWORD *)&v166 = __PAIR64__(v88, v87);
    v91 = v158->sizlBitmap.cx + v85;
    v167 = rclBkGround;
    if ( v91 < (int)v89 )
      v89 = (unsigned int)v91;
    v92 = v86 + v158->sizlBitmap.cy;
    DWORD2(v166) = v89;
    v93 = pstro->rclBkGround.bottom;
    if ( v92 < v93 )
      v93 = v92;
    HIDWORD(v166) = v93;
    if ( iDComplexity )
    {
      if ( !(unsigned int)bIntersect(&v166, &v144->rclBounds, v89) )
        goto LABEL_168;
      v93 = HIDWORD(v166);
      LODWORD(v89) = DWORD2(v166);
      v88 = DWORD1(v166);
      v87 = v166;
    }
    v167.top = DWORD1(v166) - v80;
    v167.right = DWORD2(v166) - v82;
    v167.bottom = HIDWORD(v166) - v80;
    v167.left = v87 - v82;
    if ( v68 == -1 && v87 < (int)v89 && v88 < v93 )
    {
      v94 = bUMPDSecurityGateEx();
      UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
        (UMPDReleaseAcquireRFONTSem *)v175,
        (struct SURFACE *)v30,
        v140,
        v94);
      if ( (*(_DWORD *)(v30 + 112) & 0x400) != 0 )
        v95 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v84 + 2840);
      else
        v95 = EngCopyBits;
      if ( v153 )
        v96 = (char *)v153 + 24;
      else
        v96 = 0LL;
      ((void (__fastcall *)(char *, __int64, _QWORD, XLATEOBJ *const, RECTL *, __int128 *))v95)(
        v96,
        v30 + 24,
        0LL,
        xloIdent,
        &v167,
        &v166);
      UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v175);
    }
  }
  v97 = (int)ppgpos;
  v98 = v146;
  *(_QWORD *)&pstro[1].cGlyphs = 0LL;
  if ( v97 == -1 )
    goto LABEL_137;
  v99 = v51;
  v100 = (unsigned __int64)v98 >> 2;
  if ( v100 )
  {
    if ( ((unsigned __int8)v51 & 4) != 0 )
    {
      *v51 = 0;
      if ( !--v100 )
        goto LABEL_136;
      v99 = v51 + 1;
    }
    memset(v99, 0, 8 * (v100 >> 1));
    v97 = (int)ppgpos;
    v98 = v146;
    if ( (v100 & 1) != 0 )
      *((_DWORD *)v99 + v100 - 1) = 0;
  }
  do
  {
LABEL_136:
    if ( v97 != -1 )
      goto LABEL_143;
LABEL_137:
    v101 = v51;
    v102 = (unsigned __int64)v98 >> 2;
    if ( v102 )
    {
      if ( ((unsigned __int8)v51 & 4) != 0 )
      {
        *v51 = 0;
        if ( !--v102 )
          goto LABEL_143;
        v101 = v51 + 1;
      }
      memset(v101, 0, 8 * (v102 >> 1));
      v97 = (int)ppgpos;
      if ( (v102 & 1) != 0 )
        *((_DWORD *)v101 + v102 - 1) = 0;
    }
LABEL_143:
    v103 = pstro->pgp;
    if ( v103 )
    {
      v104 = pstro->cGlyphs;
      v105 = 0;
      v135 = pstro->cGlyphs;
      v145 = v103;
      pc = 0;
    }
    else
    {
      if ( ((__int64)pstro[4].pwszOrg & 2) != 0 )
        v106 = STROBJ_bEnum(pstro, &v135, &v145);
      else
        v106 = STROBJ_bEnumCheckBounds(pstro, &v135, &v145, &v165);
      v104 = v135;
      v103 = v145;
      v105 = v106;
      pc = v106;
    }
    if ( !v104 )
      goto LABEL_156;
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
    v179 = 0;
    if ( iDComplexity )
    {
      if ( iDComplexity != 1 )
      {
        if ( iDComplexity == 3 )
        {
          v107 = v144;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v144, 0, 0, 4u, 0);
          v108 = (int)ppgpos;
          v109 = v157;
          do
          {
            v110 = XCLIPOBJ::bEnum((XCLIPOBJ *)v107, 0x134u, v164, 0LL);
            v111 = v140;
            v112 = v110;
            LODWORD(v164[LODWORD(v164[0]) + 1]) = v113;
            vExpandAndCopyText(
              (struct SURFACE *)v30,
              v111,
              v103,
              v104,
              v109,
              v138,
              pstro->ulCharInc,
              v151,
              v147,
              &pstro->rclBkGround,
              v130,
              iSolidColor,
              v108,
              v134,
              (struct _RECTL *)((char *)v164 + 4),
              v156,
              v132,
              v150,
              v149);
            v64 = v112 == 0;
            v107 = v144;
          }
          while ( !v64 );
          v51 = v159;
          v105 = pc;
        }
LABEL_156:
        v114 = v140;
        goto LABEL_157;
      }
      si128 = v144->rclBounds;
    }
    v118 = v103;
    v114 = v140;
    vExpandAndCopyText(
      (struct SURFACE *)v30,
      v140,
      v118,
      v104,
      v157,
      v138,
      pstro->ulCharInc,
      v151,
      v147,
      &pstro->rclBkGround,
      v130,
      iSolidColor,
      v97,
      v134,
      &si128,
      v156,
      v132,
      v150,
      v149);
LABEL_157:
    v97 = (int)ppgpos;
    v98 = v146;
  }
  while ( v105 );
  if ( v143 )
  {
    v115 = *(_QWORD *)(v30 + 48);
    v116 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
      (UMPDReleaseAcquireRFONTSem *)v176,
      (struct SURFACE *)v30,
      v114,
      v116);
    if ( (*(_DWORD *)(v30 + 112) & 0x400) != 0 )
      v117 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v115 + 2840);
    else
      v117 = EngCopyBits;
    if ( v153 )
      v119 = (char *)v153 + 24;
    else
      v119 = 0LL;
    ((void (__fastcall *)(__int64, char *, CLIPOBJ *, _QWORD, __int128 *, RECTL *))v117)(
      v30 + 24,
      v119,
      v144,
      0LL,
      &v166,
      &v167);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v176);
  }
LABEL_168:
  if ( v133 )
    FreeThreadBufferWithTag(v51);
  else
    EngFreeUserMem(v51);
  v67 = 1;
LABEL_172:
  SURFMEM::~SURFMEM((SURFMEM *)&v153);
LABEL_173:
  if ( v169 )
  {
    v120 = v172 - 1 < 0;
    for ( i = --v172; !v120; --v172 )
    {
      vDIBSolidBlt(v168, (struct _RECTL *)&v173[4 * i], v170, v171->iSolidColor, 0);
      v120 = v172 - 1 < 0;
      i = v172 - 1;
    }
    return v67;
  }
  else
  {
    v122 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v177, v168, v174, v122);
    v123 = 0LL;
    *(_QWORD *)&v152.left = 0LL;
    if ( v168 )
      v123 = (char *)v168 + 24;
    v124 = SURFACE::pfnBitBlt(v168);
    for ( j = v173; j < &v173[4 * v172]; j += 4 )
      ((void (__fastcall *)(char *, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD, _DWORD *, _QWORD, _QWORD, struct _BRUSHOBJ *, struct _RECTL *, int))v124)(
        v123,
        0LL,
        0LL,
        v170,
        0LL,
        j,
        0LL,
        0LL,
        v171,
        &v152,
        61680);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v177);
    return v67;
  }
}
