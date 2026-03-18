/*
 * XREFs of GreCreateDIBitmapReal @ 0x1C0030AC0
 * Callers:
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C002FB20 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     NtGdiCreateDIBitmapInternal @ 0x1C00300F0 (NtGdiCreateDIBitmapInternal.c)
 *     NtGdiCreateDIBSection @ 0x1C0030550 (NtGdiCreateDIBSection.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0031130 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C00595B4 (GreStretchDIBitsInternal.c)
 *     NtGdiCreateSessionMappedDIBSection @ 0x1C0117AF0 (NtGdiCreateSessionMappedDIBSection.c)
 *     RecolorDeskPattern @ 0x1C01413C0 (RecolorDeskPattern.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0146358 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GreCreateDIBBrush @ 0x1C015ACC8 (GreCreateDIBBrush.c)
 *     xxxRealDrawMenuItem @ 0x1C024B514 (xxxRealDrawMenuItem.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02AED00 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 * Callees:
 *     GreGetDCDpiScaleValue @ 0x1C000BD58 (GreGetDCDpiScaleValue.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0032430 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BB8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0079AE0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C007F0E4 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C00803AC (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C0273CAC (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02B5D04 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02B5DC0 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
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
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // r9d
  int v21; // eax
  unsigned int v22; // ebx
  unsigned int v23; // esi
  unsigned int v24; // r8d
  unsigned int v25; // eax
  unsigned int v26; // edx
  void *v27; // rsi
  _QWORD *v28; // r12
  unsigned int v29; // edx
  int v30; // ecx
  HDC v31; // r15
  __int64 v32; // rbx
  unsigned int v34; // edx
  __int64 v35; // rcx
  unsigned int *v36; // rax
  unsigned int *v37; // rsi
  unsigned int v38; // r8d
  unsigned int v39; // edx
  ULONG v40; // ecx
  unsigned __int64 v41; // rsi
  void *v42; // rax
  void *v43; // r15
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  DYNAMICMODECHANGESHARELOCK *v47; // rcx
  int v48; // esi
  __int64 v49; // rbx
  DYNAMICMODECHANGESHARELOCK *v50; // rcx
  int DCDpiScaleValue; // ecx
  float v52; // xmm0_4
  __int64 v53; // rcx
  __int64 v54; // [rsp+68h] [rbp-F0h] BYREF
  char v55; // [rsp+70h] [rbp-E8h]
  int v56; // [rsp+74h] [rbp-E4h]
  __int64 v57; // [rsp+78h] [rbp-E0h] BYREF
  int v58; // [rsp+80h] [rbp-D8h]
  char v59[8]; // [rsp+88h] [rbp-D0h] BYREF
  _QWORD v60[4]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-A8h]
  unsigned int v62; // [rsp+B8h] [rbp-A0h]
  unsigned int v63; // [rsp+BCh] [rbp-9Ch]
  int v64; // [rsp+C0h] [rbp-98h]
  void *Src; // [rsp+C8h] [rbp-90h]
  int v66; // [rsp+D0h] [rbp-88h]
  unsigned int v67; // [rsp+D4h] [rbp-84h]
  unsigned int v68; // [rsp+D8h] [rbp-80h]
  int v69; // [rsp+DCh] [rbp-7Ch]
  void *v70; // [rsp+E0h] [rbp-78h]
  _QWORD v71[2]; // [rsp+E8h] [rbp-70h] BYREF
  DC *v72[2]; // [rsp+F8h] [rbp-60h] BYREF
  _QWORD v73[2]; // [rsp+108h] [rbp-50h] BYREF
  _QWORD v74[2]; // [rsp+118h] [rbp-40h] BYREF
  void *v75; // [rsp+128h] [rbp-30h]
  int v77; // [rsp+168h] [rbp+10h] BYREF
  void *v78; // [rsp+170h] [rbp+18h]

  v78 = a3;
  v77 = a2;
  memset(v60, 0, sizeof(v60));
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
  LODWORD(v61) = v17;
  v66 = v17;
  if ( a6 < (unsigned int)v17 )
    goto LABEL_75;
  if ( (unsigned int)v17 < 0x28 )
    goto LABEL_75;
  if ( a4[4] - 4 <= 1 )
    goto LABEL_75;
  if ( (int)a4[1] <= 0 )
    goto LABEL_75;
  v18 = a4[2];
  if ( !v18 )
    goto LABEL_75;
  HIDWORD(v60[0]) = a4[1];
  if ( v18 < 0 )
  {
    v18 = -v18;
    LODWORD(v60[3]) = 1;
  }
  LODWORD(v60[1]) = v18;
  v19 = *((unsigned __int16 *)a4 + 7);
  LODWORD(v60[0]) = v19;
  v20 = a4[4];
  v63 = v20;
  v67 = v20;
  v62 = a4[8];
  v68 = v62;
  Src = (char *)a4 + v17;
  if ( !v20 )
  {
    switch ( v19 )
    {
      case 1:
        LODWORD(v60[0]) = 1;
        v22 = 2;
        break;
      case 4:
        LODWORD(v60[0]) = 2;
        v22 = 16;
        break;
      case 8:
        LODWORD(v60[0]) = 3;
        v22 = 256;
        break;
      default:
        v21 = 0;
        if ( a5 != 1 )
          v21 = a5;
        v15 = v21;
        v22 = 0;
        v23 = 512;
        switch ( v19 )
        {
          case 24:
            LODWORD(v60[0]) = 5;
            goto LABEL_25;
          case 16:
            LODWORD(v60[0]) = 4;
            v24 = 31744;
            a5 = v21;
            goto LABEL_26;
          case 32:
            LODWORD(v60[0]) = 6;
LABEL_25:
            v16 = 8;
            a5 = v21;
            v24 = 0;
LABEL_26:
            v25 = 992;
            v26 = 31;
            goto LABEL_27;
        }
        goto LABEL_75;
    }
    v16 = 1;
    v23 = 1024;
    v24 = 0;
    goto LABEL_26;
  }
  if ( v20 != 3 )
  {
    if ( v20 != 10 )
      goto LABEL_75;
    DCOBJ::DCOBJ((DCOBJ *)v72, a1);
    if ( !v72[0] || !(unsigned int)DC::bIsCMYKColor(v72[0]) )
      goto LABEL_87;
    switch ( LODWORD(v60[0]) )
    {
      case 1:
        LODWORD(v60[0]) = 1;
        v22 = 2;
        break;
      case 4:
        LODWORD(v60[0]) = 2;
        v22 = 16;
        break;
      case 8:
        LODWORD(v60[0]) = 3;
        v22 = 256;
        break;
      case 0x20:
        LODWORD(v60[0]) = 6;
        v22 = 0;
        v23 = 512;
        v16 = 16;
LABEL_92:
        DCOBJ::~DCOBJ((DCOBJ *)v72);
        v25 = a5;
        v26 = a5;
        v24 = 0;
        goto LABEL_27;
      default:
LABEL_87:
        EngSetLastError(0x57u);
        DCOBJ::~DCOBJ((DCOBJ *)v72);
        return 0LL;
    }
    v16 = 1;
    v23 = 1024;
    goto LABEL_92;
  }
  if ( a6 < 0x34 || a5 )
    goto LABEL_75;
  Src = a4 + 10;
  v24 = a4[10];
  v25 = a4[11];
  v26 = a4[12];
  v22 = 0;
  v23 = 512;
  if ( v19 != 16 )
  {
    if ( v19 == 32 )
    {
      LODWORD(v60[0]) = 6;
      goto LABEL_27;
    }
LABEL_75:
    EngSetLastError(0x57u);
    return 0LL;
  }
  LODWORD(v60[0]) = 4;
LABEL_27:
  v58 = 0;
  v57 = 0LL;
  if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v57, v16, v22, 0LL, v24, v25, v26, v23, 1) )
  {
LABEL_96:
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v57);
    return 0LL;
  }
  v60[2] = *(_QWORD *)v57;
  v54 = 0LL;
  v55 = 0;
  v56 = 0;
  v27 = 0LL;
  v70 = 0LL;
  if ( (a11 & 2) != 0 )
  {
    *(_DWORD *)(v57 + 24) |= 0x8000u;
    v27 = v78;
    v70 = a8;
    if ( !v78 )
      goto LABEL_95;
    v78 = 0LL;
  }
  else if ( a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v74, a1);
    if ( v74[0] && (*(_DWORD *)(*(_QWORD *)(v74[0] + 48LL) + 40LL) & 0x8000) != 0 )
      LODWORD(v60[3]) |= 0x40000u;
    DCOBJ::~DCOBJ((DCOBJ *)v74);
  }
  v64 = a11 & 8;
  v69 = v64;
  v28 = a13;
  if ( !SURFMEM::bCreateDIB(
          (SURFMEM *)&v54,
          (struct _DEVBITMAPINFO *)v60,
          v27,
          v70,
          a9,
          a10,
          a12,
          0,
          1,
          v64 != 0,
          a13 != 0LL)
    || !*(_WORD *)(v54 + 100) && *(_QWORD *)(v54 + 192) && *(_DWORD *)(v54 + 64) != a7 )
  {
    goto LABEL_95;
  }
  if ( v78 )
  {
    v39 = *(_DWORD *)(v54 + 64);
    if ( v39 > a7 )
    {
LABEL_97:
      v40 = 87;
LABEL_99:
      EngSetLastError(v40);
      goto LABEL_95;
    }
    LODWORD(v70) = *(_DWORD *)(v54 + 64);
    v75 = *(void **)(v54 + 72);
    memmove(v75, v78, v39);
    v29 = a6;
    v30 = v61;
  }
  else
  {
    v29 = a6;
    v30 = v61;
  }
  if ( v62 && v62 < v22 )
    v22 = v62;
  if ( !v22 )
    goto LABEL_39;
  v34 = v29 - v30;
  if ( v15 )
  {
    if ( v15 != 1 )
      goto LABEL_39;
    v41 = 2LL * v22;
    if ( v41 > 0xFFFFFFFF || v34 < v41 )
      goto LABEL_97;
    DCOBJ::DCOBJ((DCOBJ *)v71, a1);
    if ( v71[0] )
    {
      v42 = (void *)AllocFreeTmpBuffer(2 * v22);
      v43 = v42;
      if ( v42 )
      {
        memmove(v42, Src, 2LL * v22);
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v77);
        v45 = *((_QWORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)v71) + 16);
        if ( !v45 )
          v45 = *(_QWORD *)(v44 + 1808);
        XEPALOBJ::vGetEntriesFrom(&v57, *(_QWORD *)(v46 + 88), v45, v43, v22);
        FreeTmpBuffer(v43);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v47);
        DCOBJ::~DCOBJ((DCOBJ *)v71);
        goto LABEL_39;
      }
      EngSetLastError(0xEu);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v71);
LABEL_95:
    SURFMEM::~SURFMEM((SURFMEM *)&v54);
    goto LABEL_96;
  }
  if ( 4 * (unsigned __int64)v22 > 0xFFFFFFFF )
    goto LABEL_97;
  v35 = 4 * v22;
  if ( v34 < (unsigned int)v35 )
    goto LABEL_97;
  v36 = (unsigned int *)AllocFreeTmpBuffer(v35);
  v37 = v36;
  if ( !v36 )
  {
    v40 = 14;
    goto LABEL_99;
  }
  memmove(v36, Src, 4LL * v22);
  if ( v63 - 10 <= 2 )
    XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v57, v37, v38, v22);
  else
    XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v57, (struct tagRGBQUAD *)v37, 0, v22);
  FreeTmpBuffer(v37);
  if ( (a11 & 4) != 0 && LODWORD(v60[0]) == 3 )
  {
    v31 = a1;
    DCOBJ::DCOBJ((DCOBJ *)v73, a1);
    v48 = 0;
    if ( v73[0] )
    {
      v49 = *(_QWORD *)(v73[0] + 48LL);
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v59);
      if ( *(_DWORD *)(v49 + 2108) == 3 && (*(_DWORD *)(v49 + 2172) & 0x100) != 0 && (*(_DWORD *)(v49 + 40) & 1) != 0 )
      {
        v48 = 1;
        XEPALOBJ::apalColorSet((XEPALOBJ *)&v57, *(struct PALETTE **)(v49 + 1808));
      }
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v50);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v73);
    if ( v48 )
      goto LABEL_40;
    goto LABEL_95;
  }
LABEL_39:
  v31 = a1;
LABEL_40:
  if ( v28 )
  {
    if ( v64 )
      *v28 = 0LL;
    else
      *v28 = *(_QWORD *)(v54 + 72);
  }
  *(_DWORD *)(v54 + 112) |= 0x4000000u;
  v55 |= 1u;
  v58 = 1;
  if ( (a11 & 0x10) != 0 )
  {
    DCDpiScaleValue = GreGetDCDpiScaleValue(v31);
    if ( DCDpiScaleValue > 1 )
    {
      v52 = (float)DCDpiScaleValue;
      LODWORD(v61) = HIDWORD(v60[0]) / DCDpiScaleValue;
      HIDWORD(v61) = LODWORD(v60[1]) / DCDpiScaleValue;
      v53 = v54;
      *(float *)(v54 + 660) = v52;
      *(float *)(v53 + 664) = v52;
      *(_DWORD *)(v53 + 116) |= 0x800u;
      *(_QWORD *)(v53 + 668) = v61;
    }
  }
  v32 = *(_QWORD *)(v54 + 32);
  SURFMEM::~SURFMEM((SURFMEM *)&v54);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v57);
  return v32;
}
