/*
 * XREFs of GreCreateDIBitmapReal @ 0x1C0016AA0
 * Callers:
 *     _InternalGetIconInfo @ 0x1C0015C34 (_InternalGetIconInfo.c)
 *     NtGdiCreateDIBitmapInternal @ 0x1C0016150 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiCreateDIBSection @ 0x1C0016580 (NtGdiCreateDIBSection.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0017110 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C00A06E8 (GreStretchDIBitsInternal.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C00F4440 (NtGdiCreateSessionMappedDIBSection.c)
 *     RecolorDeskPattern @ 0x1C0113100 (RecolorDeskPattern.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C011A924 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GreCreateDIBBrush @ 0x1C01319DC (GreCreateDIBBrush.c)
 *     xxxRealDrawMenuItem @ 0x1C02095E4 (xxxRealDrawMenuItem.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C0286404 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 * Callees:
 *     GreGetDCDpiScaleValue @ 0x1C000C580 (GreGetDCDpiScaleValue.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0017D34 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0078C80 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0F0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C008F90C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C011D58C (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C02426F8 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C028B33C (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C028B3F8 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 */

__int64 __fastcall GreCreateDIBitmapReal(
        HDC a1,
        int a2,
        void *a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        void *a8,
        unsigned int a9,
        void *a10,
        char a11,
        unsigned __int64 a12,
        _QWORD *a13)
{
  int v15; // r15d
  unsigned int v16; // r12d
  __int64 v17; // r8
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // r9d
  int v22; // eax
  unsigned int v23; // ebx
  unsigned int v24; // esi
  unsigned int v25; // r8d
  unsigned int v26; // eax
  unsigned int v27; // edx
  void *v28; // rsi
  _QWORD *v29; // r12
  unsigned int v30; // edx
  int v31; // ecx
  __int64 v32; // rbx
  unsigned int v34; // edx
  __int64 v35; // rcx
  unsigned int *v36; // rax
  unsigned int *v37; // rsi
  unsigned int v38; // r8d
  unsigned int v39; // edx
  ULONG v40; // ecx
  unsigned __int64 v41; // rsi
  __int64 v42; // r13
  void *v43; // rax
  void *v44; // r15
  __int64 v45; // rdx
  __int64 v46; // r8
  DYNAMICMODECHANGESHARELOCK *v47; // rcx
  int v48; // esi
  __int64 v49; // rbx
  DYNAMICMODECHANGESHARELOCK *v50; // rcx
  int DCDpiScaleValue; // ecx
  float v52; // xmm0_4
  __int64 v53; // rcx
  __int64 v54; // [rsp+68h] [rbp-100h] BYREF
  char v55; // [rsp+70h] [rbp-F8h]
  int v56; // [rsp+74h] [rbp-F4h]
  __int64 v57; // [rsp+78h] [rbp-F0h] BYREF
  int v58; // [rsp+80h] [rbp-E8h]
  char v59[8]; // [rsp+88h] [rbp-E0h] BYREF
  void *Src; // [rsp+90h] [rbp-D8h]
  _QWORD v61[4]; // [rsp+98h] [rbp-D0h] BYREF
  int v62; // [rsp+B8h] [rbp-B0h]
  unsigned int v63; // [rsp+BCh] [rbp-ACh]
  unsigned int v64; // [rsp+C0h] [rbp-A8h]
  int v65; // [rsp+C4h] [rbp-A4h]
  int v66; // [rsp+C8h] [rbp-A0h]
  unsigned int v67; // [rsp+CCh] [rbp-9Ch]
  unsigned int v68; // [rsp+D0h] [rbp-98h]
  int v69; // [rsp+D4h] [rbp-94h]
  void *v70; // [rsp+D8h] [rbp-90h]
  _QWORD v71[2]; // [rsp+E0h] [rbp-88h] BYREF
  DC *v72[2]; // [rsp+F0h] [rbp-78h] BYREF
  _QWORD v73[2]; // [rsp+100h] [rbp-68h] BYREF
  _QWORD v74[2]; // [rsp+110h] [rbp-58h] BYREF
  void *v75; // [rsp+120h] [rbp-48h]
  int v77; // [rsp+178h] [rbp+10h] BYREF
  void *v78; // [rsp+180h] [rbp+18h]

  v78 = a3;
  v77 = a2;
  memset(v61, 0, sizeof(v61));
  v15 = a5;
  if ( (a5 & 0xFFFFFFFC) != 0 )
    goto LABEL_75;
  v16 = 2;
  if ( a5 == 2 || a5 == 3 && (a11 & 1) == 0 )
    goto LABEL_75;
  if ( !a8 && (a11 & 8) != 0 )
    goto LABEL_75;
  if ( !a4 )
    goto LABEL_75;
  if ( a6 < 0x28 )
    goto LABEL_75;
  v17 = *a4;
  v62 = v17;
  v66 = v17;
  if ( a6 < (unsigned int)v17 )
    goto LABEL_75;
  if ( (unsigned int)v17 < 0x28 )
    goto LABEL_75;
  if ( a4[4] - 4 <= 1 )
    goto LABEL_75;
  v18 = a4[1];
  if ( v18 <= 0 )
    goto LABEL_75;
  v19 = a4[2];
  if ( !v19 )
    goto LABEL_75;
  LODWORD(v61[3]) = 0;
  HIDWORD(v61[0]) = v18;
  if ( v19 < 0 )
  {
    v19 = -v19;
    LODWORD(v61[3]) = 1;
  }
  LODWORD(v61[1]) = v19;
  v20 = *((unsigned __int16 *)a4 + 7);
  LODWORD(v61[0]) = v20;
  v21 = a4[4];
  v64 = v21;
  v67 = v21;
  v63 = a4[8];
  v68 = v63;
  Src = (char *)a4 + v17;
  if ( !v21 )
  {
    switch ( v20 )
    {
      case 1:
        LODWORD(v61[0]) = 1;
        v23 = 2;
        break;
      case 4:
        LODWORD(v61[0]) = 2;
        v23 = 16;
        break;
      case 8:
        LODWORD(v61[0]) = 3;
        v23 = 256;
        break;
      default:
        v22 = 0;
        if ( a5 != 1 )
          v22 = a5;
        v15 = v22;
        v23 = 0;
        v24 = 512;
        switch ( v20 )
        {
          case 24:
            LODWORD(v61[0]) = 5;
            goto LABEL_25;
          case 16:
            LODWORD(v61[0]) = 4;
            v25 = 31744;
            a5 = v22;
            goto LABEL_26;
          case 32:
            LODWORD(v61[0]) = 6;
LABEL_25:
            v16 = 8;
            a5 = v22;
            v25 = 0;
LABEL_26:
            v26 = 992;
            v27 = 31;
            goto LABEL_27;
        }
        goto LABEL_75;
    }
    v16 = 1;
    v24 = 1024;
    v25 = 0;
    goto LABEL_26;
  }
  if ( v21 != 3 )
  {
    if ( v21 != 10 )
      goto LABEL_75;
    MDCOBJ::MDCOBJ((MDCOBJ *)v72, a1);
    if ( !v72[0] || !(unsigned int)DC::bIsCMYKColor(v72[0]) )
      goto LABEL_86;
    switch ( LODWORD(v61[0]) )
    {
      case 1:
        LODWORD(v61[0]) = 1;
        v23 = 2;
        break;
      case 4:
        LODWORD(v61[0]) = 2;
        v23 = 16;
        break;
      case 8:
        LODWORD(v61[0]) = 3;
        v23 = 256;
        break;
      case 0x20:
        LODWORD(v61[0]) = 6;
        v23 = 0;
        v24 = 512;
        v16 = 16;
LABEL_91:
        DCOBJ::~DCOBJ((DCOBJ *)v72);
        v26 = a5;
        v27 = a5;
        v25 = 0;
        goto LABEL_27;
      default:
LABEL_86:
        EngSetLastError(0x57u);
        DCOBJ::~DCOBJ((DCOBJ *)v72);
        return 0LL;
    }
    v16 = 1;
    v24 = 1024;
    goto LABEL_91;
  }
  if ( a6 < 0x34 || a5 )
    goto LABEL_75;
  Src = a4 + 10;
  v25 = a4[10];
  v26 = a4[11];
  v27 = a4[12];
  v23 = 0;
  v24 = 512;
  if ( v20 != 16 )
  {
    if ( v20 == 32 )
    {
      LODWORD(v61[0]) = 6;
      goto LABEL_27;
    }
LABEL_75:
    EngSetLastError(0x57u);
    return 0LL;
  }
  LODWORD(v61[0]) = 4;
LABEL_27:
  v58 = 0;
  v57 = 0LL;
  if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v57, v16, v23, 0LL, v25, v26, v27, v24, 1) )
  {
LABEL_95:
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v57);
    return 0LL;
  }
  v61[2] = *(_QWORD *)v57;
  v54 = 0LL;
  v55 = 0;
  v56 = 0;
  v28 = 0LL;
  v70 = 0LL;
  if ( (a11 & 2) != 0 )
  {
    *(_DWORD *)(v57 + 24) |= 0x8000u;
    v28 = v78;
    v70 = a8;
    if ( !v78 )
    {
LABEL_94:
      SURFMEM::~SURFMEM((SURFMEM *)&v54);
      goto LABEL_95;
    }
    v78 = 0LL;
  }
  else if ( a1 )
  {
    MDCOBJ::MDCOBJ((MDCOBJ *)v73, a1);
    if ( v73[0] && (*(_DWORD *)(*(_QWORD *)(v73[0] + 48LL) + 40LL) & 0x8000) != 0 )
      LODWORD(v61[3]) |= 0x40000u;
    DCOBJ::~DCOBJ((DCOBJ *)v73);
  }
  v65 = a11 & 8;
  v69 = v65;
  v29 = a13;
  if ( !SURFMEM::bCreateDIB(
          (SURFMEM *)&v54,
          (struct _DEVBITMAPINFO *)v61,
          v28,
          v70,
          a9,
          a10,
          a12,
          0,
          1,
          v65 != 0,
          a13 != 0LL)
    || !*(_WORD *)(v54 + 100) && *(_QWORD *)(v54 + 192) && *(_DWORD *)(v54 + 64) != a7 )
  {
    goto LABEL_94;
  }
  if ( v78 )
  {
    v39 = *(_DWORD *)(v54 + 64);
    if ( v39 > a7 )
      goto LABEL_96;
    LODWORD(v70) = *(_DWORD *)(v54 + 64);
    v75 = *(void **)(v54 + 72);
    memmove(v75, v78, v39);
    v30 = a6;
    v31 = v62;
  }
  else
  {
    v30 = a6;
    v31 = v62;
  }
  if ( v63 && v63 < v23 )
    v23 = v63;
  if ( !v23 )
    goto LABEL_39;
  v34 = v30 - v31;
  if ( !v15 )
  {
    if ( 4 * (unsigned __int64)v23 <= 0xFFFFFFFF )
    {
      v35 = 4 * v23;
      if ( v34 >= (unsigned int)v35 )
      {
        v36 = (unsigned int *)AllocFreeTmpBuffer(v35);
        v37 = v36;
        if ( v36 )
        {
          memmove(v36, Src, 4LL * v23);
          if ( v64 - 10 <= 2 )
            XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v57, v37, v38, v23);
          else
            XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v57, (struct tagRGBQUAD *)v37, 0, v23);
          FreeTmpBuffer(v37);
          if ( (a11 & 4) == 0 || LODWORD(v61[0]) != 3 )
            goto LABEL_39;
          MDCOBJ::MDCOBJ((MDCOBJ *)v74, a1);
          v48 = 0;
          if ( v74[0] )
          {
            v49 = *(_QWORD *)(v74[0] + 48LL);
            DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v59);
            if ( *(_DWORD *)(v49 + 2100) == 3
              && (*(_DWORD *)(v49 + 2164) & 0x100) != 0
              && (*(_DWORD *)(v49 + 40) & 1) != 0 )
            {
              v48 = 1;
              XEPALOBJ::apalColorSet((XEPALOBJ *)&v57, *(struct PALETTE **)(v49 + 1800));
            }
            DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v50);
          }
          DCOBJ::~DCOBJ((DCOBJ *)v74);
          if ( v48 )
            goto LABEL_39;
          goto LABEL_94;
        }
        v40 = 14;
        goto LABEL_98;
      }
    }
