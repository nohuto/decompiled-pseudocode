/*
 * XREFs of ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C007A4F0
 * Callers:
 *     <none>
 * Callees:
 *     EngCopyBits @ 0x1C00356D0 (EngCopyBits.c)
 *     EngHTBlt @ 0x1C0036378 (EngHTBlt.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0036D30 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C0036DF4 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C003BBA0 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     EngStretchBlt @ 0x1C005D7E0 (EngStretchBlt.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C006E810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0072E38 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall EngRealizeBrush(
        struct _BRUSHOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _XLATEOBJ *a5,
        unsigned int a6)
{
  __int64 v7; // rax
  signed int v9; // r13d
  unsigned int v10; // esi
  unsigned __int16 *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  LONG v20; // esi
  __int64 v21; // rax
  unsigned __int64 v22; // r12
  unsigned int v23; // r12d
  unsigned __int64 v24; // rcx
  unsigned int v25; // ecx
  unsigned int v26; // r15d
  __int64 v27; // r14
  bool v28; // zf
  unsigned int v29; // ecx
  LONG v30; // eax
  LONG v31; // r15d
  struct _BRUSHOBJ *v32; // r15
  ULONG iSolidColor; // r12d
  int v34; // ecx
  __int64 v35; // r15
  XLATEOBJ *v36; // r12
  SURFOBJ *v37; // rcx
  LONG v38; // ecx
  LONG v39; // eax
  __int64 v40; // rsi
  int v42; // eax
  int v43; // ecx
  unsigned __int64 v44; // rdx
  __int64 v45; // r12
  __int64 v46; // rcx
  char v47; // dl
  ULONG v48; // eax
  unsigned int v49; // ecx
  __int64 v50; // rax
  XLATEOBJ *v51; // r8
  SURFOBJ *v52; // rcx
  XLATEOBJ *v53; // r14
  SURFOBJ *v54; // r15
  SURFOBJ *v55; // rcx
  LONG right; // ecx
  LONG v57; // eax
  LONG bottom; // ebx
  __int64 v59; // rcx
  void *v60; // r8
  SURFOBJ *v61; // rcx
  LONG v62; // ecx
  LONG v63; // eax
  int v64; // [rsp+60h] [rbp-A0h] BYREF
  int v65; // [rsp+64h] [rbp-9Ch]
  int v66; // [rsp+68h] [rbp-98h]
  unsigned int v67; // [rsp+6Ch] [rbp-94h]
  __int64 v68; // [rsp+70h] [rbp-90h]
  XLATEOBJ *pxlo; // [rsp+78h] [rbp-88h]
  XLATEOBJ *v70; // [rsp+80h] [rbp-80h] BYREF
  __int64 v71; // [rsp+88h] [rbp-78h] BYREF
  char v72; // [rsp+90h] [rbp-70h]
  int v73; // [rsp+94h] [rbp-6Ch]
  unsigned int v74; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v75; // [rsp+9Ch] [rbp-64h]
  POINTL pptlSrc; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v77; // [rsp+A8h] [rbp-58h] BYREF
  RECTL pptlHTOrg; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v79; // [rsp+C0h] [rbp-40h] BYREF
  char v80; // [rsp+C8h] [rbp-38h]
  int v81; // [rsp+CCh] [rbp-34h]
  _QWORD v82[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v83; // [rsp+F0h] [rbp-10h]
  struct _BRUSHOBJ *v84; // [rsp+F8h] [rbp-8h]
  __int64 v85; // [rsp+100h] [rbp+0h]
  __int64 v86; // [rsp+108h] [rbp+8h]
  __int64 v87; // [rsp+110h] [rbp+10h] BYREF
  int v88; // [rsp+118h] [rbp+18h]
  __int64 v89; // [rsp+120h] [rbp+20h]
  unsigned __int64 v90; // [rsp+128h] [rbp+28h]
  RECTL prclDest; // [rsp+130h] [rbp+30h] BYREF
  XLATEOBJ prclSrc[4]; // [rsp+140h] [rbp+40h] BYREF

  v84 = a1;
  pxlo = a5;
  v89 = SURFOBJ_TO_SURFACE(a2);
  v68 = SURFOBJ_TO_SURFACE(a3);
  v7 = SURFOBJ_TO_SURFACE(a4);
  LODWORD(a4) = 0;
  v86 = v7;
  pptlSrc = 0LL;
  *(_QWORD *)&pptlHTOrg.right = 0LL;
  *(_QWORD *)&prclDest.left = 0LL;
  v9 = 32;
  *(_QWORD *)&prclDest.right = 0LL;
  memset(v82, 0, sizeof(v82));
  v10 = *(_DWORD *)(v89 + 96);
  v11 = 0LL;
  v12 = *(_QWORD *)(v89 + 48);
  v13 = *(_QWORD *)(v68 + 56);
  v65 = 0;
  v77 = v12;
  v67 = v10;
  v83 = v13;
  v64 = 1;
  GreAcquireSemaphore(ghsemHT);
  if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v77, v14, v15, v16)
    || (v42 = PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v77, 0LL), v17 = 0LL, v42) )
  {
    v11 = (unsigned __int16 *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v77, v17, v18, v19);
  }
  if ( v10 == 1 )
  {
    if ( (((_DWORD)v13 - 8) & 0xFFFFFFE7) != 0 || (_DWORD)v13 == 24 )
    {
      v21 = 1LL;
      v20 = (v13 + 63) & 0xFFFFFFE0;
    }
    else
    {
      v20 = 32;
      v21 = 1LL;
      if ( !v11 )
        goto LABEL_57;
      v43 = v11[4];
      switch ( v43 )
      {
        case 10:
          v20 = 160;
          break;
        case 12:
          v20 = 96;
          break;
        case 14:
          v20 = 224;
          break;
        default:
          goto LABEL_57;
      }
      v65 = 1;
    }
LABEL_57:
    if ( v20 < (int)v13 )
      goto LABEL_58;
    goto LABEL_9;
  }
  if ( v10 != 2 )
  {
    switch ( v10 )
    {
      case 3u:
        v21 = 8LL;
        v20 = (v13 + 7) & 0xFFFFFFFC;
        break;
      case 4u:
        v21 = 16LL;
        v20 = (v13 + 7) & 0xFFFFFFFC;
        break;
      case 5u:
        v21 = 24LL;
        v20 = (v13 + 7) & 0xFFFFFFFC;
        break;
      default:
        v20 = v13;
        v21 = 32LL;
        goto LABEL_9;
    }
    goto LABEL_57;
  }
  if ( (_DWORD)v13 != 8 )
  {
    v21 = 4LL;
    v20 = (v13 + 15) & 0xFFFFFFF8;
    goto LABEL_57;
  }
  v20 = 8;
  v21 = 4LL;
LABEL_9:
  v22 = v21 * (unsigned int)v20;
  if ( v22 <= 0xFFFFFFFF )
  {
    v23 = (unsigned int)v22 >> 3;
    v24 = v23 * (unsigned __int64)HIDWORD(v83);
    v90 = v24;
    if ( v24 <= 0xFFFFFFFF )
    {
      v25 = v24 + 80;
      if ( v25 >= 0x50 )
      {
        if ( v86 )
        {
          a4 = *(struct _SURFOBJ **)(v86 + 56);
          *(_QWORD *)&pptlHTOrg.right = a4;
          if ( (((_DWORD)a4 - 8) & 0xFFFFFFE7) != 0 || (_DWORD)a4 == 24 )
            v9 = ((_DWORD)a4 + 63) & 0xFFFFFFE0;
          if ( v9 < (int)a4 )
            goto LABEL_58;
          v44 = (unsigned int)(v9 >> 3) * (unsigned __int64)(unsigned int)pptlHTOrg.bottom;
          v66 = v9 >> 3;
          if ( v44 > 0xFFFFFFFF || (unsigned int)v44 + v25 < v25 )
            goto LABEL_58;
          v25 += v44;
        }
        else
        {
          v9 = v66;
        }
        v26 = v25 + 76;
        if ( v25 < 0xFFFFFFB4 )
        {
          if ( gpCachedEngbrush )
          {
            v27 = _InterlockedExchange64((volatile __int64 *)gpCachedEngbrush, 0LL);
            v85 = v27;
            if ( v27 )
            {
              if ( v26 > v25 && *(_DWORD *)(v27 + 4) >= v26 )
                goto LABEL_19;
              Win32FreePool(v27);
            }
          }
          v85 = (__int64)PALLOCMEM2(v26, 1919051079LL, 1);
          v27 = v85;
          if ( !v85 )
            goto LABEL_58;
LABEL_19:
          v28 = v65 == 0;
          v29 = v67;
          v84[1].pvRbrush = (PVOID)v27;
          v30 = v13;
          *(_DWORD *)(v27 + 4) = v26;
          if ( !v28 )
            v30 = v20;
          v31 = HIDWORD(v83);
          *(_DWORD *)(v27 + 20) = v30;
          *(_QWORD *)(v27 + 32) = v27 + 76;
          *(_DWORD *)(v27 + 72) = v29;
          *(_DWORD *)(v27 + 28) = v23;
          *(_DWORD *)(v27 + 16) = v20;
          *(_DWORD *)(v27 + 24) = v31;
          v82[0] = __PAIR64__(v20, v29);
          v82[2] = 0LL;
          v71 = 0LL;
          v72 = 0;
          v73 = 0;
          LODWORD(v82[1]) = v31;
          LODWORD(v82[3]) = 1;
          SURFMEM::bCreateDIB(
            (SURFMEM *)&v71,
            (struct _DEVBITMAPINFO *)v82,
            *(void **)(v27 + 32),
            0LL,
            0,
            0LL,
            0LL,
            0,
            1,
            0,
            0);
          if ( !v71 )
          {
LABEL_67:
            SURFMEM::~SURFMEM((SURFMEM *)&v71);
            goto LABEL_58;
          }
          prclDest.bottom = v31;
          v32 = v84;
          prclDest.right = v13;
          iSolidColor = v84[2].iSolidColor;
          LODWORD(v70) = *(&v84[2].iSolidColor + 1);
          HTSEMOBJ::vRelease((HTSEMOBJ *)&v64);
          if ( v67 == 1 )
          {
            if ( a6 < 0xC )
              goto LABEL_25;
            v34 = (int)v70;
            if ( iSolidColor != (_DWORD)v70 )
              goto LABEL_74;
          }
          else
          {
            v34 = (int)v70;
          }
          if ( v67 == 2 && (v32[3].iSolidColor & 5) != 0 && (iSolidColor != v34 || (v32[5].iSolidColor & 0x20000) == 0) )
          {
LABEL_74:
            v45 = 0LL;
            v88 = 0;
            v87 = 0LL;
            v46 = *(_QWORD *)(v89 + 48);
            *(_QWORD *)&pptlHTOrg.left = 0LL;
            *(RECTL *)&prclSrc[0].iUniq = prclDest;
            *(_QWORD *)(v71 + 48) = v46;
            v70 = 0LL;
            if ( a6 >= 6 )
            {
              v47 = 0;
              if ( (v32[5].iSolidColor & 0x20000) == 0 )
                goto LABEL_85;
            }
            else
            {
              v47 = 1;
            }
            v48 = v32[3].iSolidColor;
            if ( (v48 & 4) != 0 || (v48 & 1) != 0 )
            {
              v49 = *(&v32[2].iSolidColor + 1);
              if ( v47 )
              {
                v75 = v32[1].iSolidColor;
                v74 = v49;
              }
              else
              {
                v74 = v32[2].iSolidColor;
                v75 = v49;
              }
              if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v87, 1u, 2u, &v74, 0, 0, 0, 0x400u, 1) )
              {
                v28 = (unsigned int)EXLATEOBJ::bInitXlateObj(
                                      (__int64 *)&v70,
                                      *(_QWORD *)&v32[2].flColorType,
                                      v32[3].iSolidColor,
                                      v87,
                                      *((_QWORD *)v32[3].pvRbrush + 16),
                                      *(_QWORD *)&v32[4].iSolidColor,
                                      *(_QWORD *)&v32[4].iSolidColor,
                                      v32[2].iSolidColor,
                                      *(&v32[2].iSolidColor + 1),
                                      0xFFFFFF,
                                      0) == 0;
                v50 = v68;
                if ( !v28 )
                {
                  v51 = v70;
                  v45 = *(_QWORD *)(v68 + 128);
                  pxlo = v70;
                  *(_QWORD *)(v68 + 128) = 0LL;
                  goto LABEL_87;
                }
LABEL_86:
                v51 = pxlo;
LABEL_87:
                if ( v67 == 1 && v65 )
                {
                  prclDest.right = v20;
                  v52 = 0LL;
                  if ( v71 )
                    v52 = (SURFOBJ *)(v71 + 24);
                  EngHTBlt(
                    v52,
                    (SURFOBJ *)(v50 + 24),
                    0LL,
                    0LL,
                    (struct XLATE *)v51,
                    0LL,
                    &pptlHTOrg,
                    (XLATEOBJ *)&prclDest,
                    prclSrc,
                    0LL,
                    64,
                    0LL);
                }
                else if ( prclDest.left != v20 )
                {
                  v53 = pxlo;
                  v54 = (SURFOBJ *)(v50 + 24);
                  do
                  {
                    v55 = 0LL;
                    if ( v71 )
                      v55 = (SURFOBJ *)(v71 + 24);
                    EngStretchBlt(
                      v55,
                      v54,
                      0LL,
                      0LL,
                      v53,
                      0LL,
                      (POINTL *)&pptlHTOrg,
                      &prclDest,
                      (RECTL *)prclSrc,
                      0LL,
                      4u);
                    right = prclDest.right;
                    prclDest.left = prclDest.right;
                    v57 = v13 + prclDest.right;
                    if ( (int)v13 + prclDest.right > v20 )
                      v57 = v20;
                    prclDest.right = v57;
                  }
                  while ( right != v20 );
                  v27 = v85;
                }
                if ( v45 )
                  *(_QWORD *)(v68 + 128) = v45;
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v70);
                PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v87);
LABEL_32:
                GreAcquireSemaphore(ghsemHT);
                v40 = v86;
                if ( !v86 )
                {
                  *(_QWORD *)(v27 + 56) = 0LL;
LABEL_34:
                  SURFMEM::~SURFMEM((SURFMEM *)&v71);
                  HTSEMOBJ::vRelease((HTSEMOBJ *)&v64);
                  return 1LL;
                }
                bottom = pptlHTOrg.bottom;
                v59 = (unsigned int)v90 + 76LL;
                *(_DWORD *)(v27 + 64) = v66;
                *(_QWORD *)(v27 + 56) = v27 + v59;
                *(_DWORD *)(v27 + 40) = v9;
                *(_DWORD *)(v27 + 44) = (_DWORD)a4;
                *(_DWORD *)(v27 + 48) = bottom;
                LODWORD(v82[0]) = 1;
                HIDWORD(v82[0]) = v9;
                LODWORD(v82[1]) = bottom;
                v82[2] = 0LL;
                LODWORD(v82[3]) = 1;
                v60 = *(void **)(v27 + 56);
                v79 = 0LL;
                v80 = 0;
                v81 = 0;
                SURFMEM::bCreateDIB((SURFMEM *)&v79, (struct _DEVBITMAPINFO *)v82, v60, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
                if ( v79 )
                {
                  pptlSrc = 0LL;
                  *(_QWORD *)&prclDest.left = 0LL;
                  prclDest.right = (int)a4;
                  prclDest.bottom = bottom;
                  HTSEMOBJ::vRelease((HTSEMOBJ *)&v64);
                  if ( prclDest.left != v9 )
                  {
                    do
                    {
                      v61 = 0LL;
                      if ( v79 )
                        v61 = (SURFOBJ *)(v79 + 24);
                      EngCopyBits(v61, (SURFOBJ *)(v40 + 24), 0LL, 0LL, &prclDest, &pptlSrc);
                      v62 = prclDest.right;
                      prclDest.left = prclDest.right;
                      v63 = (_DWORD)a4 + prclDest.right;
                      if ( (int)a4 + prclDest.right > v9 )
                        v63 = v9;
                      prclDest.right = v63;
                    }
                    while ( v62 != v9 );
                  }
                  GreAcquireSemaphore(ghsemHT);
                  SURFMEM::~SURFMEM((SURFMEM *)&v79);
                  goto LABEL_34;
                }
                SURFMEM::~SURFMEM((SURFMEM *)&v79);
                goto LABEL_67;
              }
            }
LABEL_85:
            v50 = v68;
            goto LABEL_86;
          }
LABEL_25:
          if ( prclDest.left != v20 )
          {
            v35 = v68;
            v36 = pxlo;
            do
            {
              if ( v71 )
                v37 = (SURFOBJ *)(v71 + 24);
              else
                v37 = 0LL;
              EngCopyBits(v37, (SURFOBJ *)(v35 + 24), 0LL, v36, &prclDest, &pptlSrc);
              v38 = prclDest.right;
              prclDest.left = prclDest.right;
              v39 = v13 + prclDest.right;
              if ( (int)v13 + prclDest.right > v20 )
                v39 = v20;
              prclDest.right = v39;
            }
            while ( v38 != v20 );
          }
          goto LABEL_32;
        }
      }
    }
  }
LABEL_58:
  HTSEMOBJ::vRelease((HTSEMOBJ *)&v64);
  return 0LL;
}
