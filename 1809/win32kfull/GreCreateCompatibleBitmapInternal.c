/*
 * XREFs of GreCreateCompatibleBitmapInternal @ 0x1C009A270
 * Callers:
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0065580 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C006CF78 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     _DrawIconEx @ 0x1C006D774 (_DrawIconEx.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0077534 (CreateOrGetRedirectionBitmap.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C007B8B0 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     GreCreateDIBitmapComp @ 0x1C0100130 (GreCreateDIBitmapComp.c)
 *     NtGdiCreateCompatibleBitmap @ 0x1C010E100 (NtGdiCreateCompatibleBitmap.c)
 *     RecolorDeskPattern @ 0x1C01369F0 (RecolorDeskPattern.c)
 *     CreateCompatiblePublicDC @ 0x1C0151E08 (CreateCompatiblePublicDC.c)
 *     xxxSnapWindow @ 0x1C0155AF4 (xxxSnapWindow.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C0155FC8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     CreateSpb @ 0x1C0157150 (CreateSpb.c)
 *     ?CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z @ 0x1C01F732C (-CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z.c)
 *     MNCreateAnimationBitmap @ 0x1C01F9BAC (MNCreateAnimationBitmap.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C02228D0 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0223BD4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C022782C (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C009A850 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     hsurfCreateCompatibleSurface @ 0x1C009A870 (hsurfCreateCompatibleSurface.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C009B98C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00E41B0 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

HSURF __fastcall GreCreateCompatibleBitmapInternal(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned __int16 *a6)
{
  HSURF v6; // rbx
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v11; // r14
  int v12; // r15d
  BOOL v13; // eax
  int v14; // esi
  __int64 v16; // rdi
  struct SURFACE *v17; // rax
  __int64 v18; // rdx
  int v19; // edx
  __int64 *v20; // rax
  __int64 CompatibleSurface; // rax
  HSURF v22; // rdi
  struct SURFACE *v23; // r14
  int v24; // eax
  __int64 v25; // r15
  __int64 *v26; // rax
  __int64 v27; // r14
  bool v28; // zf
  float v29; // xmm6_4
  float v30; // xmm7_4
  __int64 v31; // rcx
  unsigned __int16 ScaledLogPixels; // ax
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rcx
  float v39; // [rsp+88h] [rbp-80h] BYREF
  float v40; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v41; // [rsp+90h] [rbp-78h]
  int v42; // [rsp+98h] [rbp-70h] BYREF
  int v43; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v44; // [rsp+A0h] [rbp-68h]
  int IsZero; // [rsp+A4h] [rbp-64h]
  unsigned __int64 v46; // [rsp+A8h] [rbp-60h]
  _QWORD v47[2]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v48[32]; // [rsp+C0h] [rbp-48h] BYREF
  char v49[8]; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v50; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v51; // [rsp+F8h] [rbp-10h]
  int v52; // [rsp+100h] [rbp-8h]
  _BYTE v53[48]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v54; // [rsp+138h] [rbp+30h]
  __int64 v55; // [rsp+140h] [rbp+38h]
  _BYTE v56[32]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v57; // [rsp+178h] [rbp+70h]
  BOOL v58; // [rsp+1F0h] [rbp+E8h]
  int v59; // [rsp+1F8h] [rbp+F0h]
  BOOL v60; // [rsp+200h] [rbp+F8h]

  v6 = 0LL;
  v8 = (int)a3;
  v9 = (int)a2;
  v59 = 0;
  v46 = __PAIR64__(a3, a2);
  v60 = (a4 & 0x1000000) == 0;
  LODWORD(v11) = 0;
  v12 = 0;
  if ( (a4 & 0x2000000) != 0 )
  {
    if ( (a4 & 0x1000000) != 0 )
    {
      v12 = 1;
      v59 = 1;
    }
    else
    {
      DbgPrint("GreCreateCompatibleBitmap: got CCB_KMSECTIONVIEW without CCB_NOVIDEOMEMORY...ignoring CCB_KMSECTIONVIEW\n");
    }
  }
  v44 = a4 & 0x4000000;
  v13 = (a4 & 0x4000000) != 0;
  v14 = (a4 >> 27) & 1;
  v58 = v13;
  if ( (int)v9 > 0 && (int)v8 > 0 && (unsigned __int64)(v8 * v9) <= 0x3FFFFFFF )
  {
    if ( !a1 )
      return (HSURF)GreCreateBitmap((unsigned int)v9, (unsigned int)v8, 1LL, 1LL, 0LL);
    v47[0] = 0LL;
    v47[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v48);
    XDCOBJ::vLock((XDCOBJ *)v47, a1);
    if ( !v47[0] )
      goto LABEL_56;
    v16 = *(_QWORD *)(v47[0] + 48LL);
    if ( (*(_DWORD *)(v16 + 40) & 0x8000) != 0 )
    {
      v17 = XDCOBJ::pSurfaceEff((XDCOBJ *)v47);
      if ( *(_DWORD *)(v18 + 32) == 1 )
      {
        v19 = *((_DWORD *)v17 + 24);
        v20 = (__int64 *)*((_QWORD *)v17 + 16);
        if ( !v20 )
          goto LABEL_18;
      }
      else
      {
        v19 = *(_DWORD *)(v16 + 2108);
        if ( (*(_DWORD *)(v16 + 2172) & 0x100) != 0 )
          goto LABEL_18;
        v20 = *(__int64 **)(v16 + 1808);
      }
      v11 = *v20;
LABEL_18:
      CompatibleSurface = hsurfCreateCompatibleSurface(v16, v19, v11, v9, v8, v60, v12, v58, 0, 0, 0, v14, 0, 0, 0LL);
      v22 = (HSURF)CompatibleSurface;
      if ( CompatibleSurface )
      {
        if ( !(unsigned int)GreSetBitmapOwner(CompatibleSurface, 2147483650LL) )
        {
          bDeleteSurface(v22);
          v22 = 0LL;
        }
      }
LABEL_55:
      v6 = v22;
LABEL_56:
      MDCOBJ::~MDCOBJ((MDCOBJ *)v47);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v48);
      return v6;
    }
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    v23 = *(struct SURFACE **)(v47[0] + 496LL);
    if ( !v23 )
      v23 = SURFACE::pdibDefault;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v49, (struct XDCOBJ *)v47);
    DCOBJ::DCOBJ((DCOBJ *)v53);
    v55 = 0LL;
    v50 = 0LL;
    v54 = 0LL;
    DEVLOCKOBJ_bPrepareTrgDcoWrap((DEVLOCKOBJ *)&v50);
    v24 = *(_DWORD *)(v16 + 40);
    v52 = 1;
    if ( (v24 & 1) != 0 )
    {
      *(_QWORD *)&v50 = *(_QWORD *)(v16 + 48);
      v51 = v16;
      GreAcquireSemaphore(v50);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v50, 11LL);
    }
    v25 = v47[0];
    if ( *(_DWORD *)(v47[0] + 32LL) == 1 )
    {
      v26 = (__int64 *)*((_QWORD *)v23 + 16);
      v41 = *((_DWORD *)v23 + 24);
      if ( v26 )
      {
LABEL_27:
        v27 = *v26;
LABEL_31:
        v29 = 0.0;
        v39 = 0.0;
        v30 = 0.0;
        v40 = 0.0;
        if ( a6 )
        {
          v31 = *a6;
          if ( (_WORD)v31 != 96 )
          {
            ScaledLogPixels = GreGetScaledLogPixels(v31);
            v25 = v47[0];
            v29 = (float)ScaledLogPixels / 96.0;
            v40 = v29;
            v39 = v29;
            v30 = v29;
          }
        }
        else
        {
          v33 = *(_DWORD *)(v47[0] + 520LL);
          if ( (v33 & 1) != 0 && (v33 & 2) == 0 )
          {
            v30 = *(float *)(v47[0] + 528LL);
            v39 = *(float *)(v47[0] + 524LL);
            v29 = v39;
            v40 = v30;
          }
        }
        IsZero = EFLOAT::bIsZero((EFLOAT *)&v39);
        if ( !IsZero || !(unsigned int)EFLOAT::bIsZero((EFLOAT *)&v40) )
        {
          v42 = v9;
          v43 = v8;
          bFToL(v34, &v42, 6LL);
          bFToL(v35, &v43, v36);
          LODWORD(v9) = v42;
          LODWORD(v8) = v43;
        }
        if ( v44 )
        {
          if ( (*(_DWORD *)(v16 + 40) & 0x4000000) != 0 )
          {
            if ( a5 )
            {
              v37 = *(_QWORD *)(v16 + 1800);
              if ( v37 )
              {
                *(_QWORD *)(v37 + 104) = *a5;
                v25 = v47[0];
              }
            }
          }
        }
        v22 = (HSURF)hsurfCreateCompatibleSurface(
                       *(_QWORD *)(v25 + 48),
                       v41,
                       v27,
                       v9,
                       v8,
                       v60,
                       v59,
                       v58,
                       0,
                       0,
                       0,
                       v14,
                       0,
                       0,
                       0LL);
        if ( !IsZero || !(unsigned int)EFLOAT::bIsZero((EFLOAT *)&v40) )
        {
          SURFREF::SURFREF((SURFREF *)v56, v22);
          v38 = v57;
          if ( v57 )
          {
            *(_DWORD *)(v57 + 116) |= 0x800u;
            *(_QWORD *)(v38 + 668) = v46;
            *(float *)(v38 + 660) = v29;
            *(float *)(v38 + 664) = v30;
            if ( v57 )
              DEC_SHARE_REF_CNT(v57);
          }
          UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v56);
        }
        if ( v22 && !(unsigned int)GreSetBitmapOwner(v22, 2147483650LL) )
        {
          bDeleteSurface(v22);
          v22 = 0LL;
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v50);
        DCOBJ::~DCOBJ((DCOBJ *)v53);
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v49);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
        goto LABEL_55;
      }
    }
    else
    {
      v28 = (*(_DWORD *)(v16 + 2172) & 0x100) == 0;
      v41 = *(_DWORD *)(v16 + 2108);
      if ( v28 )
      {
        v26 = *(__int64 **)(v16 + 1808);
        goto LABEL_27;
      }
    }
    LODWORD(v27) = 0;
    goto LABEL_31;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