LABEL_96:
    v40 = 87;
LABEL_98:
    EngSetLastError(v40);
    goto LABEL_94;
  }
  if ( v15 == 1 )
  {
    v41 = 2LL * v23;
    if ( v41 <= 0xFFFFFFFF && v34 >= v41 )
    {
      MDCOBJ::MDCOBJ((MDCOBJ *)v71, a1);
      v42 = v71[0];
      if ( v71[0] )
      {
        v43 = (void *)AllocFreeTmpBuffer(2 * v23);
        v44 = v43;
        if ( v43 )
        {
          memmove(v43, Src, 2LL * v23);
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v77);
          v46 = *((_QWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)v71) + 16);
          if ( !v46 )
            v46 = *(_QWORD *)(v45 + 1800);
          XEPALOBJ::vGetEntriesFrom(&v57, *(_QWORD *)(v42 + 96), v46, v44, v23);
          FreeTmpBuffer(v44);
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v47);
          DCOBJ::~DCOBJ((DCOBJ *)v71);
          goto LABEL_39;
        }
        EngSetLastError(0xEu);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v71);
      goto LABEL_94;
    }
    goto LABEL_96;
  }
LABEL_39:
  if ( v29 )
  {
    if ( v65 )
      *v29 = 0LL;
    else
      *v29 = *(_QWORD *)(v54 + 72);
  }
  *(_DWORD *)(v54 + 112) |= 0x4000000u;
  v55 |= 1u;
  v58 = 1;
  if ( (a11 & 0x10) != 0 )
  {
    DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
    if ( DCDpiScaleValue > 1 )
    {
      v52 = (float)DCDpiScaleValue;
      LODWORD(Src) = HIDWORD(v61[0]) / DCDpiScaleValue;
      HIDWORD(Src) = LODWORD(v61[1]) / DCDpiScaleValue;
      v53 = v54;
      *(float *)(v54 + 660) = v52;
      *(float *)(v53 + 664) = v52;
      *(_DWORD *)(v53 + 116) |= 0x800u;
      *(_QWORD *)(v53 + 668) = Src;
    }
  }
  v32 = *(_QWORD *)(v54 + 32);
  SURFMEM::~SURFMEM((SURFMEM *)&v54);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v57);
  return v32;
}
