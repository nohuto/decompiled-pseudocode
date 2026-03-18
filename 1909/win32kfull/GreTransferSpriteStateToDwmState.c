/*
 * XREFs of GreTransferSpriteStateToDwmState @ 0x1C0010634
 * Callers:
 *     zzzComposeDesktop @ 0x1C0010708 (zzzComposeDesktop.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C002FB14 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0030F0C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0030F40 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0032148 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C008144C (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C00823E0 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     GreDeleteSprite @ 0x1C0089B04 (GreDeleteSprite.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C008AC04 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C008B718 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C008B9A0 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C008CB08 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     DwmAsyncCreateSprite @ 0x1C008DB4C (DwmAsyncCreateSprite.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C008DE10 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00B6680 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00E2090 (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00E2234 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00E2304 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C00FD85C (UserIsWindowWithNoRedirectionBitmap.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0102F68 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C010BC8C (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     UserGetHwndProcess @ 0x1C010FB90 (UserGetHwndProcess.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C015F274 (UserIsWindowOnDesktopAndComposed.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     UserGetMiniWinInfo @ 0x1C01E96A8 (UserGetMiniWinInfo.c)
 */

__int64 __fastcall GreTransferSpriteStateToDwmState(HDEV a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  HDEV v3; // r14
  unsigned int v4; // esi
  __int64 v5; // r13
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned int v11; // ecx
  unsigned int v12; // edx
  HSPRITE DwmSpriteObj; // rax
  __int64 v14; // rdx
  struct DWMSPRITE *v15; // rdi
  __int64 *v16; // rax
  __int64 v17; // r15
  __int64 v18; // rax
  BOOL v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // ebx
  void *v24; // rax
  int v25; // r9d
  __int64 v26; // r14
  BOOL v27; // esi
  void *v28; // rax
  int updated; // eax
  struct SFMLOGICALSURFACE *v30; // rbx
  __int64 v31; // r9
  unsigned __int64 v32; // r9
  HSURF Surface; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  struct _SURFOBJ *v36; // rdx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  SURFACE *v40; // rsi
  BOOL (__stdcall *v41)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rbx
  struct _EPROCESS *HwndProcess; // rax
  _QWORD *v43; // rbx
  _QWORD *v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // rdi
  struct DwmState *v47; // rbx
  __int64 v48; // r8
  int v49; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v50; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v51; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v52; // [rsp+6Ch] [rbp-94h] BYREF
  int v53; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v54; // [rsp+74h] [rbp-8Ch] BYREF
  struct DWMSPRITE *v55; // [rsp+78h] [rbp-88h] BYREF
  __int64 v56; // [rsp+80h] [rbp-80h] BYREF
  HDEV v57; // [rsp+88h] [rbp-78h]
  unsigned __int64 v58; // [rsp+90h] [rbp-70h]
  HDEV v59; // [rsp+98h] [rbp-68h] BYREF
  struct SFMLOGICALSURFACE *v60; // [rsp+A0h] [rbp-60h]
  _BYTE v61[8]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v62[8]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v63[3]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v64[18]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v65; // [rsp+160h] [rbp+60h] BYREF
  int v66; // [rsp+168h] [rbp+68h]
  int v67; // [rsp+16Ch] [rbp+6Ch]
  struct tagRECT v68; // [rsp+170h] [rbp+70h] BYREF

  v2 = a2;
  v58 = a2;
  v57 = a1;
  v3 = a1;
  v59 = a1;
  v4 = 1;
  ENTER_GRE_DWM_CRIT(a1, &v54);
  v5 = (__int64)(v3 + 22);
  if ( *((_DWORD *)v3 + 37) )
    v5 = **((_QWORD **)v3 + 19) + 88LL;
  v6 = *(_QWORD *)(v5 + 8);
  v50 = 0;
  while ( v6 )
  {
    v9 = *(_QWORD *)(v6 + 72);
    if ( v9 && (unsigned int)UserIsWindowOnDesktopAndComposed(v9, v2) )
    {
      if ( *((_DWORD *)v3 + 37) )
      {
        if ( (*(_DWORD *)v6 & 0x20) == 0 )
        {
          v10 = *(_QWORD *)(v6 + 8);
          v11 = 0;
          v12 = *(_DWORD *)(v10 + 20);
          if ( v12 )
          {
            while ( (**(_DWORD **)(v10 + 8LL * v11 + 24) & 0x20) == 0 )
            {
              if ( ++v11 >= v12 )
                goto LABEL_18;
            }
            v6 = *(_QWORD *)(v10 + 8LL * v11 + 24);
          }
        }
      }
LABEL_18:
      DwmSpriteObj = hspCreateDwmSpriteObj(*(HWND *)(v6 + 72), v2, v3, 0);
      v55 = 0LL;
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v55, DwmSpriteObj);
      v15 = v55;
      if ( !v55 )
      {
        v4 = 0;
        goto LABEL_50;
      }
      v16 = *(__int64 **)(v6 + 16);
      v17 = *((_QWORD *)v55 + 21);
      v60 = (struct SFMLOGICALSURFACE *)v17;
      v18 = *v16;
      *((_DWORD *)v55 + 14) = *(_DWORD *)(v6 + 112) + *(_DWORD *)(v18 + 2584);
      *((_DWORD *)v15 + 15) = *(_DWORD *)(v18 + 2588) + *(_DWORD *)(v6 + 116);
      *((_DWORD *)v15 + 16) = *(_DWORD *)(v6 + 112) + *(_DWORD *)(v18 + 2584);
      *((_DWORD *)v15 + 17) = *(_DWORD *)(v18 + 2588) + *(_DWORD *)(v6 + 116);
      *((_QWORD *)v15 + 9) = *(_QWORD *)(v6 + 224);
      *((_DWORD *)v15 + 20) = *(_DWORD *)(v6 + 232);
      v19 = (*(_DWORD *)v6 & 1) == 0
         && (*(_DWORD *)v6 & 0x10) == 0
         && *(_DWORD *)(v6 + 80) < *(_DWORD *)(v6 + 88)
         && *(_DWORD *)(v6 + 84) < *(_DWORD *)(v6 + 92);
      *((_DWORD *)v15 + 41) = v19 | *((_DWORD *)v15 + 41) & 0xFFFFFFFE;
      v20 = *(_QWORD *)(v6 + 128);
      if ( v20 )
      {
        *((_DWORD *)v15 + 16) += *(_DWORD *)(v20 + 32);
        *((_DWORD *)v15 + 17) += *(_DWORD *)(*(_QWORD *)(v6 + 128) + 36LL);
        v21 = *(_QWORD *)(v6 + 240);
        if ( v21 )
        {
          LOBYTE(v14) = 5;
          v22 = HmgReferenceCheckLock(v21, v14, 0LL);
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v17, v3, (struct _SURFOBJ *)(v22 + 24));
          *(_DWORD *)(v17 + 252) |= 1u;
          *(_DWORD *)(v17 + 252) ^= ((unsigned __int8)*(_DWORD *)(v17 + 252) ^ (unsigned __int8)(*(_DWORD *)v6 >> 1)) & 0x40;
          goto LABEL_29;
        }
        Surface = hsurfSpCreateSurface(v3, (struct tagSIZE *)(*(_QWORD *)(v6 + 128) + 32LL));
        if ( Surface )
        {
          LOBYTE(v34) = 5;
          v35 = HmgReferenceCheckLock(Surface, v34, 0LL);
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v17, v3, (struct _SURFOBJ *)(v35 + 24));
          v36 = *(struct _SURFOBJ **)(v17 + 184);
          v63[0] = 0LL;
          SURFREFVIEW::bMap((SURFREFVIEW *)v63, v36);
          if ( v63[0] )
          {
            v37 = *(_QWORD *)(v6 + 128);
            v65 = 0LL;
            v66 = *(_DWORD *)(v37 + 32);
            v38 = *(_DWORD *)(v37 + 36);
            v39 = *(_QWORD *)(v17 + 184);
            v56 = 0LL;
            v67 = v38;
            v40 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v39);
            if ( (*((_DWORD *)v40 + 28) & 0x400) != 0 )
              v41 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v3 + 355);
            else
              v41 = EngCopyBits;
            if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v59) )
              v41 = RedirCopyBits;
            HwndProcess = (struct _EPROCESS *)UserGetHwndProcess(*((_QWORD *)v15 + 5));
            SURFACE::vAppContainerOwner(v40, HwndProcess);
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *, __int64 *))v41)(
              *(_QWORD *)(v17 + 184),
              *(_QWORD *)(v6 + 128),
              0LL,
              0LL,
              &v65,
              &v56);
          }
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v63);
          goto LABEL_29;
        }
        v4 = 0;
      }
      else
      {
LABEL_29:
        memset(v64, 0, 0x88uLL);
        v49 = 39168;
        PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v62, (struct DWMSPRITE *)((char *)v15 + 88));
        UserGetMiniWinInfo(*((_QWORD *)v15 + 5), v64, &v49);
        v23 = *(_DWORD *)(v17 + 252) & 0xC | *((_DWORD *)v15 + 41) & 1 | (2
                                                                        * (*(_DWORD *)(v17 + 252) & 1 | (4 * (*((_DWORD *)v15 + 41) & 0xE))));
        v24 = (void *)UserReferenceDwmApiPort();
        if ( (int)DwmAsyncCreateSprite(v24, v23, (__int64)v64, v49) < 0 )
        {
          v4 = 0;
        }
        else
        {
          v4 = 1;
          if ( *(_QWORD *)(v17 + 184) || (unsigned int)UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v6 + 72)) )
          {
            *(_DWORD *)(v17 + 252) |= 8u;
            SFMLOGICALSURFACE::StartSfmStateTracking((SFMLOGICALSURFACE *)v17, v3, gpSfmState, v25);
            SFMLOGICALSURFACE::GetRedirectionInfo(
              (SFMLOGICALSURFACE *)v17,
              (enum _HLSURF_REDIRECTIONSTYLE *)&v53,
              &v52,
              &v51,
              0LL,
              0LL);
            v26 = *((_QWORD *)v15 + 13);
            *((_QWORD *)v15 + 13) = 0LL;
            v27 = *((_DWORD *)v15 + 29) >= 1;
            v28 = (void *)UserReferenceDwmApiPort();
            updated = DwmAsyncUpdateSprite(v28, (__int64)v15 + 72, (__int64)v64, v53, v52, v51, v27, v26);
            v30 = v60;
            v4 = updated >= 0;
            *((_DWORD *)v60 + 63) &= ~8u;
            if ( updated >= 0 )
            {
              PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v61, (struct SFMLOGICALSURFACE *)((char *)v30 + 256));
              v68.right = *((_DWORD *)v15 + 16) - *((_DWORD *)v15 + 14);
              v68.bottom = *((_DWORD *)v15 + 17) - *((_DWORD *)v15 + 15);
              *(_QWORD *)&v68.left = 0LL;
              vSpUpdateDirtyRgn(v15, v30, 0LL, &v68, &v50, 0);
              PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v61);
              v31 = *((_QWORD *)v30 + 23);
              if ( v31 )
                v32 = *(_QWORD *)(v31 + 8);
              else
                v32 = 0LL;
              v4 = bSpDwmNotifyDirty(*(HSPRITE *)v15, v30, v50, v32);
            }
            v3 = v57;
          }
        }
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v62);
      }
      v2 = v58;
