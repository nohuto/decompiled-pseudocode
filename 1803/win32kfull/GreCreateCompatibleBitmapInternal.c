/*
 * XREFs of GreCreateCompatibleBitmapInternal @ 0x1C0096D9C
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C00110A4 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     _DrawIconEx @ 0x1C0012DE0 (_DrawIconEx.c)
 *     _InternalGetIconInfo @ 0x1C0015C34 (_InternalGetIconInfo.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0074C84 (CreateOrGetRedirectionBitmap.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C009B400 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     NtGdiCreateCompatibleBitmap @ 0x1C00F3C70 (NtGdiCreateCompatibleBitmap.c)
 *     GreCreateDIBitmapComp @ 0x1C0102D6C (GreCreateDIBitmapComp.c)
 *     RecolorDeskPattern @ 0x1C0113100 (RecolorDeskPattern.c)
 *     CreateCompatiblePublicDC @ 0x1C0133238 (CreateCompatiblePublicDC.c)
 *     xxxSnapWindow @ 0x1C0134044 (xxxSnapWindow.c)
 *     CreateSpb @ 0x1C0136078 (CreateSpb.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01B0B28 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z @ 0x1C01D298C (-CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z.c)
 *     MNCreateAnimationBitmap @ 0x1C01D4FF8 (MNCreateAnimationBitmap.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C01FA9E8 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C01FB318 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C01FE90C (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 * Callees:
 *     hsurfCreateCompatibleSurface @ 0x1C0008EB4 (hsurfCreateCompatibleSurface.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C008F90C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0096D1C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 */

