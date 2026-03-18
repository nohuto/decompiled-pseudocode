/*
 * XREFs of ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0046908
 * Callers:
 *     GreGetDIBitsInternal @ 0x1C0054DA4 (GreGetDIBitsInternal.c)
 * Callees:
 *     ?bIdenticalFormat@@YAHVXEPALOBJ@@H@Z @ 0x1C0045C60 (-bIdenticalFormat@@YAHVXEPALOBJ@@H@Z.c)
 *     EngCopyBits @ 0x1C0045EE0 (EngCopyBits.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C004CB04 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00539F4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0098A18 (-vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C00E4F48 (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     ?vInit256Default@XEPALOBJ@@QEAAXXZ @ 0x1C00E51C0 (-vInit256Default@XEPALOBJ@@QEAAXXZ.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C0143190 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z @ 0x1C029F0F0 (-vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C029F150 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     EncodeRLE8 @ 0x1C02AEC24 (EncodeRLE8.c)
 *     EncodeRLE4 @ 0x1C02B07DC (EncodeRLE4.c)
 */

__int64 __fastcall GreGetDIBitsInternalWorker(
        unsigned int a1,
        DC **a2,
        struct PDEVOBJ *a3,
        struct SURFREF *a4,
        struct XEPALOBJ *a5,
        HDC a6,
        HBITMAP a7,
        unsigned int a8,
        unsigned int a9,
        unsigned __int8 *a10,
        struct tagBITMAPINFO *a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14)
{
  __int64 v14; // rdi
  struct tagBITMAPINFO *v15; // r12
  unsigned int v16; // r15d
  __int64 v17; // rsi
  unsigned int biHeight_high; // r9d
  DWORD biCompression; // r13d
  LONG biWidth; // r10d
  LONG biWidth_high; // edx
  unsigned int v22; // edi
  unsigned int v23; // ecx
  unsigned int v24; // r10d
  unsigned int v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // eax
  int v28; // edx
  __int64 v29; // r8
  int v30; // ecx
  __int64 v31; // rbx
  int v32; // eax
  unsigned int v33; // edx
  unsigned __int8 *v34; // r8
  struct tagBITMAPINFO *v35; // rbx
  __int64 v36; // rdi
  SURFOBJ *v37; // rcx
  unsigned int v38; // edi
  bool v40; // zf
  unsigned int v41; // eax
  unsigned int biWidth_low; // r10d
  int IsCMYKColor; // eax
  DWORD v44; // r11d
  XLATEOBJ *v45; // r10
  XLATEOBJ *v46; // rdi
  __int64 i; // rcx
  unsigned int v48; // edi
  struct XEPALOBJ *v49; // r12
  unsigned __int16 v50; // dx
  int v51; // r8d
  unsigned int v52; // eax
  XLATEOBJ *v53; // r9
  XLATEOBJ *v54; // rcx
  struct PDEVOBJ *v55; // r8
  unsigned int v56; // eax
  XLATEOBJ *v57; // r9
  XLATEOBJ *v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // r12
  unsigned int v61; // eax
  DWORD v62; // eax
  unsigned int v63; // [rsp+64h] [rbp-144h]
  LONG v64; // [rsp+68h] [rbp-140h]
  XLATEOBJ *pxlo; // [rsp+70h] [rbp-138h] BYREF
  unsigned int v66; // [rsp+78h] [rbp-130h]
  __int64 v67; // [rsp+80h] [rbp-128h] BYREF
  unsigned int v68; // [rsp+88h] [rbp-120h]
  unsigned int v69; // [rsp+8Ch] [rbp-11Ch]
  __int64 v70; // [rsp+90h] [rbp-118h] BYREF
  int v71; // [rsp+98h] [rbp-110h]
  __int64 v72; // [rsp+A0h] [rbp-108h] BYREF
  unsigned int v73; // [rsp+A8h] [rbp-100h]
  unsigned int v74; // [rsp+B0h] [rbp-F8h]
  unsigned int v75; // [rsp+B8h] [rbp-F0h]
  struct XEPALOBJ *v76; // [rsp+C0h] [rbp-E8h] BYREF
  int v77; // [rsp+C8h] [rbp-E0h]
  int v78; // [rsp+CCh] [rbp-DCh]
  __int64 v79; // [rsp+D0h] [rbp-D8h] BYREF
  char v80; // [rsp+D8h] [rbp-D0h]
  int v81; // [rsp+DCh] [rbp-CCh]
  struct SURFREF *v82; // [rsp+E0h] [rbp-C8h]
  unsigned __int8 *v83; // [rsp+E8h] [rbp-C0h]
  DC **v84; // [rsp+F0h] [rbp-B8h]
  struct tagBITMAPINFO *v85; // [rsp+F8h] [rbp-B0h]
  _QWORD v86[4]; // [rsp+100h] [rbp-A8h] BYREF
  struct PDEVOBJ *v87; // [rsp+120h] [rbp-88h]
  POINTL pptlSrc; // [rsp+128h] [rbp-80h] BYREF
  _QWORD v89[4]; // [rsp+130h] [rbp-78h] BYREF
  __int64 v90; // [rsp+150h] [rbp-58h]
  RECTL prclDest; // [rsp+158h] [rbp-50h] BYREF

