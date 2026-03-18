/*
 * XREFs of GreTransferSpriteStateToDwmState @ 0x1C013E734
 * Callers:
 *     zzzComposeDesktop @ 0x1C00836A0 (zzzComposeDesktop.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00296A4 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C002AA9C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002AAD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C002BCD8 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C003D24C (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C003E320 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     GreDeleteSprite @ 0x1C0045134 (GreDeleteSprite.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C0046234 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0046D48 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C0046FD0 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C0048138 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     DwmAsyncCreateSprite @ 0x1C004908C (DwmAsyncCreateSprite.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0049350 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C006C2C0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C01081E0 (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0108384 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C0108454 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C012285C (UserIsWindowWithNoRedirectionBitmap.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0127EBC (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C013139C (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     UserGetHwndProcess @ 0x1C0135014 (UserGetHwndProcess.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C015EDD8 (UserIsWindowOnDesktopAndComposed.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     UserGetMiniWinInfo @ 0x1C01E9828 (UserGetMiniWinInfo.c)
 */

__int64 __fastcall GreTransferSpriteStateToDwmState(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
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
  __int64 v23; // rsi
  int v24; // ebx
  void *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // ecx
  int v30; // eax
  __int64 v31; // r14
  __int64 v32; // r15
  __int64 v33; // r12
  int v34; // ebx
  BOOL v35; // esi
  void *v36; // rax
  int updated; // eax
  struct SFMLOGICALSURFACE *v38; // rbx
  __int64 v39; // r9
  UINT_PTR v40; // r9
  __int64 Surface; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  struct _SURFOBJ *v44; // rdx
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // rcx
  SURFACE *v48; // rsi
  BOOL (__stdcall *v49)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rbx
  unsigned __int64 HwndProcess; // rax
  _QWORD *v51; // rbx
  _QWORD *v52; // rdi
  __int64 v53; // rcx
  __int64 v54; // rdi
  struct DwmState *v55; // rbx
  __int64 v56; // r8
  int v57; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v58; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v59; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v60; // [rsp+6Ch] [rbp-94h] BYREF
  int v61; // [rsp+70h] [rbp-90h] BYREF
  int v62; // [rsp+74h] [rbp-8Ch] BYREF
  struct DWMSPRITE *v63; // [rsp+78h] [rbp-88h] BYREF
  __int64 v64; // [rsp+80h] [rbp-80h] BYREF
  __int64 v65; // [rsp+88h] [rbp-78h]
  __int64 v66; // [rsp+90h] [rbp-70h]
  __int64 v67; // [rsp+98h] [rbp-68h] BYREF
  struct SFMLOGICALSURFACE *v68; // [rsp+A0h] [rbp-60h]
  _BYTE v69[8]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v70[8]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v71[3]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v72[9]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v73; // [rsp+160h] [rbp+60h] BYREF
  int v74; // [rsp+168h] [rbp+68h]
  int v75; // [rsp+16Ch] [rbp+6Ch]
  struct tagRECT v76; // [rsp+170h] [rbp+70h] BYREF

  v2 = a2;
  v66 = a2;
  v65 = a1;
  v3 = (HDEV)a1;
  v67 = a1;
  v4 = 1;
  ENTER_GRE_DWM_CRIT(a1, &v62);
  v5 = (__int64)(v3 + 22);
  if ( *((_DWORD *)v3 + 37) )
    v5 = **((_QWORD **)v3 + 19) + 88LL;
  v6 = *(_QWORD *)(v5 + 8);
  v58 = 0;
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
      DwmSpriteObj = (HSPRITE)hspCreateDwmSpriteObj(*(HWND *)(v6 + 72), v2, v3, 0);
      v63 = 0LL;
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v63, DwmSpriteObj);
      v15 = v63;
      if ( !v63 )
      {
        v4 = 0;
        goto LABEL_50;
      }
      v16 = *(__int64 **)(v6 + 16);
      v17 = *((_QWORD *)v63 + 21);
      v68 = (struct SFMLOGICALSURFACE *)v17;
      v18 = *v16;
      *((_DWORD *)v63 + 14) = *(_DWORD *)(v6 + 112) + *(_DWORD *)(v18 + 2584);
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
          LOBYTE(v42) = 5;
          v43 = HmgReferenceCheckLock(Surface, v42, 0LL);
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v17, v3, (struct _SURFOBJ *)(v43 + 24));
          v44 = *(struct _SURFOBJ **)(v17 + 184);
          v71[0] = 0LL;
          SURFREFVIEW::bMap((SURFREFVIEW *)v71, v44);
          if ( v71[0] )
          {
            v45 = *(_QWORD *)(v6 + 128);
            v73 = 0LL;
            v74 = *(_DWORD *)(v45 + 32);
            v46 = *(_DWORD *)(v45 + 36);
            v47 = *(_QWORD *)(v17 + 184);
            v64 = 0LL;
            v75 = v46;
            v48 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v47);
            if ( (*((_DWORD *)v48 + 28) & 0x400) != 0 )
              v49 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v3 + 355);
            else
              v49 = EngCopyBits;
            if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v67) )
              v49 = RedirCopyBits;
            HwndProcess = UserGetHwndProcess(*((_QWORD *)v15 + 5));
            SURFACE::vAppContainerOwner(v48, HwndProcess);
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *, __int64 *))v49)(
              *(_QWORD *)(v17 + 184),
              *(_QWORD *)(v6 + 128),
              0LL,
              0LL,
              &v73,
              &v64);
          }
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v71);
          goto LABEL_29;
        }
        v4 = 0;
      }
      else
      {
LABEL_29:
        memset(v72, 0, 0x88uLL);
        v57 = 39168;
        PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v70, (struct DWMSPRITE *)((char *)v15 + 88));
        UserGetMiniWinInfo(*((_QWORD *)v15 + 5), v72, &v57);
        v23 = *(_QWORD *)v15;
        v24 = *(_DWORD *)(v17 + 252) & 0xC | *((_DWORD *)v15 + 41) & 1 | (2
                                                                        * (*(_DWORD *)(v17 + 252) & 1 | (4 * (*((_DWORD *)v15 + 41) & 0xE))));
        v25 = (void *)UserReferenceDwmApiPort();
        if ( (int)DwmAsyncCreateSprite(
                    v25,
                    v23,
                    *((_QWORD *)v15 + 5),
                    (struct DWMSPRITE *)((char *)v15 + 56),
                    v24,
                    (__int64)v72,
                    v57) < 0 )
        {
          v4 = 0;
        }
        else
        {
          v4 = 1;
          if ( *(_QWORD *)(v17 + 184)
            || (unsigned int)UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v6 + 72), v26, v27, v28) )
          {
            *(_DWORD *)(v17 + 252) |= 8u;
            SFMLOGICALSURFACE::StartSfmStateTracking((SFMLOGICALSURFACE *)v17, v3, gpSfmState);
            SFMLOGICALSURFACE::GetRedirectionInfo(
              (SFMLOGICALSURFACE *)v17,
              (enum _HLSURF_REDIRECTIONSTYLE *)&v61,
              &v60,
              &v59,
              0LL,
              0LL);
            v29 = *(_DWORD *)(v17 + 252);
            v30 = *((_DWORD *)v15 + 41);
            v31 = *((_QWORD *)v15 + 13);
            *((_QWORD *)v15 + 13) = 0LL;
            v32 = *(_QWORD *)v17;
            v33 = *(_QWORD *)v15;
            v34 = v29 & 0xC | v30 & 1 | (2 * (v29 & 1 | (4 * (v30 & 0xE))));
            v35 = *((_DWORD *)v15 + 29) >= 1;
            v36 = (void *)UserReferenceDwmApiPort();
            updated = DwmAsyncUpdateSprite(v36, v33, v32, v34, (__int64)v15 + 72, v72, v61, v60, v59, v35, v31);
            v38 = v68;
            v4 = updated >= 0;
            *((_DWORD *)v68 + 63) &= ~8u;
            if ( updated >= 0 )
            {
              PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v69, (struct SFMLOGICALSURFACE *)((char *)v38 + 256));
              v76.right = *((_DWORD *)v15 + 16) - *((_DWORD *)v15 + 14);
              v76.bottom = *((_DWORD *)v15 + 17) - *((_DWORD *)v15 + 15);
              *(_QWORD *)&v76.left = 0LL;
              vSpUpdateDirtyRgn(v15, v38, 0LL, (struct _RECTL *)&v76, &v58, 0);
              PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v69);
              v39 = *((_QWORD *)v38 + 23);
              if ( v39 )
                v40 = *(_QWORD *)(v39 + 8);
              else
                v40 = 0LL;
              v4 = bSpDwmNotifyDirty(*(HSPRITE *)v15, v38, v58, v40);
            }
            v3 = (HDEV)v65;
          }
        }
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v70);
      }
      v2 = v66;
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
      v51 = (_QWORD *)*((_QWORD *)v3 + 20);
      if ( v51 )
      {
        do
        {
          v52 = (_QWORD *)v51[1];
          if ( *v51 && (unsigned int)UserIsWindowOnDesktopAndComposed(*v51, v2) )
          {
            GdiHintSpriteShape(v3, (HWND)*v51, 0LL, 0, 0);
            GdiDeleteSprite(v3, (HWND)*v51, v51);
          }
          v51 = v52;
        }
        while ( v52 );
      }
    }
    else
    {
      v7 = *((_QWORD *)v3 + 12);
      if ( v7 )
      {
        do
        {
          v53 = *(_QWORD *)(v7 + 72);
          v54 = *(_QWORD *)(v7 + 24);
          if ( v53 && (unsigned int)UserIsWindowOnDesktopAndComposed(v53, v2) )
          {
            if ( *(_QWORD *)(v7 + 240) )
              GdiHintSpriteShape(v3, *(HWND *)(v7 + 72), 0LL, 0, 0);
            GdiDeleteSprite(v3, *(HWND *)(v7 + 72), (void *)v7);
          }
          v7 = v54;
        }
        while ( v54 );
      }
    }
  }
  else
  {
    v55 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
    while ( v55 != (struct DwmState *)((char *)g_pDwmState + 80) )
    {
      v56 = ((unsigned __int64)v55 - 24) & -(__int64)(v55 != 0LL);
      v55 = *(struct DwmState **)(v56 + 0x18);
      GreDeleteSprite(v3, 0LL, *(void **)v56, 1);
    }
  }
  LEAVE_GRE_DWM_CRIT((__int64)v3, v62);
  return v4;
}