__int64 __fastcall GreCreateCompatibleBitmapInternal(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned __int16 *a6)
{
  __int64 v6; // rsi
  int v7; // r14d
  __int64 v9; // r15
  __int64 v10; // r12
  BOOL v12; // r13d
  int v13; // edi
  __int64 v14; // rbx
  struct SURFACE *v15; // r14
  int v16; // eax
  __int64 *v17; // rsi
  __int64 v18; // r13
  bool v19; // zf
  __int64 *v20; // rax
  float v21; // xmm6_4
  float v22; // xmm7_4
  int v23; // eax
  __int64 v24; // rcx
  BOOL IsZero; // r14d
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 CompatibleSurface; // rbx
  __int64 v29; // rdi
  __int64 v31; // rcx
  struct SURFACE *v32; // rax
  __int64 v33; // r8
  __int64 v34; // rdx
  unsigned int v35; // edx
  __int64 *v36; // rax
  unsigned __int16 ScaledLogPixels; // ax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  float v43; // [rsp+88h] [rbp-80h] BYREF
  float v44; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 *v45; // [rsp+90h] [rbp-78h] BYREF
  int v46; // [rsp+98h] [rbp-70h]
  unsigned int v47; // [rsp+9Ch] [rbp-6Ch]
  int v48; // [rsp+A0h] [rbp-68h] BYREF
  int v49; // [rsp+A4h] [rbp-64h] BYREF
  int v50; // [rsp+A8h] [rbp-60h]
  BOOL v51; // [rsp+ACh] [rbp-5Ch]
  unsigned __int64 v52; // [rsp+B0h] [rbp-58h]
  _BYTE v53[16]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v54; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v55; // [rsp+D8h] [rbp-30h]
  int v56; // [rsp+E0h] [rbp-28h]
  __int64 v57; // [rsp+E8h] [rbp-20h]
  __int64 v58; // [rsp+F0h] [rbp-18h]
  __int64 v59; // [rsp+F8h] [rbp-10h]
  __int64 v60; // [rsp+100h] [rbp-8h]
  int v61; // [rsp+180h] [rbp+78h] BYREF
  unsigned int v62; // [rsp+188h] [rbp+80h]
  unsigned int v63; // [rsp+190h] [rbp+88h]

  v6 = 0LL;
  v7 = 0;
  v9 = (int)a3;
  v10 = (int)a2;
  v61 = 0;
  v52 = __PAIR64__(a3, a2);
  v62 = (a4 & 0x1000000) == 0;
  if ( (a4 & 0x2000000) != 0 )
  {
    if ( (a4 & 0x1000000) != 0 )
    {
      v7 = 1;
      v61 = 1;
    }
    else
    {
      DbgPrint("GreCreateCompatibleBitmap: got CCB_KMSECTIONVIEW without CCB_NOVIDEOMEMORY...ignoring CCB_KMSECTIONVIEW\n");
    }
  }
  v50 = a4 & 0x4000000;
  v12 = (a4 & 0x4000000) != 0;
  v13 = (a4 >> 27) & 1;
  v51 = v12;
  if ( (int)v10 <= 0 || (int)v9 <= 0 || (unsigned __int64)(v9 * v10) > 0x3FFFFFFF )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    if ( a1 )
    {
      v45 = 0LL;
      v46 = 0;
      v47 = 0;
      XDCOBJ::vLock((XDCOBJ *)&v45, a1);
      if ( !v45 )
        return 0LL;
      v14 = v45[6];
      if ( (*(_DWORD *)(v14 + 40) & 0x8000) == 0 )
      {
        GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        v15 = (struct SURFACE *)v45[63];
        if ( !v15 )
          v15 = SURFACE::pdibDefault;
        NEEDGRELOCK::vLock((NEEDGRELOCK *)v53, (struct XDCOBJ *)&v45);
        v16 = *(_DWORD *)(v14 + 40);
        v58 = 0LL;
        v54 = 0LL;
        v60 = 0LL;
        v59 = 0LL;
        v57 = 0LL;
        v56 = 1;
        if ( (v16 & 1) != 0 )
        {
          *(_QWORD *)&v54 = *(_QWORD *)(v14 + 48);
          v55 = v14;
          GreAcquireSemaphore(v54);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v54, 11LL);
        }
        v17 = v45;
        v18 = 0LL;
        if ( *((_DWORD *)v45 + 8) == 1 )
        {
          v20 = (__int64 *)*((_QWORD *)v15 + 16);
          v63 = *((_DWORD *)v15 + 24);
          if ( !v20 )
            goto LABEL_16;
        }
        else
        {
          v19 = (*(_DWORD *)(v14 + 2164) & 0x100) == 0;
          v63 = *(_DWORD *)(v14 + 2100);
          if ( !v19 )
          {
LABEL_16:
            v21 = 0.0;
            v43 = 0.0;
            v22 = 0.0;
            v44 = 0.0;
            if ( a6 )
            {
              v31 = *a6;
              if ( (_WORD)v31 != 96 )
              {
                ScaledLogPixels = GreGetScaledLogPixels(v31);
                v17 = v45;
                v21 = (float)ScaledLogPixels / 96.0;
                v44 = v21;
                v43 = v21;
                v22 = v21;
              }
            }
            else
            {
              v23 = *((_DWORD *)v45 + 132);
              if ( (v23 & 1) != 0 && (v23 & 2) == 0 )
              {
                v22 = *((float *)v45 + 134);
                v43 = *((float *)v45 + 133);
                v21 = v43;
                v44 = v22;
              }
            }
            IsZero = EFLOAT::bIsZero((EFLOAT *)&v43);
            if ( !IsZero || !EFLOAT::bIsZero((EFLOAT *)&v44) )
            {
              v48 = v10;
              v49 = v9;
              bFToL(v24, &v48, 6LL);
              bFToL(v38, &v49, v39);
              LODWORD(v10) = v48;
              v26 = 0LL;
              LODWORD(v9) = v49;
            }
            if ( v50 != (_DWORD)v26 && (*(_DWORD *)(v14 + 40) & 0x4000000) != 0 )
            {
              if ( a5 )
              {
                v40 = *(_QWORD *)(v14 + 1792);
                if ( v40 )
                {
                  *(_QWORD *)(v40 + 104) = *a5;
                  v17 = v45;
                }
              }
            }
            CompatibleSurface = hsurfCreateCompatibleSurface(
                                  v17[6],
                                  v63,
                                  v18,
                                  v10,
                                  v9,
                                  v62,
                                  v61,
                                  v51,
                                  v26,
                                  v26,
                                  v26,
                                  v13,
                                  v26,
                                  v26,
                                  v26);
            if ( !IsZero || !EFLOAT::bIsZero((EFLOAT *)&v44) )
            {
              LOBYTE(v27) = 5;
              v41 = HmgShareLockCheck(CompatibleSurface, v27);
              if ( v41 )
              {
                v42 = v52;
                *(_DWORD *)(v41 + 116) |= 0x800u;
                *(_QWORD *)(v41 + 668) = v42;
                *(float *)(v41 + 660) = v21;
                *(float *)(v41 + 664) = v22;
                DEC_SHARE_REF_CNT(v41);
              }
            }
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v54);
            NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v53);
            EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
            GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
            goto LABEL_24;
          }
          v20 = *(__int64 **)(v14 + 1800);
        }
        v18 = *v20;
        goto LABEL_16;
      }
      v32 = XDCOBJ::pSurfaceEff((XDCOBJ *)&v45);
      if ( *(_DWORD *)(v34 + 32) == 1 )
      {
        v35 = *((_DWORD *)v32 + 24);
        v36 = (__int64 *)*((_QWORD *)v32 + 16);
        if ( !v36 )
          goto LABEL_40;
      }
      else
      {
        v35 = *(_DWORD *)(v14 + 2100);
        if ( (*(_DWORD *)(v14 + 2164) & 0x100) != 0 )
        {
LABEL_40:
          CompatibleSurface = hsurfCreateCompatibleSurface(
                                v14,
                                v35,
                                v6,
                                v10,
                                v9,
                                v62,
                                v7,
                                v12,
                                v33,
                                v33,
                                v33,
                                v13,
                                v33,
                                v33,
                                v33);
LABEL_24:
          if ( !(unsigned int)GreSetBitmapOwner(CompatibleSurface, 2147483650LL) )
          {
            bDeleteSurface(CompatibleSurface);
            CompatibleSurface = 0LL;
          }
          if ( v45 )
          {
            XDCOBJ::RestoreAttributes((XDCOBJ *)&v45);
            v61 = 0;
            v29 = *v45;
            HmgDecrementExclusiveReferenceCountEx(v45, v47, &v61);
            if ( v61 )
              bDeleteDCInternalEx(v29, 0LL);
          }
          return CompatibleSurface;
        }
        v36 = *(__int64 **)(v14 + 1800);
      }
      v6 = *v36;
      goto LABEL_40;
    }
    return GreCreateBitmap((unsigned int)v10, (unsigned int)v9, 1LL, 1LL, 0LL);
  }
}
