/*
 * XREFs of GreTransferSpriteStateToDwmState @ 0x1C00C83F0
 * Callers:
 *     zzzComposeDesktop @ 0x1C00C8E7C (zzzComposeDesktop.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C000246C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00024A0 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     UserGetMiniWinInfo @ 0x1C000866C (UserGetMiniWinInfo.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C000AF54 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C000B964 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C000B9F0 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     DwmAsyncUpdateSprite @ 0x1C000BABC (DwmAsyncUpdateSprite.c)
 *     GreDeleteSprite @ 0x1C000DC58 (GreDeleteSprite.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C000E604 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C005A330 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0074E04 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     DwmAsyncCreateSprite @ 0x1C007C744 (DwmAsyncCreateSprite.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C007CA08 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C007D1FC (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C00963A8 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C00A13E8 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C00A1CDC (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C00A1E9C (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C00C8B2C (UserIsWindowOnDesktopAndComposed.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C011AACC (UserIsWindowWithNoRedirectionBitmap.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C011E898 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0126238 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     UserGetHwndProcess @ 0x1C01299E4 (UserGetHwndProcess.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015F07C (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall GreTransferSpriteStateToDwmState(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  HDEV v3; // rsi
  unsigned int v4; // edi
  __int64 v5; // r12
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // ecx
  unsigned int v10; // edx
  HSPRITE DwmSpriteObj; // rbx
  __int64 v12; // rdx
  struct DWMSPRITE *v13; // r13
  __int64 *v14; // rax
  __int64 v15; // r14
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rcx
  int v23; // ebx
  void *v24; // rax
  int v25; // ecx
  int v26; // eax
  int v27; // edx
  __int64 v28; // rsi
  __int64 v29; // r14
  __int64 v30; // r15
  __int64 v31; // rcx
  int v32; // ebx
  BOOL v33; // edi
  void *v34; // rax
  int updated; // eax
  struct SFMLOGICALSURFACE *v36; // rbx
  __int64 v37; // r9
  UINT_PTR v38; // r9
  HSURF Surface; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  struct _SURFOBJ *v42; // rdx
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rcx
  SURFACE *v46; // rdi
  BOOL (__stdcall *v47)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rbx
  struct _EPROCESS *HwndProcess; // rax
  _QWORD *v49; // rbx
  _QWORD *v50; // r14
  __int64 v51; // rbx
  __int64 v52; // rcx
  __int64 v53; // r14
  struct DwmState *v54; // rbx
  __int64 v55; // r8
  int v57; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v58; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v59; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v60; // [rsp+6Ch] [rbp-94h] BYREF
  int v61; // [rsp+70h] [rbp-90h] BYREF
  int v62; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v63; // [rsp+78h] [rbp-88h] BYREF
  __int64 v64; // [rsp+80h] [rbp-80h]
  __int64 v65; // [rsp+88h] [rbp-78h]
  __int64 v66; // [rsp+90h] [rbp-70h] BYREF
  struct SFMLOGICALSURFACE *v67; // [rsp+98h] [rbp-68h]
  _BYTE v68[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v69[8]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v70[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v71[32]; // [rsp+C0h] [rbp-40h] BYREF
  struct DWMSPRITE *v72; // [rsp+E0h] [rbp-20h]
  __int128 v73[9]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v74; // [rsp+180h] [rbp+80h] BYREF
  int v75; // [rsp+188h] [rbp+88h]
  int v76; // [rsp+18Ch] [rbp+8Ch]
  struct tagRECT v77; // [rsp+190h] [rbp+90h] BYREF

  v2 = a2;
  v65 = a2;
  v64 = a1;
  v3 = (HDEV)a1;
  v66 = a1;
  v4 = 1;
  ENTER_GRE_DWM_CRIT(a1, &v62);
  v5 = (__int64)(v3 + 22);
  if ( *((_DWORD *)v3 + 37) )
    v5 = **((_QWORD **)v3 + 19) + 88LL;
  v6 = *(_QWORD *)(v5 + 8);
  v58 = 0;
  while ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 72);
    if ( v7 && (unsigned int)UserIsWindowOnDesktopAndComposed(v7, v2) )
    {
      if ( *((_DWORD *)v3 + 37) )
      {
        if ( (*(_DWORD *)v6 & 0x20) == 0 )
        {
          v8 = *(_QWORD *)(v6 + 8);
          v9 = 0;
          v10 = *(_DWORD *)(v8 + 20);
          if ( v10 )
          {
            while ( (**(_DWORD **)(v8 + 8LL * v9 + 24) & 0x20) == 0 )
            {
              if ( ++v9 >= v10 )
                goto LABEL_14;
            }
            v6 = *(_QWORD *)(v8 + 8LL * v9 + 24);
          }
        }
      }
LABEL_14:
      DwmSpriteObj = (HSPRITE)hspCreateDwmSpriteObj(*(HWND *)(v6 + 72), v2, v3, 0);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v71);
      v72 = 0LL;
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v71, DwmSpriteObj);
      v13 = v72;
      if ( !v72 )
      {
        v4 = 0;
LABEL_45:
        v6 = *(_QWORD *)(v6 + 24);
        if ( v13 )
          _InterlockedDecrement((volatile signed __int32 *)v13 + 3);
        v72 = 0LL;
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v71);
        goto LABEL_50;
      }
      v14 = *(__int64 **)(v6 + 16);
      v15 = *((_QWORD *)v72 + 21);
      v67 = (struct SFMLOGICALSURFACE *)v15;
      v16 = *v14;
      *((_DWORD *)v72 + 14) = *(_DWORD *)(v6 + 112) + *(_DWORD *)(v16 + 2584);
      *((_DWORD *)v13 + 15) = *(_DWORD *)(v16 + 2588) + *(_DWORD *)(v6 + 116);
      *((_DWORD *)v13 + 16) = *(_DWORD *)(v6 + 112) + *(_DWORD *)(v16 + 2584);
      *((_DWORD *)v13 + 17) = *(_DWORD *)(v16 + 2588) + *(_DWORD *)(v6 + 116);
      *((_QWORD *)v13 + 9) = *(_QWORD *)(v6 + 224);
      *((_DWORD *)v13 + 20) = *(_DWORD *)(v6 + 232);
      if ( (*(_DWORD *)v6 & 1) != 0
        || (*(_DWORD *)v6 & 0x10) != 0
        || *(_DWORD *)(v6 + 80) >= *(_DWORD *)(v6 + 88)
        || (v17 = 1, *(_DWORD *)(v6 + 84) >= *(_DWORD *)(v6 + 92)) )
      {
        v17 = 0;
      }
      *((_DWORD *)v13 + 41) = v17 | *((_DWORD *)v13 + 41) & 0xFFFFFFFE;
      v18 = *(_QWORD *)(v6 + 128);
      if ( v18 )
      {
        *((_DWORD *)v13 + 16) += *(_DWORD *)(v18 + 32);
        *((_DWORD *)v13 + 17) += *(_DWORD *)(*(_QWORD *)(v6 + 128) + 36LL);
        v19 = *(_QWORD *)(v6 + 240);
        if ( v19 )
        {
          LOBYTE(v12) = 5;
          v20 = HmgReferenceCheckLock(v19, v12, 0LL);
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v15, v3, (struct _SURFOBJ *)(v20 + 24));
          *(_DWORD *)(v15 + 252) |= 1u;
          *(_DWORD *)(v15 + 252) ^= ((unsigned __int8)*(_DWORD *)(v15 + 252) ^ (unsigned __int8)(*(_DWORD *)v6 >> 1)) & 0x40;
          goto LABEL_24;
        }
        Surface = hsurfSpCreateSurface(v3, (struct tagSIZE *)(*(_QWORD *)(v6 + 128) + 32LL));
        if ( Surface )
        {
          LOBYTE(v40) = 5;
          v41 = HmgReferenceCheckLock(Surface, v40, 0LL);
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v15, v3, (struct _SURFOBJ *)(v41 + 24));
          v42 = *(struct _SURFOBJ **)(v15 + 184);
          v70[0] = 0LL;
          SURFREFVIEW::bMap((SURFREFVIEW *)v70, v42);
          if ( v70[0] )
          {
            v43 = *(_QWORD *)(v6 + 128);
            v74 = 0LL;
            v75 = *(_DWORD *)(v43 + 32);
            v44 = *(_DWORD *)(v43 + 36);
            v45 = *(_QWORD *)(v15 + 184);
            v76 = v44;
            v63 = 0LL;
            v46 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v45);
            if ( (*((_DWORD *)v46 + 28) & 0x400) != 0 )
              v47 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v3 + 355);
            else
              v47 = EngCopyBits;
            if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v66) )
              v47 = RedirCopyBits;
            HwndProcess = (struct _EPROCESS *)UserGetHwndProcess(*((_QWORD *)v13 + 5));
            SURFACE::vAppContainerOwner(v46, HwndProcess);
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *, __int64 *))v47)(
              *(_QWORD *)(v15 + 184),
              *(_QWORD *)(v6 + 128),
              0LL,
              0LL,
              &v74,
              &v63);
          }
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v70);
          goto LABEL_24;
        }
        v4 = 0;
      }
      else
      {
LABEL_24:
        memset(v73, 0, 0x88uLL);
        v57 = 39168;
        CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v69, (struct DWMSPRITE *)((char *)v13 + 88));
        UserGetMiniWinInfo(*((_QWORD *)v13 + 5), (struct tagMINIWINDOWINFO *)v73, &v57);
        v21 = *(_QWORD *)v13;
        v22 = *(_DWORD *)(v15 + 252) & 0xC;
        v23 = v22 | *((_DWORD *)v13 + 41) & 1 | (2 * (*(_DWORD *)(v15 + 252) & 1 | (4 * (*((_DWORD *)v13 + 41) & 0xE))));
        v24 = (void *)UserReferenceDwmApiPort(v22);
        if ( (int)DwmAsyncCreateSprite(
                    v24,
                    v21,
                    *((_QWORD *)v13 + 5),
                    (struct DWMSPRITE *)((char *)v13 + 56),
                    v23,
                    (__int64)v73,
                    v57) < 0 )
        {
          v4 = 0;
        }
        else
        {
          v4 = 1;
          if ( *(_QWORD *)(v15 + 184) || (unsigned int)UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v6 + 72)) )
          {
            *(_DWORD *)(v15 + 252) |= 8u;
            SFMLOGICALSURFACE::StartSfmStateTracking((SFMLOGICALSURFACE *)v15, v3, gpSfmState);
            SFMLOGICALSURFACE::GetRedirectionInfo(
              (SFMLOGICALSURFACE *)v15,
              (enum _HLSURF_REDIRECTIONSTYLE *)&v61,
              &v60,
              &v59,
              0LL,
              0LL);
            v25 = *(_DWORD *)(v15 + 252);
            v26 = *((_DWORD *)v13 + 41);
            v27 = v25 & 1;
            v28 = *((_QWORD *)v13 + 13);
            *((_QWORD *)v13 + 13) = 0LL;
            v29 = *(_QWORD *)v15;
            v30 = *(_QWORD *)v13;
            v31 = v25 & 0xC;
            v32 = v31 | v26 & 1 | (2 * (v27 | (4 * (v26 & 0xE))));
            v33 = *((_DWORD *)v13 + 29) >= 1;
            v34 = (void *)UserReferenceDwmApiPort(v31);
            updated = DwmAsyncUpdateSprite(v34, v30, v29, v32, (__int64)v13 + 72, v73, v61, v60, v59, v33, v28);
            v36 = v67;
            v4 = updated >= 0;
            *((_DWORD *)v67 + 63) &= ~8u;
            if ( updated >= 0 )
            {
              CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v68, (struct SFMLOGICALSURFACE *)((char *)v36 + 256));
              v77.right = *((_DWORD *)v13 + 16) - *((_DWORD *)v13 + 14);
              v77.bottom = *((_DWORD *)v13 + 17) - *((_DWORD *)v13 + 15);
              *(_QWORD *)&v77.left = 0LL;
              vSpUpdateDirtyRgn(v13, v36, 0LL, (struct _RECTL *)&v77, &v58, 0);
              PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v68);
              v37 = *((_QWORD *)v36 + 23);
              if ( v37 )
                v38 = *(_QWORD *)(v37 + 8);
              else
                v38 = 0LL;
              v4 = bSpDwmNotifyDirty(*(HSPRITE *)v13, v36, v58, v38);
            }
            v2 = v65;
            v3 = (HDEV)v64;
          }
        }
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v69);
      }
      v13 = v72;
      goto LABEL_45;
    }
    v6 = *(_QWORD *)(v6 + 24);
LABEL_50:
    if ( !v4 )
      break;
  }
  if ( v4 )
  {
    if ( *((_DWORD *)v3 + 37) )
    {
      v49 = (_QWORD *)*((_QWORD *)v3 + 20);
      if ( v49 )
      {
        do
        {
          v50 = (_QWORD *)v49[1];
          if ( *v49 && (unsigned int)UserIsWindowOnDesktopAndComposed(*v49, v2) )
          {
            GdiHintSpriteShape(v3, (HWND)*v49, 0LL, 0, 0);
            GdiDeleteSprite(v3, (HWND)*v49, v49);
          }
          v49 = v50;
        }
        while ( v50 );
      }
    }
    else
    {
      v51 = *((_QWORD *)v3 + 12);
      if ( v51 )
      {
        do
        {
          v52 = *(_QWORD *)(v51 + 72);
          v53 = *(_QWORD *)(v51 + 24);
          if ( v52 && (unsigned int)UserIsWindowOnDesktopAndComposed(v52, v2) )
          {
            if ( *(_QWORD *)(v51 + 240) )
              GdiHintSpriteShape(v3, *(HWND *)(v51 + 72), 0LL, 0, 0);
            GdiDeleteSprite(v3, *(HWND *)(v51 + 72), (void *)v51);
          }
          v51 = v53;
        }
        while ( v53 );
      }
    }
  }
  else
  {
    v54 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
    while ( v54 != (struct DwmState *)((char *)g_pDwmState + 80) )
    {
      v55 = ((unsigned __int64)v54 - 24) & -(__int64)(v54 != 0LL);
      v54 = *(struct DwmState **)(v55 + 0x18);
      GreDeleteSprite(v3, 0LL, *(void **)v55, 1);
    }
  }
  LEAVE_GRE_DWM_CRIT((__int64)v3, v62);
  return v4;
}
