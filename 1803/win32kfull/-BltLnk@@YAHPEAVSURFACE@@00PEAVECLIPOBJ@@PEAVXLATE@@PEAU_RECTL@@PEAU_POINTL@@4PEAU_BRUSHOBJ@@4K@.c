/*
 * XREFs of ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00AE604
 * Callers:
 *     EngBitBlt @ 0x1C0091510 (EngBitBlt.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C00AB030 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 * Callees:
 *     EngCopyBits @ 0x1C008FEE0 (EngCopyBits.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0090AA4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0090CA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1C00AEDC0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00B0458 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B1040 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
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
  struct _RECTL *v46; // rdi
  LONG left; // ecx
  LONG right; // esi
  LONG v49; // edx
  LONG bottom; // eax
  LONG v51; // r15d
  struct _BRUSHOBJ *EngRbrush; // rax
  int iSolidColor; // ecx
  PVOID pvRbrush; // rax
  int v56; // ecx
  struct SURFACE *v57; // r14
  unsigned int v58; // ecx
  int v59; // r10d
  int v60; // r8d
  int v61; // r9d
  int v62; // eax
  int v63; // edx
  int v64; // edx
  int v65; // edx
  int v66; // edx
  LONG top; // r10d
  int v68; // eax
  int v69; // ecx
  POINTL v70; // r14
  int v71; // eax
  unsigned int v72; // r10d
  int v73; // r8d
  int v74; // ecx
  signed int v75; // r9d
  int flColorType; // r11d
  unsigned __int8 v77; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v78; // [rsp+61h] [rbp-9Fh]
  BOOL v79; // [rsp+64h] [rbp-9Ch]
  int v80; // [rsp+64h] [rbp-9Ch]
  LONG v81; // [rsp+64h] [rbp-9Ch]
  int v82; // [rsp+68h] [rbp-98h]
  char v83; // [rsp+6Ch] [rbp-94h]
  unsigned int v84; // [rsp+74h] [rbp-8Ch]
  BOOL v85; // [rsp+78h] [rbp-88h]
  unsigned int v86; // [rsp+78h] [rbp-88h]
  int v87; // [rsp+88h] [rbp-78h]
  POINTL pptlSrc; // [rsp+90h] [rbp-70h] BYREF
  struct SURFACE *v89; // [rsp+98h] [rbp-68h]
  struct _POINTL *v90; // [rsp+A0h] [rbp-60h]
  BOOL v91; // [rsp+A8h] [rbp-58h]
  BOOL v92; // [rsp+ACh] [rbp-54h]
  BOOL v93; // [rsp+B0h] [rbp-50h]
  XCLIPOBJ *v94; // [rsp+B8h] [rbp-48h]
  __int64 v95; // [rsp+C0h] [rbp-40h] BYREF
  char v96; // [rsp+C8h] [rbp-38h]
  int v97; // [rsp+CCh] [rbp-34h]
  POINTL *v98; // [rsp+D0h] [rbp-30h]
  struct _POINTL *v99; // [rsp+D8h] [rbp-28h]
  struct _RECTL v100; // [rsp+E0h] [rbp-20h] BYREF
  struct SURFACE *v101; // [rsp+F0h] [rbp-10h]
  struct SURFACE *v102; // [rsp+F8h] [rbp-8h]
  struct SURFACE *v103; // [rsp+100h] [rbp+0h]
  struct ECLIPOBJ *v104; // [rsp+108h] [rbp+8h]
  XLATEOBJ *v105; // [rsp+110h] [rbp+10h]
  struct _BRUSHOBJ *v106; // [rsp+118h] [rbp+18h]
  __int64 v107; // [rsp+120h] [rbp+20h]
  __int64 v108; // [rsp+128h] [rbp+28h]
  PVOID v109; // [rsp+130h] [rbp+30h]
  PVOID v110; // [rsp+138h] [rbp+38h]
  unsigned int v111; // [rsp+140h] [rbp+40h]
  int v112; // [rsp+144h] [rbp+44h]
  int v113; // [rsp+148h] [rbp+48h]
  int v114; // [rsp+14Ch] [rbp+4Ch]
  int v115; // [rsp+150h] [rbp+50h]
  int v116; // [rsp+154h] [rbp+54h]
  int v117; // [rsp+158h] [rbp+58h]
  int v118; // [rsp+15Ch] [rbp+5Ch]
  int v119; // [rsp+160h] [rbp+60h]
  int v120; // [rsp+164h] [rbp+64h]
  int v121; // [rsp+168h] [rbp+68h]
  unsigned __int64 v122; // [rsp+16Ch] [rbp+6Ch]
  int v123; // [rsp+174h] [rbp+74h]
  int v124; // [rsp+178h] [rbp+78h]
  ULONG v125; // [rsp+17Ch] [rbp+7Ch]
  LONG v126; // [rsp+180h] [rbp+80h]
  LONG v127; // [rsp+184h] [rbp+84h]
  unsigned int v128; // [rsp+188h] [rbp+88h]
  int v129; // [rsp+18Ch] [rbp+8Ch]
  int v130; // [rsp+190h] [rbp+90h]
  int v131; // [rsp+194h] [rbp+94h]
  unsigned int v132; // [rsp+1ACh] [rbp+ACh]
  int v133; // [rsp+1B0h] [rbp+B0h]
  BOOL v134; // [rsp+1B4h] [rbp+B4h]
  BOOL v135; // [rsp+1B8h] [rbp+B8h]
  BOOL v136; // [rsp+1BCh] [rbp+BCh]
  BOOL v137; // [rsp+1C0h] [rbp+C0h]
  char v138; // [rsp+1C4h] [rbp+C4h]
  char v139; // [rsp+1C5h] [rbp+C5h]
  _QWORD v140[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  struct SURFACE *v141; // [rsp+1F0h] [rbp+F0h]
  struct _BRUSHOBJ *v142; // [rsp+1F8h] [rbp+F8h]
  struct _RECTL *v143; // [rsp+200h] [rbp+100h]
  RECTL prclDest; // [rsp+208h] [rbp+108h] BYREF
  unsigned int v145; // [rsp+220h] [rbp+120h] BYREF
  _OWORD v146[20]; // [rsp+224h] [rbp+124h] BYREF

  v11 = a6;
  v14 = a5;
  v15 = 0LL;
  v89 = a1;
  v94 = a4;
  v16 = a1;
  v99 = a8;
  v98 = a7;
  v17 = *((_DWORD *)a1 + 24);
  v141 = a3;
  pptlSrc = (POINTL)a2;
  v143 = a6;
  v142 = a9;
  v90 = a10;
  v95 = 0LL;
  v96 = 0;
  v97 = 0;
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
              v82 = 64;
            else
              v82 = v87;
          }
          else
          {
            v82 = 83;
          }
        }
        else
        {
          v82 = 126;
        }
      }
      else
      {
        v82 = 250;
      }
    }
    else
    {
      v82 = 498;
    }
  }
  else
  {
    v82 = 1986;
  }
  v23 = *a6;
  if ( !a5 )
    v14 = xloIdent;
  v105 = v14;
  v104 = a4;
  v84 = a11 >> 8;
  v101 = v16;
  v102 = a2;
  v24 = a11 & 0xC3 | (4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC;
  v106 = a9;
  v77 = a11 & 0xA5 | (8 * (a11 & 0xA)) | ((unsigned __int8)a11 >> 3) & 0xA;
  v78 = BYTE1(a11) & 0xA5 | (8 * (BYTE1(a11) & 0xA)) | (BYTE1(a11) >> 3) & 0xA;
  v100 = v23;
  v92 = (a11 & 0xF) != (unsigned __int8)a11 >> 4;
  v25 = 1;
  v26 = (a11 & 0xF) != (unsigned __int8)a11 >> 4 || (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4;
  v85 = v26;
  v27 = v24 >> 4;
  v28 = a11 & 3 | (4 * (a11 & 0xC)) & 0xF | ((unsigned __int8)a11 >> 2) & 0xC;
  v29 = (v24 & 0xF) == v24 >> 4;
  v83 = v27;
  v30 = BYTE1(a11) & 3 | (4 * (BYTE1(a11) & 0xC)) & 0xF | (BYTE1(a11) >> 2) & 0xC;
  v91 = !v29;
  v31 = (unsigned __int8)(BYTE1(a11) & 0xC3 | (4 * (BYTE1(a11) & 0xC)) | (BYTE1(a11) >> 2) & 0xC) >> 4;
  v93 = v30 != v31;
  v79 = v28 != v27 || v30 != v31;
  if ( v26 || (unsigned __int8)a11 != v84 && !a3 )
  {
    if ( a9 && a9->iSolidColor == -1 )
    {
      EngRbrush = (struct _BRUSHOBJ *)pvGetEngRbrush(a9);
      v27 = v83;
      v15 = EngRbrush;
      v16 = v89;
      a2 = (struct SURFACE *)pptlSrc;
    }
    else
    {
      v15 = a9;
    }
  }
  v32 = 1;
  v113 = 1;
  v112 = 1;
  v111 = 4;
  if ( v79 )
  {
    v33 = *((_QWORD *)a2 + 10);
    v34 = *((_DWORD *)a2 + 22);
    v107 = v33;
    v114 = v34;
    x = v98->x;
    y = v98->y;
    v122 = __PAIR64__(y, v98->x);
    if ( v33 != *((_QWORD *)v16 + 10) )
      goto LABEL_19;
    top = a6->top;
    v81 = top;
    if ( y < top )
    {
      v32 = -1;
      v113 = -1;
      v111 = 2;
    }
    v112 = 1;
    v68 = 1;
    if ( y == top )
    {
      if ( x < a6->left )
        v68 = -1;
      v112 = v68;
    }
    if ( (unsigned __int8)a11 != v84 && v28 != v27 && v30 != v31
      || (v68 == -1 || v32 == -1) && a6->right - a6->left > v82 )
    {
      memset(v140, 0, sizeof(v140));
      v69 = a6->right - a6->left;
      v70 = pptlSrc;
      LODWORD(v140[0]) = *(_DWORD *)(*(_QWORD *)&pptlSrc + 96LL);
      v71 = a6->bottom - v81;
      HIDWORD(v140[0]) = v69;
      LODWORD(v140[1]) = v71;
      v140[2] = 0LL;
      LODWORD(v140[3]) = 1;
      SURFMEM::bCreateDIB((SURFMEM *)&v95, (struct _DEVBITMAPINFO *)v140, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v95 )
        goto LABEL_96;
      *(_QWORD *)&prclDest.left = 0LL;
      pptlSrc = *v98;
      prclDest.right = HIDWORD(v140[0]);
      prclDest.bottom = v140[1];
      if ( !EngCopyBits(
              (SURFOBJ *)(v95 + 24),
              (SURFOBJ *)((*(_QWORD *)&v70 + 24LL) & -(__int64)(v70 != 0LL)),
              0LL,
              xloIdent,
              &prclDest,
              &pptlSrc) )
        goto LABEL_96;
      v16 = v89;
      v122 = 0LL;
      v34 = *(_DWORD *)(v95 + 88);
      v107 = *(_QWORD *)(v95 + 80);
      v114 = v34;
    }
    if ( v32 == 1 )
LABEL_19:
      v118 = v34;
    else
      v118 = -v34;
  }
  else
  {
    v107 = 0LL;
  }
  v108 = *((_QWORD *)v16 + 10);
  v37 = *((_DWORD *)v16 + 22);
  v115 = v37;
  if ( v32 != 1 )
    v37 = -v37;
  v38 = a11 >> 8;
  v39 = (unsigned __int8)a11;
  v119 = v37;
  if ( (unsigned __int8)a11 == v84 || (v57 = v141) == 0LL )
  {
    v103 = 0LL;
    v40 = 0LL;
    v109 = 0LL;
  }
  else
  {
    if ( (unsigned int)bUMPDSecurityGateEx() && !v99 )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bltlnk.cxx:%d:BltLnk:pptlMask == NULL\n", 619);
      goto LABEL_96;
    }
    v58 = *((_DWORD *)v57 + 14);
    v59 = v99->x;
    v40 = (void *)*((_QWORD *)v57 + 10);
    v60 = *((_DWORD *)v57 + 15);
    v61 = v99->y;
    v109 = v40;
    v103 = v57;
    v128 = v58;
    v129 = v60;
    v130 = v59;
    v131 = v61;
    if ( v59 >= (int)v58 )
    {
      v130 = v59 % v58;
    }
    else if ( v59 < 0 )
    {
      v130 = v58 - (-1 - v59) % v58 - 1;
    }
    if ( v61 >= v60 )
    {
      v131 = v61 % v60;
    }
    else if ( v61 < 0 )
    {
      v131 = v60 - ~v61 % v60 - 1;
    }
    v62 = *((_DWORD *)v57 + 22);
    v16 = v89;
    v38 = a11 >> 8;
    v39 = (unsigned __int8)a11;
    v117 = v62;
    if ( v32 != 1 )
      v62 = -v62;
    v121 = v62;
  }
  if ( !v85 )
  {
    v110 = 0LL;
LABEL_26:
    v41 = v90;
    goto LABEL_27;
  }
  if ( !v142 )
    goto LABEL_96;
  iSolidColor = v142->iSolidColor;
  if ( v142->iSolidColor != -1 )
  {
    v63 = *((_DWORD *)v16 + 24);
    v110 = 0LL;
    v64 = v63 - 1;
    if ( !v64 )
    {
      if ( iSolidColor )
        iSolidColor = -1;
      goto LABEL_95;
    }
    v65 = v64 - 1;
    if ( v65 )
    {
      v66 = v65 - 1;
      if ( v66 )
      {
        if ( v66 != 1 )
        {
LABEL_95:
          v123 = iSolidColor;
          goto LABEL_26;
        }
LABEL_101:
        iSolidColor |= iSolidColor << 16;
        goto LABEL_95;
      }
    }
    else
    {
      iSolidColor |= 16 * iSolidColor;
    }
    iSolidColor |= iSolidColor << 8;
    goto LABEL_101;
  }
  if ( !v15 )
    goto LABEL_96;
  pvRbrush = v15[1].pvRbrush;
  v123 = -1;
  if ( !pvRbrush )
    goto LABEL_26;
  v41 = v90;
  v56 = *(&v15[1].iSolidColor + 1);
  v110 = pvRbrush;
  v124 = *(&v15->flColorType + 1);
  v125 = v15[1].iSolidColor;
  v126 = v90->x;
  v127 = v90->y;
  v116 = v56;
  if ( v32 != 1 )
    v56 = -v56;
  v120 = v56;
LABEL_27:
  if ( v39 != v38 && !v40 )
  {
    if ( !v15 || !v15[2].pvRbrush )
      goto LABEL_96;
    v72 = *(&v15[1].flColorType + 1);
    v73 = a6->left - v41->x;
    v74 = a6->top - v41->y;
    v75 = v15[2].iSolidColor;
    flColorType = v15[2].flColorType;
    v109 = v15[2].pvRbrush;
    v128 = v72;
    v129 = v75;
    v117 = flColorType;
    v130 = v73;
    v131 = v74;
    if ( v73 < (int)v72 )
    {
      if ( v73 < 0 )
        v130 = v72 - ~v73 % v72 - 1;
    }
    else
    {
      v130 = v73 % v72;
    }
    if ( v74 < v75 )
    {
      if ( v74 < 0 )
        v131 = v75 - ~v74 % v75 - 1;
    }
    else
    {
      v131 = v74 % v75;
    }
    if ( v32 != 1 )
      flColorType = -flColorType;
    v121 = flColorType;
  }
  v42 = v94;
  if ( v94 && *((_BYTE *)v94 + 20) )
  {
    if ( *((_BYTE *)v94 + 20) == 1 )
    {
      v43 = *(struct _RECTL *)((char *)v94 + 4);
      goto LABEL_31;
    }
    if ( *((_BYTE *)v94 + 20) == 3 )
    {
      v80 = 1;
      v44 = 1;
      XCLIPOBJ::cEnumStart(v94, 0, 0, v111, 0x14u);
      v42 = v94;
      goto LABEL_32;
    }
LABEL_96:
    v25 = 0;
    goto LABEL_54;
  }
  v43 = *a6;
LABEL_31:
  v44 = 0;
  v80 = 0;
  v145 = 1;
  v146[0] = v43;
LABEL_32:
  if ( v44 )
    goto LABEL_99;
  while ( 1 )
  {
    v45 = 0;
    v86 = 0;
    if ( v145 )
    {
      do
      {
        v46 = (struct _RECTL *)&v146[v45];
        left = v11->left;
        if ( v46->left < v11->left )
          v46->left = left;
        else
          left = v146[v45];
        right = v11->right;
        if ( v46->right > right )
          v46->right = right;
        else
          right = v46->right;
        v49 = v11->top;
        if ( v46->top < v49 )
          v46->top = v49;
        else
          v49 = v46->top;
        bottom = v11->bottom;
        if ( v46->bottom > bottom )
          v46->bottom = bottom;
        else
          bottom = v46->bottom;
        if ( v49 < bottom && right - left > 0 )
        {
          do
          {
            v51 = right;
            if ( right - left > v82 )
            {
              v51 = left + v82;
              v46->right = left + v82;
            }
            if ( (_BYTE)a11 != 0xAA )
            {
              v138 = a11;
              v132 = a11 & 0xC3 | (unsigned __int8)((4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC);
              v133 = v77;
              v134 = v91;
              v135 = (v77 & 0xF) != v77 >> 4;
              v136 = v92;
              v137 = (unsigned __int8)a11 != a11 >> 8;
              v139 = 0;
              BltLnkRect((struct _BLTLNKINFO *)&v100, v46);
            }
            if ( (unsigned __int8)a11 != v84 && BYTE1(a11) != 0xAA )
            {
              v132 = BYTE1(a11) & 0xC3 | (unsigned __int8)((4 * (BYTE1(a11) & 0xC)) | (BYTE1(a11) >> 2) & 0xC);
              v133 = v78;
              v134 = v93;
              v135 = (v78 & 0xF) != v78 >> 4;
              v136 = (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4;
              v137 = (unsigned __int8)a11 != a11 >> 8;
              v138 = BYTE1(a11);
              v139 = -1;
              BltLnkRect((struct _BLTLNKINFO *)&v100, v46);
            }
            v46->left = v51;
            v46->right = right;
            left = v51;
          }
          while ( right - v51 > 0 );
          v11 = v143;
          v25 = 1;
          v45 = v86;
        }
        v86 = ++v45;
      }
      while ( v45 < v145 );
      v44 = v80;
    }
    v42 = v94;
    if ( !v44 )
      break;
LABEL_99:
    v44 = XCLIPOBJ::bEnum(v42, 0x144u, (char *)&v145, 0LL);
    v80 = v44;
  }
LABEL_54:
  SURFMEM::~SURFMEM((SURFMEM *)&v95);
  return v25;
}