  v82 = a4;
  v87 = a3;
  v84 = a2;
  v14 = a1;
  v75 = a1;
  v89[1] = a4;
  v76 = a5;
  v66 = a8;
  v83 = a10;
  v15 = a11;
  v85 = a11;
  v89[2] = a11;
  v16 = 1;
  if ( !(unsigned int)bIsCompatible(
                        v89,
                        *(_QWORD *)(*((_QWORD *)a4 + 4) + 128LL),
                        *((_QWORD *)a4 + 4),
                        *((_QWORD *)*a2 + 6),
                        1) )
    return 0LL;
  v17 = v89[0];
  v89[3] = v89[0];
  memset(v86, 0, sizeof(v86));
  LODWORD(v86[3]) = 0;
  if ( (_DWORD)v14 == 12 )
  {
    LODWORD(v72) = 1;
    pxlo = (XLATEOBJ *)&a11->bmiHeader.biPlanes;
    biWidth_low = LOWORD(a11->bmiHeader.biWidth);
    v68 = biWidth_low;
    biWidth_high = HIWORD(a11->bmiHeader.biWidth);
    v64 = biWidth_high;
    LOWORD(a11->bmiHeader.biHeight) = 1;
    biHeight_high = HIWORD(a11->bmiHeader.biHeight);
    v69 = biHeight_high;
    v23 = ((biWidth_low * biHeight_high + 31) >> 3) & 0x1FFFFFFC;
    biCompression = 0;
    if ( biWidth_low && biWidth_high )
    {
      v22 = 2;
      goto LABEL_17;
    }
    goto LABEL_96;
  }
  if ( a14 < 0x28 )
    return 0LL;
  pxlo = (XLATEOBJ *)a11->bmiColors;
  if ( (unsigned int)v14 > 0x28 )
    memset(a11->bmiColors, 0, v14 - 40);
  LODWORD(v72) = 0;
  a11->bmiHeader.biSize = 40;
  a11->bmiHeader.biPlanes = 1;
  biHeight_high = a11->bmiHeader.biBitCount;
  v69 = biHeight_high;
  biCompression = a11->bmiHeader.biCompression;
  biWidth = a11->bmiHeader.biWidth;
  v68 = biWidth;
  if ( biWidth <= 0 )
    goto LABEL_96;
  biWidth_high = a11->bmiHeader.biHeight;
  if ( !biWidth_high )
    goto LABEL_96;
  if ( biWidth_high >= 0 )
    goto LABEL_9;
  LODWORD(v86[3]) = 1;
  if ( biCompression )
  {
    if ( biCompression != 3 )
    {
LABEL_96:
      EngSetLastError(0x57u);
      return 0LL;
    }
  }
  biWidth_high = -biWidth_high;
LABEL_9:
  v64 = biWidth_high;
  if ( biCompression == 3 )
  {
    v40 = ((biHeight_high - 16) & 0xFFFFFFEF) == 0;
    goto LABEL_70;
  }
  if ( biCompression == 1 )
  {
    v40 = biHeight_high == 8;
LABEL_70:
    v22 = 2;
    if ( !v40 )
      goto LABEL_13;
    goto LABEL_14;
  }
  v22 = 2;
  if ( biCompression != 2 )
  {
    if ( biCompression == 10 )
    {
      IsCMYKColor = DC::bIsCMYKColor(*v84);
      biWidth_high = v64;
      if ( IsCMYKColor )
      {
        a11->bmiHeader.biCompression = v44;
        biCompression = v44;
      }
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  if ( biHeight_high != 4 )
  {
LABEL_13:
    biCompression = 0;
    a11->bmiHeader.biCompression = 0;
  }
LABEL_14:
  v23 = ((biWidth * biHeight_high + 31) >> 3) & 0x1FFFFFFC;
  if ( !biCompression || biCompression == 3 )
    a11->bmiHeader.biSizeImage = biWidth_high * v23;
  *(_QWORD *)&a11->bmiHeader.biClrUsed = 0LL;
LABEL_17:
  v24 = v66;
  if ( biWidth_high < v66 )
    v24 = biWidth_high;
  v66 = v24;
  v73 = v24;
  v25 = biWidth_high - v24;
  v26 = a9;
  if ( v25 < a9 )
    v26 = v25;
  v63 = v26;
  v74 = v26;
  if ( biCompression - 1 > 1 && a13 < v23 * v26 )
    return 0LL;
  v86[2] = 0LL;
  if ( biCompression == 3 && a14 < 0x34 )
    return 0LL;
  switch ( biHeight_high )
  {
    case 1u:
      v28 = 1;
LABEL_89:
      v27 = a12;
      goto LABEL_33;
    case 4u:
      v28 = 2;
      v22 = 16;
      goto LABEL_89;
    case 8u:
      v28 = 3;
      LODWORD(v86[0]) = 3;
      v22 = 256;
      v27 = a12;
LABEL_34:
      v71 = 0;
      v70 = 0LL;
      if ( v27 == 1 )
      {
        if ( a14 >= v75 + 2 * (unsigned __int64)v22 )
        {
          v72 = ghsemPalette;
          GreAcquireSemaphore(ghsemPalette);
          if ( !v17 && LODWORD(v86[0]) == 3 && *(_QWORD *)(*(_QWORD *)v76 + 72LL) )
          {
            v31 = 0LL;
            v67 = 0LL;
            v45 = pxlo;
            v46 = pxlo;
            for ( i = 256LL; i; --i )
            {
              LOWORD(v46->iUniq) = 0;
              v46 = (XLATEOBJ *)((char *)v46 + 2);
            }
            v48 = 0;
            v49 = v76;
            do
            {
              v50 = 0;
              v51 = *(_DWORD *)(*(_QWORD *)v49 + 28LL);
              if ( (_WORD)v51 )
              {
                while ( *(unsigned __int8 *)(v50 + *(_QWORD *)(*(_QWORD *)v49 + 72LL) + 4LL) != v48 )
                {
                  if ( ++v50 >= (unsigned __int16)v51 )
                    goto LABEL_121;
                }
                *((_WORD *)&v45->iUniq + v48) = v50;
              }
LABEL_121:
              ++v48;
            }
            while ( v48 < 0x100 );
            v15 = v85;
          }
          else
          {
            if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v70, 1u, v22, 0LL, 0, 0, 0, 0x200u, 1) )
            {
              SEMOBJ::vUnlock((SEMOBJ *)&v72);
              goto LABEL_108;
            }
            v31 = v70;
            v67 = v70;
            v52 = 0;
            v53 = pxlo;
            if ( v22 )
            {
              v54 = pxlo;
              do
              {
                LOWORD(v54->iUniq) = v52++;
                v54 = (XLATEOBJ *)((char *)v54 + 2);
              }
              while ( v52 < v22 );
            }
            v55 = *(struct PDEVOBJ **)(*(_QWORD *)v87 + 1808LL);
            v87 = v55;
            if ( v17 )
              v55 = (struct PDEVOBJ *)v17;
            XEPALOBJ::vGetEntriesFrom(&v67, *(_QWORD *)v76, v55, v53, v22);
          }
          SEMOBJ::vUnlock((SEMOBJ *)&v72);
          goto LABEL_51;
        }
        EngSetLastError(0x57u);
      }
      else
      {
        v29 = *((_QWORD *)v82 + 4);
        if ( v27 )
        {
          if ( v28 == *(_DWORD *)(v29 + 96) )
          {
            v31 = v17;
            v67 = v17;
            goto LABEL_51;
          }
        }
        else
        {
          v30 = 0;
          if ( *(_DWORD *)(v29 + 96) == v28 && v17 )
          {
            v30 = 1;
            if ( biCompression == 3 || ((v28 - 4) & 0xFFFFFFFD) != 0 )
            {
              if ( v28 == 5 && (*(_BYTE *)(v17 + 24) & 4) != 0 )
                v30 = 0;
            }
            else
            {
              v30 = bIdenticalFormat(v17, v28);
            }
          }
          if ( v30 )
          {
            v31 = v17;
            v67 = v17;
            goto LABEL_43;
          }
          if ( v22 )
          {
            v41 = 1;
          }
          else
          {
            v41 = 8;
            if ( v28 == 4 )
              v41 = 2;
          }
          if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v70, v41, v22, 0LL, 0x7C00u, 0x3E0u, 0x1Fu, 0x200u, 1) )
          {
            v31 = v70;
            v67 = v70;
            if ( *(_DWORD *)(*((_QWORD *)v82 + 4) + 96LL) == LODWORD(v86[0]) && LODWORD(v86[0]) == 3 )
            {
              v56 = 0;
              v57 = pxlo;
              if ( v22 )
              {
                v58 = pxlo;
                do
                {
                  LOWORD(v58->iUniq) = v56++;
                  v58 = (XLATEOBJ *)((char *)v58 + 2);
                }
                while ( v56 < v22 );
              }
              v90 = *(_QWORD *)(*(_QWORD *)v87 + 1808LL);
              XEPALOBJ::vGetEntriesFrom(&v67, *(_QWORD *)v76, v90, v57, v22);
              XEPALOBJ::vInit256Default((XEPALOBJ *)&v67);
            }
            else
            {
              switch ( LODWORD(v86[0]) )
              {
                case 1:
                  **(_DWORD **)(v70 + 112) = 0;
                  *(_DWORD *)(*(_QWORD *)(v31 + 112) + 4LL) = 0xFFFFFF;
                  break;
                case 2:
                  v59 = 0LL;
                  v60 = 16LL;
                  do
                  {
                    *(_DWORD *)(v59 + *(_QWORD *)(v31 + 112)) = *(_DWORD *)((char *)&aPalVGA + v59);
                    v59 += 4LL;
                    --v60;
                  }
                  while ( v60 );
                  v15 = v85;
                  break;
                case 3:
                  XEPALOBJ::vInit256Rainbow((XEPALOBJ *)&v67);
                  break;
              }
            }
LABEL_43:
            if ( (_DWORD)v72 )
            {
              if ( a14 >= (unsigned __int64)(3 * v22) + 12 )
              {
                if ( ((v69 - 16) & 0xFFFFFFE7) != 0 || v69 == 40 )
                  XEPALOBJ::vFill_triples((XEPALOBJ *)&v67, (struct tagRGBTRIPLE *)pxlo, v29, v22);
LABEL_51:
                pxlo = 0LL;
                if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                      &pxlo,
                                      *(_QWORD *)(*((_QWORD *)*v84 + 122) + 248LL),
                                      *((unsigned int *)*v84 + 30),
                                      v17,
                                      v31,
                                      *(_QWORD *)v76,
                                      *(_QWORD *)v76,
                                      0,
                                      0xFFFFFF,
                                      0,
                                      0) )
                {
LABEL_157:
                  v16 = 0;
LABEL_77:
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
                  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v70);
                  return v16;
                }
                if ( !v83 && biCompression - 1 > 1 )
                  goto LABEL_77;
                v33 = v63;
                if ( biCompression - 1 <= 1 )
                {
                  v34 = 0LL;
                  v66 &= -(v63 != 0);
                  v73 = v66;
                  v61 = v64;
                  if ( v63 )
                    v61 = v63;
                  v33 = v61;
                  v63 = v61;
                  v74 = v61;
                }
                else
                {
                  v34 = v83;
                }
                HIDWORD(v86[0]) = v68;
                LODWORD(v86[1]) = v33;
                v79 = 0LL;
                v80 = 0;
                v81 = 0;
                SURFMEM::bCreateDIB((SURFMEM *)&v79, (struct _DEVBITMAPINFO *)v86, v34, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
                if ( !v79 )
                  goto LABEL_156;
                v35 = *(struct tagBITMAPINFO **)(v79 + 72);
                v85 = v35;
                *(_QWORD *)(v79 + 48) = *((_QWORD *)*v84 + 6);
                v75 = *(_DWORD *)(v79 + 64);
                v84 = *(DC ***)(v79 + 72);
                memset(v84, 0, v75);
                *(_QWORD *)&prclDest.left = 0LL;
                prclDest.right = HIDWORD(v86[0]);
                prclDest.bottom = v86[1];
                pptlSrc.x = 0;
                pptlSrc.y = v64 - v63 - v66;
                LODWORD(v76) = 0;
                HIDWORD(v76) = v66 - (v64 - v63);
                v36 = *((_QWORD *)v82 + 4);
                v77 = *(_DWORD *)(v36 + 56);
                v78 = *(_DWORD *)(v36 + 60) + HIDWORD(v76);
                ERECTL::operator*=(&prclDest, &v76);
                if ( prclDest.left == prclDest.right || prclDest.top == prclDest.bottom )
                {
LABEL_156:
                  SURFMEM::~SURFMEM((SURFMEM *)&v79);
                  goto LABEL_157;
                }
                v37 = 0LL;
                if ( v79 )
                  v37 = (SURFOBJ *)(v79 + 24);
                EngCopyBits(v37, (SURFOBJ *)((v36 + 24) & -(__int64)(v36 != 0)), 0LL, pxlo, &prclDest, &pptlSrc);
                if ( biCompression - 1 > 1 )
                  goto LABEL_61;
                if ( biCompression == 2 )
                {
                  v62 = EncodeRLE4(v35, v83, v68, v63, v15->bmiHeader.biSizeImage);
                }
                else
                {
                  if ( biCompression != 1 )
                    goto LABEL_155;
                  v62 = EncodeRLE8(v35, v83, v68, v63, v15->bmiHeader.biSizeImage);
                }
                v15->bmiHeader.biSizeImage = v62;
LABEL_155:
                if ( v15->bmiHeader.biSizeImage )
                {
LABEL_61:
                  v38 = prclDest.bottom - prclDest.top;
                  SURFMEM::~SURFMEM((SURFMEM *)&v79);
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
                  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v70);
                  return v38;
                }
                goto LABEL_156;
              }
            }
            else
            {
              if ( biCompression == 3 )
                v22 = 3;
              if ( a14 >= (unsigned __int64)(4 * v22) + 40 )
              {
                if ( (*(_DWORD *)(v31 + 24) & 0x4000) != 0 )
                {
                  memmove(pxlo, *(const void **)(v31 + 112), 2LL * v22);
                }
                else if ( biCompression == 3 || v69 <= 8 && (v32 = 274, _bittest(&v32, v69)) )
                {
                  XEPALOBJ::vFill_rgbquads((XEPALOBJ *)&v67, (struct tagRGBQUAD *)pxlo, 0, v22);
                }
                goto LABEL_51;
              }
            }
          }
        }
      }
LABEL_108:
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v70);
      return 0LL;
  }
  v27 = 0;
  if ( a12 != 1 )
    v27 = a12;
  v22 = 0;
  switch ( biHeight_high )
  {
    case 0x18u:
      v28 = 5;
      goto LABEL_33;
    case 0x10u:
      v28 = 4;
      goto LABEL_33;
    case 0x20u:
      v28 = 6;
LABEL_33:
      LODWORD(v86[0]) = v28;
      goto LABEL_34;
  }
  return 0LL;
}
