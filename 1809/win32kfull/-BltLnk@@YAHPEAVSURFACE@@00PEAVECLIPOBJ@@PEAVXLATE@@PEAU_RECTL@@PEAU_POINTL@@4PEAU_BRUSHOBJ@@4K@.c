/*
 * XREFs of ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0089C94
 * Callers:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C0088B10 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     EngBitBlt @ 0x1C00890E0 (EngBitBlt.c)
 * Callees:
 *     EngCopyBits @ 0x1C0045EE0 (EngCopyBits.c)
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1C008A460 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C008B104 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C008FDD0 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F22E4 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C01143A0 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall BltLnk(
        struct SURFACE *a1,
        struct SURFACE *a2,
        struct SURFACE *a3,
        struct ECLIPOBJ *a4,
        XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  struct _RECTL *v11; // r12
  XLATEOBJ *v14; // rbx
  struct _BRUSHOBJ *v15; // rdi
  struct SURFACE *v16; // r9
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  struct _RECTL v23; // xmm0
  unsigned __int8 v24; // r14
  unsigned int v25; // ebx
  BOOL v26; // esi
  char v27; // r8
  char v28; // r13
  bool v29; // zf
  char v30; // r14
  char v31; // r15
  int v32; // esi
  __int64 v33; // rax
  int v34; // edx
  LONG x; // r11d
  LONG y; // ecx
  int v37; // eax
  unsigned int v38; // r8d
  int v39; // r10d
  void *v40; // r11
  struct _POINTL *v41; // rdx
  XCLIPOBJ *v42; // r10
  struct _RECTL v43; // xmm0
  int v44; // r14d
  unsigned int v45; // r13d
  LONG left; // eax
  struct _RECTL *v47; // rdi
  LONG v48; // ecx
  LONG right; // esi
  LONG v50; // r8d
  LONG v51; // eax
  LONG bottom; // eax
  LONG v53; // edx
  LONG v54; // r15d
  struct _BRUSHOBJ *EngRbrush; // rax
  int iSolidColor; // ecx
  PVOID pvRbrush; // rax
  int v59; // ecx
  struct SURFACE *v60; // r14
  unsigned int v61; // ecx
  int v62; // r10d
  int v63; // r8d
  int v64; // r9d
  int v65; // eax
  int v66; // edx
  int v67; // edx
  int v68; // edx
  int v69; // edx
  LONG top; // r10d
  int v71; // eax
  int v72; // ecx
  POINTL v73; // r14
  int v74; // eax
  unsigned int v75; // r10d
  int v76; // r8d
  int v77; // ecx
  signed int v78; // r9d
  int flColorType; // r11d
  unsigned __int8 v80; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v81; // [rsp+61h] [rbp-9Fh]
  BOOL v82; // [rsp+64h] [rbp-9Ch]
  int v83; // [rsp+64h] [rbp-9Ch]
  LONG v84; // [rsp+64h] [rbp-9Ch]
  int v85; // [rsp+68h] [rbp-98h]
  char v86; // [rsp+6Ch] [rbp-94h]
  unsigned int v87; // [rsp+74h] [rbp-8Ch]
  BOOL v88; // [rsp+78h] [rbp-88h]
  unsigned int v89; // [rsp+78h] [rbp-88h]
  int v90; // [rsp+88h] [rbp-78h]
  POINTL pptlSrc; // [rsp+90h] [rbp-70h] BYREF
  struct SURFACE *v92; // [rsp+98h] [rbp-68h]
  struct _POINTL *v93; // [rsp+A0h] [rbp-60h]
  BOOL v94; // [rsp+A8h] [rbp-58h]
  BOOL v95; // [rsp+ACh] [rbp-54h]
  BOOL v96; // [rsp+B0h] [rbp-50h]
  XCLIPOBJ *v97; // [rsp+B8h] [rbp-48h]
  __int64 v98; // [rsp+C0h] [rbp-40h] BYREF
  char v99; // [rsp+C8h] [rbp-38h]
  int v100; // [rsp+CCh] [rbp-34h]
  POINTL *v101; // [rsp+D0h] [rbp-30h]
  struct _POINTL *v102; // [rsp+D8h] [rbp-28h]
  struct _RECTL v103; // [rsp+E0h] [rbp-20h] BYREF
  struct SURFACE *v104; // [rsp+F0h] [rbp-10h]
  struct SURFACE *v105; // [rsp+F8h] [rbp-8h]
  struct SURFACE *v106; // [rsp+100h] [rbp+0h]
  struct ECLIPOBJ *v107; // [rsp+108h] [rbp+8h]
  XLATEOBJ *v108; // [rsp+110h] [rbp+10h]
  struct _BRUSHOBJ *v109; // [rsp+118h] [rbp+18h]
  __int64 v110; // [rsp+120h] [rbp+20h]
  __int64 v111; // [rsp+128h] [rbp+28h]
  PVOID v112; // [rsp+130h] [rbp+30h]
  PVOID v113; // [rsp+138h] [rbp+38h]
  unsigned int v114; // [rsp+140h] [rbp+40h]
  int v115; // [rsp+144h] [rbp+44h]
  int v116; // [rsp+148h] [rbp+48h]
  int v117; // [rsp+14Ch] [rbp+4Ch]
  int v118; // [rsp+150h] [rbp+50h]
  int v119; // [rsp+154h] [rbp+54h]
  int v120; // [rsp+158h] [rbp+58h]
  int v121; // [rsp+15Ch] [rbp+5Ch]
  int v122; // [rsp+160h] [rbp+60h]
  int v123; // [rsp+164h] [rbp+64h]
  int v124; // [rsp+168h] [rbp+68h]
  unsigned __int64 v125; // [rsp+16Ch] [rbp+6Ch]
  int v126; // [rsp+174h] [rbp+74h]
  int v127; // [rsp+178h] [rbp+78h]
  ULONG v128; // [rsp+17Ch] [rbp+7Ch]
  LONG v129; // [rsp+180h] [rbp+80h]
  LONG v130; // [rsp+184h] [rbp+84h]
  unsigned int v131; // [rsp+188h] [rbp+88h]
  int v132; // [rsp+18Ch] [rbp+8Ch]
  int v133; // [rsp+190h] [rbp+90h]
  int v134; // [rsp+194h] [rbp+94h]
  unsigned int v135; // [rsp+1ACh] [rbp+ACh]
  int v136; // [rsp+1B0h] [rbp+B0h]
  BOOL v137; // [rsp+1B4h] [rbp+B4h]
  BOOL v138; // [rsp+1B8h] [rbp+B8h]
  BOOL v139; // [rsp+1BCh] [rbp+BCh]
  BOOL v140; // [rsp+1C0h] [rbp+C0h]
  char v141; // [rsp+1C4h] [rbp+C4h]
  char v142; // [rsp+1C5h] [rbp+C5h]
  _QWORD v143[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  struct SURFACE *v144; // [rsp+1F0h] [rbp+F0h]
  struct _BRUSHOBJ *v145; // [rsp+1F8h] [rbp+F8h]
  struct _RECTL *v146; // [rsp+200h] [rbp+100h]
  RECTL prclDest; // [rsp+208h] [rbp+108h] BYREF
  unsigned int v148; // [rsp+220h] [rbp+120h] BYREF
  _OWORD v149[20]; // [rsp+224h] [rbp+124h] BYREF

  v11 = a6;
  v14 = a5;
  v15 = 0LL;
  v92 = a1;
  v97 = a4;
  v16 = a1;
  v102 = a8;
  v101 = a7;
  v17 = *((_DWORD *)a1 + 24);
  v144 = a3;
  pptlSrc = (POINTL)a2;
  v146 = a6;
  v145 = a9;
  v93 = a10;
  v98 = 0LL;
  v99 = 0;
  v100 = 0;
  v18 = v17 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            if ( v22 == 1 )
              v85 = 64;
            else
              v85 = v90;
          }
          else
          {
            v85 = 83;
          }
        }
        else
        {
          v85 = 126;
        }
      }
      else
      {
        v85 = 250;
      }
    }
    else
    {
      v85 = 498;
    }
  }
  else
  {
    v85 = 1986;
  }
  v23 = *a6;
  if ( !a5 )
    v14 = xloIdent;
  v108 = v14;
  v107 = a4;
  v87 = a11 >> 8;
  v104 = v16;
  v105 = a2;
  v24 = a11 & 0xC3 | (4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC;
  v109 = a9;
  v80 = a11 & 0xA5 | (8 * (a11 & 0xA)) | ((unsigned __int8)a11 >> 3) & 0xA;
  v81 = BYTE1(a11) & 0xA5 | (8 * (BYTE1(a11) & 0xA)) | (BYTE1(a11) >> 3) & 0xA;
  v103 = v23;
  v95 = (a11 & 0xF) != (unsigned __int8)a11 >> 4;
  v25 = 1;
  v26 = (a11 & 0xF) != (unsigned __int8)a11 >> 4 || (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4;
  v88 = v26;
  v27 = v24 >> 4;
  v28 = a11 & 3 | (4 * (a11 & 0xC)) & 0xF | ((unsigned __int8)a11 >> 2) & 0xC;
  v29 = (v24 & 0xF) == v24 >> 4;
  v86 = v27;
  v30 = BYTE1(a11) & 3 | (4 * (BYTE1(a11) & 0xC)) & 0xF | (BYTE1(a11) >> 2) & 0xC;
  v94 = !v29;
  v31 = (unsigned __int8)(BYTE1(a11) & 0xC3 | (4 * (BYTE1(a11) & 0xC)) | (BYTE1(a11) >> 2) & 0xC) >> 4;
  v96 = v30 != v31;
  v82 = v28 != v27 || v30 != v31;
  if ( v26 || (unsigned __int8)a11 != v87 && !a3 )
  {
    if ( a9 && a9->iSolidColor == -1 )
    {
      EngRbrush = (struct _BRUSHOBJ *)pvGetEngRbrush(a9);
      v27 = v86;
      v15 = EngRbrush;
      v16 = v92;
      a2 = (struct SURFACE *)pptlSrc;
    }
    else
    {
      v15 = a9;
    }
  }
  v32 = 1;
  v116 = 1;
  v115 = 1;
  v114 = 4;
  if ( v82 )
  {
    v33 = *((_QWORD *)a2 + 10);
    v34 = *((_DWORD *)a2 + 22);
    v110 = v33;
    v117 = v34;
    x = v101->x;
    y = v101->y;
    v125 = __PAIR64__(y, v101->x);
    if ( v33 != *((_QWORD *)v16 + 10) )
      goto LABEL_19;
    top = a6->top;
    v84 = top;
    if ( y < top )
    {
      v32 = -1;
      v116 = -1;
      v114 = 2;
    }
    v115 = 1;
    v71 = 1;
    if ( y == top )
    {
      if ( x < a6->left )
        v71 = -1;
      v115 = v71;
    }
    if ( (unsigned __int8)a11 != v87 && v28 != v27 && v30 != v31
      || (v71 == -1 || v32 == -1) && a6->right - a6->left > v85 )
    {
      memset(v143, 0, sizeof(v143));
      v72 = a6->right - a6->left;
      v73 = pptlSrc;
      LODWORD(v143[0]) = *(_DWORD *)(*(_QWORD *)&pptlSrc + 96LL);
      v74 = a6->bottom - v84;
      HIDWORD(v143[0]) = v72;
      LODWORD(v143[1]) = v74;
      v143[2] = 0LL;
      LODWORD(v143[3]) = 1;
      SURFMEM::bCreateDIB((SURFMEM *)&v98, (struct _DEVBITMAPINFO *)v143, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v98 )
        goto LABEL_96;
      *(_QWORD *)&prclDest.left = 0LL;
      pptlSrc = *v101;
      prclDest.right = HIDWORD(v143[0]);
      prclDest.bottom = v143[1];
      if ( !EngCopyBits(
              (SURFOBJ *)(v98 + 24),
              (SURFOBJ *)((*(_QWORD *)&v73 + 24LL) & -(__int64)(v73 != 0LL)),
              0LL,
              xloIdent,
              &prclDest,
              &pptlSrc) )
        goto LABEL_96;
      v16 = v92;
      v125 = 0LL;
      v34 = *(_DWORD *)(v98 + 88);
      v110 = *(_QWORD *)(v98 + 80);
      v117 = v34;
    }
    if ( v32 == 1 )
LABEL_19:
      v121 = v34;
    else
      v121 = -v34;
  }
  else
  {
    v110 = 0LL;
  }
  v111 = *((_QWORD *)v16 + 10);
  v37 = *((_DWORD *)v16 + 22);
  v118 = v37;
  if ( v32 != 1 )
    v37 = -v37;
  v38 = a11 >> 8;
  v39 = (unsigned __int8)a11;
  v122 = v37;
  if ( (unsigned __int8)a11 == v87 || (v60 = v144) == 0LL )
  {
    v106 = 0LL;
    v40 = 0LL;
    v112 = 0LL;
  }
  else
  {
    if ( (unsigned int)bUMPDSecurityGateEx() && !v102 )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bltlnk.cxx:%d:BltLnk:pptlMask == NULL\n", 619);
      goto LABEL_96;
    }
    v61 = *((_DWORD *)v60 + 14);
    v62 = v102->x;
    v40 = (void *)*((_QWORD *)v60 + 10);
    v63 = *((_DWORD *)v60 + 15);
    v64 = v102->y;
    v112 = v40;
    v106 = v60;
    v131 = v61;
    v132 = v63;
    v133 = v62;
    v134 = v64;
    if ( v62 >= (int)v61 )
    {
      v133 = v62 % v61;
    }
    else if ( v62 < 0 )
    {
      v133 = v61 - (-1 - v62) % v61 - 1;
    }
    if ( v64 >= v63 )
    {
      v134 = v64 % v63;
    }
    else if ( v64 < 0 )
    {
      v134 = v63 - ~v64 % v63 - 1;
    }
    v65 = *((_DWORD *)v60 + 22);
    v16 = v92;
    v38 = a11 >> 8;
    v39 = (unsigned __int8)a11;
    v120 = v65;
    if ( v32 != 1 )
      v65 = -v65;
    v124 = v65;
  }
  if ( !v88 )
  {
    v113 = 0LL;
LABEL_26:
    v41 = v93;
    goto LABEL_27;
  }
  if ( !v145 )
    goto LABEL_96;
  iSolidColor = v145->iSolidColor;
  if ( v145->iSolidColor != -1 )
  {
    v66 = *((_DWORD *)v16 + 24);
    v113 = 0LL;
    v67 = v66 - 1;
    if ( !v67 )
    {
      if ( iSolidColor )
        iSolidColor = -1;
      goto LABEL_95;
    }
    v68 = v67 - 1;
    if ( v68 )
    {
      v69 = v68 - 1;
      if ( v69 )
      {
        if ( v69 != 1 )
        {
LABEL_95:
          v126 = iSolidColor;
          goto LABEL_26;
        }
LABEL_102:
        iSolidColor |= iSolidColor << 16;
        goto LABEL_95;
      }
    }
    else
    {
      iSolidColor |= 16 * iSolidColor;
    }
    iSolidColor |= iSolidColor << 8;
    goto LABEL_102;
  }
  if ( !v15 )
    goto LABEL_96;
  pvRbrush = v15[1].pvRbrush;
  v126 = -1;
  if ( !pvRbrush )
    goto LABEL_26;
  v41 = v93;
  v59 = *(&v15[1].iSolidColor + 1);
  v113 = pvRbrush;
  v127 = *(&v15->flColorType + 1);
  v128 = v15[1].iSolidColor;
  v129 = v93->x;
  v130 = v93->y;
  v119 = v59;
  if ( v32 != 1 )
    v59 = -v59;
  v123 = v59;
LABEL_27:
  if ( v39 != v38 && !v40 )
  {
    if ( !v15 || !v15[2].pvRbrush )
      goto LABEL_96;
    v75 = *(&v15[1].flColorType + 1);
    v76 = a6->left - v41->x;
    v77 = a6->top - v41->y;
    v78 = v15[2].iSolidColor;
    flColorType = v15[2].flColorType;
    v112 = v15[2].pvRbrush;
    v131 = v75;
    v132 = v78;
    v120 = flColorType;
    v133 = v76;
    v134 = v77;
    if ( v76 < (int)v75 )
    {
      if ( v76 < 0 )
        v133 = v75 - ~v76 % v75 - 1;
    }
    else
    {
      v133 = v76 % v75;
    }
    if ( v77 < v78 )
    {
      if ( v77 < 0 )
        v134 = v78 - ~v77 % v78 - 1;
    }
    else
    {
      v134 = v77 % v78;
    }
    if ( v32 != 1 )
      flColorType = -flColorType;
    v124 = flColorType;
  }
  v42 = v97;
  if ( v97 && *((_BYTE *)v97 + 20) )
  {
    if ( *((_BYTE *)v97 + 20) == 1 )
    {
      v43 = *(struct _RECTL *)((char *)v97 + 4);
      goto LABEL_30;
    }
    if ( *((_BYTE *)v97 + 20) == 3 )
    {
      v83 = 1;
      v44 = 1;
      XCLIPOBJ::cEnumStart(v97, 0, 0, v114, 0x14u);
      v42 = v97;
      goto LABEL_31;
    }
LABEL_96:
    v25 = 0;
    goto LABEL_53;
  }
  v43 = *a6;
LABEL_30:
  v44 = 0;
  v83 = 0;
  v148 = 1;
  v149[0] = v43;
LABEL_31:
  if ( v44 )
    goto LABEL_101;
  while ( 1 )
  {
    v45 = 0;
    v89 = 0;
    if ( v148 )
    {
      do
      {
        left = v11->left;
        v47 = (struct _RECTL *)&v149[v45];
        v48 = v47->left;
        if ( v47->left < v11->left )
        {
          v47->left = left;
          v48 = left;
        }
        right = v11->right;
        if ( v47->right > right )
          v47->right = right;
        else
          right = v47->right;
        v50 = v47->top;
        v51 = v11->top;
        if ( v50 < v51 )
        {
          v47->top = v51;
          v50 = v51;
        }
        bottom = v47->bottom;
        v53 = v11->bottom;
        if ( bottom > v53 )
        {
          v47->bottom = v53;
          bottom = v53;
        }
        if ( v50 < bottom && right - v48 > 0 )
        {
          do
          {
            v54 = right;
            if ( right - v48 > v85 )
            {
              v54 = v48 + v85;
              v47->right = v48 + v85;
            }
            if ( (_BYTE)a11 != 0xAA )
            {
              v141 = a11;
              v135 = a11 & 0xC3 | (unsigned __int8)((4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC);
              v136 = v80;
              v137 = v94;
              v138 = (v80 & 0xF) != v80 >> 4;
              v139 = v95;
              v140 = (unsigned __int8)a11 != a11 >> 8;
              v142 = 0;
              BltLnkRect((struct _BLTLNKINFO *)&v103, v47);
            }
            if ( (unsigned __int8)a11 != v87 && BYTE1(a11) != 0xAA )
            {
              v135 = BYTE1(a11) & 0xC3 | (unsigned __int8)((4 * (BYTE1(a11) & 0xC)) | (BYTE1(a11) >> 2) & 0xC);
              v136 = v81;
              v137 = v96;
              v138 = (v81 & 0xF) != v81 >> 4;
              v139 = (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4;
              v140 = (unsigned __int8)a11 != a11 >> 8;
              v141 = BYTE1(a11);
              v142 = -1;
              BltLnkRect((struct _BLTLNKINFO *)&v103, v47);
            }
            v47->left = v54;
            v47->right = right;
            v48 = v54;
          }
          while ( right - v54 > 0 );
          v11 = v146;
          v25 = 1;
          v45 = v89;
        }
        v89 = ++v45;
      }
      while ( v45 < v148 );
      v44 = v83;
    }
    v42 = v97;
    if ( !v44 )
      break;
LABEL_101:
    v44 = XCLIPOBJ::bEnum(v42, 0x144u, &v148, 0LL);
    v83 = v44;
  }
LABEL_53:
  SURFMEM::~SURFMEM((SURFMEM *)&v98);
  return v25;
}
