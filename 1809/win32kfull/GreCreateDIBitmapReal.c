/*
 * XREFs of GreCreateDIBitmapReal @ 0x1C004F05C
 * Callers:
 *     NtGdiCreateDIBSection @ 0x1C004D2C0 (NtGdiCreateDIBSection.c)
 *     GreStretchDIBitsInternal @ 0x1C004DABC (GreStretchDIBitsInternal.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C006CF78 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00E4C80 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     NtGdiCreateDIBitmapInternal @ 0x1C00FFEB0 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C010E500 (NtGdiCreateSessionMappedDIBSection.c)
 *     RecolorDeskPattern @ 0x1C01369F0 (RecolorDeskPattern.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C013B49C (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GreCreateDIBBrush @ 0x1C01544C8 (GreCreateDIBBrush.c)
 *     xxxRealDrawMenuItem @ 0x1C0232894 (xxxRealDrawMenuItem.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C0299E58 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0099C60 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C009B98C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     GreGetDCDpiScaleValue @ 0x1C0106A90 (GreGetDCDpiScaleValue.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C0143190 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C025A3D4 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C029F094 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C029F150 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
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
  size_t v30; // rdx
  ULONG v31; // ecx
  unsigned int v32; // edx
  int v33; // ecx
  unsigned int v34; // edx
  unsigned __int64 v35; // rsi
  HDC v36; // r13
  void *v37; // rax
  void *v38; // r15
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  DYNAMICMODECHANGESHARELOCK *v42; // rcx
  __int64 v43; // rcx
  unsigned int *v44; // rax
  unsigned int *v45; // rsi
  unsigned int v46; // r8d
  int v47; // esi
  __int64 v48; // rbx
  DYNAMICMODECHANGESHARELOCK *v49; // rcx
  int DCDpiScaleValue; // ecx
  float v51; // xmm0_4
  __int64 v52; // rcx
  __int64 v53; // rbx
  __int64 v55; // [rsp+68h] [rbp-180h] BYREF
  char v56; // [rsp+70h] [rbp-178h]
  int v57; // [rsp+74h] [rbp-174h]
  __int64 v58; // [rsp+78h] [rbp-170h] BYREF
  int v59; // [rsp+80h] [rbp-168h]
  char v60[8]; // [rsp+88h] [rbp-160h] BYREF
  void *v61; // [rsp+90h] [rbp-158h]
  _QWORD v62[4]; // [rsp+98h] [rbp-150h] BYREF
  int v63; // [rsp+B8h] [rbp-130h]
  unsigned int v64; // [rsp+BCh] [rbp-12Ch]
  unsigned int v65; // [rsp+C0h] [rbp-128h]
  int v66; // [rsp+C4h] [rbp-124h]
  int v67; // [rsp+C8h] [rbp-120h]
  unsigned int v68; // [rsp+CCh] [rbp-11Ch]
  unsigned int v69; // [rsp+D0h] [rbp-118h]
  int v70; // [rsp+D4h] [rbp-114h]
  void *v71; // [rsp+D8h] [rbp-110h]
  _QWORD v72[6]; // [rsp+E0h] [rbp-108h] BYREF
  void *v73; // [rsp+110h] [rbp-D8h]
  DC *v74[6]; // [rsp+118h] [rbp-D0h] BYREF
  _QWORD v75[6]; // [rsp+148h] [rbp-A0h] BYREF
  _QWORD v76[14]; // [rsp+178h] [rbp-70h] BYREF
  int v78; // [rsp+1F8h] [rbp+10h] BYREF
  void *Src; // [rsp+200h] [rbp+18h]

  Src = a3;
  v78 = a2;
  memset(v62, 0, sizeof(v62));
  v15 = a5;
  if ( (a5 & 0xFFFFFFFC) != 0 )
    goto LABEL_116;
  v16 = 2;
  if ( a5 == 2 || a5 == 3 && (a11 & 1) == 0 )
    goto LABEL_116;
  if ( !a8 && (a11 & 8) != 0 )
    goto LABEL_116;
  if ( !a4 )
    goto LABEL_116;
  if ( a6 < 0x28 )
    goto LABEL_116;
  v17 = *a4;
  v63 = v17;
  v67 = v17;
  if ( a6 < (unsigned int)v17 )
    goto LABEL_116;
  if ( (unsigned int)v17 < 0x28 )
    goto LABEL_116;
  if ( a4[4] - 4 <= 1 )
    goto LABEL_116;
  v18 = a4[1];
  if ( v18 <= 0 )
    goto LABEL_116;
  v19 = a4[2];
  if ( !v19 )
    goto LABEL_116;
  LODWORD(v62[3]) = 0x4000000;
  HIDWORD(v62[0]) = v18;
  if ( v19 < 0 )
  {
    v19 = -v19;
    LODWORD(v62[3]) = 67108865;
  }
  LODWORD(v62[1]) = v19;
  v20 = *((unsigned __int16 *)a4 + 7);
  LODWORD(v62[0]) = v20;
  v21 = a4[4];
  v65 = v21;
  v68 = v21;
  v64 = a4[8];
  v69 = v64;
  v61 = (char *)a4 + v17;
  if ( !v21 )
  {
    switch ( v20 )
    {
      case 1:
        LODWORD(v62[0]) = 1;
        v23 = 2;
        break;
      case 4:
        LODWORD(v62[0]) = 2;
        v23 = 16;
        break;
      case 8:
        LODWORD(v62[0]) = 3;
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
          case 16:
            LODWORD(v62[0]) = 4;
            v25 = 31744;
            a5 = v22;
            goto LABEL_33;
          case 24:
            LODWORD(v62[0]) = 5;
            goto LABEL_27;
          case 32:
            LODWORD(v62[0]) = 6;
LABEL_27:
            v16 = 8;
            a5 = v22;
            v25 = 0;
LABEL_33:
            v26 = 992;
            v27 = 31;
            goto LABEL_55;
        }
LABEL_116:
        EngSetLastError(0x57u);
        return 0LL;
    }
    v16 = 1;
    v24 = 1024;
    v25 = 0;
    goto LABEL_33;
  }
  if ( v21 != 3 )
  {
    if ( v21 != 10 )
      goto LABEL_116;
    DCOBJ::DCOBJ((DCOBJ *)v74, a1);
    if ( !v74[0] || !(unsigned int)DC::bIsCMYKColor(v74[0]) )
    {
LABEL_48:
      EngSetLastError(0x57u);
      DCOBJ::~DCOBJ((DCOBJ *)v74);
      return 0LL;
    }
    switch ( LODWORD(v62[0]) )
    {
      case 1:
        LODWORD(v62[0]) = 1;
        v23 = 2;
        break;
      case 4:
        LODWORD(v62[0]) = 2;
        v23 = 16;
        break;
      case 8:
        LODWORD(v62[0]) = 3;
        v23 = 256;
        break;
      case 0x20:
        LODWORD(v62[0]) = 6;
        v23 = 0;
        v24 = 512;
        v16 = 16;
LABEL_54:
        DCOBJ::~DCOBJ((DCOBJ *)v74);
        v26 = a5;
        v27 = a5;
        v25 = 0;
        goto LABEL_55;
      default:
        goto LABEL_48;
    }
    v16 = 1;
    v24 = 1024;
    goto LABEL_54;
  }
  if ( a6 < 0x34 || a5 )
    goto LABEL_116;
  v61 = a4 + 10;
  v25 = a4[10];
  v26 = a4[11];
  v27 = a4[12];
  v23 = 0;
  v24 = 512;
  if ( v20 == 16 )
  {
    LODWORD(v62[0]) = 4;
  }
  else
  {
    if ( v20 != 32 )
      goto LABEL_116;
    LODWORD(v62[0]) = 6;
  }
LABEL_55:
  v59 = 0;
  v58 = 0LL;
  if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v58, v16, v23, 0LL, v25, v26, v27, v24, 1) )
  {
LABEL_56:
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v58);
    return 0LL;
  }
  v62[2] = *(_QWORD *)v58;
  v55 = 0LL;
  v56 = 0;
  v57 = 0;
  v28 = 0LL;
  v71 = 0LL;
  if ( (a11 & 2) != 0 )
  {
    *(_DWORD *)(v58 + 24) |= 0x8000u;
    v28 = Src;
    v71 = a8;
    if ( !Src )
    {
LABEL_59:
      SURFMEM::~SURFMEM((SURFMEM *)&v55);
      goto LABEL_56;
    }
    Src = 0LL;
  }
  else if ( a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v75, a1);
    if ( v75[0] && (*(_DWORD *)(*(_QWORD *)(v75[0] + 48LL) + 40LL) & 0x8000) != 0 )
      LODWORD(v62[3]) |= 0x40000u;
    DCOBJ::~DCOBJ((DCOBJ *)v75);
  }
  v66 = a11 & 8;
  v70 = v66;
  v29 = a13;
  if ( !SURFMEM::bCreateDIB(
          (SURFMEM *)&v55,
          (struct _DEVBITMAPINFO *)v62,
          v28,
          v71,
          a9,
          a10,
          a12,
          0,
          1,
          v66 != 0,
          a13 != 0LL)
    || !*(_WORD *)(v55 + 100) && *(_QWORD *)(v55 + 192) && *(_DWORD *)(v55 + 64) != a7 )
  {
    goto LABEL_59;
  }
  if ( Src )
  {
    v30 = *(unsigned int *)(v55 + 64);
    if ( (unsigned int)v30 > a7 )
    {
LABEL_72:
      v31 = 87;
LABEL_73:
      EngSetLastError(v31);
      goto LABEL_59;
    }
    LODWORD(v71) = *(_DWORD *)(v55 + 64);
    v73 = *(void **)(v55 + 72);
    memmove(v73, Src, v30);
    v32 = a6;
    v33 = v63;
  }
  else
  {
    v32 = a6;
    v33 = v63;
  }
  if ( v64 && v64 < v23 )
    v23 = v64;
  if ( !v23 )
    goto LABEL_107;
  v34 = v32 - v33;
  if ( !v15 )
  {
    if ( 4 * (unsigned __int64)v23 > 0xFFFFFFFF )
      goto LABEL_72;
    v43 = 4 * v23;
    if ( v34 < (unsigned int)v43 )
      goto LABEL_72;
    v44 = (unsigned int *)AllocFreeTmpBuffer(v43);
    v45 = v44;
    if ( !v44 )
    {
      v31 = 14;
      goto LABEL_73;
    }
    memmove(v44, v61, 4LL * v23);
    if ( v65 - 10 <= 2 )
      XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v58, v45, v46, v23);
    else
      XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v58, (struct tagRGBQUAD *)v45, 0, v23);
    FreeTmpBuffer(v45);
    if ( (a11 & 4) != 0 && LODWORD(v62[0]) == 3 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v76, a1);
      v47 = 0;
      if ( v76[0] )
      {
        v48 = *(_QWORD *)(v76[0] + 48LL);
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v60);
        if ( *(_DWORD *)(v48 + 2108) == 3 && (*(_DWORD *)(v48 + 2172) & 0x100) != 0 && (*(_DWORD *)(v48 + 40) & 1) != 0 )
        {
          v47 = 1;
          XEPALOBJ::apalColorSet((XEPALOBJ *)&v58, *(struct PALETTE **)(v48 + 1808));
        }
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v49);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v76);
      if ( !v47 )
        goto LABEL_59;
    }
    goto LABEL_107;
  }
  if ( v15 != 1 )
  {
LABEL_107:
    v36 = a1;
    goto LABEL_108;
  }
  v35 = 2LL * v23;
  if ( v35 > 0xFFFFFFFF || v34 < v35 )
    goto LABEL_72;
  v36 = a1;
  DCOBJ::DCOBJ((DCOBJ *)v72, a1);
  if ( !v72[0] )
  {
LABEL_85:
    DCOBJ::~DCOBJ((DCOBJ *)v72);
    goto LABEL_59;
  }
  v37 = (void *)AllocFreeTmpBuffer(2 * v23);
  v38 = v37;
  if ( !v37 )
  {
    EngSetLastError(0xEu);
    goto LABEL_85;
  }
  memmove(v37, v61, 2LL * v23);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v78);
  v40 = *((_QWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)v72) + 16);
  if ( !v40 )
    v40 = *(_QWORD *)(v39 + 1808);
  XEPALOBJ::vGetEntriesFrom(&v58, *(_QWORD *)(v41 + 88), v40, v38, v23);
  FreeTmpBuffer(v38);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v42);
  DCOBJ::~DCOBJ((DCOBJ *)v72);
LABEL_108:
  if ( v29 )
  {
    if ( v66 )
      *v29 = 0LL;
    else
      *v29 = *(_QWORD *)(v55 + 72);
  }
  v56 |= 1u;
  v59 = 1;
  if ( (a11 & 0x10) != 0 )
  {
    DCDpiScaleValue = GreGetDCDpiScaleValue(v36);
    if ( DCDpiScaleValue > 1 )
    {
      v51 = (float)DCDpiScaleValue;
      LODWORD(v61) = HIDWORD(v62[0]) / DCDpiScaleValue;
      HIDWORD(v61) = LODWORD(v62[1]) / DCDpiScaleValue;
      v52 = v55;
      *(float *)(v55 + 660) = v51;
      *(float *)(v52 + 664) = v51;
      *(_DWORD *)(v52 + 116) |= 0x800u;
      *(_QWORD *)(v52 + 668) = v61;
    }
  }
  v53 = *(_QWORD *)(v55 + 32);
  SURFMEM::~SURFMEM((SURFMEM *)&v55);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v58);
  return v53;
}
