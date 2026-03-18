/*
 * XREFs of ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00F31F8
 * Callers:
 *     EngBitBlt @ 0x1C0054D60 (EngBitBlt.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C0056510 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 * Callees:
 *     EngCopyBits @ 0x1C00356D0 (EngCopyBits.c)
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1C00F3A00 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00F468C (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00F4F58 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00F5428 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F5BF8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  struct _RECTL *v12; // r12
  XLATEOBJ *v14; // rbx
  struct SURFACE *v15; // r9
  struct _BRUSHOBJ *v16; // rdi
  struct _RECTL v17; // xmm0
  struct SURFACE *v18; // r10
  unsigned __int8 v19; // r14
  unsigned int v20; // ebx
  BOOL v21; // r11d
  char v22; // r8
  char v23; // r13
  bool v24; // zf
  char v25; // r14
  char v26; // r15
  int v27; // esi
  int v28; // edx
  LONG y; // ecx
  int v30; // eax
  unsigned int v31; // r8d
  int v32; // r10d
  __int64 v33; // r11
  struct _POINTL *v34; // rdx
  XCLIPOBJ *v35; // r10
  struct _RECTL v36; // xmm0
  LONG v37; // r14d
  unsigned int v38; // r13d
  LONG left; // eax
  struct _RECTL *v40; // rdi
  LONG v41; // ecx
  LONG right; // esi
  LONG v43; // r8d
  LONG v44; // eax
  LONG bottom; // eax
  LONG v46; // edx
  LONG v47; // r15d
  struct _BRUSHOBJ *EngRbrush; // rax
  ULONG iSolidColor; // ecx
  PVOID pvRbrush; // rax
  int v52; // ecx
  struct SURFACE *v53; // r14
  unsigned int v54; // ecx
  int x; // r10d
  int v56; // r8d
  int v57; // r9d
  int v58; // eax
  int v59; // edx
  int v60; // edx
  int v61; // edx
  int v62; // edx
  LONG top; // r11d
  int v64; // eax
  int v65; // ecx
  LONG v66; // eax
  unsigned int v67; // r10d
  int v68; // r8d
  int v69; // ecx
  signed int v70; // r9d
  int flColorType; // r11d
  unsigned __int8 v72; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v73; // [rsp+61h] [rbp-9Fh]
  int v74; // [rsp+64h] [rbp-9Ch]
  char v75; // [rsp+68h] [rbp-98h]
  unsigned int v76; // [rsp+70h] [rbp-90h]
  POINTL pptlSrc; // [rsp+78h] [rbp-88h] BYREF
  int v78; // [rsp+80h] [rbp-80h]
  BOOL v79; // [rsp+84h] [rbp-7Ch]
  BOOL v80; // [rsp+88h] [rbp-78h]
  BOOL v81; // [rsp+8Ch] [rbp-74h]
  BOOL v82; // [rsp+90h] [rbp-70h]
  struct SURFACE *v83; // [rsp+98h] [rbp-68h]
  struct _POINTL *v84; // [rsp+A0h] [rbp-60h]
  BOOL v85; // [rsp+A8h] [rbp-58h]
  BOOL v86; // [rsp+ACh] [rbp-54h]
  BOOL v87; // [rsp+B0h] [rbp-50h]
  struct SURFACE *v88; // [rsp+B8h] [rbp-48h]
  XCLIPOBJ *v89; // [rsp+C0h] [rbp-40h]
  __int64 v90; // [rsp+C8h] [rbp-38h] BYREF
  char v91; // [rsp+D0h] [rbp-30h]
  int v92; // [rsp+D4h] [rbp-2Ch]
  struct _POINTL *v93; // [rsp+D8h] [rbp-28h]
  struct _POINTL *v94; // [rsp+E0h] [rbp-20h]
  struct _BRUSHOBJ *v95; // [rsp+E8h] [rbp-18h]
  _OWORD v96[15]; // [rsp+F0h] [rbp-10h] BYREF
  int v97; // [rsp+1E0h] [rbp+E0h] BYREF
  LONG v98; // [rsp+1E4h] [rbp+E4h]
  LONG v99; // [rsp+1E8h] [rbp+E8h]
  int v100; // [rsp+1ECh] [rbp+ECh]
  __int64 v101; // [rsp+1F0h] [rbp+F0h]
  __int64 v102; // [rsp+1F8h] [rbp+F8h]
  struct SURFACE *v103; // [rsp+200h] [rbp+100h]
  struct _RECTL *v104; // [rsp+208h] [rbp+108h]
  RECTL prclDest; // [rsp+210h] [rbp+110h] BYREF
  _DWORD v106[84]; // [rsp+220h] [rbp+120h] BYREF

  v12 = a6;
  v14 = a5;
  v83 = a1;
  v94 = a8;
  v93 = a7;
  v84 = a10;
  v103 = a3;
  v88 = a2;
  v89 = a4;
  v104 = a6;
  v95 = a9;
  memset(v96, 0, 0xE8uLL);
  memset(v106, 0, 0x144uLL);
  v15 = v83;
  v90 = 0LL;
  v16 = 0LL;
  v91 = 0;
  v92 = 0;
  switch ( *((_DWORD *)v83 + 24) )
  {
    case 1:
      v74 = 1986;
      break;
    case 2:
      v74 = 498;
      break;
    case 3:
      v74 = 250;
      break;
    case 4:
      v74 = 126;
      break;
    case 5:
      v74 = 83;
      break;
    case 6:
      v74 = 64;
      break;
    default:
      v74 = v82;
      break;
  }
  v17 = *a6;
  if ( !a5 )
    v14 = xloIdent;
  v18 = v88;
  *((_QWORD *)&v96[2] + 1) = a4;
  *(_QWORD *)&v96[3] = v14;
  v76 = a11 >> 8;
  *(_QWORD *)&v96[1] = v83;
  *((_QWORD *)&v96[1] + 1) = v88;
  *((_QWORD *)&v96[3] + 1) = v95;
  v19 = a11 & 0xC3 | (4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC;
  v72 = a11 & 0xA5 | (8 * (a11 & 0xA)) | ((unsigned __int8)a11 >> 3) & 0xA;
  v73 = BYTE1(a11) & 0xA5 | (8 * (BYTE1(a11) & 0xA)) | (BYTE1(a11) >> 3) & 0xA;
  v81 = (unsigned __int8)a11 != a11 >> 8;
  v96[0] = v17;
  v86 = (a11 & 0xF) != (unsigned __int8)a11 >> 4;
  v82 = (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4;
  v20 = 1;
  v21 = (a11 & 0xF) != (unsigned __int8)a11 >> 4 || (BYTE1(a11) & 0xF) != BYTE1(a11) >> 4;
  v78 = v21;
  v22 = v19 >> 4;
  v23 = a11 & 3 | (4 * (a11 & 0xC)) & 0xF | ((unsigned __int8)a11 >> 2) & 0xC;
  v24 = (v19 & 0xF) == v19 >> 4;
  v75 = v22;
  v25 = BYTE1(a11) & 3 | (4 * (BYTE1(a11) & 0xC)) & 0xF | (BYTE1(a11) >> 2) & 0xC;
  v85 = !v24;
  v26 = (unsigned __int8)(BYTE1(a11) & 0xC3 | (4 * (BYTE1(a11) & 0xC)) | (BYTE1(a11) >> 2) & 0xC) >> 4;
  v87 = v25 != v26;
  pptlSrc.x = v23 != v22 || v25 != v26;
  v79 = (v72 & 0xF) != v72 >> 4;
  v80 = (v73 & 0xF) != v73 >> 4;
  if ( v21 || (unsigned __int8)a11 != v76 && !a3 )
  {
    if ( v95 && v95->iSolidColor == -1 )
    {
      EngRbrush = (struct _BRUSHOBJ *)pvGetEngRbrush(v95);
      v22 = v75;
      v16 = EngRbrush;
      v15 = v83;
      v18 = v88;
    }
    else
    {
      v16 = v95;
    }
  }
  v27 = 1;
  *(_QWORD *)((char *)&v96[6] + 4) = 0x100000001LL;
  LODWORD(v96[6]) = 4;
  if ( pptlSrc.x )
  {
    v28 = *((_DWORD *)v18 + 22);
    *(_QWORD *)&v96[4] = *((_QWORD *)v18 + 10);
    pptlSrc.x = v93->x;
    HIDWORD(v96[8]) = pptlSrc.x;
    y = v93->y;
    LODWORD(v96[9]) = y;
    HIDWORD(v96[6]) = v28;
    if ( *(_QWORD *)&v96[4] != *((_QWORD *)v15 + 10) )
      goto LABEL_19;
    top = a6->top;
    if ( y < top )
    {
      v27 = -1;
      DWORD2(v96[6]) = -1;
      LODWORD(v96[6]) = 2;
    }
    v64 = 1;
    DWORD1(v96[6]) = 1;
    if ( y == top )
    {
      if ( pptlSrc.x < a6->left )
        v64 = -1;
      DWORD1(v96[6]) = v64;
    }
    if ( (unsigned __int8)a11 != v76 && v23 != v22 && v25 != v26
      || (v64 == -1 || v27 == -1) && a6->right - a6->left > v74 )
    {
      v65 = a6->right - a6->left;
      v97 = *((_DWORD *)v18 + 24);
      v66 = a6->bottom - top;
      v98 = v65;
      v100 = 0;
      v102 = 1LL;
      v99 = v66;
      v101 = 0LL;
      SURFMEM::bCreateDIB((SURFMEM *)&v90, (struct _DEVBITMAPINFO *)&v97, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v90 )
        goto LABEL_97;
      *(_QWORD *)&prclDest.left = 0LL;
      pptlSrc = *v93;
      prclDest.right = v98;
      prclDest.bottom = v99;
      if ( !EngCopyBits(
              (SURFOBJ *)(v90 + 24),
              (SURFOBJ *)(((unsigned __int64)v88 + 24) & -(__int64)(v88 != 0LL)),
              0LL,
              xloIdent,
              &prclDest,
              &pptlSrc) )
        goto LABEL_97;
      v15 = v83;
      *(_QWORD *)((char *)&v96[8] + 12) = 0LL;
      v28 = *(_DWORD *)(v90 + 88);
      *(_QWORD *)&v96[4] = *(_QWORD *)(v90 + 80);
      HIDWORD(v96[6]) = v28;
    }
    if ( v27 == 1 )
LABEL_19:
      HIDWORD(v96[7]) = v28;
    else
      HIDWORD(v96[7]) = -v28;
  }
  else
  {
    *(_QWORD *)&v96[4] = 0LL;
  }
  *((_QWORD *)&v96[4] + 1) = *((_QWORD *)v15 + 10);
  v30 = *((_DWORD *)v15 + 22);
  LODWORD(v96[7]) = v30;
  if ( v27 != 1 )
    v30 = -v30;
  v31 = a11 >> 8;
  v32 = (unsigned __int8)a11;
  LODWORD(v96[8]) = v30;
  if ( (unsigned __int8)a11 == v76 || (v53 = v103) == 0LL )
  {
    *(_QWORD *)&v96[2] = 0LL;
    v33 = 0LL;
    *(_QWORD *)&v96[5] = 0LL;
  }
  else
  {
    if ( (unsigned int)bUMPDSecurityGateEx() && !v94 )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bltlnk.cxx:%d:BltLnk:pptlMask == NULL\n", 619);
      goto LABEL_97;
    }
    v54 = *((_DWORD *)v53 + 14);
    x = v94->x;
    v33 = *((_QWORD *)v53 + 10);
    v56 = *((_DWORD *)v53 + 15);
    v57 = v94->y;
    *(_QWORD *)&v96[5] = v33;
    *(_QWORD *)&v96[2] = v53;
    *((_QWORD *)&v96[10] + 1) = __PAIR64__(v56, v54);
    *(_QWORD *)&v96[11] = __PAIR64__(v57, x);
    if ( x >= (int)v54 )
    {
      LODWORD(v96[11]) = x % v54;
    }
    else if ( x < 0 )
    {
      LODWORD(v96[11]) = v54 - (-1 - x) % v54 - 1;
    }
    if ( v57 >= v56 )
    {
      DWORD1(v96[11]) = v57 % v56;
    }
    else if ( v57 < 0 )
    {
      DWORD1(v96[11]) = v56 - ~v57 % v56 - 1;
    }
    v58 = *((_DWORD *)v53 + 22);
    v15 = v83;
    v31 = a11 >> 8;
    v32 = (unsigned __int8)a11;
    DWORD2(v96[7]) = v58;
    if ( v27 != 1 )
      v58 = -v58;
    DWORD2(v96[8]) = v58;
  }
  if ( !v78 )
  {
    *((_QWORD *)&v96[5] + 1) = 0LL;
LABEL_26:
    v34 = v84;
    goto LABEL_27;
  }
  if ( !v95 )
    goto LABEL_97;
  iSolidColor = v95->iSolidColor;
  if ( v95->iSolidColor != -1 )
  {
    v59 = *((_DWORD *)v15 + 24);
    *((_QWORD *)&v96[5] + 1) = 0LL;
    v60 = v59 - 1;
    if ( !v60 )
    {
      if ( iSolidColor )
        iSolidColor = -1;
      goto LABEL_96;
    }
    v61 = v60 - 1;
    if ( v61 )
    {
      v62 = v61 - 1;
      if ( v62 )
      {
        if ( v62 != 1 )
        {
LABEL_96:
          DWORD1(v96[9]) = iSolidColor;
          goto LABEL_26;
        }
LABEL_102:
        iSolidColor |= iSolidColor << 16;
        goto LABEL_96;
      }
    }
    else
    {
      iSolidColor |= 16 * iSolidColor;
    }
    iSolidColor |= iSolidColor << 8;
    goto LABEL_102;
  }
  if ( !v16 )
    goto LABEL_97;
  pvRbrush = v16[1].pvRbrush;
  DWORD1(v96[9]) = -1;
  if ( !pvRbrush )
    goto LABEL_26;
  v34 = v84;
  v52 = *(&v16[1].iSolidColor + 1);
  *((_QWORD *)&v96[5] + 1) = pvRbrush;
  *((_QWORD *)&v96[9] + 1) = *(_QWORD *)(&v16->flColorType + 1);
  *(struct _POINTL *)&v96[10] = *v84;
  DWORD1(v96[7]) = v52;
  if ( v27 != 1 )
    v52 = -v52;
  DWORD1(v96[8]) = v52;
LABEL_27:
  if ( v32 != v31 && !v33 )
  {
    if ( !v16 || !v16[2].pvRbrush )
      goto LABEL_97;
    v67 = *(&v16[1].flColorType + 1);
    v68 = a6->left - v34->x;
    v69 = a6->top - v34->y;
    v70 = v16[2].iSolidColor;
    flColorType = v16[2].flColorType;
    *(_QWORD *)&v96[5] = v16[2].pvRbrush;
    *((_QWORD *)&v96[10] + 1) = __PAIR64__(v70, v67);
    DWORD2(v96[7]) = flColorType;
    *(_QWORD *)&v96[11] = __PAIR64__(v69, v68);
    if ( v68 < (int)v67 )
    {
      if ( v68 < 0 )
        LODWORD(v96[11]) = v67 - ~v68 % v67 - 1;
    }
    else
    {
      LODWORD(v96[11]) = v68 % v67;
    }
    if ( v69 < v70 )
    {
      if ( v69 < 0 )
        DWORD1(v96[11]) = v70 - ~v69 % v70 - 1;
    }
    else
    {
      DWORD1(v96[11]) = v69 % v70;
    }
    if ( v27 != 1 )
      flColorType = -flColorType;
    DWORD2(v96[8]) = flColorType;
  }
  v35 = v89;
  if ( v89 && *((_BYTE *)v89 + 20) )
  {
    if ( *((_BYTE *)v89 + 20) == 1 )
    {
      v36 = *(struct _RECTL *)((char *)v89 + 4);
      goto LABEL_30;
    }
    if ( *((_BYTE *)v89 + 20) == 3 )
    {
      pptlSrc.x = 1;
      v37 = 1;
      XCLIPOBJ::cEnumStart(v89, 0, 0, v96[6], 0x14u);
      v35 = v89;
      goto LABEL_31;
    }
LABEL_97:
    v20 = 0;
    goto LABEL_53;
  }
  v36 = *a6;
LABEL_30:
  v37 = 0;
  pptlSrc.x = 0;
  v106[0] = 1;
  *(struct _RECTL *)&v106[1] = v36;
LABEL_31:
  if ( v37 )
    goto LABEL_100;
  while ( 1 )
  {
    v38 = 0;
    v78 = 0;
    if ( v106[0] )
    {
      do
      {
        left = v12->left;
        v40 = (struct _RECTL *)&v106[4 * v38 + 1];
        v41 = v40->left;
        if ( v40->left < v12->left )
        {
          v40->left = left;
          v41 = left;
        }
        right = v12->right;
        if ( v40->right > right )
          v40->right = right;
        else
          right = v40->right;
        v43 = v40->top;
        v44 = v12->top;
        if ( v43 < v44 )
        {
          v40->top = v44;
          v43 = v44;
        }
        bottom = v40->bottom;
        v46 = v12->bottom;
        if ( bottom > v46 )
        {
          v40->bottom = v46;
          bottom = v46;
        }
        if ( v43 < bottom && right - v41 > 0 )
        {
          do
          {
            v47 = right;
            if ( right - v41 > v74 )
            {
              v47 = v41 + v74;
              v40->right = v41 + v74;
            }
            if ( (_BYTE)a11 != 0xAA )
            {
              WORD2(v96[14]) = (unsigned __int8)a11;
              HIDWORD(v96[12]) = a11 & 0xC3 | (unsigned __int8)((4 * (a11 & 0xC)) | ((unsigned __int8)a11 >> 2) & 0xC);
              LODWORD(v96[13]) = v72;
              *(_QWORD *)((char *)&v96[13] + 4) = __PAIR64__(v79, v85);
              HIDWORD(v96[13]) = v86;
              LODWORD(v96[14]) = v81;
              BltLnkRect((struct _BLTLNKINFO *)v96, v40);
            }
            if ( (unsigned __int8)a11 != v76 && BYTE1(a11) != 0xAA )
            {
              HIDWORD(v96[12]) = BYTE1(a11) & 0xC3 | (unsigned __int8)((4 * (BYTE1(a11) & 0xC)) | (BYTE1(a11) >> 2) & 0xC);
              LODWORD(v96[13]) = v73;
              *(_QWORD *)((char *)&v96[13] + 4) = __PAIR64__(v80, v87);
              HIDWORD(v96[13]) = v82;
              LODWORD(v96[14]) = v81;
              BYTE4(v96[14]) = BYTE1(a11);
              BYTE5(v96[14]) = -1;
              BltLnkRect((struct _BLTLNKINFO *)v96, v40);
            }
            v40->left = v47;
            v40->right = right;
            v41 = v47;
          }
          while ( right - v47 > 0 );
          v12 = v104;
          v20 = 1;
          v38 = v78;
        }
        v78 = ++v38;
      }
      while ( v38 < v106[0] );
      v37 = pptlSrc.x;
    }
    v35 = v89;
    if ( !v37 )
      break;
LABEL_100:
    v37 = XCLIPOBJ::bEnum(v35, 0x144u, v106, 0LL);
    pptlSrc.x = v37;
  }
LABEL_53:
  SURFMEM::~SURFMEM((SURFMEM *)&v90);
  return v20;
}
