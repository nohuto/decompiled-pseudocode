/*
 * XREFs of EngTextOut @ 0x1C009EDE0
 * Callers:
 *     NtGdiEngTextOut @ 0x1C00A0BA0 (NtGdiEngTextOut.c)
 *     ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0290010 (-PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02947C0 (-BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02975A0 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C029DCA0 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 * Callees:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C009FD70 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C00A0350 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C00A06A0 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     STROBJ_bEnum @ 0x1C00A0910 (STROBJ_bEnum.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D5048 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00D5518 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00D5CE8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00E4D80 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C0166658 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C01666D8 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C0289E0C (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
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
  __int64 v29; // r13
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  FLONG flFontType; // eax
  int v36; // r12d
  FLONG v37; // eax
  LONG v38; // edx
  unsigned int v39; // r8d
  LONG v40; // ecx
  LONG v41; // r12d
  unsigned int v42; // edx
  LONG v43; // ecx
  unsigned int v44; // r12d
  unsigned int v45; // edx
  unsigned __int64 v46; // rcx
  char v47; // si
  _DWORD *v48; // rax
  __int64 v49; // r8
  _DWORD *v50; // r14
  __int64 flAccel; // rdx
  __int64 v52; // rax
  unsigned int v53; // ebx
  unsigned __int8 *v54; // rcx
  int v55; // ecx
  int v56; // eax
  CLIPOBJ *v57; // r12
  struct _KTHREAD *v58; // rdi
  struct _SURFOBJ *v59; // r9
  __int64 *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  bool v63; // zf
  struct _BRUSHOBJ *v64; // rax
  __int64 v65; // rcx
  BOOL v66; // r14d
  ULONG v67; // esi
  RECTL *v68; // r10
  LONG v69; // edx
  LONG v70; // ecx
  LONG v71; // edi
  int v72; // eax
  LONG v73; // r8d
  RECTL *p_rclBkGround; // r11
  LONG v75; // ecx
  LONG v76; // r9d
  LONG v77; // r8d
  LONG v78; // edx
  LONG v79; // r12d
  LONG v80; // eax
  unsigned int v81; // ebx
  int v82; // eax
  __int64 v83; // rdi
  LONG v84; // ecx
  LONG v85; // r10d
  LONG v86; // edx
  LONG v87; // r9d
  LONG v88; // r8d
  RECTL rclBkGround; // xmm0
  LONG v90; // ecx
  LONG v91; // ecx
  LONG v92; // r10d
  int v93; // eax
  BOOL (__stdcall *v94)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  char *v95; // rcx
  int v96; // edi
  unsigned int v97; // eax
  void *v98; // r8
  unsigned __int64 v99; // rdx
  void *v100; // r8
  unsigned __int64 v101; // rdx
  struct _GLYPHPOS *v102; // rbx
  ULONG v103; // esi
  ULONG v104; // r12d
  ULONG v105; // eax
  CLIPOBJ *v106; // rdi
  int v107; // r14d
  unsigned __int8 *v108; // r12
  int v109; // eax
  struct _FONTOBJ *v110; // rdx
  int v111; // edi
  int v112; // r9d
  struct _FONTOBJ *v113; // rbx
  __int64 v114; // rdi
  int v115; // eax
  BOOL (__stdcall *v116)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  struct _GLYPHPOS *v117; // r8
  char *v118; // rdx
  bool v119; // sf
  int i; // eax
  int v121; // eax
  char *v122; // rbx
  int (*v123)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rsi
  _DWORD *j; // rdi
  unsigned __int8 *v125; // [rsp+20h] [rbp-100h]
  struct _XLATEOBJ *v126; // [rsp+30h] [rbp-F0h]
  struct _POINTL *v127; // [rsp+40h] [rbp-E0h]
  struct _RECTL *v128; // [rsp+48h] [rbp-D8h]
  struct _RECTL *v129; // [rsp+50h] [rbp-D0h]
  unsigned int v130; // [rsp+60h] [rbp-C0h]
  unsigned int v131; // [rsp+80h] [rbp-A0h]
  char v132; // [rsp+A0h] [rbp-80h]
  int v133; // [rsp+A4h] [rbp-7Ch]
  ULONG v134; // [rsp+A8h] [rbp-78h] BYREF
  ULONG pc; // [rsp+ACh] [rbp-74h] BYREF
  PGLYPHPOS ppgpos; // [rsp+B0h] [rbp-70h] BYREF
  unsigned int v137; // [rsp+B8h] [rbp-68h]
  struct _BRUSHOBJ *v138; // [rsp+C0h] [rbp-60h]
  struct _FONTOBJ *v139; // [rsp+C8h] [rbp-58h]
  int iDComplexity; // [rsp+D0h] [rbp-50h]
  int iSolidColor; // [rsp+D4h] [rbp-4Ch]
  int v142; // [rsp+D8h] [rbp-48h]
  CLIPOBJ *v143; // [rsp+E0h] [rbp-40h]
  PGLYPHPOS v144; // [rsp+E8h] [rbp-38h] BYREF
  unsigned __int64 v145; // [rsp+F0h] [rbp-30h]
  struct SURFACE *v146; // [rsp+F8h] [rbp-28h]
  RECTL *v147; // [rsp+100h] [rbp-20h]
  struct _POINTL *v148; // [rsp+108h] [rbp-18h]
  struct _BRUSHOBJ *v149; // [rsp+110h] [rbp-10h]
  struct SURFACE *v150; // [rsp+118h] [rbp-8h]
  struct _RECTL v151; // [rsp+120h] [rbp+0h] BYREF
  struct SURFACE *v152; // [rsp+130h] [rbp+10h] BYREF
  char v153; // [rsp+138h] [rbp+18h]
  int v154; // [rsp+13Ch] [rbp+1Ch]
  struct _RECTL *v155; // [rsp+140h] [rbp+20h]
  unsigned __int8 *v156; // [rsp+148h] [rbp+28h]
  SURFOBJ *v157; // [rsp+150h] [rbp+30h]
  _DWORD *v158; // [rsp+158h] [rbp+38h]
  __int64 v159; // [rsp+160h] [rbp+40h] BYREF
  __int64 v160; // [rsp+168h] [rbp+48h]
  __int64 v161; // [rsp+170h] [rbp+50h]
  __int64 v162; // [rsp+178h] [rbp+58h]
  _OWORD v163[21]; // [rsp+180h] [rbp+60h] BYREF
  struct _RECTL v164; // [rsp+2D0h] [rbp+1B0h] BYREF
  __int128 v165; // [rsp+2E0h] [rbp+1C0h] BYREF
  RECTL v166; // [rsp+2F0h] [rbp+1D0h] BYREF
  SURFACE *v167; // [rsp+300h] [rbp+1E0h]
  __int64 v168; // [rsp+308h] [rbp+1E8h]
  struct _CLIPOBJ *v169; // [rsp+310h] [rbp+1F0h]
  struct _BRUSHOBJ *v170; // [rsp+318h] [rbp+1F8h]
  int v171; // [rsp+320h] [rbp+200h]
  _DWORD v172[17]; // [rsp+324h] [rbp+204h] BYREF
  struct _FONTOBJ *v173; // [rsp+368h] [rbp+248h]
  _BYTE v174[80]; // [rsp+370h] [rbp+250h] BYREF
  _BYTE v175[80]; // [rsp+3C0h] [rbp+2A0h] BYREF
  _BYTE v176[80]; // [rsp+410h] [rbp+2F0h] BYREF
  struct _RECTL si128; // [rsp+460h] [rbp+340h] BYREF
  int v178; // [rsp+47Ch] [rbp+35Ch]

  v155 = prclExtra;
  v147 = prclOpaque;
  v149 = pboFore;
  v138 = pboOpaque;
  v139 = pfo;
  v157 = pso;
  v148 = pptlOrg;
  v143 = pco;
  memset(v163, 0, 0x144uLL);
  left = pstro->rclBkGround.left;
  v12 = 0;
  top = pstro->rclBkGround.top;
  v14 = 0;
  right = pstro->rclBkGround.right;
  bottom = pstro->rclBkGround.bottom;
  v144 = 0LL;
  v137 = 0;
  v133 = 0;
  v165 = 0uLL;
  v166 = (RECTL)0LL;
  v146 = 0LL;
  v164.left = left;
  v164.top = top;
  v164.right = right;
  v164.bottom = bottom;
  if ( !pstro->ulCharInc )
  {
    pgp = pstro->pgp;
    cGlyphs = pstro->cGlyphs;
    ppgpos = pgp;
    pc = cGlyphs;
    v134 = 0;
    if ( !pgp )
    {
      *(_QWORD *)&pstro[1].cGlyphs = 0LL;
      v12 = 1;
      v134 = 1;
    }
    if ( !v12 )
      goto LABEL_6;
    while ( 1 )
    {
      v12 = STROBJ_bEnum(pstro, &pc, &ppgpos);
      pgp = ppgpos;
      cGlyphs = pc;
      v134 = v12;
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
      v151.left = v22;
      *(_QWORD *)&v151.top = __PAIR64__(v24, v23);
      v151.bottom = v25;
      if ( left == right || top == bottom )
      {
        v164 = v151;
        bottom = v151.bottom;
        right = v151.right;
        top = v151.top;
        left = v151.left;
      }
      else
      {
        if ( v22 < left )
          left = v22;
        v164.left = left;
        if ( v23 < top )
          top = v23;
        v164.top = top;
        if ( v24 > right )
          right = v24;
        v164.right = right;
        if ( v25 > bottom )
        {
          bottom = v25;
          v164.bottom = v25;
        }
      }
      v19 = (unsigned int)(v19 + 1);
      if ( (unsigned int)v19 >= cGlyphs )
      {
        v12 = v134;
        goto LABEL_21;
      }
    }
LABEL_22:
    v14 = 0;
  }
  v29 = SURFOBJ_TO_SURFACE(v157);
  v150 = (struct SURFACE *)v29;
  if ( (v139->flFontType & 0x10000) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v27, v26, v28)
      && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
      && (v32 = *ThreadWin32Thread) != 0 )
    {
      v33 = *(_QWORD *)(v32 + 304);
    }
    else
    {
      v33 = *(_QWORD *)(v29 + 104);
    }
    v146 = v33 ? *(struct SURFACE **)(*(_QWORD *)(*(_QWORD *)v33 + 48LL) + 2552LL) : (struct SURFACE *)v29;
    bottom = v164.bottom;
    right = v164.right;
    top = v164.top;
    left = v164.left;
    v14 = *(_WORD *)(v29 + 100) != 0 ? 0x10 : 0;
    v133 = v14;
    if ( (*(_WORD *)(v29 + 102) & 0x100) != 0 )
    {
      v14 |= 0x80u;
      v133 = v14;
    }
  }
  flFontType = v139->flFontType;
  if ( (flFontType & 2) != 0 )
    return 0;
  if ( v143 )
    iDComplexity = v143->iDComplexity;
  else
    iDComplexity = 0;
  LODWORD(ppgpos) = -1;
  iSolidColor = v149->iSolidColor;
  if ( (flFontType & 0x10000) != 0 )
  {
    if ( *(_DWORD *)(v29 + 96) != 3 )
      goto LABEL_46;
    if ( (unsigned int)bUMPDSecurityGateEx() && !v138 )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n", 639);
      return 0;
    }
    if ( v138->iSolidColor != -1 )
    {
LABEL_46:
      v36 = v14 | 8;
      v133 = v36;
      v37 = v139->flFontType;
      if ( (v37 & 0x10000000) != 0 )
      {
        v38 = pstro->rclBkGround.right;
        v133 = v36 | 0x20;
        v39 = 8;
        if ( v38 > 2147483643 )
          return 0;
        v40 = pstro->rclBkGround.left;
        if ( (unsigned int)(v38 - v40 + 4) >= 0x7FFFFFFF )
          return 0;
        v41 = pstro->rclBkGround.left;
        v42 = ((v38 + 4) & 0xFFFFFFFC) - (v40 & 0xFFFFFFFC);
        v43 = pstro->rclBkGround.right;
      }
      else if ( (v37 & 0x20000000) != 0 )
      {
        v42 = v137;
        v39 = v137;
        v41 = pstro->rclBkGround.left;
        v43 = pstro->rclBkGround.right;
      }
      else
      {
        v39 = 4;
        v41 = pstro->rclBkGround.left;
        v43 = pstro->rclBkGround.right;
        v42 = (((v43 + 8) >> 1) & 0xFFFFFFFC) - ((v41 >> 1) & 0xFFFFFFFC);
      }
      goto LABEL_54;
    }
    return 0;
  }
  v43 = pstro->rclBkGround.right;
  v39 = 1;
  v41 = pstro->rclBkGround.left;
  v42 = (int)(((v43 + 32) & 0xFFFFFFE0) - (v41 & 0xFFFFFFE0)) >> 3;
LABEL_54:
  v44 = ((v39 * (v41 - left) + 31) >> 3) & 0x1FFFFFFC;
  v45 = v44 + (((v39 * (right - v43) + 31) >> 3) & 0x1FFFFFFC) + v42;
  v46 = v45 * (unsigned __int64)(unsigned int)(bottom - top);
  v137 = v45;
  v145 = v46;
  if ( v46 > 0xFFFFFFFF )
    return 0;
  if ( (unsigned int)v46 >= 0x10000 )
  {
    v47 = 0;
    v132 = 0;
    v48 = EngAllocUserMem((unsigned int)v46, 0x6F746547u);
  }
  else
  {
    v47 = 1;
    v132 = 1;
    v48 = (_DWORD *)AllocThreadBufferWithTag(v46, 1869899079LL, 32LL);
  }
  v158 = v48;
  v50 = v48;
  if ( !v48 )
    return 0;
  flAccel = pstro->flAccel;
  v52 = v137 * (pstro->rclBkGround.top - top);
  v53 = v133;
  v54 = (unsigned __int8 *)v50 + v52 + v44;
  LOBYTE(v52) = pstro->flAccel & 0xA;
  v156 = v54;
  if ( (_BYTE)v52 == 2 )
  {
    v55 = 0;
    if ( (flAccel & 0x51) == 0x51 )
      v55 = 4;
    flAccel &= 0x11u;
    v56 = 0;
    if ( (_BYTE)flAccel != 17 )
      v56 = 2;
    v54 = (unsigned __int8 *)((pstro->ulCharInc != 0) | v56 | (unsigned int)v55);
    v53 = (unsigned int)v54 | v133;
    v133 |= (unsigned int)v54;
  }
  v167 = (SURFACE *)v29;
  if ( *(_WORD *)(v29 + 100) )
    v168 = 0LL;
  else
    v168 = *(_QWORD *)(v29 + 72);
  v57 = v143;
  v170 = v138;
  v173 = v139;
  v169 = v143;
  v171 = 0;
  if ( v147 )
  {
    v58 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v54, flAccel, v49)
      && (v60 = (__int64 *)PsGetThreadWin32Thread(v58)) != 0LL
      && (v61 = *v60) != 0 )
    {
      v62 = *(_QWORD *)(v61 + 40);
      v63 = v62 == v61 + 40;
      v64 = v138;
      if ( !v63 )
      {
        v65 = v62 - 40;
        if ( v65 )
        {
          if ( (*(_DWORD *)(v65 + 412) & 0x100) != 0 && *(_DWORD *)(v65 + 420) && !v138 )
          {
            if ( gfUMPDDebug )
              DbgPrint("windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n", 857);
            if ( v47 )
              FreeThreadBufferWithTag(v50);
            else
              EngFreeUserMem(v50);
            v66 = 0;
            goto LABEL_173;
          }
        }
      }
    }
    else
    {
      v64 = v138;
    }
    v67 = v64->iSolidColor;
    LODWORD(ppgpos) = v67;
    if ( v67 == -1 || iSolidColor == -1 )
    {
      EngTextOutBitBlt(
        (struct SURFACE *)v29,
        v139,
        v53,
        v59,
        (struct _SURFOBJ *)v125,
        v57,
        v126,
        v147,
        v127,
        (struct _POINTL *)v128,
        v64,
        v148,
        v130);
      p_rclBkGround = &pstro->rclBkGround;
    }
    else
    {
      v68 = v147;
      v69 = pstro->rclBkGround.top;
      v70 = v147->top;
      v71 = v147->left;
      if ( v69 <= v70 )
      {
        v72 = v171;
      }
      else
      {
        v172[4 * v171] = v71;
        v172[4 * v171 + 1] = v70;
        v172[4 * v171 + 2] = v68->right;
        v172[4 * v171 + 3] = v69;
        v72 = ++v171;
      }
      v73 = pstro->rclBkGround.left;
      p_rclBkGround = &pstro->rclBkGround;
      v75 = pstro->rclBkGround.bottom;
      if ( v73 > v71 )
      {
        v172[4 * v72] = v71;
        v172[4 * v171 + 1] = v69;
        v172[4 * v171 + 2] = v73;
        v172[4 * v171 + 3] = v75;
        v72 = ++v171;
      }
      v76 = pstro->rclBkGround.right;
      v77 = v68->right;
      if ( v76 < v77 )
      {
        v172[4 * v72] = v76;
        v172[4 * v171 + 1] = v69;
        v172[4 * v171 + 2] = v77;
        v172[4 * v171 + 3] = v75;
        v72 = ++v171;
      }
      v78 = v68->bottom;
      if ( v75 < v78 )
      {
        v172[4 * v72] = v71;
        v172[4 * v171 + 1] = v75;
        v172[4 * v171 + 2] = v77;
        v172[4 * v171++ + 3] = v78;
      }
    }
  }
  else
  {
    v67 = (unsigned int)ppgpos;
    p_rclBkGround = &pstro->rclBkGround;
  }
  v152 = 0LL;
  v159 = 0LL;
  v160 = 0LL;
  v161 = 0LL;
  v162 = 0LL;
  v153 = 0;
  v142 = v53 & 0x10;
  v154 = 0;
  if ( (v53 & 0x10) != 0 )
  {
    v79 = pstro->rclBkGround.top;
    LODWORD(v159) = *(_DWORD *)(v29 + 96);
    v80 = pstro->rclBkGround.right;
    LODWORD(v162) = 1;
    v81 = p_rclBkGround->left & ((v53 >> 3) & 4 | 0xFFFFFFF8);
    v161 = 0LL;
    HIDWORD(v159) = v80 - v81;
    LODWORD(v160) = pstro->rclBkGround.bottom - v79;
    v82 = 1;
    if ( (*(_DWORD *)(v29 + 112) & 0x40000) != 0 )
      v82 = 262145;
    LODWORD(v162) = v82;
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v152, (struct _DEVBITMAPINFO *)&v159, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    {
      if ( v132 )
        FreeThreadBufferWithTag(v50);
      else
        EngFreeUserMem(v50);
      v66 = 0;
      goto LABEL_172;
    }
    v83 = *(_QWORD *)(v29 + 48);
    v84 = 0;
    v85 = 0;
    v150 = v152;
    if ( v29 == *(_QWORD *)(v83 + 2552) && (*(_DWORD *)(v83 + 40) & 0x20000) != 0 )
    {
      v84 = *(_DWORD *)(v83 + 2584);
      v85 = *(_DWORD *)(v83 + 2588);
    }
    v86 = pstro->rclBkGround.left;
    v87 = pstro->rclBkGround.top;
    if ( v84 > v86 )
      v86 = v84;
    v88 = pstro->rclBkGround.right;
    rclBkGround = pstro->rclBkGround;
    if ( v85 > v87 )
      v87 = v85;
    *(_QWORD *)&v165 = __PAIR64__(v87, v86);
    v90 = v157->sizlBitmap.cx + v84;
    v166 = rclBkGround;
    if ( v90 < v88 )
      v88 = v90;
    v91 = v85 + v157->sizlBitmap.cy;
    DWORD2(v165) = v88;
    v92 = pstro->rclBkGround.bottom;
    if ( v91 < v92 )
      v92 = v91;
    HIDWORD(v165) = v92;
    if ( iDComplexity )
    {
      if ( !(unsigned int)bIntersect(&v165, &v143->rclBounds) )
        goto LABEL_168;
      v92 = HIDWORD(v165);
      v88 = DWORD2(v165);
      v87 = DWORD1(v165);
      v86 = v165;
    }
    v166.top = DWORD1(v165) - v79;
    v166.right = DWORD2(v165) - v81;
    v166.bottom = HIDWORD(v165) - v79;
    v166.left = v86 - v81;
    if ( v67 == -1 && v86 < v88 && v87 < v92 )
    {
      v93 = bUMPDSecurityGateEx();
      UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
        (UMPDReleaseAcquireRFONTSem *)v174,
        (struct SURFACE *)v29,
        v139,
        v93);
      if ( (*(_DWORD *)(v29 + 112) & 0x400) != 0 )
        v94 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v83 + 2840);
      else
        v94 = EngCopyBits;
      if ( v152 )
        v95 = (char *)v152 + 24;
      else
        v95 = 0LL;
      ((void (__fastcall *)(char *, __int64, _QWORD, XLATEOBJ *const, RECTL *, __int128 *))v94)(
        v95,
        v29 + 24,
        0LL,
        xloIdent,
        &v166,
        &v165);
      UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v174);
    }
  }
  v96 = (int)ppgpos;
  v97 = v145;
  *(_QWORD *)&pstro[1].cGlyphs = 0LL;
  if ( v96 == -1 )
    goto LABEL_137;
  v98 = v50;
  v99 = (unsigned __int64)v97 >> 2;
  if ( v99 )
  {
    if ( ((unsigned __int8)v50 & 4) != 0 )
    {
      *v50 = 0;
      if ( !--v99 )
        goto LABEL_136;
      v98 = v50 + 1;
    }
    memset(v98, 0, 8 * (v99 >> 1));
    v96 = (int)ppgpos;
    v97 = v145;
    if ( (v99 & 1) != 0 )
      *((_DWORD *)v98 + v99 - 1) = 0;
  }
  do
  {
LABEL_136:
    if ( v96 != -1 )
      goto LABEL_143;
LABEL_137:
    v100 = v50;
    v101 = (unsigned __int64)v97 >> 2;
    if ( v101 )
    {
      if ( ((unsigned __int8)v50 & 4) != 0 )
      {
        *v50 = 0;
        if ( !--v101 )
          goto LABEL_143;
        v100 = v50 + 1;
      }
      memset(v100, 0, 8 * (v101 >> 1));
      v96 = (int)ppgpos;
      if ( (v101 & 1) != 0 )
        *((_DWORD *)v100 + v101 - 1) = 0;
    }
LABEL_143:
    v102 = pstro->pgp;
    if ( v102 )
    {
      v103 = pstro->cGlyphs;
      v104 = 0;
      v134 = pstro->cGlyphs;
      v144 = v102;
      pc = 0;
    }
    else
    {
      if ( ((__int64)pstro[4].pwszOrg & 2) != 0 )
        v105 = STROBJ_bEnum(pstro, &v134, &v144);
      else
        v105 = STROBJ_bEnumCheckBounds(pstro, &v134, &v144, &v164);
      v103 = v134;
      v102 = v144;
      v104 = v105;
      pc = v105;
    }
    if ( !v103 )
      goto LABEL_156;
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
    v178 = 0;
    if ( iDComplexity )
    {
      if ( iDComplexity != 1 )
      {
        if ( iDComplexity == 3 )
        {
          v106 = v143;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v143, 0, 0, 4u, 0);
          v107 = (int)ppgpos;
          v108 = v156;
          do
          {
            v109 = XCLIPOBJ::bEnum((XCLIPOBJ *)v106, 0x134u, v163, 0LL);
            v110 = v139;
            v111 = v109;
            LODWORD(v163[LODWORD(v163[0]) + 1]) = v112;
            vExpandAndCopyText(
              (struct SURFACE *)v29,
              v110,
              v102,
              v103,
              v108,
              v137,
              pstro->ulCharInc,
              v150,
              v146,
              &pstro->rclBkGround,
              v129,
              iSolidColor,
              v107,
              v133,
              (struct _RECTL *)((char *)v163 + 4),
              v155,
              v131,
              v149,
              v148);
            v63 = v111 == 0;
            v106 = v143;
          }
          while ( !v63 );
          v50 = v158;
          v104 = pc;
        }
LABEL_156:
        v113 = v139;
        goto LABEL_157;
      }
      si128 = v143->rclBounds;
    }
    v117 = v102;
    v113 = v139;
    vExpandAndCopyText(
      (struct SURFACE *)v29,
      v139,
      v117,
      v103,
      v156,
      v137,
      pstro->ulCharInc,
      v150,
      v146,
      &pstro->rclBkGround,
      v129,
      iSolidColor,
      v96,
      v133,
      &si128,
      v155,
      v131,
      v149,
      v148);
LABEL_157:
    v96 = (int)ppgpos;
    v97 = v145;
  }
  while ( v104 );
  if ( v142 )
  {
    v114 = *(_QWORD *)(v29 + 48);
    v115 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
      (UMPDReleaseAcquireRFONTSem *)v175,
      (struct SURFACE *)v29,
      v113,
      v115);
    if ( (*(_DWORD *)(v29 + 112) & 0x400) != 0 )
      v116 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v114 + 2840);
    else
      v116 = EngCopyBits;
    if ( v152 )
      v118 = (char *)v152 + 24;
    else
      v118 = 0LL;
    ((void (__fastcall *)(__int64, char *, CLIPOBJ *, _QWORD, __int128 *, RECTL *))v116)(
      v29 + 24,
      v118,
      v143,
      0LL,
      &v165,
      &v166);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v175);
  }
LABEL_168:
  if ( v132 )
    FreeThreadBufferWithTag(v50);
  else
    EngFreeUserMem(v50);
  v66 = 1;
LABEL_172:
  SURFMEM::~SURFMEM((SURFMEM *)&v152);
LABEL_173:
  if ( v168 )
  {
    v119 = v171 - 1 < 0;
    for ( i = --v171; !v119; --v171 )
    {
      vDIBSolidBlt(v167, (struct _RECTL *)&v172[4 * i], v169, v170->iSolidColor, 0);
      v119 = v171 - 1 < 0;
      i = v171 - 1;
    }
    return v66;
  }
  else
  {
    v121 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v176, v167, v173, v121);
    v122 = 0LL;
    *(_QWORD *)&v151.left = 0LL;
    if ( v167 )
      v122 = (char *)v167 + 24;
    v123 = SURFACE::pfnBitBlt(v167);
    for ( j = v172; j < &v172[4 * v171]; j += 4 )
      ((void (__fastcall *)(char *, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD, _DWORD *, _QWORD, _QWORD, struct _BRUSHOBJ *, struct _RECTL *, int))v123)(
        v122,
        0LL,
        0LL,
        v169,
        0LL,
        j,
        0LL,
        0LL,
        v170,
        &v151,
        61680);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v176);
    return v66;
  }
}
