/*
 * XREFs of EngTextOut @ 0x1C0087B90
 * Callers:
 *     NtGdiEngTextOut @ 0x1C008E9B0 (NtGdiEngTextOut.c)
 *     ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C027A2E0 (-PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C027EA60 (-BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02814A0 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0287FE0 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 * Callees:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C0088B10 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C0089930 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C008B104 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C008B300 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     STROBJ_bEnum @ 0x1C008B570 (STROBJ_bEnum.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C008FDD0 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C009FF7C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F22E4 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     ?bInEngCall@UMPDOBJ@@QEAA_NXZ @ 0x1C015EBC0 (-bInEngCall@UMPDOBJ@@QEAA_NXZ.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C015FD24 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C015FDA8 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C0274348 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
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
  int v10; // r12d
  LONG left; // esi
  LONG top; // edi
  LONG right; // ebx
  LONG bottom; // r14d
  struct _GLYPHPOS *pgp; // r13
  ULONG v17; // eax
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
  __int64 v28; // r13
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  FLONG flFontType; // eax
  int v35; // r12d
  FLONG v36; // eax
  LONG v37; // edx
  unsigned int v38; // r8d
  LONG v39; // ecx
  LONG v40; // r12d
  unsigned int v41; // edx
  LONG v42; // ecx
  unsigned int v43; // r12d
  unsigned int v44; // edx
  unsigned int v45; // ebx
  unsigned __int64 v46; // rcx
  _DWORD *v47; // rax
  _DWORD *v48; // r14
  __int64 flAccel; // rdx
  __int64 v50; // rcx
  unsigned int v51; // r12d
  unsigned __int8 *v52; // rcx
  char v53; // al
  int v54; // ecx
  int v55; // eax
  struct _BRUSHOBJ *v56; // rsi
  struct _KTHREAD *v57; // rdi
  struct _SURFOBJ *v58; // r9
  __int64 *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  UMPDOBJ *v62; // rcx
  BOOL v63; // r14d
  ULONG v64; // esi
  RECTL *v65; // r10
  LONG v66; // edx
  LONG v67; // ecx
  LONG v68; // edi
  int v69; // eax
  LONG v70; // r8d
  RECTL *p_rclBkGround; // r11
  LONG v72; // ecx
  LONG v73; // r9d
  LONG v74; // r8d
  LONG v75; // edx
  unsigned int v76; // ebx
  LONG v77; // eax
  LONG v78; // r12d
  unsigned int v79; // ebx
  int v80; // eax
  __int64 v81; // rdi
  LONG v82; // ecx
  int v83; // r10d
  LONG v84; // edx
  __int64 v85; // r9
  __int64 v86; // r8
  RECTL rclBkGround; // xmm0
  int v88; // ecx
  int v89; // ecx
  LONG v90; // r10d
  bool v91; // cf
  int v92; // eax
  BOOL (__stdcall *v93)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  char *v94; // rcx
  int v95; // edi
  void *v96; // r8
  unsigned __int64 v97; // rdx
  void *v98; // r8
  unsigned __int64 v99; // rdx
  struct _GLYPHPOS *v100; // rbx
  ULONG v101; // esi
  ULONG v102; // r12d
  ULONG v103; // eax
  CLIPOBJ *v104; // rdi
  int v105; // r14d
  unsigned __int8 *v106; // r12
  int v107; // eax
  struct _FONTOBJ *v108; // rdx
  int v109; // edi
  LONG v110; // r9d
  bool v111; // zf
  struct _FONTOBJ *v112; // rsi
  __int64 v113; // rdi
  int v114; // eax
  BOOL (__stdcall *v115)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  unsigned int v116; // r9d
  char *v117; // rdx
  bool v118; // sf
  int i; // eax
  int v120; // eax
  char *v121; // rbx
  int (*v122)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rsi
  _DWORD *j; // rdi
  unsigned __int8 *v124; // [rsp+20h] [rbp-100h]
  struct _XLATEOBJ *v125; // [rsp+30h] [rbp-F0h]
  struct _POINTL *v126; // [rsp+40h] [rbp-E0h]
  struct _RECTL *v127; // [rsp+48h] [rbp-D8h]
  struct _RECTL *v128; // [rsp+50h] [rbp-D0h]
  unsigned int v129; // [rsp+60h] [rbp-C0h]
  unsigned int v130; // [rsp+80h] [rbp-A0h]
  int v131; // [rsp+A0h] [rbp-80h]
  unsigned int v132; // [rsp+A4h] [rbp-7Ch]
  ULONG v133; // [rsp+A8h] [rbp-78h] BYREF
  ULONG pc; // [rsp+ACh] [rbp-74h] BYREF
  PGLYPHPOS ppgpos; // [rsp+B0h] [rbp-70h] BYREF
  unsigned int v136; // [rsp+B8h] [rbp-68h]
  struct _FONTOBJ *v137; // [rsp+C0h] [rbp-60h]
  CLIPOBJ *v138; // [rsp+C8h] [rbp-58h]
  int iDComplexity; // [rsp+D0h] [rbp-50h]
  int iSolidColor; // [rsp+D4h] [rbp-4Ch]
  struct _BRUSHOBJ *v141; // [rsp+D8h] [rbp-48h]
  PGLYPHPOS v142; // [rsp+E0h] [rbp-40h] BYREF
  struct SURFACE *v143; // [rsp+E8h] [rbp-38h]
  RECTL *v144; // [rsp+F0h] [rbp-30h]
  struct _POINTL *v145; // [rsp+F8h] [rbp-28h]
  struct _BRUSHOBJ *v146; // [rsp+100h] [rbp-20h]
  struct SURFACE *v147; // [rsp+108h] [rbp-18h]
  struct _RECTL v148; // [rsp+110h] [rbp-10h] BYREF
  struct SURFACE *v149; // [rsp+120h] [rbp+0h] BYREF
  char v150; // [rsp+128h] [rbp+8h]
  int v151; // [rsp+12Ch] [rbp+Ch]
  struct _RECTL *v152; // [rsp+130h] [rbp+10h]
  unsigned __int8 *v153; // [rsp+138h] [rbp+18h]
  SURFOBJ *v154; // [rsp+140h] [rbp+20h]
  _DWORD *v155; // [rsp+148h] [rbp+28h]
  __int64 v156; // [rsp+150h] [rbp+30h] BYREF
  __int64 v157; // [rsp+158h] [rbp+38h]
  __int64 v158; // [rsp+160h] [rbp+40h]
  __int64 v159; // [rsp+168h] [rbp+48h]
  int v160; // [rsp+170h] [rbp+50h] BYREF
  struct _RECTL v161[20]; // [rsp+174h] [rbp+54h] BYREF
  struct _RECTL v162; // [rsp+2C0h] [rbp+1A0h] BYREF
  LONG v163; // [rsp+2D0h] [rbp+1B0h] BYREF
  int v164; // [rsp+2D4h] [rbp+1B4h]
  int v165; // [rsp+2D8h] [rbp+1B8h]
  LONG v166; // [rsp+2DCh] [rbp+1BCh]
  RECTL v167; // [rsp+2E0h] [rbp+1C0h] BYREF
  SURFACE *v168; // [rsp+2F0h] [rbp+1D0h]
  __int64 v169; // [rsp+2F8h] [rbp+1D8h]
  struct _CLIPOBJ *v170; // [rsp+300h] [rbp+1E0h]
  struct _BRUSHOBJ *v171; // [rsp+308h] [rbp+1E8h]
  int v172; // [rsp+310h] [rbp+1F0h]
  _DWORD v173[17]; // [rsp+314h] [rbp+1F4h] BYREF
  struct _FONTOBJ *v174; // [rsp+358h] [rbp+238h]
  _BYTE v175[96]; // [rsp+360h] [rbp+240h] BYREF
  _BYTE v176[96]; // [rsp+3C0h] [rbp+2A0h] BYREF
  _BYTE v177[96]; // [rsp+420h] [rbp+300h] BYREF
  struct _RECTL si128; // [rsp+480h] [rbp+360h] BYREF
  int v179; // [rsp+49Ch] [rbp+37Ch]

  v10 = 0;
  left = pstro->rclBkGround.left;
  top = pstro->rclBkGround.top;
  right = pstro->rclBkGround.right;
  bottom = pstro->rclBkGround.bottom;
  v152 = prclExtra;
  v144 = prclOpaque;
  v146 = pboFore;
  v141 = pboOpaque;
  v145 = pptlOrg;
  v138 = pco;
  v137 = pfo;
  v154 = pso;
  v142 = 0LL;
  v136 = 0;
  v131 = 0;
  v143 = 0LL;
  v162.left = left;
  v162.top = top;
  v162.right = right;
  v162.bottom = bottom;
  if ( !pstro->ulCharInc )
  {
    pgp = pstro->pgp;
    v17 = 0;
    cGlyphs = pstro->cGlyphs;
    ppgpos = pgp;
    pc = cGlyphs;
    v133 = 0;
    if ( !pgp )
    {
      *(_QWORD *)&pstro[1].cGlyphs = 0LL;
      v17 = 1;
      v133 = 1;
    }
    if ( !v17 )
      goto LABEL_6;
    while ( 1 )
    {
      v17 = STROBJ_bEnum(pstro, &pc, &ppgpos);
      pgp = ppgpos;
      cGlyphs = pc;
      v133 = v17;
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
      v148.left = v22;
      *(_QWORD *)&v148.top = __PAIR64__(v24, v23);
      v148.bottom = v25;
      if ( left == right || top == bottom )
      {
        v162 = v148;
        bottom = v148.bottom;
        right = v148.right;
        top = v148.top;
        left = v148.left;
      }
      else
      {
        if ( v22 < left )
          left = v22;
        v162.left = left;
        if ( v23 < top )
          top = v23;
        v162.top = top;
        if ( v24 > right )
          right = v24;
        v162.right = right;
        if ( v25 > bottom )
        {
          bottom = v25;
          v162.bottom = v25;
        }
      }
      v19 = (unsigned int)(v19 + 1);
      if ( (unsigned int)v19 >= cGlyphs )
      {
        v17 = v133;
        goto LABEL_21;
      }
    }
LABEL_22:
    v10 = 0;
  }
  v28 = SURFOBJ_TO_SURFACE(v154);
  v147 = (struct SURFACE *)v28;
  if ( (v137->flFontType & 0x10000) != 0 )
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
    v143 = v32 ? *(struct SURFACE **)(*(_QWORD *)(*(_QWORD *)v32 + 48LL) + 2552LL) : (struct SURFACE *)v28;
    bottom = v162.bottom;
    right = v162.right;
    top = v162.top;
    left = v162.left;
    v10 = *(_WORD *)(v28 + 100) != 0 ? 0x10 : 0;
    v131 = v10;
    if ( (*(_WORD *)(v28 + 102) & 0x100) != 0 )
    {
      v10 |= 0x80u;
      v131 = v10;
    }
  }
  flFontType = v137->flFontType;
  if ( (flFontType & 2) != 0 )
    return 0;
  if ( v138 )
    iDComplexity = v138->iDComplexity;
  else
    iDComplexity = 0;
  LODWORD(ppgpos) = -1;
  iSolidColor = v146->iSolidColor;
  if ( (flFontType & 0x10000) != 0 )
  {
    if ( *(_DWORD *)(v28 + 96) != 3 )
      goto LABEL_46;
    if ( (unsigned int)bUMPDSecurityGateEx() && !v141 )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n", 639);
      return 0;
    }
    if ( v141->iSolidColor != -1 )
    {
LABEL_46:
      v35 = v10 | 8;
      v131 = v35;
      v36 = v137->flFontType;
      if ( (v36 & 0x10000000) != 0 )
      {
        v37 = pstro->rclBkGround.right;
        v131 = v35 | 0x20;
        v38 = 8;
        if ( v37 > 2147483643 )
          return 0;
        v39 = pstro->rclBkGround.left;
        if ( (unsigned int)(v37 - v39 + 4) >= 0x7FFFFFFF )
          return 0;
        v40 = pstro->rclBkGround.left;
        v41 = ((v37 + 4) & 0xFFFFFFFC) - (v39 & 0xFFFFFFFC);
        v42 = pstro->rclBkGround.right;
      }
      else if ( (v36 & 0x20000000) != 0 )
      {
        v41 = v136;
        v38 = v136;
        v40 = pstro->rclBkGround.left;
        v42 = pstro->rclBkGround.right;
      }
      else
      {
        v38 = 4;
        v40 = pstro->rclBkGround.left;
        v42 = pstro->rclBkGround.right;
        v41 = (((v42 + 8) >> 1) & 0xFFFFFFFC) - ((v40 >> 1) & 0xFFFFFFFC);
      }
      goto LABEL_54;
    }
    return 0;
  }
  v42 = pstro->rclBkGround.right;
  v38 = 1;
  v40 = pstro->rclBkGround.left;
  v41 = (int)(((v42 + 32) & 0xFFFFFFE0) - (v40 & 0xFFFFFFE0)) >> 3;
LABEL_54:
  v43 = ((v38 * (v40 - left) + 31) >> 3) & 0x1FFFFFFC;
  v44 = v43 + (((v38 * (right - v42) + 31) >> 3) & 0x1FFFFFFC) + v41;
  v45 = -1;
  v46 = v44 * (unsigned __int64)(unsigned int)(bottom - top);
  v136 = v44;
  if ( v46 <= 0xFFFFFFFF )
    v45 = v44 * (bottom - top);
  v132 = v45;
  if ( v46 > 0xFFFFFFFF )
    return 0;
  v47 = v45 >= 0x10000
      ? EngAllocUserMem(v45, 0x6F746547u)
      : (_DWORD *)AllocThreadBufferWithTag(v45, 1869899079LL, 32LL, 0xFFFFFFFFLL);
  v155 = v47;
  v48 = v47;
  if ( !v47 )
    return 0;
  flAccel = pstro->flAccel;
  v50 = v43;
  v51 = v131;
  v52 = (unsigned __int8 *)v47 + v136 * (pstro->rclBkGround.top - top) + v50;
  v53 = pstro->flAccel & 0xA;
  v153 = v52;
  if ( v53 == 2 )
  {
    v54 = 0;
    if ( (flAccel & 0x51) == 0x51 )
      v54 = 4;
    flAccel &= 0x11u;
    v55 = 0;
    if ( (_BYTE)flAccel != 17 )
      v55 = 2;
    v52 = (unsigned __int8 *)((pstro->ulCharInc != 0) | v55 | (unsigned int)v54);
    v51 = (unsigned int)v52 | v131;
    v131 |= (unsigned int)v52;
  }
  v168 = (SURFACE *)v28;
  if ( *(_WORD *)(v28 + 100) )
    v169 = 0LL;
  else
    v169 = *(_QWORD *)(v28 + 72);
  v56 = v141;
  v170 = v138;
  v174 = v137;
  v171 = v141;
  v172 = 0;
  if ( v144 )
  {
    v57 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v52, flAccel) )
    {
      v59 = (__int64 *)PsGetThreadWin32Thread(v57);
      if ( v59 )
      {
        v60 = *v59;
        if ( v60 )
        {
          v61 = *(_QWORD *)(v60 + 40);
          if ( v61 != v60 + 40 )
          {
            v62 = (UMPDOBJ *)(v61 - 40);
            if ( v62 )
            {
              if ( (*((_DWORD *)v62 + 103) & 0x100) != 0 && UMPDOBJ::bInEngCall(v62) && !v56 )
              {
                if ( gfUMPDDebug )
                  DbgPrint("windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n", 857);
                if ( v45 >= 0x10000 )
                  EngFreeUserMem(v48);
                else
                  FreeThreadBufferWithTag(v48);
                v63 = 0;
                goto LABEL_177;
              }
            }
          }
        }
      }
    }
    v64 = v56->iSolidColor;
    LODWORD(ppgpos) = v64;
    if ( v64 == -1 || iSolidColor == -1 )
    {
      EngTextOutBitBlt(
        (struct SURFACE *)v28,
        v137,
        v51,
        v58,
        (struct _SURFOBJ *)v124,
        v138,
        v125,
        v144,
        v126,
        (struct _POINTL *)v127,
        v141,
        v145,
        v129);
      p_rclBkGround = &pstro->rclBkGround;
    }
    else
    {
      v65 = v144;
      v66 = pstro->rclBkGround.top;
      v67 = v144->top;
      v68 = v144->left;
      if ( v66 <= v67 )
      {
        v69 = v172;
      }
      else
      {
        v173[4 * v172] = v68;
        v173[4 * v172 + 1] = v67;
        v173[4 * v172 + 2] = v65->right;
        v173[4 * v172 + 3] = v66;
        v69 = ++v172;
      }
      v70 = pstro->rclBkGround.left;
      p_rclBkGround = &pstro->rclBkGround;
      v72 = pstro->rclBkGround.bottom;
      if ( v70 > v68 )
      {
        v173[4 * v69] = v68;
        v173[4 * v172 + 1] = v66;
        v173[4 * v172 + 2] = v70;
        v173[4 * v172 + 3] = v72;
        v69 = ++v172;
      }
      v73 = pstro->rclBkGround.right;
      v74 = v65->right;
      if ( v73 < v74 )
      {
        v173[4 * v69] = v73;
        v173[4 * v172 + 1] = v66;
        v173[4 * v172 + 2] = v74;
        v173[4 * v172 + 3] = v72;
        v69 = ++v172;
      }
      v75 = v65->bottom;
      if ( v72 < v75 )
      {
        v173[4 * v69] = v68;
        v173[4 * v172 + 1] = v72;
        v173[4 * v172 + 2] = v74;
        v173[4 * v172++ + 3] = v75;
      }
    }
  }
  else
  {
    v64 = (unsigned int)ppgpos;
    p_rclBkGround = &pstro->rclBkGround;
  }
  v149 = 0LL;
  v156 = 0LL;
  v157 = 0LL;
  v158 = 0LL;
  v159 = 0LL;
  v150 = 0;
  LODWORD(v141) = v51 & 0x10;
  v151 = 0;
  if ( (v51 & 0x10) != 0 )
  {
    LODWORD(v156) = *(_DWORD *)(v28 + 96);
    v76 = v51;
    v77 = pstro->rclBkGround.right;
    v78 = pstro->rclBkGround.top;
    LODWORD(v159) = 1;
    v79 = p_rclBkGround->left & ((v76 >> 3) & 4 | 0xFFFFFFF8);
    v158 = 0LL;
    HIDWORD(v156) = v77 - v79;
    LODWORD(v157) = pstro->rclBkGround.bottom - v78;
    v80 = 1;
    if ( (*(_DWORD *)(v28 + 112) & 0x40000) != 0 )
      v80 = 262145;
    LODWORD(v159) = v80;
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v149, (struct _DEVBITMAPINFO *)&v156, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    {
      if ( v132 >= 0x10000 )
        EngFreeUserMem(v48);
      else
        FreeThreadBufferWithTag(v48);
      v63 = 0;
      goto LABEL_176;
    }
    v81 = *(_QWORD *)(v28 + 48);
    v82 = 0;
    v83 = 0;
    v147 = v149;
    if ( v28 == *(_QWORD *)(v81 + 2552) && (*(_DWORD *)(v81 + 40) & 0x20000) != 0 )
    {
      v82 = *(_DWORD *)(v81 + 2584);
      v83 = *(_DWORD *)(v81 + 2588);
    }
    v84 = pstro->rclBkGround.left;
    v85 = (unsigned int)pstro->rclBkGround.top;
    if ( v82 > v84 )
      v84 = v82;
    v86 = (unsigned int)pstro->rclBkGround.right;
    rclBkGround = pstro->rclBkGround;
    if ( v83 > (int)v85 )
      v85 = (unsigned int)v83;
    v163 = v84;
    v88 = v154->sizlBitmap.cx + v82;
    v167 = rclBkGround;
    v164 = v85;
    if ( v88 < (int)v86 )
      v86 = (unsigned int)v88;
    v89 = v83 + v154->sizlBitmap.cy;
    v165 = v86;
    v90 = pstro->rclBkGround.bottom;
    if ( v89 < v90 )
      v90 = v89;
    v166 = v90;
    if ( iDComplexity )
    {
      if ( !(unsigned int)bIntersect(&v163, &v138->rclBounds, v86, v85) )
      {
        v91 = v132 < 0x10000;
        goto LABEL_172;
      }
      v90 = v166;
      LODWORD(v86) = v165;
      LODWORD(v85) = v164;
      v84 = v163;
    }
    v167.top = v164 - v78;
    v167.right = v165 - v79;
    v167.bottom = v166 - v78;
    v167.left = v84 - v79;
    if ( v64 == -1 && v84 < (int)v86 && (int)v85 < v90 )
    {
      v92 = bUMPDSecurityGateEx();
      UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
        (UMPDReleaseAcquireRFONTSem *)v175,
        (struct SURFACE *)v28,
        v137,
        v92);
      if ( (*(_DWORD *)(v28 + 112) & 0x400) != 0 )
        v93 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v81 + 2840);
      else
        v93 = EngCopyBits;
      if ( v149 )
        v94 = (char *)v149 + 24;
      else
        v94 = 0LL;
      ((void (__fastcall *)(char *, __int64, _QWORD, XLATEOBJ *const, RECTL *, LONG *))v93)(
        v94,
        v28 + 24,
        0LL,
        xloIdent,
        &v167,
        &v163);
      UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v175);
    }
    v45 = v132;
  }
  v95 = (int)ppgpos;
  *(_QWORD *)&pstro[1].cGlyphs = 0LL;
  if ( v95 == -1 )
    goto LABEL_140;
  v96 = v48;
  v97 = (unsigned __int64)v45 >> 2;
  if ( v97 )
  {
    if ( ((unsigned __int8)v48 & 4) != 0 )
    {
      *v48 = 0;
      if ( !--v97 )
        goto LABEL_139;
      v96 = v48 + 1;
    }
    memset(v96, 0, 8 * (v97 >> 1));
    v95 = (int)ppgpos;
    if ( (v97 & 1) != 0 )
      *((_DWORD *)v96 + v97 - 1) = 0;
  }
  do
  {
LABEL_139:
    if ( v95 != -1 )
      goto LABEL_146;
LABEL_140:
    v98 = v48;
    v99 = (unsigned __int64)v45 >> 2;
    if ( v99 )
    {
      if ( ((unsigned __int8)v48 & 4) != 0 )
      {
        *v48 = 0;
        if ( !--v99 )
          goto LABEL_146;
        v98 = v48 + 1;
      }
      memset(v98, 0, 8 * (v99 >> 1));
      v95 = (int)ppgpos;
      if ( (v99 & 1) != 0 )
        *((_DWORD *)v98 + v99 - 1) = 0;
    }
LABEL_146:
    v100 = pstro->pgp;
    if ( v100 )
    {
      v101 = pstro->cGlyphs;
      v102 = 0;
      v133 = pstro->cGlyphs;
      v142 = v100;
      pc = 0;
    }
    else
    {
      if ( ((__int64)pstro[4].pwszOrg & 2) != 0 )
        v103 = STROBJ_bEnum(pstro, &v133, &v142);
      else
        v103 = STROBJ_bEnumCheckBounds(pstro, &v133, &v142, &v162);
      v101 = v133;
      v100 = v142;
      v102 = v103;
      pc = v103;
    }
    if ( !v101 )
      goto LABEL_159;
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
    v179 = 0;
    if ( iDComplexity )
    {
      if ( iDComplexity != 1 )
      {
        if ( iDComplexity == 3 )
        {
          v104 = v138;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v138, 0, 0, 4u, 0);
          v105 = (int)ppgpos;
          v106 = v153;
          do
          {
            v107 = XCLIPOBJ::bEnum((XCLIPOBJ *)v104, 0x134u, &v160, 0LL);
            v108 = v137;
            v109 = v107;
            v161[v160].bottom = v110;
            vExpandAndCopyText(
              (struct SURFACE *)v28,
              v108,
              v100,
              v101,
              v106,
              v136,
              pstro->ulCharInc,
              v147,
              v143,
              &pstro->rclBkGround,
              v128,
              iSolidColor,
              v105,
              v131,
              v161,
              v152,
              v130,
              v146,
              v145);
            v111 = v109 == 0;
            v104 = v138;
          }
          while ( !v111 );
          v48 = v155;
          v102 = pc;
        }
LABEL_159:
        v112 = v137;
        goto LABEL_160;
      }
      v179 = 0;
      si128 = v138->rclBounds;
    }
    v116 = v101;
    v112 = v137;
    vExpandAndCopyText(
      (struct SURFACE *)v28,
      v137,
      v100,
      v116,
      v153,
      v136,
      pstro->ulCharInc,
      v147,
      v143,
      &pstro->rclBkGround,
      v128,
      iSolidColor,
      v95,
      v131,
      &si128,
      v152,
      v130,
      v146,
      v145);
LABEL_160:
    v95 = (int)ppgpos;
    v45 = v132;
  }
  while ( v102 );
  if ( (_DWORD)v141 )
  {
    v113 = *(_QWORD *)(v28 + 48);
    v114 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
      (UMPDReleaseAcquireRFONTSem *)v176,
      (struct SURFACE *)v28,
      v112,
      v114);
    if ( (*(_DWORD *)(v28 + 112) & 0x400) != 0 )
      v115 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v113 + 2840);
    else
      v115 = EngCopyBits;
    if ( v149 )
      v117 = (char *)v149 + 24;
    else
      v117 = 0LL;
    ((void (__fastcall *)(__int64, char *, CLIPOBJ *, _QWORD, LONG *, RECTL *))v115)(
      v28 + 24,
      v117,
      v138,
      0LL,
      &v163,
      &v167);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v176);
  }
  v91 = v132 < 0x10000;
LABEL_172:
  if ( v91 )
    FreeThreadBufferWithTag(v48);
  else
    EngFreeUserMem(v48);
  v63 = 1;
LABEL_176:
  SURFMEM::~SURFMEM((SURFMEM *)&v149);
LABEL_177:
  if ( v169 )
  {
    v118 = v172 - 1 < 0;
    for ( i = --v172; !v118; --v172 )
    {
      vDIBSolidBlt(v168, (struct _RECTL *)&v173[4 * i], v170, v171->iSolidColor, 0);
      v118 = v172 - 1 < 0;
      i = v172 - 1;
    }
    return v63;
  }
  else
  {
    v120 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v177, v168, v174, v120);
    v121 = 0LL;
    *(_QWORD *)&v148.left = 0LL;
    if ( v168 )
      v121 = (char *)v168 + 24;
    v122 = SURFACE::pfnBitBlt(v168);
    for ( j = v173; j < &v173[4 * v172]; j += 4 )
      ((void (__fastcall *)(char *, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD, _DWORD *, _QWORD, _QWORD, struct _BRUSHOBJ *, struct _RECTL *, int))v122)(
        v121,
        0LL,
        0LL,
        v170,
        0LL,
        j,
        0LL,
        0LL,
        v171,
        &v148,
        61680);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v177);
    return v63;
  }
}
