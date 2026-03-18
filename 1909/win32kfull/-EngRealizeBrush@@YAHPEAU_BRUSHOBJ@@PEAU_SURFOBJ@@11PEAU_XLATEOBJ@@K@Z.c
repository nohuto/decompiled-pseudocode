/*
 * XREFs of ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00C6D50
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     EngStretchBlt @ 0x1C00A6F40 (EngStretchBlt.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00B8C10 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00BF39C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngCopyBits @ 0x1C00BF3E0 (EngCopyBits.c)
 *     EngHTBlt @ 0x1C00C0A94 (EngHTBlt.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00C144C (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C00C1510 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C00C62BC (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  LONG v18; // esi
  __int64 v19; // rax
  unsigned __int64 v20; // r12
  unsigned int v21; // r12d
  unsigned __int64 v22; // rcx
  unsigned int v23; // ecx
  unsigned int v24; // r15d
  __int64 v25; // r14
  bool v26; // zf
  unsigned int v27; // ecx
  LONG v28; // eax
  LONG v29; // r15d
  struct _BRUSHOBJ *v30; // r15
  ULONG iSolidColor; // r12d
  int v32; // ecx
  __int64 v33; // r15
  XLATEOBJ *v34; // r12
  SURFOBJ *v35; // rcx
  LONG v36; // ecx
  LONG v37; // eax
  __int64 v38; // rsi
  int v40; // eax
  int v41; // ecx
  unsigned __int64 v42; // rdx
  __int64 v43; // r12
  __int64 v44; // rcx
  char v45; // dl
  ULONG v46; // eax
  unsigned int v47; // ecx
  __int64 v48; // rax
  XLATEOBJ *v49; // r8
  SURFOBJ *v50; // rcx
  XLATEOBJ *v51; // r14
  SURFOBJ *v52; // r15
  SURFOBJ *v53; // rcx
  LONG right; // ecx
  LONG v55; // eax
  LONG v56; // ebx
  __int64 v57; // rcx
  void *v58; // r8
  SURFOBJ *v59; // rcx
  LONG v60; // ecx
  LONG v61; // eax
  int v62; // [rsp+60h] [rbp-A0h] BYREF
  int v63; // [rsp+64h] [rbp-9Ch]
  int v64; // [rsp+68h] [rbp-98h]
  unsigned int v65; // [rsp+6Ch] [rbp-94h]
  __int64 v66; // [rsp+70h] [rbp-90h]
  XLATEOBJ *pxlo; // [rsp+78h] [rbp-88h]
  XLATEOBJ *v68; // [rsp+80h] [rbp-80h] BYREF
  __int64 v69; // [rsp+88h] [rbp-78h] BYREF
  char v70; // [rsp+90h] [rbp-70h]
  int v71; // [rsp+94h] [rbp-6Ch]
  unsigned int v72; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v73; // [rsp+9Ch] [rbp-64h]
  POINTL pptlSrc; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v75; // [rsp+A8h] [rbp-58h] BYREF
  POINTL pptlHTOrg; // [rsp+B0h] [rbp-50h] BYREF
  struct _SURFOBJ *v77; // [rsp+B8h] [rbp-48h]
  __int64 v78; // [rsp+C0h] [rbp-40h] BYREF
  char v79; // [rsp+C8h] [rbp-38h]
  int v80; // [rsp+CCh] [rbp-34h]
  _QWORD v81[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v82; // [rsp+F0h] [rbp-10h]
  struct _BRUSHOBJ *v83; // [rsp+F8h] [rbp-8h]
  __int64 v84; // [rsp+100h] [rbp+0h]
  __int64 v85; // [rsp+108h] [rbp+8h]
  __int64 v86; // [rsp+110h] [rbp+10h] BYREF
  int v87; // [rsp+118h] [rbp+18h]
  __int64 v88; // [rsp+120h] [rbp+20h]
  unsigned __int64 v89; // [rsp+128h] [rbp+28h]
  RECTL prclDest; // [rsp+130h] [rbp+30h] BYREF
  RECTL prclSrc; // [rsp+140h] [rbp+40h] BYREF

  v83 = a1;
  pxlo = a5;
  v88 = SURFOBJ_TO_SURFACE(a2);
  v66 = SURFOBJ_TO_SURFACE(a3);
  v7 = SURFOBJ_TO_SURFACE(a4);
  LODWORD(a4) = 0;
  v85 = v7;
  pptlSrc = 0LL;
  v77 = 0LL;
  *(_QWORD *)&prclDest.left = 0LL;
  v9 = 32;
  *(_QWORD *)&prclDest.right = 0LL;
  memset(v81, 0, sizeof(v81));
  v10 = *(_DWORD *)(v88 + 96);
  v11 = 0LL;
  v12 = *(_QWORD *)(v88 + 48);
  v13 = *(_QWORD *)(v66 + 56);
  v63 = 0;
  v75 = v12;
  v65 = v10;
  v82 = v13;
  v62 = 1;
  GreAcquireSemaphore(ghsemHT);
  if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v75, v14, v15)
    || (v40 = PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v75, 0LL), v16 = 0LL, v40) )
  {
    v11 = (unsigned __int16 *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v75, v16, v17);
  }
  if ( v10 == 1 )
  {
    if ( (((_DWORD)v13 - 8) & 0xFFFFFFE7) != 0 || (_DWORD)v13 == 24 )
    {
      v19 = 1LL;
      v18 = (v13 + 63) & 0xFFFFFFE0;
    }
    else
    {
      v18 = 32;
      v19 = 1LL;
      if ( !v11 )
        goto LABEL_57;
      v41 = v11[4];
      switch ( v41 )
      {
        case 10:
          v18 = 160;
          break;
        case 12:
          v18 = 96;
          break;
        case 14:
          v18 = 224;
          break;
        default:
          goto LABEL_57;
      }
      v63 = 1;
    }
LABEL_57:
    if ( v18 < (int)v13 )
      goto LABEL_58;
    goto LABEL_9;
  }
  if ( v10 != 2 )
  {
    switch ( v10 )
    {
      case 3u:
        v19 = 8LL;
        v18 = (v13 + 7) & 0xFFFFFFFC;
        break;
      case 4u:
        v19 = 16LL;
        v18 = (v13 + 7) & 0xFFFFFFFC;
        break;
      case 5u:
        v19 = 24LL;
        v18 = (v13 + 7) & 0xFFFFFFFC;
        break;
      default:
        v18 = v13;
        v19 = 32LL;
        goto LABEL_9;
    }
    goto LABEL_57;
  }
  if ( (_DWORD)v13 != 8 )
  {
    v19 = 4LL;
    v18 = (v13 + 15) & 0xFFFFFFF8;
    goto LABEL_57;
  }
  v18 = 8;
  v19 = 4LL;
LABEL_9:
  v20 = v19 * (unsigned int)v18;
  if ( v20 <= 0xFFFFFFFF )
  {
    v21 = (unsigned int)v20 >> 3;
    v22 = v21 * (unsigned __int64)HIDWORD(v82);
    v89 = v22;
    if ( v22 <= 0xFFFFFFFF )
    {
      v23 = v22 + 80;
      if ( v23 >= 0x50 )
      {
        if ( v85 )
        {
          a4 = *(struct _SURFOBJ **)(v85 + 56);
          v77 = a4;
          if ( (((_DWORD)a4 - 8) & 0xFFFFFFE7) != 0 || (_DWORD)a4 == 24 )
            v9 = ((_DWORD)a4 + 63) & 0xFFFFFFE0;
          if ( v9 < (int)a4 )
            goto LABEL_58;
          v42 = (unsigned int)(v9 >> 3) * (unsigned __int64)HIDWORD(v77);
          v64 = v9 >> 3;
          if ( v42 > 0xFFFFFFFF || (unsigned int)v42 + v23 < v23 )
            goto LABEL_58;
          v23 += v42;
        }
        else
        {
          v9 = v64;
        }
        v24 = v23 + 76;
        if ( v23 < 0xFFFFFFB4 )
        {
          if ( gpCachedEngbrush )
          {
            v25 = _InterlockedExchange64((volatile __int64 *)gpCachedEngbrush, 0LL);
            v84 = v25;
            if ( v25 )
            {
              if ( v24 > v23 && *(_DWORD *)(v25 + 4) >= v24 )
                goto LABEL_19;
              Win32FreePool(v25);
            }
          }
          v84 = (__int64)PALLOCMEM2(v24, 1919051079LL, 1);
          v25 = v84;
          if ( !v84 )
            goto LABEL_58;
LABEL_19:
          v26 = v63 == 0;
          v27 = v65;
          v83[1].pvRbrush = (PVOID)v25;
          v28 = v13;
          *(_DWORD *)(v25 + 4) = v24;
          if ( !v26 )
            v28 = v18;
          v29 = HIDWORD(v82);
          *(_DWORD *)(v25 + 20) = v28;
          *(_QWORD *)(v25 + 32) = v25 + 76;
          *(_DWORD *)(v25 + 72) = v27;
          *(_DWORD *)(v25 + 28) = v21;
          *(_DWORD *)(v25 + 16) = v18;
          *(_DWORD *)(v25 + 24) = v29;
          v81[0] = __PAIR64__(v18, v27);
          v81[2] = 0LL;
          v69 = 0LL;
          v70 = 0;
          v71 = 0;
          LODWORD(v81[1]) = v29;
          LODWORD(v81[3]) = 1;
          SURFMEM::bCreateDIB(
            (SURFMEM *)&v69,
            (struct _DEVBITMAPINFO *)v81,
            *(void **)(v25 + 32),
            0LL,
            0,
            0LL,
            0LL,
            0,
            1,
            0,
            0);
          if ( !v69 )
          {
LABEL_67:
            SURFMEM::~SURFMEM((SURFMEM *)&v69);
            goto LABEL_58;
          }
          prclDest.bottom = v29;
          v30 = v83;
          prclDest.right = v13;
          iSolidColor = v83[2].iSolidColor;
          LODWORD(v68) = *(&v83[2].iSolidColor + 1);
          HTSEMOBJ::vRelease((HTSEMOBJ *)&v62);
          if ( v65 == 1 )
          {
            if ( a6 < 0xC )
              goto LABEL_25;
            v32 = (int)v68;
            if ( iSolidColor != (_DWORD)v68 )
              goto LABEL_74;
          }
          else
          {
            v32 = (int)v68;
          }
          if ( v65 == 2 && (v30[3].iSolidColor & 5) != 0 && (iSolidColor != v32 || (v30[5].iSolidColor & 0x20000) == 0) )
          {
LABEL_74:
            v43 = 0LL;
            v87 = 0;
            v86 = 0LL;
            v44 = *(_QWORD *)(v88 + 48);
            pptlHTOrg = 0LL;
            prclSrc = prclDest;
            *(_QWORD *)(v69 + 48) = v44;
            v68 = 0LL;
            if ( a6 >= 6 )
            {
              v45 = 0;
              if ( (v30[5].iSolidColor & 0x20000) == 0 )
                goto LABEL_85;
            }
            else
            {
              v45 = 1;
            }
            v46 = v30[3].iSolidColor;
            if ( (v46 & 4) != 0 || (v46 & 1) != 0 )
            {
              v47 = *(&v30[2].iSolidColor + 1);
              if ( v45 )
              {
                v73 = v30[1].iSolidColor;
                v72 = v47;
              }
              else
              {
                v72 = v30[2].iSolidColor;
                v73 = v47;
              }
              if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v86, 1u, 2u, &v72, 0, 0, 0, 0x400u, 1) )
              {
                v26 = (unsigned int)EXLATEOBJ::bInitXlateObj(
                                      (__int64 *)&v68,
                                      *(_QWORD *)&v30[2].flColorType,
                                      v30[3].iSolidColor,
                                      v86,
                                      *((_QWORD *)v30[3].pvRbrush + 16),
                                      *(_QWORD *)&v30[4].iSolidColor,
                                      *(_QWORD *)&v30[4].iSolidColor,
                                      v30[2].iSolidColor,
                                      *(&v30[2].iSolidColor + 1),
                                      0xFFFFFF,
                                      0) == 0;
                v48 = v66;
                if ( !v26 )
                {
                  v49 = v68;
                  v43 = *(_QWORD *)(v66 + 128);
                  pxlo = v68;
                  *(_QWORD *)(v66 + 128) = 0LL;
                  goto LABEL_87;
                }
LABEL_86:
                v49 = pxlo;
LABEL_87:
                if ( v65 == 1 && v63 )
                {
                  prclDest.right = v18;
                  v50 = 0LL;
                  if ( v69 )
                    v50 = (SURFOBJ *)(v69 + 24);
                  EngHTBlt(
                    v50,
                    (SURFOBJ *)(v48 + 24),
                    0LL,
                    0LL,
                    (struct XLATE *)v49,
                    0LL,
                    (__int64 *)&pptlHTOrg,
                    (XLATEOBJ *)&prclDest,
                    &prclSrc.left,
                    0LL,
                    64,
                    0LL);
                }
                else if ( prclDest.left != v18 )
                {
                  v51 = pxlo;
                  v52 = (SURFOBJ *)(v48 + 24);
                  do
                  {
                    v53 = 0LL;
                    if ( v69 )
                      v53 = (SURFOBJ *)(v69 + 24);
                    EngStretchBlt(v53, v52, 0LL, 0LL, v51, 0LL, &pptlHTOrg, &prclDest, &prclSrc, 0LL, 4u);
                    right = prclDest.right;
                    prclDest.left = prclDest.right;
                    v55 = v13 + prclDest.right;
                    if ( (int)v13 + prclDest.right > v18 )
                      v55 = v18;
                    prclDest.right = v55;
                  }
                  while ( right != v18 );
                  v25 = v84;
                }
                if ( v43 )
                  *(_QWORD *)(v66 + 128) = v43;
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v68);
                PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v86);
LABEL_32:
                GreAcquireSemaphore(ghsemHT);
                v38 = v85;
                if ( !v85 )
                {
                  *(_QWORD *)(v25 + 56) = 0LL;
LABEL_34:
                  SURFMEM::~SURFMEM((SURFMEM *)&v69);
                  HTSEMOBJ::vRelease((HTSEMOBJ *)&v62);
                  return 1LL;
                }
                v56 = HIDWORD(v77);
                v57 = (unsigned int)v89 + 76LL;
                *(_DWORD *)(v25 + 64) = v64;
                *(_QWORD *)(v25 + 56) = v25 + v57;
                *(_DWORD *)(v25 + 40) = v9;
                *(_DWORD *)(v25 + 44) = (_DWORD)a4;
                *(_DWORD *)(v25 + 48) = v56;
                LODWORD(v81[0]) = 1;
                HIDWORD(v81[0]) = v9;
                LODWORD(v81[1]) = v56;
                v81[2] = 0LL;
                LODWORD(v81[3]) = 1;
                v58 = *(void **)(v25 + 56);
                v78 = 0LL;
                v79 = 0;
                v80 = 0;
                SURFMEM::bCreateDIB((SURFMEM *)&v78, (struct _DEVBITMAPINFO *)v81, v58, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
                if ( v78 )
                {
                  pptlSrc = 0LL;
                  *(_QWORD *)&prclDest.left = 0LL;
                  prclDest.right = (int)a4;
                  prclDest.bottom = v56;
                  HTSEMOBJ::vRelease((HTSEMOBJ *)&v62);
                  if ( prclDest.left != v9 )
                  {
                    do
                    {
                      v59 = 0LL;
                      if ( v78 )
                        v59 = (SURFOBJ *)(v78 + 24);
                      EngCopyBits(v59, (SURFOBJ *)(v38 + 24), 0LL, 0LL, &prclDest, &pptlSrc);
                      v60 = prclDest.right;
                      prclDest.left = prclDest.right;
                      v61 = (_DWORD)a4 + prclDest.right;
                      if ( (int)a4 + prclDest.right > v9 )
                        v61 = v9;
                      prclDest.right = v61;
                    }
                    while ( v60 != v9 );
                  }
                  GreAcquireSemaphore(ghsemHT);
                  SURFMEM::~SURFMEM((SURFMEM *)&v78);
                  goto LABEL_34;
                }
                SURFMEM::~SURFMEM((SURFMEM *)&v78);
                goto LABEL_67;
              }
            }
LABEL_85:
            v48 = v66;
            goto LABEL_86;
          }
LABEL_25:
          if ( prclDest.left != v18 )
          {
            v33 = v66;
            v34 = pxlo;
            do
            {
              if ( v69 )
                v35 = (SURFOBJ *)(v69 + 24);
              else
                v35 = 0LL;
              EngCopyBits(v35, (SURFOBJ *)(v33 + 24), 0LL, v34, &prclDest, &pptlSrc);
              v36 = prclDest.right;
              prclDest.left = prclDest.right;
              v37 = v13 + prclDest.right;
              if ( (int)v13 + prclDest.right > v18 )
                v37 = v18;
              prclDest.right = v37;
            }
            while ( v36 != v18 );
          }
          goto LABEL_32;
        }
      }
    }
  }
LABEL_58:
  HTSEMOBJ::vRelease((HTSEMOBJ *)&v62);
  return 0LL;
}
