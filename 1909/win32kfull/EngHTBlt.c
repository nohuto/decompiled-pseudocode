/*
 * XREFs of EngHTBlt @ 0x1C00C0A94
 * Callers:
 *     EngAlphaBlend @ 0x1C00A4980 (EngAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00A7038 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00C6D50 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C0288340 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     EngBitBlt @ 0x1C009E5C0 (EngBitBlt.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C00A4950 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A9DD4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00B8C10 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00BF39C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngCopyBits @ 0x1C00BF3E0 (EngCopyBits.c)
 *     ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C00C07BC (-bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z @ 0x1C00C0A20 (-bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00C144C (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C00C1510 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ?ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z @ 0x1C00C155C (-ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z.c)
 *     HT_HalftoneBitmap @ 0x1C00C15F4 (HT_HalftoneBitmap.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C00C62BC (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C00C66B4 (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1C00C6AC8 (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D5048 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00D5518 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00D5CE8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1C00FF19C (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall EngHTBlt(
        SURFOBJ *a1,
        SURFOBJ *a2,
        __int64 a3,
        CLIPOBJ *a4,
        struct XLATE *a5,
        struct tagCOLORADJUSTMENT *a6,
        __int64 *a7,
        XLATEOBJ *a8,
        int *a9,
        _QWORD *a10,
        int a11,
        XLATEOBJ *a12)
{
  struct SURFACE *v15; // rbx
  struct SURFACE *v16; // rdx
  unsigned int v17; // r15d
  unsigned int v18; // edi
  __int64 v19; // rax
  int v20; // r12d
  bool v21; // zf
  int v22; // r14d
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  LONG v28; // eax
  int v29; // r13d
  struct SURFACE *v30; // rdx
  struct XLATE *v31; // r8
  struct PALETTE *v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rsi
  __int16 v35; // dx
  __int16 v36; // r8
  __int128 v37; // xmm0
  int v38; // eax
  CLIPOBJ *v39; // rdx
  BYTE iDComplexity; // bl
  struct SURFACE *v41; // rcx
  struct SURFACE *v42; // r13
  int v43; // r11d
  int *p_left; // rdi
  unsigned __int64 v45; // rax
  int v46; // r9d
  int v47; // edx
  int v48; // ecx
  int v49; // r10d
  int v50; // edx
  int v51; // ecx
  int v52; // r9d
  int v53; // ecx
  unsigned __int64 v54; // rax
  XLATEOBJ *v55; // rdi
  _QWORD *v56; // rax
  __int64 v57; // rdx
  XLATEOBJ *v58; // rbx
  __int64 v59; // rbx
  __int64 *p_prclTrg; // rax
  struct PALETTE *v61; // rdi
  void *v62; // rsi
  int v63; // ebx
  SURFOBJ *v64; // r13
  POINTL v65; // r9
  _BYTE *v66; // r11
  __int16 v67; // dx
  unsigned int v68; // eax
  CLIPOBJ *v69; // rsi
  struct SURFACE *v70; // rax
  SURFOBJ *v71; // rcx
  int v72; // eax
  CLIPOBJ *v74; // rax
  LONG cx; // edi
  LONG v76; // edi
  int v77; // eax
  LONG v78; // eax
  LONG v79; // edi
  char v80; // bl
  int v81; // edi
  int v82; // r13d
  ULONG iBitmapFormat; // ecx
  int v84; // eax
  SURFOBJ *v85; // rcx
  ULONG iUniq; // eax
  char v87; // cl
  int v88; // eax
  _DWORD *v89; // rax
  int v90; // eax
  LONG v91; // eax
  int v92; // eax
  unsigned int cEntries; // ecx
  _BYTE *v94; // r8
  __int64 v95; // r10
  __int64 v96; // r9
  char v97; // cl
  __int64 v98; // rax
  unsigned int *v99; // rdi
  int v100; // r14d
  LONG left; // r13d
  int v102; // eax
  unsigned int v103; // esi
  int v104; // [rsp+60h] [rbp-A0h]
  BYTE v105; // [rsp+64h] [rbp-9Ch]
  __int8 v106; // [rsp+68h] [rbp-98h]
  __int64 v107; // [rsp+70h] [rbp-90h] BYREF
  XLATEOBJ *v108; // [rsp+78h] [rbp-88h]
  XLATEOBJ *v109; // [rsp+80h] [rbp-80h]
  struct SURFACE *v110; // [rsp+88h] [rbp-78h]
  int v111; // [rsp+90h] [rbp-70h] BYREF
  CLIPOBJ *pco; // [rsp+98h] [rbp-68h]
  struct SURFACE *v113; // [rsp+A0h] [rbp-60h]
  POINTL pptlSrc; // [rsp+A8h] [rbp-58h] BYREF
  XLATEOBJ *v115; // [rsp+B0h] [rbp-50h] BYREF
  struct SURFACE *v116; // [rsp+B8h] [rbp-48h]
  struct tagCOLORADJUSTMENT *v117; // [rsp+C0h] [rbp-40h]
  XLATEOBJ *v118; // [rsp+C8h] [rbp-38h] BYREF
  struct XLATE *v119; // [rsp+D0h] [rbp-30h]
  SURFOBJ *psoDest; // [rsp+D8h] [rbp-28h]
  XLATEOBJ *v121; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v122; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v123; // [rsp+F0h] [rbp-10h]
  int v124; // [rsp+F8h] [rbp-8h]
  __int64 *v125; // [rsp+100h] [rbp+0h]
  struct PALETTE *v126; // [rsp+108h] [rbp+8h]
  __int64 v127; // [rsp+110h] [rbp+10h] BYREF
  __int64 v128; // [rsp+118h] [rbp+18h] BYREF
  char v129; // [rsp+120h] [rbp+20h]
  int v130; // [rsp+124h] [rbp+24h]
  __int64 v131; // [rsp+128h] [rbp+28h] BYREF
  __int64 v132; // [rsp+130h] [rbp+30h]
  _BYTE *v133; // [rsp+138h] [rbp+38h]
  __int64 *v134; // [rsp+140h] [rbp+40h]
  _QWORD *v135; // [rsp+148h] [rbp+48h]
  struct SURFACE *v136; // [rsp+150h] [rbp+50h] BYREF
  char v137; // [rsp+158h] [rbp+58h]
  int v138; // [rsp+15Ch] [rbp+5Ch]
  __int64 v139; // [rsp+160h] [rbp+60h] BYREF
  int v140; // [rsp+168h] [rbp+68h]
  _DWORD v141[4]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v142; // [rsp+180h] [rbp+80h]
  int v143; // [rsp+188h] [rbp+88h]
  int v144; // [rsp+18Ch] [rbp+8Ch]
  _DWORD v145[4]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v146; // [rsp+1A0h] [rbp+A0h]
  int v147; // [rsp+1A8h] [rbp+A8h]
  int v148; // [rsp+1ACh] [rbp+ACh]
  _QWORD v149[5]; // [rsp+1B0h] [rbp+B0h] BYREF
  _QWORD v150[5]; // [rsp+1D8h] [rbp+D8h] BYREF
  _BYTE v151[48]; // [rsp+200h] [rbp+100h] BYREF
  _OWORD prclDest[7]; // [rsp+230h] [rbp+130h] BYREF
  RECTL prclTrg; // [rsp+2A0h] [rbp+1A0h] BYREF
  RECTL v154; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v155[256]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v119 = a5;
  v117 = a6;
  v125 = a7;
  v108 = a8;
  v115 = (XLATEOBJ *)a9;
  v135 = a10;
  v118 = a12;
  pco = a4;
  v127 = a3;
  *(_QWORD *)&prclTrg.left = a2;
  psoDest = a1;
  v113 = (struct SURFACE *)SURFOBJ_TO_SURFACE(a1);
  v110 = (struct SURFACE *)SURFOBJ_TO_SURFACE(a2);
  v15 = v110;
  pptlSrc = (POINTL)SURFOBJ_TO_SURFACE(a3);
  memset(v150, 0, sizeof(v150));
  memset(v149, 0, sizeof(v149));
  memset(v151, 0, 0x28uLL);
  v16 = v113;
  v17 = 0;
  v131 = 0LL;
  v132 = 0LL;
  v18 = 0;
  v133 = 0LL;
  if ( v113 )
  {
    v19 = *((_QWORD *)v113 + 6);
    v107 = v19;
    if ( !v19 )
      return v17;
    v20 = 1;
    v21 = (*(_DWORD *)(v19 + 40) & 1) == 0;
    v22 = *(_DWORD *)(v19 + 40) & 1;
    v124 = v22;
    v111 = v22;
    if ( !v21 )
    {
      GreAcquireSemaphore(ghsemHT);
      v19 = v107;
      v16 = v113;
    }
    if ( a1->iType )
    {
      v29 = *(_DWORD *)(v19 + 2376);
      if ( v29 )
      {
        switch ( v29 )
        {
          case 2:
            v104 = 2;
            v106 = 2;
            break;
          case 3:
            v106 = -1;
            v104 = 2;
            break;
          case 4:
            v106 = -2;
            v104 = 3;
            break;
          case 5:
            v106 = -3;
            v104 = 4;
            break;
          case 6:
            v106 = 5;
            v104 = 5;
            break;
          case 7:
            v106 = 6;
            v104 = 6;
            break;
          default:
            goto LABEL_97;
        }
        goto LABEL_12;
      }
    }
    else
    {
      v23 = *((_DWORD *)v16 + 24) - 1;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( v26 )
            {
              v27 = v26 - 1;
              if ( v27 )
              {
                if ( v27 != 1 )
                  goto LABEL_97;
                cx = a1->sizlBitmap.cx;
                v29 = 7;
                v18 = 4 * cx;
                v106 = 6;
                v104 = 6;
              }
              else
              {
                v28 = a1->sizlBitmap.cx;
                v29 = 6;
                v106 = 5;
                v104 = 5;
                v18 = (3 * (v28 + 1)) & 0xFFFFFFFC;
              }
            }
            else
            {
              v78 = a1->sizlBitmap.cx;
              v29 = 5;
              v106 = -3;
              v104 = 4;
              v18 = (2 * v78 + 2) & 0xFFFFFFFC;
            }
          }
          else
          {
            v79 = a1->sizlBitmap.cx;
            v29 = 4;
            v106 = -2;
            v18 = (v79 + 3) & 0xFFFFFFFC;
            v104 = 3;
          }
        }
        else
        {
          v80 = 2;
          v81 = a1->sizlBitmap.cx + 7;
          v104 = 2;
          v82 = 0;
          v18 = (v81 >> 1) & 0xFFFFFFFC;
          if ( *(_DWORD *)(v19 + 2376) != 2 )
            v80 = -1;
          LOBYTE(v82) = *(_DWORD *)(v19 + 2376) != 2;
          v106 = v80;
          v29 = v82 + 2;
          v15 = v110;
        }
LABEL_12:
        v154.right = a2->sizlBitmap.cx;
        v154.bottom = a2->sizlBitmap.cy;
        *(_QWORD *)&v154.left = 0LL;
        ERECTL::operator*=(&v154.left, (int *)v115);
        if ( ERECTL::bEmpty((ERECTL *)&v154) )
        {
LABEL_134:
          v17 = v20;
          goto LABEL_97;
        }
        if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v107) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v107, v117) )
        {
          v20 = -1;
          goto LABEL_134;
        }
        v128 = 0LL;
        v129 = 0;
        v130 = 0;
        HTSEMOBJ::vRelease((HTSEMOBJ *)&v111);
        if ( !v15 )
          goto LABEL_147;
        if ( (*((_DWORD *)v15 + 28) & 0x1000) != 0 )
        {
          v121 = (XLATEOBJ *)*((_QWORD *)v15 + 6);
          PDEVOBJ::vSync((PDEVOBJ *)&v121, a2, 0LL, 0);
        }
        if ( a2->iType || a2->iBitmapFormat - 7 <= 1 )
        {
          iBitmapFormat = a2->iBitmapFormat;
          v141[1] = a2->sizlBitmap.cx;
          v141[2] = a2->sizlBitmap.cy;
          v84 = *((_DWORD *)v15 + 28) & 0x40000;
          v141[3] = 0;
          v143 = v84;
          v144 = 0;
          v142 = 0LL;
          if ( iBitmapFormat == 7 )
          {
            v141[0] = 2;
          }
          else if ( iBitmapFormat == 8 )
          {
            v141[0] = 3;
          }
          else
          {
            v141[0] = iBitmapFormat;
          }
          if ( !SURFMEM::bCreateDIB((SURFMEM *)&v128, (struct _DEVBITMAPINFO *)v141, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            goto LABEL_145;
          v85 = 0LL;
          if ( v128 )
            v85 = (SURFOBJ *)(v128 + 24);
          if ( !EngCopyBits(v85, a2, 0LL, xloIdent, &v154, (POINTL *)&v154) )
          {
LABEL_145:
            if ( v22 )
              GreAcquireSemaphore(ghsemHT);
            goto LABEL_147;
          }
          v116 = (struct SURFACE *)v128;
        }
        else
        {
          v116 = v15;
        }
        if ( v22 )
          GreAcquireSemaphore(ghsemHT);
        if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v107) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v107, v117) )
        {
          v126 = ppalGetFromXlate(v15, v113, v119, 1u, 1);
          if ( !v126 )
          {
LABEL_96:
            SURFMEM::~SURFMEM((SURFMEM *)&v128);
LABEL_97:
            HTSEMOBJ::vRelease((HTSEMOBJ *)&v111);
            return v17;
          }
          v32 = ppalGetFromXlate(v15, v30, v31, 2u, 1);
          v33 = v107;
          v34 = (__int64)v32;
          v140 = 0;
          v139 = 0LL;
          v134 = 0LL;
          if ( v29 == *(_DWORD *)(v107 + 2376) )
          {
            LODWORD(v109) = *(_DWORD *)(v107 + 40) & 0x200;
          }
          else
          {
            if ( !(unsigned int)PALMEMOBJ::bCreateHTPalette((PALMEMOBJ *)&v139, v29, (struct _GDIINFO *)(v107 + 2136)) )
              goto LABEL_114;
            v134 = &v139;
            v77 = XEPALOBJ::bEqualEntries(&v139, v34);
            v33 = v107;
            LODWORD(v109) = v77;
          }
          memset(prclDest, 0, 0x68uLL);
          v35 = a11;
          v122 = 0LL;
          v123 = 0LL;
          if ( a11 != 512 )
            goto LABEL_27;
          iUniq = v118->iUniq;
          if ( (unsigned __int8)v118->iUniq )
          {
            v35 = 0;
            a11 = 0;
            goto LABEL_27;
          }
          BYTE1(v122) = BYTE2(v118->iUniq);
          if ( HIBYTE(iUniq) != 1 || BYTE2(iUniq) != 0xFF )
          {
            v87 = 1;
LABEL_156:
            LOBYTE(v122) = v87;
            if ( v34 )
            {
              v123 = *(_QWORD *)(v34 + 112);
              WORD1(v122) = *(_WORD *)(v34 + 28);
              v88 = *(_DWORD *)(v34 + 24);
              if ( (v88 & 8) != 0
                || (v88 & 2) != 0
                && (v89 = *(_DWORD **)(v34 + 112), *v89 == 16711680)
                && v89[1] == 65280
                && v89[2] == 255 )
              {
                LOBYTE(v122) = v87 | 2;
              }
            }
            *((_QWORD *)&prclDest[0] + 1) = &v122;
LABEL_27:
            v36 = v35;
            LOWORD(prclDest[0]) = v35;
            v37 = *(_OWORD *)&v115->iUniq;
            prclDest[2] = *(_OWORD *)&v108->iUniq;
            *(_QWORD *)&prclDest[5] = *v125;
            prclDest[1] = v37;
            BYTE3(prclDest[0]) = *(_BYTE *)(v33 + 2368);
            if ( v119 )
              v38 = *((_DWORD *)v119 + 18);
            else
              LOBYTE(v38) = 0;
            if ( (v38 & 4) != 0 || (v38 & 0x20) == 0 && (v38 & 3) != 0 )
            {
              v36 = v35 | 0x80;
              LOWORD(prclDest[0]) = v35 | 0x80;
            }
            v39 = pco;
            iDComplexity = 0;
            v41 = v113;
            v136 = 0LL;
            v42 = v113;
            v137 = 0;
            v138 = 0;
            LODWORD(v110) = 0;
            if ( pco )
              iDComplexity = pco->iDComplexity;
            v43 = v104;
            v105 = iDComplexity;
            if ( !psoDest->iType && psoDest->lDelta == v18 && ((_DWORD)v109 || v104 == 3) && iDComplexity != 3 )
            {
              if ( psoDest != *(SURFOBJ **)&prclTrg.left || (p_left = (int *)v108, v90 = bIntersect(v115, v108), !v90) )
              {
LABEL_57:
                v55 = xloIdent;
                v108 = xloIdent;
                v121 = xloIdent;
                v115 = 0LL;
                v118 = 0LL;
                v56 = PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v107);
                v58 = xloIdent;
                if ( (_DWORD)v109 )
                  goto LABEL_68;
                LOBYTE(v57) = 8;
                v59 = HmgShareLockCheck(*v56, v57);
                *(_QWORD *)&prclTrg.left = v59;
                p_prclTrg = (__int64 *)&prclTrg;
                if ( v134 )
                  p_prclTrg = v134;
                v125 = p_prclTrg;
                if ( !v119 || (v61 = (struct PALETTE *)*((_QWORD *)v119 + 7)) == 0LL )
                  v61 = ppalDefault;
                if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                     (__int64 *)&v115,
                                     0LL,
                                     0,
                                     *p_prclTrg,
                                     v34,
                                     (__int64)v61,
                                     (__int64)v61,
                                     0,
                                     0xFFFFFF,
                                     0xFFFFFF,
                                     0) )
                {
                  v108 = v115;
                  if ( !*(_QWORD *)&pptlSrc )
                  {
                    v109 = v121;
                    if ( a11 != 512 )
                      goto LABEL_65;
                  }
                  v109 = v121;
                  if ( !(_DWORD)v110 )
                    goto LABEL_65;
                  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                       (__int64 *)&v118,
                                       0LL,
                                       0,
                                       v34,
                                       *v125,
                                       (__int64)v61,
                                       (__int64)v61,
                                       0,
                                       0xFFFFFF,
                                       0xFFFFFF,
                                       0) )
                  {
                    v109 = v118;
LABEL_65:
                    if ( v59 )
                      DEC_SHARE_REF_CNT(v59);
                    v58 = v109;
                    v55 = v108;
LABEL_68:
                    HTSEMOBJ::vRelease((HTSEMOBJ *)&v111);
                    PDEVOBJ::vSync((PDEVOBJ *)&v107, psoDest, 0LL, 0);
                    if ( *(_QWORD *)&pptlSrc || a11 == 512 )
                    {
                      if ( (_DWORD)v110 )
                      {
                        v91 = *((_DWORD *)v42 + 14);
                        ++*((_DWORD *)v42 + 23);
                        prclTrg.right = v91;
                        prclTrg.bottom = *((_DWORD *)v42 + 15);
                        *(_QWORD *)&prclTrg.left = 0LL;
                        v92 = (*((_DWORD *)v113 + 28) & 0x400) != 0
                            ? (*(__int64 (__fastcall **)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, _OWORD *))(v107 + 2840))(
                                (__int64)v42 + 24,
                                psoDest,
                                0LL,
                                v58,
                                &prclTrg,
                                &prclDest[4])
                            : ((__int64 (__fastcall *)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, _OWORD *))EngCopyBits)(
                                (char *)v42 + 24,
                                psoDest,
                                0LL,
                                v58,
                                &prclTrg,
                                &prclDest[4]);
                        if ( !v92
                          && !EngBitBlt(
                                (SURFOBJ *)((char *)v42 + 24),
                                0LL,
                                0LL,
                                0LL,
                                0LL,
                                &prclTrg,
                                0LL,
                                0LL,
                                0LL,
                                0LL,
                                0xFFFFu) )
                        {
                          if ( v22 )
                            GreAcquireSemaphore(ghsemHT);
LABEL_193:
                          v17 = -1;
LABEL_93:
                          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v118);
                          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v115);
LABEL_94:
                          SURFMEM::~SURFMEM((SURFMEM *)&v136);
LABEL_95:
                          PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v139);
                          goto LABEL_96;
                        }
                      }
                    }
                    if ( v22 )
                      GreAcquireSemaphore(ghsemHT);
                    if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v107)
                      && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v107, v117) )
                    {
                      goto LABEL_193;
                    }
                    v62 = PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v107);
                    *(_QWORD *)&prclTrg.left = v62;
                    v63 = 0;
                    v149[4] = 0LL;
                    if ( !(unsigned int)bSetHTSrcSurfInfo(
                                          -(__int64)(v116 != 0LL) & ((unsigned __int64)v116 + 24),
                                          (__int64)v126,
                                          (__int64)v149,
                                          (__int64)v119)
                      || (v64 = (SURFOBJ *)(((unsigned __int64)v42 + 24) & -(__int64)(v42 != 0LL)),
                          v126 = (struct PALETTE *)v64,
                          !(unsigned int)bSetHTSurfInfo(v64, (struct _HTSURFACEINFO *)v150, v106))
                      || (v65 = pptlSrc) != 0LL
                      && !(unsigned int)bSetHTSurfInfo(
                                          (struct _SURFOBJ *)(*(_QWORD *)&pptlSrc + 24LL),
                                          (struct _HTSURFACEINFO *)v151,
                                          *(_DWORD *)(v127 + 72)) )
                    {
LABEL_90:
                      if ( v149[4] )
                        FreeThreadBufferWithTag(v149[4]);
                      v17 = v63 != 0 ? 1 : -1;
                      goto LABEL_93;
                    }
                    v116 = 0LL;
                    LODWORD(v66) = 0;
                    if ( v65 )
                    {
                      if ( (unsigned int)bUMPDSecurityGateEx() && !v135 )
                      {
                        if ( gfUMPDDebug )
                          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\htblt.cxx:%d:EngHTBlt:pptlMask == NULL\n", 1063);
                        if ( v149[4] )
                          FreeThreadBufferWithTag(v149[4]);
                        goto LABEL_193;
                      }
                      v66 = v151;
                      *((_QWORD *)&prclDest[5] + 1) = *v135;
                      v116 = (struct SURFACE *)v151;
                    }
                    v67 = prclDest[0];
                    v68 = 256;
                    if ( (*(_DWORD *)(v107 + 2380) & 0x100) == 0 )
                    {
                      v67 = LOWORD(prclDest[0]) | 2;
                      LOWORD(prclDest[0]) |= 2u;
                    }
                    if ( v104 == 3 )
                    {
                      *(_WORD *)((char *)&v131 + 1) = 257;
                      v150[4] = &v131;
                      v133 = v155;
                      BYTE3(v131) = 0;
                      HIDWORD(v131) = 255;
                      LODWORD(v132) = 256;
                      cEntries = v55->cEntries;
                      if ( cEntries > 0x100 || (v68 = v55->cEntries, cEntries) )
                      {
                        v94 = v155;
                        v95 = v68;
                        v96 = 0LL;
                        do
                        {
                          v97 = v55->pulXlate[v96++];
                          *v94++ = v97;
                          --v95;
                        }
                        while ( v95 );
                      }
                      v55 = xloIdent;
                      v108 = xloIdent;
                    }
                    if ( v105 )
                    {
                      LOWORD(prclDest[0]) = v67 | 1;
                      if ( v105 != 1 )
                      {
                        v69 = pco;
                        XCLIPOBJ::cEnumStart((XCLIPOBJ *)pco, 0, 0, 4u, 0x14u);
                        v63 = 1;
                        v98 = AllocFreeTmpBuffer(324LL);
                        v99 = (unsigned int *)v98;
                        if ( !v98 )
                        {
                          v55 = v108;
                          v63 = 0;
LABEL_83:
                          HTSEMOBJ::vRelease((HTSEMOBJ *)&v111);
                          if ( (_DWORD)v110 && v63 )
                          {
                            v70 = v113;
                            v71 = psoDest;
                            pptlSrc = 0LL;
                            ++*((_DWORD *)v113 + 23);
                            if ( v71->iType )
                            {
                              if ( (*((_DWORD *)v70 + 28) & 0x400) != 0 )
                                v72 = (*(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, _OWORD *, POINTL *))(v107 + 2840))(
                                        v71,
                                        v64,
                                        v69,
                                        v55,
                                        &prclDest[4],
                                        &pptlSrc);
                              else
                                v72 = ((__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, _OWORD *, POINTL *))EngCopyBits)(
                                        v71,
                                        v64,
                                        v69,
                                        v55,
                                        &prclDest[4],
                                        &pptlSrc);
                            }
                            else
                            {
                              v72 = EngCopyBits(v71, v64, v69, v55, (RECTL *)&prclDest[4], &pptlSrc);
                            }
                            v63 = v72;
                          }
                          if ( v22 )
                            GreAcquireSemaphore(ghsemHT);
                          goto LABEL_90;
                        }
                        v100 = (int)v116;
                        left = prclTrg.left;
                        v127 = v98;
                        do
                        {
                          v102 = XCLIPOBJ::bEnum((XCLIPOBJ *)v69, 0x144u, v99, 0LL);
                          v103 = 0;
                          LODWORD(v109) = v102;
                          if ( *v99 )
                          {
                            do
                            {
                              prclDest[3] = *(_OWORD *)&v99[4 * v103++ + 1];
                              v63 = ((int)HT_HalftoneBitmap(
                                            left,
                                            (_DWORD)v117,
                                            (unsigned int)v149,
                                            v100,
                                            (__int64)v150,
                                            (__int64)prclDest) >= 0) & (unsigned __int8)v63;
                            }
                            while ( v103 < *v99 );
                            v102 = (int)v109;
                          }
                          if ( !v102 )
                            break;
                          v69 = pco;
                        }
                        while ( v63 );
                        AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v127);
                        v22 = v124;
                        v55 = v108;
                        v64 = (SURFOBJ *)v126;
LABEL_82:
                        v69 = pco;
                        goto LABEL_83;
                      }
                      prclDest[3] = pco->rclBounds;
                    }
                    LOBYTE(v63) = (int)HT_HalftoneBitmap(
                                         (_DWORD)v62,
                                         (_DWORD)v117,
                                         (unsigned int)v149,
                                         (_DWORD)v66,
                                         (__int64)v150,
                                         (__int64)prclDest) >= 0;
                    goto LABEL_82;
                  }
                }
                if ( v59 )
                  DEC_SHARE_REF_CNT(v59);
                goto LABEL_193;
              }
              v36 = prclDest[0];
              v41 = v42;
              v43 = v104;
              v39 = pco;
            }
            else
            {
              p_left = (int *)v108;
            }
            LODWORD(v110) = 1;
            if ( iDComplexity )
            {
              v105 = 0;
              v74 = 0LL;
              p_left = &v39->rclBounds.left;
              if ( iDComplexity != 1 )
                v74 = v39;
              pco = v74;
            }
            v45 = *((_QWORD *)v41 + 7);
            v46 = p_left[2];
            v47 = *p_left;
            if ( v46 <= *p_left )
            {
              v46 = *p_left;
              v47 = p_left[2];
            }
            v48 = 0;
            if ( v47 >= 0 )
              v48 = v47;
            if ( v46 > (int)v45 )
              v46 = v45;
            v49 = v46 - v48;
            if ( v46 - v48 > 0 )
            {
              v50 = p_left[1];
              LODWORD(prclDest[4]) = v48;
              v51 = p_left[3];
              DWORD2(prclDest[4]) = v46;
              v52 = v51;
              if ( v51 <= v50 )
              {
                v52 = v50;
                v50 = v51;
              }
              v53 = 0;
              if ( v50 >= 0 )
                v53 = v50;
              v54 = HIDWORD(v45);
              if ( v52 > (int)v54 )
                v52 = v54;
              if ( v52 - v53 > 0 )
              {
                LOWORD(prclDest[0]) = v36 | 0x10;
                DWORD1(prclDest[4]) = v53;
                HIDWORD(prclDest[4]) = v52;
                v145[2] = v52 - v53;
                v147 = *((_DWORD *)v42 + 28) & 0x40000;
                v145[3] = 0;
                v148 = 0;
                v145[1] = v49;
                v146 = 0LL;
                v145[0] = v43;
                if ( SURFMEM::bCreateDIB(
                       (SURFMEM *)&v136,
                       (struct _DEVBITMAPINFO *)v145,
                       0LL,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       0,
                       1,
                       0,
                       0) )
                {
                  v42 = v136;
                  goto LABEL_57;
                }
                v20 = -1;
              }
            }
            v17 = v20;
            goto LABEL_94;
          }
          if ( (unsigned int)bIsSourceBGRA(v110) )
          {
            v35 = 512;
            v87 = 4;
            goto LABEL_156;
          }
LABEL_114:
          v17 = -1;
          goto LABEL_95;
        }
LABEL_147:
        v17 = -1;
        goto LABEL_96;
      }
      v76 = a1->sizlBitmap.cx;
      v29 = 0;
      v18 = ((v76 + 31) >> 3) & 0xFFFFFFFC;
    }
    v106 = 1;
    v104 = 1;
    goto LABEL_12;
  }
  return 0xFFFFFFFFLL;
}