LABEL_50:
      v6 = *(_QWORD *)(v6 + 24);
      if ( v15 )
        _InterlockedDecrement((volatile signed __int32 *)v15 + 3);
      goto LABEL_54;
    }
    v6 = *(_QWORD *)(v6 + 24);
LABEL_54:
    if ( !v4 )
      break;
  }
  if ( v4 )
  {
    if ( *((_DWORD *)v3 + 37) )
    {
      v43 = (_QWORD *)*((_QWORD *)v3 + 20);
      if ( v43 )
      {
        do
        {
          v44 = (_QWORD *)v43[1];
          if ( *v43 && (unsigned int)UserIsWindowOnDesktopAndComposed(*v43, v2) )
          {
            GdiHintSpriteShape(v3, (HWND)*v43, 0LL, 0, 0);
            GdiDeleteSprite(v3, (HWND)*v43, v43);
          }
          v43 = v44;
        }
        while ( v44 );
      }
    }
    else
    {
      v7 = *((_QWORD *)v3 + 12);
      if ( v7 )
      {
        do
        {
          v45 = *(_QWORD *)(v7 + 72);
          v46 = *(_QWORD *)(v7 + 24);
          if ( v45 && (unsigned int)UserIsWindowOnDesktopAndComposed(v45, v2) )
          {
            if ( *(_QWORD *)(v7 + 240) )
              GdiHintSpriteShape(v3, *(HWND *)(v7 + 72), 0LL, 0, 0);
            GdiDeleteSprite(v3, *(HWND *)(v7 + 72), (void *)v7);
          }
          v7 = v46;
        }
        while ( v46 );
      }
    }
  }
  else
  {
    v47 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
    while ( v47 != (struct DwmState *)((char *)g_pDwmState + 80) )
    {
      v48 = ((unsigned __int64)v47 - 24) & -(__int64)(v47 != 0LL);
      v47 = *(struct DwmState **)(v48 + 0x18);
      GreDeleteSprite(v3, 0LL, *(void **)v48, 1);
    }
  }
  LEAVE_GRE_DWM_CRIT(v3, v54);
  return v4;
}
