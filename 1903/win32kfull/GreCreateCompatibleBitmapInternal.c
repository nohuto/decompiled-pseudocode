/*
 * XREFs of GreCreateCompatibleBitmapInternal @ 0x1C0033C00
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C002C3F4 (CreateOrGetRedirectionBitmap.c)
 *     _DrawIconEx @ 0x1C002CFB4 (_DrawIconEx.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C002FB20 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00700F0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C008C884 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     NtGdiCreateCompatibleBitmap @ 0x1C01165B0 (NtGdiCreateCompatibleBitmap.c)
 *     GreCreateDIBitmapComp @ 0x1C012C748 (GreCreateDIBitmapComp.c)
 *     RecolorDeskPattern @ 0x1C01413C0 (RecolorDeskPattern.c)
 *     CreateCompatiblePublicDC @ 0x1C0157E00 (CreateCompatiblePublicDC.c)
 *     xxxSnapWindow @ 0x1C015CA8C (xxxSnapWindow.c)
 *     CreateSpb @ 0x1C015D8BC (CreateSpb.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E8748 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z @ 0x1C020D6B4 (-CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z.c)
 *     MNCreateAnimationBitmap @ 0x1C0210850 (MNCreateAnimationBitmap.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C023AFB4 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023C0B4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C023F52C (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     GreEscCreateScaledCompatibleBitmap @ 0x1C0299054 (GreEscCreateScaledCompatibleBitmap.c)
 * Callees:
 *     hsurfCreateCompatibleSurface @ 0x1C0034F34 (hsurfCreateCompatibleSurface.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0036028 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C007F0E4 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     bFToL @ 0x1C01014BC (bFToL.c)
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
  struct SURFACE *v15; // rsi
  __int64 v16; // rcx
  int v17; // eax
  DC *v18; // r14
  __int64 v19; // r13
  int v20; // esi
  __int64 *v21; // rax
  float v22; // xmm7_4
  float v23; // xmm8_4
  int v24; // eax
  float v25; // xmm0_4
  __int64 CompatibleSurface; // rax
  __int64 v27; // rdx
  __int64 v28; // rbx
  DC *v29; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v31; // rdi
  struct SURFACE *v33; // rax
  __int64 v34; // r8
  __int64 v35; // rdx
  int v36; // edx
  __int64 *v37; // rax
  __int64 v38; // rax
  unsigned __int16 ScaledLogPixels; // ax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  DC *v45; // [rsp+88h] [rbp-80h] BYREF
  int v46; // [rsp+90h] [rbp-78h]
  unsigned int v47; // [rsp+94h] [rbp-74h]
  int v48; // [rsp+98h] [rbp-70h] BYREF
  int v49; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v50; // [rsp+A0h] [rbp-68h]
  BOOL v51; // [rsp+A4h] [rbp-64h]
  unsigned __int64 v52; // [rsp+A8h] [rbp-60h]
  _BYTE v53[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v54; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v55; // [rsp+C8h] [rbp-40h]
  int v56; // [rsp+D0h] [rbp-38h]
  _QWORD v57[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int16 v58; // [rsp+E8h] [rbp-20h]
  __int64 v59; // [rsp+F0h] [rbp-18h]
  __int64 v60; // [rsp+F8h] [rbp-10h]
  int v61; // [rsp+180h] [rbp+78h] BYREF
  int v62; // [rsp+188h] [rbp+80h]
  BOOL v63; // [rsp+190h] [rbp+88h]

  LODWORD(v6) = 0;
  v7 = 0;
  v9 = (int)a3;
  v10 = (int)a2;
  v62 = 0;
  v52 = __PAIR64__(a3, a2);
  v63 = (a4 & 0x1000000) == 0;
  if ( (a4 & 0x2000000) != 0 )
  {
    if ( (a4 & 0x1000000) != 0 )
    {
      v7 = 1;
      v62 = 1;
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
      v14 = *((_QWORD *)v45 + 6);
      if ( (*(_DWORD *)(v14 + 40) & 0x8000) == 0 )
      {
        GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
        v15 = (struct SURFACE *)*((_QWORD *)v45 + 62);
        if ( !v15 )
          v15 = SURFACE::pdibDefault;
        NEEDGRELOCK::vLock((NEEDGRELOCK *)v53, (struct XDCOBJ *)&v45);
        v17 = *(_DWORD *)(v14 + 40);
        v57[1] = 0LL;
        v58 = 256;
        v54 = 0LL;
        v60 = 0LL;
        v59 = 0LL;
        v57[0] = 0LL;
        v56 = 1;
        if ( (v17 & 1) != 0 )
        {
          *(_QWORD *)&v54 = *(_QWORD *)(v14 + 48);
          v55 = v14;
          GreAcquireSemaphore(v54);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v54, 11LL);
        }
        v18 = v45;
        LODWORD(v19) = 0;
        if ( *((_DWORD *)v45 + 8) == 1 )
        {
          v21 = (__int64 *)*((_QWORD *)v15 + 16);
          v16 = *((unsigned int *)v15 + 24);
          v20 = *((_DWORD *)v15 + 24);
          if ( !v21 )
          {
LABEL_16:
            v22 = 0.0;
            v23 = 0.0;
            if ( a6 )
            {
              v16 = *a6;
              v25 = 0.0;
              if ( (_WORD)v16 == 96 )
                goto LABEL_19;
              ScaledLogPixels = GreGetScaledLogPixels(v16);
              v18 = v45;
              v22 = (float)ScaledLogPixels / 96.0;
              v25 = v22;
              v23 = v22;
            }
            else
            {
              v24 = *((_DWORD *)v45 + 130);
              if ( (v24 & 1) == 0 || (v24 & 2) != 0 )
              {
                v25 = 0.0;
                goto LABEL_19;
              }
              v23 = *((float *)v45 + 132);
              v22 = *((float *)v45 + 131);
              v25 = v23;
            }
            if ( v22 != 0.0 )
            {
LABEL_62:
              v48 = v10;
              v49 = v9;
              bFToL(v16, &v48, 6LL);
              bFToL(v40, &v49, v41);
              LODWORD(v10) = v48;
              LODWORD(v9) = v49;
LABEL_20:
              if ( v50 )
              {
                if ( (*(_DWORD *)(v14 + 40) & 0x4000000) != 0 )
                {
                  if ( a5 )
                  {
                    v42 = *(_QWORD *)(v14 + 1800);
                    if ( v42 )
                    {
                      *(_QWORD *)(v42 + 104) = *a5;
                      v18 = v45;
                    }
                  }
                }
              }
              CompatibleSurface = hsurfCreateCompatibleSurface(
                                    *((_QWORD *)v18 + 6),
                                    v20,
                                    v19,
                                    v10,
                                    v9,
                                    v63,
                                    v62,
                                    v51,
                                    0,
                                    0,
                                    0,
                                    v13,
                                    0,
                                    0,
                                    0LL);
              v28 = CompatibleSurface;
              if ( v22 != 0.0 || v23 != 0.0 )
              {
                LOBYTE(v27) = 5;
                v43 = HmgShareLockCheck(CompatibleSurface, v27);
                if ( v43 )
                {
                  v44 = v52;
                  *(_DWORD *)(v43 + 116) |= 0x800u;
                  *(_QWORD *)(v43 + 668) = v44;
                  *(float *)(v43 + 660) = v22;
                  *(float *)(v43 + 664) = v23;
                  DEC_SHARE_REF_CNT(v43);
                }
              }
              if ( v28 && !(unsigned int)GreSetBitmapOwner(v28, 2147483650LL) )
              {
                bDeleteSurface(v28);
                v28 = 0LL;
              }
              DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v54);
              if ( v57[0] )
                DLODCOBJ::vUnlock((DLODCOBJ *)v57);
              NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v53);
              EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
              GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
LABEL_29:
              v29 = v45;
              if ( v45 )
              {
                if ( v46 && (*((_DWORD *)v45 + 11) & 2) != 0 )
                {
                  if ( !v47 )
                  {
                    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v45);
                    v29 = v45;
                    if ( UserAttr )
                    {
                      DC::RestoreAttributes(v45, UserAttr);
                      v29 = v45;
                    }
                  }
                  *((_DWORD *)v29 + 11) &= ~2u;
                  v29 = v45;
                  v46 = 0;
                }
                v61 = 0;
                v31 = *(_QWORD *)v29;
                HmgDecrementExclusiveReferenceCountEx(v29, v47, &v61);
                if ( v61 )
                  bDeleteDCInternalEx(v31, 0LL);
              }
              return v28;
            }
LABEL_19:
            if ( v25 == 0.0 )
              goto LABEL_20;
            goto LABEL_62;
          }
        }
        else
        {
          v20 = *(_DWORD *)(v14 + 2108);
          if ( (*(_DWORD *)(v14 + 2172) & 0x100) != 0 )
            goto LABEL_16;
          v21 = *(__int64 **)(v14 + 1808);
        }
        v19 = *v21;
        goto LABEL_16;
      }
      v33 = XDCOBJ::pSurfaceEff((XDCOBJ *)&v45);
      if ( *(_DWORD *)(v35 + 32) == 1 )
      {
        v36 = *((_DWORD *)v33 + 24);
        v37 = (__int64 *)*((_QWORD *)v33 + 16);
        if ( !v37 )
          goto LABEL_49;
      }
      else
      {
        v36 = *(_DWORD *)(v14 + 2108);
        if ( (*(_DWORD *)(v14 + 2172) & 0x100) != 0 )
        {
LABEL_49:
          v38 = hsurfCreateCompatibleSurface(v14, v36, v6, v10, v9, v63, v7, v12, v34, v34, v34, v13, v34, v34, v34);
          v28 = v38;
          if ( v38 && !(unsigned int)GreSetBitmapOwner(v38, 2147483650LL) )
          {
            bDeleteSurface(v28);
            v28 = 0LL;
          }
          goto LABEL_29;
        }
        v37 = *(__int64 **)(v14 + 1808);
      }
      v6 = *v37;
      goto LABEL_49;
    }
    return GreCreateBitmap((unsigned int)v10, (unsigned int)v9, 1LL, 1LL, 0LL);
  }
}
