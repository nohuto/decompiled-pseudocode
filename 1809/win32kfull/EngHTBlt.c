/*
 * XREFs of EngHTBlt @ 0x1C0012AA4
 * Callers:
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00110F0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngAlphaBlend @ 0x1C004FC70 (EngAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0051258 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C0272870 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00127A8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C00127DC (-bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z @ 0x1C0012A30 (-bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00133E4 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C00134A8 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ?ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z @ 0x1C00134F4 (-ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z.c)
 *     HT_HalftoneBitmap @ 0x1C001358C (HT_HalftoneBitmap.c)
 *     EngCopyBits @ 0x1C0045EE0 (EngCopyBits.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C004CB04 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C004FC38 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00539F4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     EngBitBlt @ 0x1C00890E0 (EngBitBlt.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C008B104 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C008FDD0 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F22E4 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0112F44 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C0113E20 (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1C011407C (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1C011C868 (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall EngHTBlt(
        SURFOBJ *a1,
        SURFOBJ *a2,
        __int64 a3,
        CLIPOBJ *a4,
        struct XLATE *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct SURFACE *a7,
        XLATEOBJ *a8,
        XLATEOBJ *a9,
        __int64 *a10,
        int a11,
        XLATEOBJ *a12)
{
  SURFOBJ *v12; // r13
  POINTL v15; // rdi
  unsigned int v16; // r14d
  unsigned int v17; // ebx
  __int64 v18; // rax
  int v19; // r15d
  bool v20; // zf
  int v21; // esi
  int v22; // r12d
  int v23; // eax
  struct SURFACE *v24; // rdx
  struct XLATE *v25; // r8
  struct PALETTE *v26; // rax
  __int64 v27; // r8
  struct PALETTE *v28; // rdi
  int v29; // r10d
  unsigned __int16 v30; // dx
  __int64 v31; // r9
  RECTL *p_rclBounds; // r11
  __int128 v33; // xmm1
  int v34; // eax
  CLIPOBJ *v35; // rdx
  struct SURFACE *v36; // rcx
  BYTE iDComplexity; // r12
  unsigned __int64 v38; // rax
  int right; // r8d
  int v40; // edx
  LONG v41; // ecx
  LONG v42; // edx
  int v43; // ebx
  LONG bottom; // ecx
  LONG v45; // r10d
  int top; // edx
  LONG v47; // ecx
  unsigned __int64 v48; // rax
  int v49; // r12d
  XLATEOBJ *v50; // r12
  HPALETTE *v51; // rax
  XLATEOBJ *v52; // rbx
  SURFOBJ **p_psoSrc; // rax
  struct PALETTE *v54; // rbx
  struct SURFACE *v55; // rdi
  int v56; // ebx
  SURFOBJ *v57; // rdi
  __int64 v58; // r9
  _BYTE *v59; // r13
  __int16 v60; // dx
  unsigned int v61; // eax
  struct SURFACE *v62; // rax
  SURFOBJ *v63; // rcx
  int v64; // eax
  CLIPOBJ *v66; // rax
  LONG v67; // ebx
  int v68; // eax
  LONG cx; // eax
  int v70; // ebx
  ULONG iBitmapFormat; // ecx
  SURFOBJ *v72; // rcx
  ULONG iUniq; // eax
  char v74; // cl
  int v75; // eax
  _DWORD *v76; // rax
  int v77; // eax
  LONG v78; // eax
  int v79; // eax
  unsigned int cEntries; // ecx
  _BYTE *v81; // r8
  __int64 v82; // r10
  __int64 v83; // r9
  char v84; // cl
  __int64 v85; // rax
  unsigned int *v86; // rdi
  LONG left; // esi
  int v88; // eax
  unsigned int v89; // r12d
  BYTE v90; // [rsp+60h] [rbp-A0h]
  int v91; // [rsp+64h] [rbp-9Ch]
  __int64 v92; // [rsp+68h] [rbp-98h] BYREF
  XLATEOBJ *v93; // [rsp+70h] [rbp-90h]
  SURFOBJ *psoSrc; // [rsp+78h] [rbp-88h] BYREF
  int v95; // [rsp+80h] [rbp-80h]
  int v96; // [rsp+84h] [rbp-7Ch] BYREF
  int v97; // [rsp+88h] [rbp-78h]
  POINTL pptlSrc; // [rsp+90h] [rbp-70h] BYREF
  CLIPOBJ *pco; // [rsp+98h] [rbp-68h]
  struct SURFACE *v100; // [rsp+A0h] [rbp-60h]
  struct SURFACE *v101; // [rsp+A8h] [rbp-58h]
  XLATEOBJ *v102; // [rsp+B0h] [rbp-50h] BYREF
  struct tagCOLORADJUSTMENT *v103; // [rsp+B8h] [rbp-48h]
  XLATEOBJ *v104; // [rsp+C0h] [rbp-40h] BYREF
  SURFOBJ *v105; // [rsp+C8h] [rbp-38h]
  struct XLATE *v106; // [rsp+D0h] [rbp-30h]
  SURFOBJ *psoDest; // [rsp+D8h] [rbp-28h]
  _BYTE v108[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v109; // [rsp+E2h] [rbp-1Eh]
  __int64 v110; // [rsp+E8h] [rbp-18h]
  int v111; // [rsp+F0h] [rbp-10h]
  __int64 v112; // [rsp+F8h] [rbp-8h]
  __int64 v113; // [rsp+100h] [rbp+0h] BYREF
  __int64 v114; // [rsp+108h] [rbp+8h] BYREF
  char v115; // [rsp+110h] [rbp+10h]
  int v116; // [rsp+114h] [rbp+14h]
  __int64 *v117; // [rsp+118h] [rbp+18h]
  struct SURFACE *v118; // [rsp+120h] [rbp+20h] BYREF
  char v119; // [rsp+128h] [rbp+28h]
  int v120; // [rsp+12Ch] [rbp+2Ch]
  __int64 v121; // [rsp+130h] [rbp+30h] BYREF
  int v122; // [rsp+138h] [rbp+38h]
  _DWORD v123[4]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE *v124; // [rsp+150h] [rbp+50h]
  _QWORD v125[4]; // [rsp+158h] [rbp+58h] BYREF
  struct PALETTE *v126; // [rsp+178h] [rbp+78h]
  _QWORD v127[4]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v128[32]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v129; // [rsp+1C0h] [rbp+C0h]
  _BYTE v130[32]; // [rsp+1C8h] [rbp+C8h] BYREF
  _DWORD *v131; // [rsp+1E8h] [rbp+E8h]
  _BYTE v132[48]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int16 v133; // [rsp+220h] [rbp+120h] BYREF
  char v134; // [rsp+223h] [rbp+123h]
  _BYTE *v135; // [rsp+228h] [rbp+128h]
  __int128 v136; // [rsp+230h] [rbp+130h]
  __int128 v137; // [rsp+240h] [rbp+140h]
  RECTL rclBounds; // [rsp+250h] [rbp+150h]
  RECTL prclDest; // [rsp+260h] [rbp+160h] BYREF
  __int64 v140; // [rsp+270h] [rbp+170h]
  __int64 v141; // [rsp+278h] [rbp+178h]
  RECTL prclTrg; // [rsp+290h] [rbp+190h] BYREF
  RECTL v143; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v144[256]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v12 = a1;
  v106 = a5;
  v103 = a6;
  v100 = a7;
  v93 = a9;
  psoDest = a1;
  v117 = a10;
  v102 = a8;
  v104 = a12;
  pco = a4;
  v113 = a3;
  psoSrc = a2;
  v101 = (struct SURFACE *)SURFOBJ_TO_SURFACE(a1);
  pptlSrc = (POINTL)SURFOBJ_TO_SURFACE(a2);
  v15 = pptlSrc;
  v16 = 0;
  v112 = SURFOBJ_TO_SURFACE(a3);
  v17 = 0;
  if ( v101 )
  {
    v18 = *((_QWORD *)v101 + 6);
    v92 = v18;
    if ( !v18 )
      return v16;
    v19 = 1;
    v20 = (*(_DWORD *)(v18 + 40) & 1) == 0;
    v21 = *(_DWORD *)(v18 + 40) & 1;
    v111 = v21;
    v96 = v21;
    if ( !v20 )
    {
      GreAcquireSemaphore(ghsemHT);
      v18 = v92;
    }
    if ( v12->iType )
    {
      v22 = *(_DWORD *)(v18 + 2376);
      if ( v22 )
      {
        if ( v22 == 2 )
        {
          v91 = 2;
          LOBYTE(v12) = 2;
        }
        else if ( v22 == 3 )
        {
          LOBYTE(v12) = -1;
          v91 = 2;
        }
        else if ( v22 == 4 )
        {
          LOBYTE(v12) = -2;
          v91 = 3;
        }
        else if ( v22 == 5 )
        {
          LOBYTE(v12) = -3;
          v91 = 4;
        }
        else
        {
          if ( v22 == 6 )
          {
            LODWORD(v12) = 5;
          }
          else
          {
            if ( v22 != 7 )
              goto LABEL_96;
            LODWORD(v12) = 6;
          }
          v91 = (int)v12;
        }
        goto LABEL_12;
      }
    }
    else
    {
      if ( *((_DWORD *)v101 + 24) != 1 )
      {
        switch ( *((_DWORD *)v101 + 24) )
        {
          case 2:
            v70 = v12->sizlBitmap.cx + 7;
            v91 = 2;
            LOBYTE(v12) = 2;
            v17 = (v70 >> 1) & 0xFFFFFFFC;
            if ( *(_DWORD *)(v18 + 2376) != 2 )
              LOBYTE(v12) = -1;
            v22 = (*(_DWORD *)(v18 + 2376) != 2) + 2;
            break;
          case 3:
            v22 = 4;
            v91 = 3;
            v17 = (v12->sizlBitmap.cx + 3) & 0xFFFFFFFC;
            LOBYTE(v12) = -2;
            break;
          case 4:
            cx = v12->sizlBitmap.cx;
            v22 = 5;
            LOBYTE(v12) = -3;
            v91 = 4;
            v17 = (2 * cx + 2) & 0xFFFFFFFC;
            break;
          case 5:
            v22 = 6;
            v23 = v12->sizlBitmap.cx + 1;
            LOBYTE(v12) = 5;
            v91 = 5;
            v17 = (3 * v23) & 0xFFFFFFFC;
            break;
          case 6:
            v67 = v12->sizlBitmap.cx;
            LOBYTE(v12) = 6;
            v17 = 4 * v67;
            v91 = 6;
            v22 = 7;
            break;
          default:
            goto LABEL_96;
        }
LABEL_12:
        *(_QWORD *)&v143.left = 0LL;
        *(SIZEL *)&v143.right = psoSrc->sizlBitmap;
        ERECTL::operator*=(&v143, v93);
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v143) )
        {
LABEL_133:
          v16 = v19;
          goto LABEL_96;
        }
        if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v92) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v92, v103) )
        {
          v19 = -1;
          goto LABEL_133;
        }
        v114 = 0LL;
        v115 = 0;
        v116 = 0;
        HTSEMOBJ::vRelease((HTSEMOBJ *)&v96);
        if ( !*(_QWORD *)&v15 )
          goto LABEL_146;
        if ( (*(_DWORD *)(*(_QWORD *)&v15 + 112LL) & 0x1000) != 0 )
        {
          *(_QWORD *)&prclTrg.left = *(_QWORD *)(*(_QWORD *)&v15 + 48LL);
          PDEVOBJ::vSync((PDEVOBJ *)&prclTrg, psoSrc, 0LL, 0);
        }
        if ( psoSrc->iType || psoSrc->iBitmapFormat - 7 <= 1 )
        {
          memset(v125, 0, sizeof(v125));
          v125[2] = 0LL;
          HIDWORD(v125[0]) = psoSrc->sizlBitmap.cx;
          iBitmapFormat = psoSrc->iBitmapFormat;
          LODWORD(v125[1]) = psoSrc->sizlBitmap.cy;
          LODWORD(v125[3]) = *(_DWORD *)(*(_QWORD *)&v15 + 112LL) & 0x40000;
          if ( iBitmapFormat == 7 )
          {
            LODWORD(v125[0]) = 2;
          }
          else if ( iBitmapFormat == 8 )
          {
            LODWORD(v125[0]) = 3;
          }
          else
          {
            LODWORD(v125[0]) = iBitmapFormat;
          }
          if ( !SURFMEM::bCreateDIB((SURFMEM *)&v114, (struct _DEVBITMAPINFO *)v125, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            goto LABEL_144;
          v72 = 0LL;
          if ( v114 )
            v72 = (SURFOBJ *)(v114 + 24);
          if ( !EngCopyBits(v72, psoSrc, 0LL, xloIdent, &v143, (POINTL *)&v143) )
          {
LABEL_144:
            if ( v21 )
              GreAcquireSemaphore(ghsemHT);
            goto LABEL_146;
          }
          v105 = (SURFOBJ *)v114;
        }
        else
        {
          v105 = (SURFOBJ *)v15;
        }
        if ( v21 )
          GreAcquireSemaphore(ghsemHT);
        if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v92) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v92, v103) )
        {
          v126 = ppalGetFromXlate(*(struct SURFACE **)&v15, v101, v106, 1u, 1);
          if ( !v126 )
          {
LABEL_95:
            SURFMEM::~SURFMEM((SURFMEM *)&v114);
LABEL_96:
            HTSEMOBJ::vRelease((HTSEMOBJ *)&v96);
            return v16;
          }
          v26 = ppalGetFromXlate(*(struct SURFACE **)&v15, v24, v25, 2u, 1);
          v27 = v92;
          v28 = v26;
          v122 = 0;
          v121 = 0LL;
          *(_QWORD *)&prclTrg.left = 0LL;
          if ( v22 == *(_DWORD *)(v92 + 2376) )
          {
            v29 = *(_DWORD *)(v92 + 40) & 0x200;
          }
          else
          {
            if ( !(unsigned int)PALMEMOBJ::bCreateHTPalette((PALMEMOBJ *)&v121, v22, (struct _GDIINFO *)(v92 + 2136)) )
              goto LABEL_154;
            *(_QWORD *)&prclTrg.left = &v121;
            v68 = XEPALOBJ::bEqualEntries(&v121, v28);
            v27 = v92;
            v29 = v68;
          }
          v30 = a11;
          v97 = v29;
          if ( a11 != 512 )
            goto LABEL_27;
          iUniq = v104->iUniq;
          if ( (unsigned __int8)v104->iUniq )
          {
            v30 = 0;
            a11 = 0;
            goto LABEL_27;
          }
          v108[0] = 0;
          v110 = 0LL;
          v109 = 0;
          v108[1] = BYTE2(iUniq);
          if ( HIBYTE(iUniq) != 1 || BYTE2(iUniq) != 0xFF )
          {
            v74 = 1;
LABEL_156:
            v108[0] = v74;
            if ( v28 )
            {
              v110 = *((_QWORD *)v28 + 14);
              v109 = *((_WORD *)v28 + 14);
              v75 = *((_DWORD *)v28 + 6);
              if ( (v75 & 8) != 0
                || (v75 & 2) != 0
                && (v76 = (_DWORD *)*((_QWORD *)v28 + 14), *v76 == 16711680)
                && v76[1] == 65280
                && v76[2] == 255 )
              {
                v108[0] = v74 | 2;
              }
            }
            v135 = v108;
LABEL_27:
            v31 = v30;
            p_rclBounds = (RECTL *)v102;
            v133 = v30;
            v33 = *(_OWORD *)&v102->iUniq;
            v136 = *(_OWORD *)&v93->iUniq;
            v140 = *(_QWORD *)v100;
            v137 = v33;
            v134 = *(_BYTE *)(v27 + 2368);
            if ( v106 )
              v34 = *((_DWORD *)v106 + 18);
            else
              LOBYTE(v34) = 0;
            if ( (v34 & 4) != 0 || (v34 & 0x20) == 0 && (v34 & 3) != 0 )
            {
              v31 = v30;
              LOWORD(v31) = v30 | 0x80;
              v133 = v30 | 0x80;
            }
            v35 = pco;
            v36 = v101;
            v100 = v101;
            v118 = 0LL;
            v119 = 0;
            v120 = 0;
            v95 = 0;
            if ( pco )
            {
              iDComplexity = pco->iDComplexity;
              v90 = iDComplexity;
            }
            else
            {
              iDComplexity = 0;
              v90 = 0;
            }
            if ( !psoDest->iType && psoDest->lDelta == v17 && (v91 == 3 || v29) && iDComplexity != 3 )
            {
              if ( psoDest != psoSrc || (v77 = bIntersect(v93, v102, v27, v31)) == 0 )
              {
LABEL_56:
                v50 = xloIdent;
                pptlSrc = (POINTL)xloIdent;
                v93 = xloIdent;
                v102 = 0LL;
                v104 = 0LL;
                v51 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v92);
                v52 = xloIdent;
                if ( v97 )
                  goto LABEL_67;
                EPALOBJ::EPALOBJ((EPALOBJ *)&psoSrc, *v51);
                p_psoSrc = &psoSrc;
                if ( *(_QWORD *)&prclTrg.left )
                  p_psoSrc = *(SURFOBJ ***)&prclTrg.left;
                *(_QWORD *)&prclTrg.left = p_psoSrc;
                if ( !v106 || (v54 = (struct PALETTE *)*((_QWORD *)v106 + 7)) == 0LL )
                  v54 = ppalDefault;
                if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                     &v102,
                                     0LL,
                                     0LL,
                                     *p_psoSrc,
                                     v28,
                                     v54,
                                     v54,
                                     0,
                                     0xFFFFFF,
                                     0xFFFFFF,
                                     0) )
                {
                  v50 = v102;
                  pptlSrc = (POINTL)v102;
                  if ( !v112 && a11 != 512 || !v95 )
                  {
                    v52 = v93;
                    goto LABEL_65;
                  }
                  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                       &v104,
                                       0LL,
                                       0LL,
                                       v28,
                                       **(_QWORD **)&prclTrg.left,
                                       v54,
                                       v54,
                                       0,
                                       0xFFFFFF,
                                       0xFFFFFF,
                                       0) )
                  {
                    v52 = v104;
LABEL_65:
                    if ( psoSrc )
                      DEC_SHARE_REF_CNT(psoSrc);
LABEL_67:
                    HTSEMOBJ::vRelease((HTSEMOBJ *)&v96);
                    PDEVOBJ::vSync((PDEVOBJ *)&v92, psoDest, 0LL, 0);
                    if ( v112 || a11 == 512 )
                    {
                      v55 = v100;
                      if ( v95 )
                      {
                        v78 = *((_DWORD *)v100 + 14);
                        ++*((_DWORD *)v100 + 23);
                        prclTrg.right = v78;
                        prclTrg.bottom = *((_DWORD *)v55 + 15);
                        *(_QWORD *)&prclTrg.left = 0LL;
                        v79 = (*((_DWORD *)v101 + 28) & 0x400) != 0
                            ? (*(__int64 (__fastcall **)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, RECTL *))(v92 + 2840))(
                                (__int64)v55 + 24,
                                psoDest,
                                0LL,
                                v52,
                                &prclTrg,
                                &prclDest)
                            : ((__int64 (__fastcall *)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, RECTL *))EngCopyBits)(
                                (char *)v55 + 24,
                                psoDest,
                                0LL,
                                v52,
                                &prclTrg,
                                &prclDest);
                        if ( !v79
                          && !EngBitBlt(
                                (SURFOBJ *)((char *)v55 + 24),
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
                          if ( v21 )
                            GreAcquireSemaphore(ghsemHT);
                          goto LABEL_194;
                        }
                      }
                    }
                    else
                    {
                      v55 = v100;
                    }
                    if ( v21 )
                      GreAcquireSemaphore(ghsemHT);
                    if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v92)
                      || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v92, v103) )
                    {
                      v56 = 0;
                      *(_QWORD *)&prclTrg.left = PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v92);
                      v129 = 0LL;
                      if ( !(unsigned int)bSetHTSrcSurfInfo(
                                            -(__int64)(v105 != 0LL) & (unsigned __int64)&v105->hdev,
                                            (__int64)v126,
                                            (__int64)v128,
                                            (__int64)v106)
                        || (v57 = (SURFOBJ *)(((unsigned __int64)v55 + 24) & -(__int64)(v55 != 0LL)),
                            v105 = v57,
                            !(unsigned int)bSetHTSurfInfo(v57, (struct _HTSURFACEINFO *)v130, (__int8)v12))
                        || (v58 = v112) != 0
                        && !(unsigned int)bSetHTSurfInfo(
                                            (struct _SURFOBJ *)(v112 + 24),
                                            (struct _HTSURFACEINFO *)v132,
                                            *(_DWORD *)(v113 + 72)) )
                      {
LABEL_89:
                        if ( v129 )
                          FreeThreadBufferWithTag();
                        v16 = v56 != 0 ? 1 : -1;
                        goto LABEL_92;
                      }
                      LODWORD(v59) = 0;
                      if ( !v58 )
                      {
LABEL_77:
                        v60 = v133;
                        v61 = 256;
                        if ( (*(_DWORD *)(v92 + 2380) & 0x100) == 0 )
                        {
                          v60 = v133 | 2;
                          v133 |= 2u;
                        }
                        if ( v91 == 3 )
                        {
                          v123[0] = 65792;
                          v131 = v123;
                          v124 = v144;
                          v123[1] = 255;
                          v123[2] = 256;
                          cEntries = v50->cEntries;
                          if ( cEntries > 0x100 || (v61 = v50->cEntries, cEntries) )
                          {
                            v81 = v144;
                            v82 = v61;
                            v83 = 0LL;
                            do
                            {
                              v84 = v50->pulXlate[v83++];
                              *v81++ = v84;
                              --v82;
                            }
                            while ( v82 );
                          }
                          v50 = xloIdent;
                          pptlSrc = (POINTL)xloIdent;
                        }
                        if ( v90 )
                        {
                          v133 = v60 | 1;
                          if ( v90 != 1 )
                          {
                            XCLIPOBJ::cEnumStart((XCLIPOBJ *)pco, 0, 0, 4u, 0x14u);
                            v56 = 1;
                            v85 = AllocFreeTmpBuffer(324LL);
                            v86 = (unsigned int *)v85;
                            if ( v85 )
                            {
                              left = prclTrg.left;
                              v113 = v85;
                              do
                              {
                                v88 = XCLIPOBJ::bEnum((XCLIPOBJ *)pco, 0x144u, v86, 0LL);
                                v89 = 0;
                                v97 = v88;
                                if ( *v86 )
                                {
                                  do
                                  {
                                    rclBounds = *(RECTL *)&v86[4 * v89++ + 1];
                                    v56 = ((int)HT_HalftoneBitmap(
                                                  left,
                                                  (_DWORD)v103,
                                                  (unsigned int)v128,
                                                  (_DWORD)v59,
                                                  (__int64)v130,
                                                  (__int64)&v133) >= 0) & (unsigned __int8)v56;
                                  }
                                  while ( v89 < *v86 );
                                  v88 = v97;
                                }
                              }
                              while ( v88 && v56 );
                              AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v113);
                              v21 = v111;
                              v50 = (XLATEOBJ *)pptlSrc;
                            }
                            else
                            {
                              v56 = 0;
                            }
                            v57 = v105;
                            goto LABEL_82;
                          }
                          rclBounds = pco->rclBounds;
                        }
                        LOBYTE(v56) = (int)HT_HalftoneBitmap(
                                             prclTrg.left,
                                             (_DWORD)v103,
                                             (unsigned int)v128,
                                             (_DWORD)v59,
                                             (__int64)v130,
                                             (__int64)&v133) >= 0;
LABEL_82:
                        HTSEMOBJ::vRelease((HTSEMOBJ *)&v96);
                        if ( v95 && v56 )
                        {
                          v62 = v101;
                          v63 = psoDest;
                          pptlSrc = 0LL;
                          ++*((_DWORD *)v101 + 23);
                          if ( v63->iType )
                          {
                            if ( (*((_DWORD *)v62 + 28) & 0x400) != 0 )
                              v64 = (*(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v92 + 2840))(
                                      v63,
                                      v57,
                                      pco,
                                      v50,
                                      &prclDest,
                                      &pptlSrc);
                            else
                              v64 = ((__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))EngCopyBits)(
                                      v63,
                                      v57,
                                      pco,
                                      v50,
                                      &prclDest,
                                      &pptlSrc);
                          }
                          else
                          {
                            v64 = EngCopyBits(v63, v57, pco, v50, &prclDest, &pptlSrc);
                          }
                          v56 = v64;
                        }
                        if ( v21 )
                          GreAcquireSemaphore(ghsemHT);
                        goto LABEL_89;
                      }
                      if ( !(unsigned int)bUMPDSecurityGateEx() || v117 )
                      {
                        v59 = v132;
                        v141 = *v117;
                        goto LABEL_77;
                      }
                      if ( gfUMPDDebug )
                        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\htblt.cxx:%d:EngHTBlt:pptlMask == NULL\n", 1063);
                      if ( v129 )
                        FreeThreadBufferWithTag();
                    }
LABEL_194:
                    v16 = -1;
LABEL_92:
                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v104);
                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v102);
LABEL_93:
                    SURFMEM::~SURFMEM((SURFMEM *)&v118);
LABEL_94:
                    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v121);
                    goto LABEL_95;
                  }
                }
                if ( psoSrc )
                  DEC_SHARE_REF_CNT(psoSrc);
                goto LABEL_194;
              }
              LOWORD(v31) = v133;
              v36 = v101;
              p_rclBounds = (RECTL *)v102;
              v35 = pco;
            }
            v95 = 1;
            if ( iDComplexity )
            {
              v90 = 0;
              v66 = 0LL;
              p_rclBounds = &v35->rclBounds;
              if ( iDComplexity != 1 )
                v66 = v35;
              pco = v66;
            }
            v38 = *((_QWORD *)v36 + 7);
            right = p_rclBounds->right;
            v40 = p_rclBounds->left;
            if ( right <= p_rclBounds->left )
            {
              right = p_rclBounds->left;
              v40 = p_rclBounds->right;
            }
            v41 = 0;
            if ( v40 >= 0 )
              v41 = v40;
            v42 = v38;
            if ( right <= (int)v38 )
              v42 = right;
            v43 = v42 - v41;
            if ( v42 - v41 > 0 )
            {
              prclDest.left = v41;
              bottom = p_rclBounds->bottom;
              v45 = bottom;
              prclDest.right = v42;
              top = p_rclBounds->top;
              if ( bottom <= top )
              {
                v45 = p_rclBounds->top;
                top = bottom;
              }
              v47 = 0;
              if ( top >= 0 )
                v47 = top;
              v48 = HIDWORD(v38);
              if ( v45 > (int)v48 )
                v45 = v48;
              v49 = v45 - v47;
              if ( v45 - v47 > 0 )
              {
                prclDest.top = v47;
                prclDest.bottom = v45;
                v133 = v31 | 0x10;
                memset(v127, 0, sizeof(v127));
                LODWORD(v127[3]) = *((_DWORD *)v101 + 28) & 0x40000;
                v127[0] = __PAIR64__(v43, v91);
                LODWORD(v127[1]) = v49;
                v127[2] = 0LL;
                if ( SURFMEM::bCreateDIB(
                       (SURFMEM *)&v118,
                       (struct _DEVBITMAPINFO *)v127,
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
                  v100 = v118;
                  goto LABEL_56;
                }
                v19 = -1;
              }
            }
            v16 = v19;
            goto LABEL_93;
          }
          if ( (unsigned int)bIsSourceBGRA(*(struct SURFACE **)&pptlSrc) )
          {
            v30 = 512;
            v74 = 4;
            goto LABEL_156;
          }
LABEL_154:
          v16 = -1;
          goto LABEL_94;
        }
LABEL_146:
        v16 = -1;
        goto LABEL_95;
      }
      v22 = 0;
      v17 = ((v12->sizlBitmap.cx + 31) >> 3) & 0xFFFFFFFC;
    }
    LOBYTE(v12) = 1;
    v91 = 1;
    goto LABEL_12;
  }
  return 0xFFFFFFFFLL;
}
