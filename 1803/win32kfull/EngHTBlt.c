/*
 * XREFs of EngHTBlt @ 0x1C00CD750
 * Callers:
 *     EngAlphaBlend @ 0x1C00A15D0 (EngAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00A3068 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00ADDE0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C025ED3C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1C0017E58 (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 *     EngCopyBits @ 0x1C008FEE0 (EngCopyBits.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0090AA4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0090CA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     EngBitBlt @ 0x1C0091510 (EngBitBlt.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C00A159C (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A51E0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00A7A10 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B1040 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C00CB50C (-bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z.c)
 *     ?bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z @ 0x1C00CB740 (-bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00CF084 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C00CF134 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C00CF504 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ?ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z @ 0x1C00CF544 (-ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z.c)
 *     HT_HalftoneBitmap @ 0x1C00D06DC (HT_HalftoneBitmap.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1C00FEAF0 (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C0106D54 (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall EngHTBlt(
        SURFOBJ *a1,
        SURFOBJ *a2,
        __int64 a3,
        CLIPOBJ *a4,
        struct XLATE *a5,
        struct tagCOLORADJUSTMENT *a6,
        __int64 a7,
        SURFOBJ *a8,
        int *a9,
        __int64 *a10,
        int a11,
        struct SURFACE *a12)
{
  struct SURFACE *v15; // rsi
  unsigned int v16; // r15d
  unsigned int v17; // ebx
  __int64 v18; // rax
  int v19; // r12d
  bool v20; // zf
  int v21; // r14d
  int v22; // r13d
  int v23; // eax
  int v24; // edi
  struct SURFACE *v25; // rdx
  struct XLATE *v26; // r8
  struct PALETTE *v27; // rax
  __int64 v28; // r8
  __int64 v29; // rsi
  int v30; // r10d
  __int16 v31; // dx
  __int16 v32; // r9
  SURFOBJ *p_rclBounds; // r11
  __int128 v34; // xmm1
  int v35; // eax
  CLIPOBJ *v36; // rdx
  struct SURFACE *v37; // rcx
  BYTE iDComplexity; // di
  unsigned __int64 v39; // rax
  int hsurf; // r8d
  int dhsurf; // edx
  LONG v42; // ecx
  LONG v43; // edx
  int v44; // ebx
  LONG hsurf_high; // ecx
  LONG v46; // r10d
  int dhsurf_high; // edx
  LONG v48; // ecx
  unsigned __int64 v49; // rax
  int v50; // edi
  XLATEOBJ *v51; // rdi
  _QWORD *v52; // rax
  __int64 v53; // rdx
  XLATEOBJ *v54; // rbx
  __int64 v55; // rbx
  __int64 *p_prclTrg; // rax
  struct PALETTE *v57; // rdi
  struct SURFACE *v58; // rsi
  int v59; // ebx
  SURFOBJ *v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rcx
  POINTL v63; // r9
  _BYTE *v64; // r13
  __int16 v65; // dx
  unsigned int v66; // eax
  struct SURFACE *v67; // rax
  SURFOBJ *v68; // rcx
  int v69; // eax
  CLIPOBJ *v71; // rax
  int v72; // eax
  LONG cx; // eax
  LONG v74; // ebx
  ULONG iBitmapFormat; // ecx
  SURFOBJ *v76; // rcx
  int v77; // eax
  char v78; // cl
  int v79; // eax
  _DWORD *v80; // rax
  LONG v81; // eax
  int v82; // eax
  unsigned int cEntries; // ecx
  _BYTE *v84; // r8
  __int64 v85; // r10
  __int64 v86; // r9
  char v87; // cl
  __int64 v88; // rax
  char *v89; // rdi
  int v90; // r14d
  int v91; // eax
  unsigned int v92; // esi
  BYTE v93; // [rsp+60h] [rbp-A0h]
  int v94; // [rsp+64h] [rbp-9Ch]
  __int64 v95; // [rsp+68h] [rbp-98h] BYREF
  SURFOBJ *psoSrc; // [rsp+70h] [rbp-90h]
  int v97; // [rsp+78h] [rbp-88h] BYREF
  int *v98; // [rsp+80h] [rbp-80h]
  CLIPOBJ *pco; // [rsp+88h] [rbp-78h]
  XLATEOBJ *v100; // [rsp+90h] [rbp-70h] BYREF
  int *v101; // [rsp+98h] [rbp-68h] BYREF
  POINTL pptlSrc; // [rsp+A0h] [rbp-60h] BYREF
  struct SURFACE *v103; // [rsp+A8h] [rbp-58h]
  struct SURFACE *v104; // [rsp+B0h] [rbp-50h]
  struct SURFACE *v105; // [rsp+B8h] [rbp-48h]
  SURFOBJ *v106; // [rsp+C0h] [rbp-40h] BYREF
  struct tagCOLORADJUSTMENT *v107; // [rsp+C8h] [rbp-38h]
  struct XLATE *v108; // [rsp+D0h] [rbp-30h]
  SURFOBJ *psoDest; // [rsp+D8h] [rbp-28h]
  __int64 *v110; // [rsp+E0h] [rbp-20h]
  _BYTE v111[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int16 v112; // [rsp+EAh] [rbp-16h]
  __int64 v113; // [rsp+F0h] [rbp-10h]
  int v114; // [rsp+F8h] [rbp-8h]
  struct PALETTE *v115; // [rsp+100h] [rbp+0h]
  __int64 v116; // [rsp+108h] [rbp+8h] BYREF
  __int64 v117; // [rsp+110h] [rbp+10h] BYREF
  char v118; // [rsp+118h] [rbp+18h]
  int v119; // [rsp+11Ch] [rbp+1Ch]
  struct SURFACE *v120; // [rsp+120h] [rbp+20h]
  __int64 *v121; // [rsp+128h] [rbp+28h]
  struct SURFACE *v122; // [rsp+130h] [rbp+30h] BYREF
  char v123; // [rsp+138h] [rbp+38h]
  int v124; // [rsp+13Ch] [rbp+3Ch]
  __int64 v125; // [rsp+140h] [rbp+40h] BYREF
  int v126; // [rsp+148h] [rbp+48h]
  _DWORD v127[4]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE *v128; // [rsp+160h] [rbp+60h]
  _QWORD v129[4]; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v130[4]; // [rsp+188h] [rbp+88h] BYREF
  _BYTE v131[32]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v132; // [rsp+1C8h] [rbp+C8h]
  _BYTE v133[32]; // [rsp+1D0h] [rbp+D0h] BYREF
  _DWORD *v134; // [rsp+1F0h] [rbp+F0h]
  _BYTE v135[40]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int16 v136; // [rsp+220h] [rbp+120h] BYREF
  char v137; // [rsp+223h] [rbp+123h]
  _BYTE *v138; // [rsp+228h] [rbp+128h]
  __int128 v139; // [rsp+230h] [rbp+130h]
  __int128 v140; // [rsp+240h] [rbp+140h]
  RECTL rclBounds; // [rsp+250h] [rbp+150h]
  RECTL prclDest; // [rsp+260h] [rbp+160h] BYREF
  __int64 v143; // [rsp+270h] [rbp+170h]
  __int64 v144; // [rsp+278h] [rbp+178h]
  RECTL prclTrg; // [rsp+290h] [rbp+190h] BYREF
  RECTL v146; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v147[256]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v108 = a5;
  v107 = a6;
  *(_QWORD *)&prclTrg.left = a7;
  v101 = a9;
  psoDest = a1;
  v121 = a10;
  v106 = a8;
  v105 = a12;
  pco = a4;
  v116 = a3;
  psoSrc = a2;
  v104 = (struct SURFACE *)SURFOBJ_TO_SURFACE(a1);
  v103 = (struct SURFACE *)SURFOBJ_TO_SURFACE(a2);
  v15 = v103;
  v16 = 0;
  pptlSrc = (POINTL)SURFOBJ_TO_SURFACE(a3);
  v17 = 0;
  if ( v104 )
  {
    v18 = *((_QWORD *)v104 + 6);
    v95 = v18;
    if ( !v18 )
      return v16;
    v19 = 1;
    v20 = (*(_DWORD *)(v18 + 40) & 1) == 0;
    v21 = *(_DWORD *)(v18 + 40) & 1;
    v114 = v21;
    v97 = v21;
    if ( !v20 )
    {
      GreAcquireSemaphore(ghsemHT);
      v18 = v95;
    }
    if ( a1->iType )
    {
      v24 = *(_DWORD *)(v18 + 2368);
      if ( v24 )
      {
        if ( v24 == 2 )
        {
          v94 = 2;
          LOBYTE(v22) = 2;
        }
        else if ( v24 == 3 )
        {
          LOBYTE(v22) = -1;
          v94 = 2;
        }
        else if ( v24 == 4 )
        {
          LOBYTE(v22) = -2;
          v94 = 3;
        }
        else if ( v24 == 5 )
        {
          LOBYTE(v22) = -3;
          v94 = 4;
        }
        else
        {
          if ( v24 == 6 )
          {
            v22 = 5;
          }
          else
          {
            if ( v24 != 7 )
              goto LABEL_96;
            v22 = 6;
          }
          v94 = v22;
        }
        goto LABEL_12;
      }
    }
    else
    {
      if ( *((_DWORD *)v104 + 24) != 1 )
      {
        switch ( *((_DWORD *)v104 + 24) )
        {
          case 2:
            LOBYTE(v22) = 2;
            v94 = 2;
            v17 = ((a1->sizlBitmap.cx + 7) >> 1) & 0xFFFFFFFC;
            if ( *(_DWORD *)(v18 + 2368) != 2 )
              LOBYTE(v22) = -1;
            v24 = (*(_DWORD *)(v18 + 2368) != 2) + 2;
            break;
          case 3:
            LOBYTE(v22) = -2;
            v94 = 3;
            v17 = (a1->sizlBitmap.cx + 3) & 0xFFFFFFFC;
            v24 = 4;
            break;
          case 4:
            cx = a1->sizlBitmap.cx;
            LOBYTE(v22) = -3;
            v94 = 4;
            v24 = 5;
            v17 = (2 * cx + 2) & 0xFFFFFFFC;
            break;
          case 5:
            LOBYTE(v22) = 5;
            v23 = a1->sizlBitmap.cx + 1;
            v94 = 5;
            v24 = 6;
            v17 = (3 * v23) & 0xFFFFFFFC;
            break;
          case 6:
            LOBYTE(v22) = 6;
            v17 = 4 * a1->sizlBitmap.cx;
            v94 = 6;
            v24 = 7;
            break;
          default:
            goto LABEL_96;
        }
LABEL_12:
        *(_QWORD *)&v146.left = 0LL;
        *(SIZEL *)&v146.right = psoSrc->sizlBitmap;
        ERECTL::operator*=(&v146.left, v101);
        if ( ERECTL::bEmpty((ERECTL *)&v146) )
        {
LABEL_131:
          v16 = v19;
          goto LABEL_96;
        }
        if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v95) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v95, v107) )
        {
          v19 = -1;
          goto LABEL_131;
        }
        v117 = 0LL;
        v118 = 0;
        v119 = 0;
        HTSEMOBJ::vRelease((HTSEMOBJ *)&v97);
        if ( !v15 )
          goto LABEL_144;
        if ( (*((_DWORD *)v15 + 28) & 0x1000) != 0 )
        {
          v100 = (XLATEOBJ *)*((_QWORD *)v15 + 6);
          PDEVOBJ::vSync((PDEVOBJ *)&v100, psoSrc, 0LL, 0);
        }
        if ( psoSrc->iType || psoSrc->iBitmapFormat - 7 <= 1 )
        {
          memset(v129, 0, sizeof(v129));
          v129[2] = 0LL;
          HIDWORD(v129[0]) = psoSrc->sizlBitmap.cx;
          iBitmapFormat = psoSrc->iBitmapFormat;
          LODWORD(v129[1]) = psoSrc->sizlBitmap.cy;
          LODWORD(v129[3]) = *((_DWORD *)v15 + 28) & 0x40000;
          if ( iBitmapFormat == 7 )
          {
            LODWORD(v129[0]) = 2;
          }
          else if ( iBitmapFormat == 8 )
          {
            LODWORD(v129[0]) = 3;
          }
          else
          {
            LODWORD(v129[0]) = iBitmapFormat;
          }
          if ( !SURFMEM::bCreateDIB((SURFMEM *)&v117, (struct _DEVBITMAPINFO *)v129, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            goto LABEL_142;
          v76 = 0LL;
          if ( v117 )
            v76 = (SURFOBJ *)(v117 + 24);
          if ( !EngCopyBits(v76, psoSrc, 0LL, xloIdent, &v146, (POINTL *)&v146) )
          {
LABEL_142:
            if ( v21 )
              GreAcquireSemaphore(ghsemHT);
            goto LABEL_144;
          }
          v120 = (struct SURFACE *)v117;
        }
        else
        {
          v120 = v15;
        }
        if ( v21 )
          GreAcquireSemaphore(ghsemHT);
        if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v95) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v95, v107) )
        {
          v115 = ppalGetFromXlate(v15, v104, v108, 1u, 1);
          if ( !v115 )
          {
LABEL_95:
            SURFMEM::~SURFMEM((SURFMEM *)&v117);
LABEL_96:
            HTSEMOBJ::vRelease((HTSEMOBJ *)&v97);
            return v16;
          }
          v27 = ppalGetFromXlate(v15, v25, v26, 2u, 1);
          v28 = v95;
          v29 = (__int64)v27;
          v126 = 0;
          v125 = 0LL;
          v110 = 0LL;
          if ( v24 == *(_DWORD *)(v95 + 2368) )
          {
            v30 = *(_DWORD *)(v95 + 40) & 0x200;
          }
          else
          {
            if ( !(unsigned int)PALMEMOBJ::bCreateHTPalette((PALMEMOBJ *)&v125, v24, (struct _GDIINFO *)(v95 + 2128)) )
              goto LABEL_108;
            v110 = &v125;
            v72 = XEPALOBJ::bEqualEntries(&v125, v29);
            v28 = v95;
            v30 = v72;
          }
          v31 = a11;
          LODWORD(v98) = v30;
          if ( a11 != 512 )
            goto LABEL_27;
          v77 = *(_DWORD *)v105;
          if ( (unsigned __int8)*(_DWORD *)v105 )
          {
            v31 = 0;
            a11 = 0;
            goto LABEL_27;
          }
          v111[0] = 0;
          v113 = 0LL;
          v112 = 0;
          v111[1] = BYTE2(v77);
          if ( HIBYTE(v77) != 1 || BYTE2(v77) != 0xFF )
          {
            v78 = 1;
LABEL_153:
            v111[0] = v78;
            if ( v29 )
            {
              v113 = *(_QWORD *)(v29 + 112);
              v112 = *(_WORD *)(v29 + 28);
              v79 = *(_DWORD *)(v29 + 24);
              if ( (v79 & 8) != 0
                || (v79 & 2) != 0
                && (v80 = *(_DWORD **)(v29 + 112), *v80 == 16711680)
                && v80[1] == 65280
                && v80[2] == 255 )
              {
                v111[0] = v78 | 2;
              }
            }
            v138 = v111;
LABEL_27:
            v32 = v31;
            p_rclBounds = v106;
            v136 = v31;
            v34 = *(_OWORD *)&v106->dhsurf;
            v139 = *(_OWORD *)v101;
            v143 = **(_QWORD **)&prclTrg.left;
            v140 = v34;
            v137 = *(_BYTE *)(v28 + 2360);
            if ( v108 )
              v35 = *((_DWORD *)v108 + 18);
            else
              LOBYTE(v35) = 0;
            if ( (v35 & 4) != 0 || (v35 & 0x20) == 0 && (v35 & 3) != 0 )
            {
              v32 = v31 | 0x80;
              v136 = v31 | 0x80;
            }
            v36 = pco;
            v37 = v104;
            v105 = v104;
            v122 = 0LL;
            v123 = 0;
            v124 = 0;
            LODWORD(v103) = 0;
            if ( pco )
            {
              iDComplexity = pco->iDComplexity;
              v93 = iDComplexity;
            }
            else
            {
              iDComplexity = 0;
              v93 = 0;
            }
            if ( !psoDest->iType && psoDest->lDelta == v17 && (v94 == 3 || v30) && iDComplexity != 3 )
            {
              if ( psoDest != psoSrc || !(unsigned int)bIntersect(v101, v106) )
              {
LABEL_56:
                v51 = xloIdent;
                psoSrc = (SURFOBJ *)xloIdent;
                v100 = xloIdent;
                v106 = 0LL;
                v101 = 0LL;
                v52 = PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v95);
                v54 = xloIdent;
                if ( (_DWORD)v98 )
                  goto LABEL_67;
                LOBYTE(v53) = 8;
                v55 = HmgShareLockCheck(*v52, v53);
                *(_QWORD *)&prclTrg.left = v55;
                p_prclTrg = (__int64 *)&prclTrg;
                if ( v110 )
                  p_prclTrg = v110;
                v110 = p_prclTrg;
                if ( !v108 || (v57 = (struct PALETTE *)*((_QWORD *)v108 + 7)) == 0LL )
                  v57 = ppalDefault;
                if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                     (__int64 *)&v106,
                                     0LL,
                                     0,
                                     *p_prclTrg,
                                     v29,
                                     (__int64)v57,
                                     (__int64)v57,
                                     0,
                                     0xFFFFFF,
                                     0xFFFFFF,
                                     0) )
                {
                  psoSrc = v106;
                  if ( !*(_QWORD *)&pptlSrc )
                  {
                    v98 = (int *)v100;
                    if ( a11 != 512 )
                      goto LABEL_64;
                  }
                  v98 = (int *)v100;
                  if ( !(_DWORD)v103 )
                    goto LABEL_64;
                  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                       (__int64 *)&v101,
                                       0LL,
                                       0,
                                       v29,
                                       *v110,
                                       (__int64)v57,
                                       (__int64)v57,
                                       0,
                                       0xFFFFFF,
                                       0xFFFFFF,
                                       0) )
                  {
                    v98 = v101;
LABEL_64:
                    if ( v55 )
                      DEC_SHARE_REF_CNT(v55);
                    v54 = (XLATEOBJ *)v98;
                    v51 = (XLATEOBJ *)psoSrc;
LABEL_67:
                    HTSEMOBJ::vRelease((HTSEMOBJ *)&v97);
                    PDEVOBJ::vSync((PDEVOBJ *)&v95, psoDest, 0LL, 0);
                    if ( *(_QWORD *)&pptlSrc || a11 == 512 )
                    {
                      v58 = v105;
                      if ( (_DWORD)v103 )
                      {
                        v81 = *((_DWORD *)v105 + 14);
                        ++*((_DWORD *)v105 + 23);
                        prclTrg.right = v81;
                        prclTrg.bottom = *((_DWORD *)v58 + 15);
                        *(_QWORD *)&prclTrg.left = 0LL;
                        v82 = (*((_DWORD *)v104 + 28) & 0x400) != 0
                            ? (*(__int64 (__fastcall **)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, RECTL *))(v95 + 2832))(
                                (__int64)v58 + 24,
                                psoDest,
                                0LL,
                                v54,
                                &prclTrg,
                                &prclDest)
                            : ((__int64 (__fastcall *)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, RECTL *))EngCopyBits)(
                                (char *)v58 + 24,
                                psoDest,
                                0LL,
                                v54,
                                &prclTrg,
                                &prclDest);
                        if ( !v82
                          && !EngBitBlt(
                                (SURFOBJ *)((char *)v58 + 24),
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
                          goto LABEL_193;
                        }
                      }
                    }
                    else
                    {
                      v58 = v105;
                    }
                    if ( v21 )
                      GreAcquireSemaphore(ghsemHT);
                    if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v95)
                      || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v95, v107) )
                    {
                      v59 = 0;
                      v100 = (XLATEOBJ *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v95);
                      v132 = 0LL;
                      if ( !(unsigned int)bSetHTSrcSurfInfo(
                                            -(__int64)(v120 != 0LL) & ((unsigned __int64)v120 + 24),
                                            (__int64)v115,
                                            (__int64)v131,
                                            (__int64)v108)
                        || (v60 = (SURFOBJ *)(((unsigned __int64)v58 + 24) & -(__int64)(v58 != 0LL)),
                            v115 = (struct PALETTE *)v60,
                            !(unsigned int)bSetHTSurfInfo(v60, (struct _HTSURFACEINFO *)v133, v22))
                        || (v63 = pptlSrc) != 0LL
                        && !(unsigned int)bSetHTSurfInfo(
                                            (struct _SURFOBJ *)(*(_QWORD *)&pptlSrc + 24LL),
                                            (struct _HTSURFACEINFO *)v135,
                                            *(_DWORD *)(v116 + 72)) )
                      {
LABEL_89:
                        if ( v132 )
                          FreeThreadBufferWithTag(v132);
                        v16 = v59 != 0 ? 1 : -1;
                        goto LABEL_92;
                      }
                      LODWORD(v64) = 0;
                      if ( !*(_QWORD *)&v63 )
                      {
LABEL_77:
                        v65 = v136;
                        v66 = 256;
                        if ( (*(_DWORD *)(v95 + 2372) & 0x100) == 0 )
                        {
                          v65 = v136 | 2;
                          v136 |= 2u;
                        }
                        if ( v94 == 3 )
                        {
                          v127[0] = 65792;
                          v134 = v127;
                          v128 = v147;
                          v127[1] = 255;
                          v127[2] = 256;
                          cEntries = v51->cEntries;
                          if ( cEntries > 0x100 || (v66 = v51->cEntries, cEntries) )
                          {
                            v84 = v147;
                            v85 = v66;
                            v86 = 0LL;
                            do
                            {
                              v87 = v51->pulXlate[v86++];
                              *v84++ = v87;
                              --v85;
                            }
                            while ( v85 );
                          }
                          v51 = xloIdent;
                          psoSrc = (SURFOBJ *)xloIdent;
                        }
                        if ( v93 )
                        {
                          v136 = v65 | 1;
                          if ( v93 != 1 )
                          {
                            XCLIPOBJ::cEnumStart((XCLIPOBJ *)pco, 0, 0, 4u, 0x14u);
                            v59 = 1;
                            v88 = AllocFreeTmpBuffer(324LL);
                            v89 = (char *)v88;
                            if ( v88 )
                            {
                              v90 = (int)v100;
                              v116 = v88;
                              do
                              {
                                v91 = XCLIPOBJ::bEnum((XCLIPOBJ *)pco, 0x144u, v89, 0LL);
                                v92 = 0;
                                LODWORD(v98) = v91;
                                if ( *(_DWORD *)v89 )
                                {
                                  do
                                  {
                                    rclBounds = *(RECTL *)&v89[16 * v92++ + 4];
                                    v59 = ((int)HT_HalftoneBitmap(
                                                  v90,
                                                  (_DWORD)v107,
                                                  (unsigned int)v131,
                                                  (_DWORD)v64,
                                                  (__int64)v133,
                                                  (__int64)&v136) >= 0) & (unsigned __int8)v59;
                                  }
                                  while ( v92 < *(_DWORD *)v89 );
                                  v91 = (int)v98;
                                }
                              }
                              while ( v91 && v59 );
                              AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v116);
                              v21 = v114;
                              v51 = (XLATEOBJ *)psoSrc;
                              v60 = (SURFOBJ *)v115;
                            }
                            else
                            {
                              v51 = (XLATEOBJ *)psoSrc;
                              v59 = 0;
                            }
                            goto LABEL_82;
                          }
                          rclBounds = pco->rclBounds;
                        }
                        LOBYTE(v59) = (int)HT_HalftoneBitmap(
                                             (_DWORD)v100,
                                             (_DWORD)v107,
                                             (unsigned int)v131,
                                             (_DWORD)v64,
                                             (__int64)v133,
                                             (__int64)&v136) >= 0;
LABEL_82:
                        HTSEMOBJ::vRelease((HTSEMOBJ *)&v97);
                        if ( (_DWORD)v103 && v59 )
                        {
                          v67 = v104;
                          v68 = psoDest;
                          pptlSrc = 0LL;
                          ++*((_DWORD *)v104 + 23);
                          if ( v68->iType )
                          {
                            if ( (*((_DWORD *)v67 + 28) & 0x400) != 0 )
                              v69 = (*(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v95 + 2832))(
                                      v68,
                                      v60,
                                      pco,
                                      v51,
                                      &prclDest,
                                      &pptlSrc);
                            else
                              v69 = ((__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))EngCopyBits)(
                                      v68,
                                      v60,
                                      pco,
                                      v51,
                                      &prclDest,
                                      &pptlSrc);
                          }
                          else
                          {
                            v69 = EngCopyBits(v68, v60, pco, v51, &prclDest, &pptlSrc);
                          }
                          v59 = v69;
                        }
                        if ( v21 )
                          GreAcquireSemaphore(ghsemHT);
                        goto LABEL_89;
                      }
                      if ( !bUMPDSecurityGateEx(v62, v61) || v121 )
                      {
                        v64 = v135;
                        v144 = *v121;
                        goto LABEL_77;
                      }
                      if ( gfUMPDDebug )
                        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\htblt.cxx:%d:EngHTBlt:pptlMask == NULL\n", 1063);
                      if ( v132 )
                        FreeThreadBufferWithTag(v132);
                    }
LABEL_193:
                    v16 = -1;
LABEL_92:
                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v101);
                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v106);
LABEL_93:
                    SURFMEM::~SURFMEM((SURFMEM *)&v122);
LABEL_94:
                    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v125);
                    goto LABEL_95;
                  }
                }
                if ( v55 )
                  DEC_SHARE_REF_CNT(v55);
                goto LABEL_193;
              }
              v32 = v136;
              v37 = v104;
              p_rclBounds = v106;
              v36 = pco;
            }
            LODWORD(v103) = 1;
            if ( iDComplexity )
            {
              v93 = 0;
              v71 = 0LL;
              p_rclBounds = (SURFOBJ *)&v36->rclBounds;
              if ( iDComplexity != 1 )
                v71 = v36;
              pco = v71;
            }
            v39 = *((_QWORD *)v37 + 7);
            hsurf = (int)p_rclBounds->hsurf;
            dhsurf = (int)p_rclBounds->dhsurf;
            if ( hsurf <= SLODWORD(p_rclBounds->dhsurf) )
            {
              hsurf = (int)p_rclBounds->dhsurf;
              dhsurf = (int)p_rclBounds->hsurf;
            }
            v42 = 0;
            if ( dhsurf >= 0 )
              v42 = dhsurf;
            v43 = v39;
            if ( hsurf <= (int)v39 )
              v43 = hsurf;
            v44 = v43 - v42;
            if ( v43 - v42 > 0 )
            {
              prclDest.left = v42;
              hsurf_high = HIDWORD(p_rclBounds->hsurf);
              v46 = hsurf_high;
              prclDest.right = v43;
              dhsurf_high = HIDWORD(p_rclBounds->dhsurf);
              if ( hsurf_high <= dhsurf_high )
              {
                v46 = HIDWORD(p_rclBounds->dhsurf);
                dhsurf_high = hsurf_high;
              }
              v48 = 0;
              if ( dhsurf_high >= 0 )
                v48 = dhsurf_high;
              v49 = HIDWORD(v39);
              if ( v46 > (int)v49 )
                v46 = v49;
              v50 = v46 - v48;
              if ( v46 - v48 > 0 )
              {
                prclDest.top = v48;
                prclDest.bottom = v46;
                v136 = v32 | 0x10;
                memset(v130, 0, sizeof(v130));
                LODWORD(v130[3]) = *((_DWORD *)v104 + 28) & 0x40000;
                v130[0] = __PAIR64__(v44, v94);
                LODWORD(v130[1]) = v50;
                v130[2] = 0LL;
                if ( SURFMEM::bCreateDIB(
                       (SURFMEM *)&v122,
                       (struct _DEVBITMAPINFO *)v130,
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
                  v105 = v122;
                  goto LABEL_56;
                }
                v19 = -1;
              }
            }
            v16 = v19;
            goto LABEL_93;
          }
          if ( (unsigned int)bIsSourceBGRA(v103) )
          {
            v31 = 512;
            v78 = 4;
            goto LABEL_153;
          }
LABEL_108:
          v16 = -1;
          goto LABEL_94;
        }
LABEL_144:
        v16 = -1;
        goto LABEL_95;
      }
      v74 = a1->sizlBitmap.cx;
      v24 = 0;
      v17 = ((v74 + 31) >> 3) & 0xFFFFFFFC;
    }
    LOBYTE(v22) = 1;
    v94 = 1;
    goto LABEL_12;
  }
  return 0xFFFFFFFFLL;
}
