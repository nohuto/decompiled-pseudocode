/*
 * XREFs of ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00110F0
 * Callers:
 *     <none>
 * Callees:
 *     EngHTBlt @ 0x1C0012AA4 (EngHTBlt.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C00133E4 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C00134A8 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     EngCopyBits @ 0x1C0045EE0 (EngCopyBits.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C004CB04 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     EngStretchBlt @ 0x1C0051160 (EngStretchBlt.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0112F44 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall EngRealizeBrush(
        struct _BRUSHOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _XLATEOBJ *a5,
        unsigned int a6)
{
  __int64 v8; // rsi
  int v9; // r15d
  __int64 v10; // rdi
  unsigned int v11; // r12d
  unsigned __int16 *v12; // rbx
  __int64 v13; // rax
  LONG v14; // esi
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  unsigned int v17; // r13d
  unsigned __int64 v18; // rcx
  unsigned int v19; // eax
  LONG v20; // ebx
  unsigned int v21; // r12d
  __int64 v22; // r14
  bool v23; // zf
  unsigned int v24; // ecx
  LONG v25; // eax
  LONG v26; // r12d
  struct _BRUSHOBJ *v27; // r13
  ULONG iSolidColor; // r12d
  int v29; // ecx
  __int64 v30; // r12
  XLATEOBJ *v31; // r13
  SURFOBJ *v32; // rcx
  LONG v33; // ecx
  LONG v34; // eax
  __int64 v35; // rsi
  int v37; // ecx
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // r12
  __int64 v42; // rcx
  char v43; // dl
  ULONG v44; // eax
  unsigned int v45; // ecx
  __int64 v46; // rax
  XLATEOBJ *v47; // r8
  int v48; // ecx
  XLATEOBJ *v49; // r14
  SURFOBJ *v50; // r13
  SURFOBJ *v51; // rcx
  LONG right; // ecx
  LONG v53; // eax
  LONG v54; // edi
  __int64 v55; // rcx
  void *v56; // r8
  SURFOBJ *v57; // rcx
  LONG v58; // ecx
  LONG v59; // eax
  int v60; // [rsp+60h] [rbp-A0h] BYREF
  int v61; // [rsp+64h] [rbp-9Ch]
  int v62; // [rsp+68h] [rbp-98h]
  unsigned int v63; // [rsp+6Ch] [rbp-94h]
  __int64 v64; // [rsp+70h] [rbp-90h]
  XLATEOBJ *pxlo; // [rsp+78h] [rbp-88h]
  XLATEOBJ *v66; // [rsp+80h] [rbp-80h] BYREF
  POINTL pptlSrc; // [rsp+88h] [rbp-78h] BYREF
  __int64 v68; // [rsp+90h] [rbp-70h] BYREF
  char v69; // [rsp+98h] [rbp-68h]
  int v70; // [rsp+9Ch] [rbp-64h]
  unsigned int v71; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v72; // [rsp+A4h] [rbp-5Ch]
  __int64 v73; // [rsp+A8h] [rbp-58h] BYREF
  POINTL pptlHTOrg; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v75; // [rsp+B8h] [rbp-48h] BYREF
  char v76; // [rsp+C0h] [rbp-40h]
  int v77; // [rsp+C4h] [rbp-3Ch]
  _QWORD v78[4]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v79; // [rsp+E8h] [rbp-18h]
  struct _BRUSHOBJ *v80; // [rsp+F0h] [rbp-10h]
  __int64 v81; // [rsp+F8h] [rbp-8h]
  __int64 v82; // [rsp+100h] [rbp+0h]
  unsigned __int64 v83; // [rsp+108h] [rbp+8h]
  __int64 v84; // [rsp+110h] [rbp+10h] BYREF
  int v85; // [rsp+118h] [rbp+18h]
  __int64 v86; // [rsp+120h] [rbp+20h]
  unsigned __int64 v87; // [rsp+128h] [rbp+28h]
  RECTL prclDest; // [rsp+130h] [rbp+30h] BYREF
  RECTL prclSrc; // [rsp+140h] [rbp+40h] BYREF

  v80 = a1;
  pxlo = a5;
  v86 = SURFOBJ_TO_SURFACE(a2);
  v8 = v86;
  v64 = SURFOBJ_TO_SURFACE(a3);
  v9 = 32;
  v82 = SURFOBJ_TO_SURFACE(a4);
  memset(v78, 0, sizeof(v78));
  v10 = *(_QWORD *)(v64 + 56);
  v11 = *(_DWORD *)(v8 + 96);
  v12 = 0LL;
  v13 = *(_QWORD *)(v8 + 48);
  v61 = 0;
  v73 = v13;
  v63 = v11;
  v79 = v10;
  v60 = 1;
  GreAcquireSemaphore(ghsemHT);
  if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v73) || (v14 = v10, (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v73, 0LL)) )
  {
    v12 = (unsigned __int16 *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v73);
    v14 = v10;
  }
  v15 = 4LL;
  if ( v11 == 1 )
  {
    if ( ((v14 - 8) & 0xFFFFFFE7) != 0 || v14 == 24 )
    {
      v15 = 1LL;
      v14 = (v14 + 63) & 0xFFFFFFE0;
    }
    else
    {
      v14 = 32;
      v15 = 1LL;
      if ( !v12 )
        goto LABEL_57;
      v37 = v12[4];
      switch ( v37 )
      {
        case 10:
          v14 = 160;
          break;
        case 12:
          v14 = 96;
          break;
        case 14:
          v14 = 224;
          break;
        default:
          goto LABEL_57;
      }
      v61 = 1;
    }
LABEL_57:
    if ( v14 < (int)v10 )
      goto LABEL_58;
    goto LABEL_9;
  }
  if ( v11 != 2 )
  {
    switch ( v11 )
    {
      case 3u:
        v15 = 8LL;
        v14 = (v14 + 7) & 0xFFFFFFFC;
        break;
      case 4u:
        v15 = 16LL;
        v14 = (v14 + 7) & 0xFFFFFFFC;
        break;
      case 5u:
        v15 = 24LL;
        v14 = (v14 + 7) & 0xFFFFFFFC;
        break;
      default:
        v15 = 32LL;
        goto LABEL_9;
    }
    goto LABEL_57;
  }
  if ( v14 != 8 )
  {
    v14 = (v14 + 15) & 0xFFFFFFF8;
    goto LABEL_57;
  }
  v14 = 8;
LABEL_9:
  v16 = v15 * (unsigned int)v14;
  if ( v16 <= 0xFFFFFFFF )
  {
    v17 = (unsigned int)v16 >> 3;
    v18 = v17 * (unsigned __int64)HIDWORD(v79);
    v87 = v18;
    if ( v18 <= 0xFFFFFFFF )
    {
      v19 = v18 + 80;
      if ( (unsigned int)v18 < 0xFFFFFFB0 )
      {
        if ( v82 )
        {
          v83 = *(_QWORD *)(v82 + 56);
          v20 = v83;
          v38 = HIDWORD(v83);
          v39 = HIDWORD(v83);
          if ( (_DWORD)v83 == 32 || (v39 = HIDWORD(v83), (_DWORD)v83 == 16) || (v39 = HIDWORD(v83), (_DWORD)v83 == 8) )
            v38 = v39;
          else
            v9 = (v83 + 63) & 0xFFFFFFE0;
          if ( v9 < (int)v83 )
            goto LABEL_58;
          v40 = v38 * (unsigned int)(v9 >> 3);
          v62 = v9 >> 3;
          if ( v40 > 0xFFFFFFFF || (unsigned int)v40 + v19 < v19 )
            goto LABEL_58;
          v19 += v40;
        }
        else
        {
          v9 = v62;
          v20 = v83;
        }
        v21 = v19 + 76;
        if ( v19 < 0xFFFFFFB4 )
        {
          if ( gpCachedEngbrush )
          {
            v22 = _InterlockedExchange64((volatile __int64 *)gpCachedEngbrush, 0LL);
            v81 = v22;
            if ( v22 )
            {
              if ( v21 > v19 && *(_DWORD *)(v22 + 4) >= v21 )
                goto LABEL_19;
              Win32FreePool(v22);
            }
          }
          v81 = PALLOCMEM2(v21);
          v22 = v81;
          if ( !v81 )
            goto LABEL_58;
LABEL_19:
          v23 = v61 == 0;
          v24 = v63;
          v80[1].pvRbrush = (PVOID)v22;
          v25 = v10;
          *(_DWORD *)(v22 + 4) = v21;
          if ( !v23 )
            v25 = v14;
          v26 = HIDWORD(v79);
          *(_DWORD *)(v22 + 20) = v25;
          *(_QWORD *)(v22 + 32) = v22 + 76;
          *(_DWORD *)(v22 + 72) = v24;
          *(_DWORD *)(v22 + 28) = v17;
          *(_DWORD *)(v22 + 16) = v14;
          *(_DWORD *)(v22 + 24) = v26;
          v78[0] = __PAIR64__(v14, v24);
          v78[2] = 0LL;
          v68 = 0LL;
          v69 = 0;
          v70 = 0;
          LODWORD(v78[1]) = v26;
          LODWORD(v78[3]) = 1;
          SURFMEM::bCreateDIB(
            (SURFMEM *)&v68,
            (struct _DEVBITMAPINFO *)v78,
            *(void **)(v22 + 32),
            0LL,
            0,
            0LL,
            0LL,
            0,
            1,
            0,
            0);
          if ( !v68 )
          {
LABEL_69:
            SURFMEM::~SURFMEM((SURFMEM *)&v68);
            goto LABEL_58;
          }
          v27 = v80;
          pptlSrc = 0LL;
          *(_QWORD *)&prclDest.left = 0LL;
          prclDest.bottom = v26;
          iSolidColor = v80[2].iSolidColor;
          LODWORD(v66) = *(&v80[2].iSolidColor + 1);
          prclDest.right = v10;
          HTSEMOBJ::vRelease((HTSEMOBJ *)&v60);
          if ( v63 == 1 )
          {
            if ( a6 < 0xC )
              goto LABEL_25;
            v29 = (int)v66;
            if ( iSolidColor != (_DWORD)v66 )
              goto LABEL_76;
          }
          else
          {
            v29 = (int)v66;
          }
          if ( v63 == 2 && (v27[3].iSolidColor & 5) != 0 && (iSolidColor != v29 || (v27[5].iSolidColor & 0x20000) == 0) )
          {
LABEL_76:
            v41 = 0LL;
            v85 = 0;
            v84 = 0LL;
            v42 = *(_QWORD *)(v86 + 48);
            pptlHTOrg = 0LL;
            prclSrc = prclDest;
            *(_QWORD *)(v68 + 48) = v42;
            v66 = 0LL;
            if ( a6 >= 6 )
            {
              v43 = 0;
              if ( (v27[5].iSolidColor & 0x20000) == 0 )
                goto LABEL_87;
            }
            else
            {
              v43 = 1;
            }
            v44 = v27[3].iSolidColor;
            if ( (v44 & 4) != 0 || (v44 & 1) != 0 )
            {
              v45 = *(&v27[2].iSolidColor + 1);
              if ( v43 )
              {
                v72 = v27[1].iSolidColor;
                v71 = v45;
              }
              else
              {
                v71 = v27[2].iSolidColor;
                v72 = v45;
              }
              if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v84, 1u, 2u, &v71, 0, 0, 0, 0x400u, 1) )
              {
                v23 = (unsigned int)EXLATEOBJ::bInitXlateObj(
                                      &v66,
                                      *(_QWORD *)&v27[2].flColorType,
                                      v27[3].iSolidColor,
                                      v84,
                                      *((_QWORD *)v27[3].pvRbrush + 16),
                                      *(_QWORD *)&v27[4].iSolidColor,
                                      *(_QWORD *)&v27[4].iSolidColor,
                                      v27[2].iSolidColor,
                                      *(&v27[2].iSolidColor + 1),
                                      0xFFFFFF,
                                      0) == 0;
                v46 = v64;
                if ( !v23 )
                {
                  v47 = v66;
                  v41 = *(_QWORD *)(v64 + 128);
                  pxlo = v66;
                  *(_QWORD *)(v64 + 128) = 0LL;
                  goto LABEL_89;
                }
LABEL_88:
                v47 = pxlo;
LABEL_89:
                if ( v63 == 1 && v61 )
                {
                  prclDest.right = v14;
                  v48 = 0;
                  if ( v68 )
                    v48 = v68 + 24;
                  EngHTBlt(
                    v48,
                    v46 + 24,
                    0,
                    0,
                    (__int64)v47,
                    0LL,
                    (__int64)&pptlHTOrg,
                    (__int64)&prclDest,
                    (__int64)&prclSrc,
                    0LL,
                    64,
                    0LL);
                }
                else if ( prclDest.left != v14 )
                {
                  v49 = pxlo;
                  v50 = (SURFOBJ *)(v46 + 24);
                  do
                  {
                    v51 = 0LL;
                    if ( v68 )
                      v51 = (SURFOBJ *)(v68 + 24);
                    EngStretchBlt(v51, v50, 0LL, 0LL, v49, 0LL, &pptlHTOrg, &prclDest, &prclSrc, 0LL, 4u);
                    right = prclDest.right;
                    prclDest.left = prclDest.right;
                    v53 = v10 + prclDest.right;
                    if ( (int)v10 + prclDest.right > v14 )
                      v53 = v14;
                    prclDest.right = v53;
                  }
                  while ( right != v14 );
                  v22 = v81;
                }
                if ( v41 )
                  *(_QWORD *)(v64 + 128) = v41;
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v66);
                PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v84);
LABEL_32:
                GreAcquireSemaphore(ghsemHT);
                v35 = v82;
                if ( !v82 )
                {
                  *(_QWORD *)(v22 + 56) = 0LL;
LABEL_34:
                  SURFMEM::~SURFMEM((SURFMEM *)&v68);
                  HTSEMOBJ::vRelease((HTSEMOBJ *)&v60);
                  return 1LL;
                }
                v54 = HIDWORD(v83);
                v55 = (unsigned int)v87 + 76LL;
                *(_DWORD *)(v22 + 64) = v62;
                *(_QWORD *)(v22 + 56) = v22 + v55;
                *(_DWORD *)(v22 + 40) = v9;
                *(_DWORD *)(v22 + 44) = v20;
                *(_DWORD *)(v22 + 48) = v54;
                LODWORD(v78[0]) = 1;
                HIDWORD(v78[0]) = v9;
                LODWORD(v78[1]) = v54;
                v78[2] = 0LL;
                LODWORD(v78[3]) = 1;
                v56 = *(void **)(v22 + 56);
                v75 = 0LL;
                v76 = 0;
                v77 = 0;
                SURFMEM::bCreateDIB((SURFMEM *)&v75, (struct _DEVBITMAPINFO *)v78, v56, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
                if ( v75 )
                {
                  pptlSrc = 0LL;
                  *(_QWORD *)&prclDest.left = 0LL;
                  prclDest.right = v20;
                  prclDest.bottom = v54;
                  HTSEMOBJ::vRelease((HTSEMOBJ *)&v60);
                  if ( prclDest.left != v9 )
                  {
                    do
                    {
                      v57 = 0LL;
                      if ( v75 )
                        v57 = (SURFOBJ *)(v75 + 24);
                      EngCopyBits(v57, (SURFOBJ *)(v35 + 24), 0LL, 0LL, &prclDest, &pptlSrc);
                      v58 = prclDest.right;
                      prclDest.left = prclDest.right;
                      v59 = v20 + prclDest.right;
                      if ( v20 + prclDest.right > v9 )
                        v59 = v9;
                      prclDest.right = v59;
                    }
                    while ( v58 != v9 );
                  }
                  GreAcquireSemaphore(ghsemHT);
                  SURFMEM::~SURFMEM((SURFMEM *)&v75);
                  goto LABEL_34;
                }
                SURFMEM::~SURFMEM((SURFMEM *)&v75);
                goto LABEL_69;
              }
            }
LABEL_87:
            v46 = v64;
            goto LABEL_88;
          }
LABEL_25:
          if ( prclDest.left != v14 )
          {
            v30 = v64;
            v31 = pxlo;
            do
            {
              if ( v68 )
                v32 = (SURFOBJ *)(v68 + 24);
              else
                v32 = 0LL;
              EngCopyBits(v32, (SURFOBJ *)(v30 + 24), 0LL, v31, &prclDest, &pptlSrc);
              v33 = prclDest.right;
              prclDest.left = prclDest.right;
              v34 = v10 + prclDest.right;
              if ( (int)v10 + prclDest.right > v14 )
                v34 = v14;
              prclDest.right = v34;
            }
            while ( v33 != v14 );
          }
          goto LABEL_32;
        }
      }
    }
  }
LABEL_58:
  HTSEMOBJ::vRelease((HTSEMOBJ *)&v60);
  return 0LL;
}
