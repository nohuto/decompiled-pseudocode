/*
 * XREFs of ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00ADDE0
 * Callers:
 *     <none>
 * Callees:
 *     EngCopyBits @ 0x1C008FEE0 (EngCopyBits.c)
 *     EngStretchBlt @ 0x1C00A2F70 (EngStretchBlt.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00A7A10 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     EngHTBlt @ 0x1C00CD750 (EngHTBlt.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00CF084 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C00CF134 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C00CF504 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ??1HTSEMOBJ@@QEAA@XZ @ 0x1C0197108 (--1HTSEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall EngRealizeBrush(
        struct _BRUSHOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _XLATEOBJ *a5,
        unsigned int a6)
{
  int v8; // r15d
  __int64 v9; // rdi
  unsigned int v10; // r12d
  unsigned __int16 *v11; // rbx
  __int64 v12; // rax
  LONG v13; // esi
  unsigned int v14; // ecx
  int v15; // eax
  unsigned __int64 v16; // r13
  unsigned int v17; // r13d
  unsigned __int64 v18; // rcx
  unsigned int v19; // ecx
  LONG v20; // ebx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned int v24; // r12d
  __int64 v25; // r14
  bool v26; // zf
  unsigned int v27; // ecx
  LONG v28; // eax
  LONG v29; // r12d
  struct _BRUSHOBJ *v31; // r13
  ULONG iSolidColor; // r12d
  int v33; // ecx
  __int64 v34; // r12
  __int64 v35; // rcx
  char v36; // dl
  ULONG v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // rax
  XLATEOBJ *v40; // r8
  int v41; // ecx
  XLATEOBJ *pxlo; // r14
  SURFOBJ *v43; // r13
  SURFOBJ *v44; // rcx
  LONG right; // ecx
  LONG v46; // eax
  __int64 v47; // r12
  XLATEOBJ *v48; // r13
  SURFOBJ *v49; // rcx
  LONG v50; // ecx
  LONG v51; // eax
  __int64 v52; // r13
  LONG v53; // edi
  __int64 v54; // rcx
  void *v55; // r8
  SURFOBJ *v56; // rcx
  LONG v57; // ecx
  LONG v58; // eax
  int v59; // [rsp+60h] [rbp-A0h] BYREF
  int v60; // [rsp+64h] [rbp-9Ch]
  int v61; // [rsp+68h] [rbp-98h]
  unsigned int v62; // [rsp+6Ch] [rbp-94h]
  __int64 v63; // [rsp+70h] [rbp-90h]
  XLATEOBJ *v64; // [rsp+78h] [rbp-88h]
  XLATEOBJ *v65; // [rsp+80h] [rbp-80h] BYREF
  POINTL pptlSrc; // [rsp+88h] [rbp-78h] BYREF
  __int64 v67; // [rsp+90h] [rbp-70h] BYREF
  char v68; // [rsp+98h] [rbp-68h]
  int v69; // [rsp+9Ch] [rbp-64h]
  unsigned int v70; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v71; // [rsp+A4h] [rbp-5Ch]
  __int64 v72; // [rsp+A8h] [rbp-58h] BYREF
  POINTL pptlHTOrg; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v74; // [rsp+B8h] [rbp-48h] BYREF
  char v75; // [rsp+C0h] [rbp-40h]
  int v76; // [rsp+C4h] [rbp-3Ch]
  _QWORD v77[4]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v78; // [rsp+E8h] [rbp-18h]
  struct _BRUSHOBJ *v79; // [rsp+F0h] [rbp-10h]
  __int64 v80; // [rsp+F8h] [rbp-8h]
  __int64 v81; // [rsp+100h] [rbp+0h]
  unsigned __int64 v82; // [rsp+108h] [rbp+8h]
  __int64 v83; // [rsp+110h] [rbp+10h] BYREF
  int v84; // [rsp+118h] [rbp+18h]
  __int64 v85; // [rsp+120h] [rbp+20h]
  unsigned __int64 v86; // [rsp+128h] [rbp+28h]
  RECTL prclDest; // [rsp+130h] [rbp+30h] BYREF
  RECTL prclSrc; // [rsp+140h] [rbp+40h] BYREF

  v79 = a1;
  v64 = a5;
  v85 = SURFOBJ_TO_SURFACE(a2);
  v63 = SURFOBJ_TO_SURFACE(a3);
  v8 = 32;
  v81 = SURFOBJ_TO_SURFACE(a4);
  memset(v77, 0, sizeof(v77));
  v9 = *(_QWORD *)(v63 + 56);
  v10 = *(_DWORD *)(v85 + 96);
  v11 = 0LL;
  v12 = *(_QWORD *)(v85 + 48);
  v60 = 0;
  v72 = v12;
  v62 = v10;
  v78 = v9;
  v59 = 1;
  GreAcquireSemaphore(ghsemHT);
  if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v72) || (v13 = v9, (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v72, 0LL)) )
  {
    v11 = (unsigned __int16 *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v72);
    v13 = v9;
  }
  if ( v10 == 1 )
  {
    v14 = 1;
    if ( ((v13 - 8) & 0xFFFFFFE7) != 0 || v13 == 24 )
    {
      v13 = (v13 + 63) & 0xFFFFFFE0;
    }
    else
    {
      v13 = 32;
      if ( !v11 )
        goto LABEL_28;
      v15 = v11[4];
      switch ( v15 )
      {
        case 10:
          v13 = 160;
          break;
        case 12:
          v13 = 96;
          break;
        case 14:
          v13 = 224;
          break;
        default:
          goto LABEL_28;
      }
      v60 = 1;
    }
  }
  else if ( v10 == 2 )
  {
    v14 = 4;
    if ( v13 == 8 )
    {
      v13 = 8;
      goto LABEL_29;
    }
    v13 = (v13 + 15) & 0xFFFFFFF8;
  }
  else
  {
    switch ( v10 )
    {
      case 3u:
        v14 = 8;
        break;
      case 4u:
        v14 = 16;
        break;
      case 5u:
        v14 = 24;
        break;
      default:
        v14 = 32;
        goto LABEL_29;
    }
    v13 = (v13 + 7) & 0xFFFFFFFC;
  }
LABEL_28:
  if ( v13 < (int)v9 )
    goto LABEL_54;
LABEL_29:
  v16 = v14 * (unsigned __int64)(unsigned int)v13;
  if ( v16 > 0xFFFFFFFF )
    goto LABEL_54;
  v17 = (unsigned int)v16 >> 3;
  v18 = v17 * (unsigned __int64)HIDWORD(v78);
  v86 = v18;
  if ( v18 > 0xFFFFFFFF )
    goto LABEL_54;
  v19 = v18 + 80;
  if ( v19 < 0x50 )
    goto LABEL_54;
  if ( v81 )
  {
    v82 = *(_QWORD *)(v81 + 56);
    v20 = v82;
    v21 = HIDWORD(v82);
    v22 = HIDWORD(v82);
    if ( (_DWORD)v82 == 32
      || (LODWORD(v22) = HIDWORD(v82), (_DWORD)v82 == 16)
      || (LODWORD(v22) = HIDWORD(v82), (_DWORD)v82 == 8) )
    {
      LODWORD(v21) = v22;
    }
    else
    {
      v8 = (v82 + 63) & 0xFFFFFFE0;
    }
    if ( v8 < (int)v82 )
      goto LABEL_54;
    v23 = (unsigned int)(v8 >> 3) * (unsigned __int64)(unsigned int)v21;
    v61 = v8 >> 3;
    if ( v23 > 0xFFFFFFFF || (unsigned int)v23 + v19 < v19 )
      goto LABEL_54;
    v19 += v23;
  }
  else
  {
    v8 = v61;
    v20 = v82;
  }
  v24 = v19 + 76;
  if ( v19 >= 0xFFFFFFB4 )
  {
    HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v59);
    return 0LL;
  }
  if ( !gpCachedEngbrush || (v25 = _InterlockedExchange64((volatile __int64 *)gpCachedEngbrush, 0LL), (v80 = v25) == 0) )
  {
LABEL_49:
    v80 = PALLOCMEM2(v24);
    v25 = v80;
    if ( v80 )
      goto LABEL_50;
LABEL_54:
    HTSEMOBJ::vRelease((HTSEMOBJ *)&v59);
    return 0LL;
  }
  if ( v24 <= v19 || *(_DWORD *)(v25 + 4) < v24 )
  {
    Win32FreePool(v25);
    goto LABEL_49;
  }
LABEL_50:
  v26 = v60 == 0;
  v27 = v62;
  v79[1].pvRbrush = (PVOID)v25;
  v28 = v9;
  *(_DWORD *)(v25 + 4) = v24;
  if ( !v26 )
    v28 = v13;
  v29 = HIDWORD(v78);
  *(_DWORD *)(v25 + 20) = v28;
  *(_QWORD *)(v25 + 32) = v25 + 76;
  *(_DWORD *)(v25 + 72) = v27;
  *(_DWORD *)(v25 + 28) = v17;
  *(_DWORD *)(v25 + 16) = v13;
  *(_DWORD *)(v25 + 24) = v29;
  v77[0] = __PAIR64__(v13, v27);
  v77[2] = 0LL;
  v67 = 0LL;
  v68 = 0;
  v69 = 0;
  LODWORD(v77[1]) = v29;
  LODWORD(v77[3]) = 1;
  SURFMEM::bCreateDIB((SURFMEM *)&v67, (struct _DEVBITMAPINFO *)v77, *(void **)(v25 + 32), 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( !v67 )
    goto LABEL_53;
  v31 = v79;
  pptlSrc = 0LL;
  *(_QWORD *)&prclDest.left = 0LL;
  prclDest.bottom = v29;
  iSolidColor = v79[2].iSolidColor;
  LODWORD(v65) = *(&v79[2].iSolidColor + 1);
  prclDest.right = v9;
  HTSEMOBJ::vRelease((HTSEMOBJ *)&v59);
  if ( v62 == 1 )
  {
    if ( a6 < 0xC )
      goto LABEL_94;
    v33 = (int)v65;
    if ( iSolidColor != (_DWORD)v65 )
      goto LABEL_65;
  }
  else
  {
    v33 = (int)v65;
  }
  if ( v62 == 2 && (v31[3].iSolidColor & 5) != 0 && (iSolidColor != v33 || (v31[5].iSolidColor & 0x20000) == 0) )
  {
LABEL_65:
    v34 = 0LL;
    v84 = 0;
    v83 = 0LL;
    v35 = *(_QWORD *)(v85 + 48);
    pptlHTOrg = 0LL;
    prclSrc = prclDest;
    *(_QWORD *)(v67 + 48) = v35;
    v65 = 0LL;
    if ( a6 >= 6 )
    {
      v36 = 0;
      if ( (v31[5].iSolidColor & 0x20000) == 0 )
        goto LABEL_76;
    }
    else
    {
      v36 = 1;
    }
    v37 = v31[3].iSolidColor;
    if ( (v37 & 4) != 0 || (v37 & 1) != 0 )
    {
      v38 = *(&v31[2].iSolidColor + 1);
      if ( v36 )
      {
        v71 = v31[1].iSolidColor;
        v70 = v38;
      }
      else
      {
        v70 = v31[2].iSolidColor;
        v71 = v38;
      }
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v83, 1u, 2u, &v70, 0, 0, 0, 0x400u, 1) )
      {
        v26 = (unsigned int)EXLATEOBJ::bInitXlateObj(
                              (__int64 *)&v65,
                              *(_QWORD *)&v31[2].flColorType,
                              v31[3].iSolidColor,
                              v83,
                              *((_QWORD *)v31[3].pvRbrush + 16),
                              *(_QWORD *)&v31[4].iSolidColor,
                              *(_QWORD *)&v31[4].iSolidColor,
                              v31[2].iSolidColor,
                              *(&v31[2].iSolidColor + 1),
                              0xFFFFFF,
                              0) == 0;
        v39 = v63;
        if ( !v26 )
        {
          v40 = v65;
          v34 = *(_QWORD *)(v63 + 128);
          v64 = v65;
          *(_QWORD *)(v63 + 128) = 0LL;
          goto LABEL_78;
        }
LABEL_77:
        v40 = v64;
LABEL_78:
        if ( v62 == 1 && v60 )
        {
          prclDest.right = v13;
          v41 = 0;
          if ( v67 )
            v41 = v67 + 24;
          EngHTBlt(
            v41,
            v39 + 24,
            0,
            0,
            (__int64)v40,
            0LL,
            (__int64)&pptlHTOrg,
            (__int64)&prclDest,
            (__int64)&prclSrc,
            0LL,
            64,
            0LL);
        }
        else if ( prclDest.left != v13 )
        {
          pxlo = v64;
          v43 = (SURFOBJ *)(v39 + 24);
          do
          {
            v44 = 0LL;
            if ( v67 )
              v44 = (SURFOBJ *)(v67 + 24);
            EngStretchBlt(v44, v43, 0LL, 0LL, pxlo, 0LL, &pptlHTOrg, &prclDest, &prclSrc, 0LL, 4u);
            right = prclDest.right;
            prclDest.left = prclDest.right;
            v46 = v9 + prclDest.right;
            if ( (int)v9 + prclDest.right > v13 )
              v46 = v13;
            prclDest.right = v46;
          }
          while ( right != v13 );
          v25 = v80;
        }
        if ( v34 )
          *(_QWORD *)(v63 + 128) = v34;
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v65);
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v83);
        goto LABEL_102;
      }
    }
LABEL_76:
    v39 = v63;
    goto LABEL_77;
  }
LABEL_94:
  if ( prclDest.left != v13 )
  {
    v47 = v63;
    v48 = v64;
    do
    {
      if ( v67 )
        v49 = (SURFOBJ *)(v67 + 24);
      else
        v49 = 0LL;
      EngCopyBits(v49, (SURFOBJ *)(v47 + 24), 0LL, v48, &prclDest, &pptlSrc);
      v50 = prclDest.right;
      prclDest.left = prclDest.right;
      v51 = v9 + prclDest.right;
      if ( (int)v9 + prclDest.right > v13 )
        v51 = v13;
      prclDest.right = v51;
    }
    while ( v50 != v13 );
  }
LABEL_102:
  GreAcquireSemaphore(ghsemHT);
  v52 = v81;
  if ( v81 )
  {
    v53 = HIDWORD(v82);
    v54 = (unsigned int)v86;
    *(_DWORD *)(v25 + 64) = v61;
    *(_DWORD *)(v25 + 40) = v8;
    *(_QWORD *)(v25 + 56) = v25 + v54 + 76;
    *(_DWORD *)(v25 + 44) = v20;
    *(_DWORD *)(v25 + 48) = v53;
    LODWORD(v77[0]) = 1;
    HIDWORD(v77[0]) = v8;
    LODWORD(v77[1]) = v53;
    v77[2] = 0LL;
    LODWORD(v77[3]) = 1;
    v55 = *(void **)(v25 + 56);
    v74 = 0LL;
    v75 = 0;
    v76 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v74, (struct _DEVBITMAPINFO *)v77, v55, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v74 )
    {
      SURFMEM::~SURFMEM((SURFMEM *)&v74);
LABEL_53:
      SURFMEM::~SURFMEM((SURFMEM *)&v67);
      goto LABEL_54;
    }
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    prclDest.right = v20;
    prclDest.bottom = v53;
    HTSEMOBJ::vRelease((HTSEMOBJ *)&v59);
    if ( prclDest.left != v8 )
    {
      do
      {
        v56 = 0LL;
        if ( v74 )
          v56 = (SURFOBJ *)(v74 + 24);
        EngCopyBits(v56, (SURFOBJ *)(v52 + 24), 0LL, 0LL, &prclDest, &pptlSrc);
        v57 = prclDest.right;
        prclDest.left = prclDest.right;
        v58 = v20 + prclDest.right;
        if ( v20 + prclDest.right > v8 )
          v58 = v8;
        prclDest.right = v58;
      }
      while ( v57 != v8 );
    }
    GreAcquireSemaphore(ghsemHT);
    SURFMEM::~SURFMEM((SURFMEM *)&v74);
  }
  else
  {
    *(_QWORD *)(v25 + 56) = 0LL;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v67);
  HTSEMOBJ::vRelease((HTSEMOBJ *)&v59);
  return 1LL;
}
