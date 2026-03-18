/*
 * XREFs of GreTransferSpriteStateToDwmState @ 0x1C0110A0C
 * Callers:
 *     zzzComposeDesktop @ 0x1C00C0DD4 (zzzComposeDesktop.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0004B8C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0004BC0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C00082E0 (UserIsWindowOnDesktopAndComposed.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0009360 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0079CE8 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C007D4C0 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C008A2E0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00AB65C (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     GreDeleteSprite @ 0x1C00C4078 (GreDeleteSprite.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C00C56F4 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C00C5C7C (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C00C5D9C (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C00C7514 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00C7AAC (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00C7B74 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00C7CE0 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00E68C4 (DwmAsyncUpdateSprite.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C00E8C78 (UserIsWindowWithNoRedirectionBitmap.c)
 *     DwmAsyncCreateSprite @ 0x1C00F7708 (DwmAsyncCreateSprite.c)
 *     UserGetHwndProcess @ 0x1C0109AA4 (UserGetHwndProcess.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     UserGetMiniWinInfo @ 0x1C01B1A1C (UserGetMiniWinInfo.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C0249E74 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C024A3D4 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 */

__int64 __fastcall GreTransferSpriteStateToDwmState(HDEV a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v4; // esi
  HDEV v5; // r12
  __int64 v6; // r12
  _QWORD *v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned int v11; // ecx
  unsigned int v12; // edx
  HSPRITE DwmSpriteObj; // rax
  __int64 v14; // rdx
  struct DWMSPRITE *v15; // rdi
  __int64 *v16; // rax
  __int64 v17; // r14
  __int64 v18; // rax
  BOOL v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // r8
  __int64 v28; // r9
  void *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rsi
  int v35; // ebx
  __int64 v36; // r14
  __int64 v37; // r15
  int v38; // ebx
  __int64 v39; // r8
  __int64 v40; // r9
  void *v41; // rax
  int updated; // eax
  struct SFMLOGICALSURFACE *v43; // rbx
  __int64 v44; // r9
  UINT_PTR v45; // r9
  __int64 Surface; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  struct _SURFOBJ *v49; // rdx
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // rcx
  SURFACE *v53; // rsi
  BOOL (__stdcall *v54)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rbx
  struct _EPROCESS *HwndProcess; // rax
  __int64 v56; // rbx
  __int64 v57; // rdi
  __int64 v58; // rcx
  _QWORD *v59; // rdi
  struct DwmState *v60; // rbx
  __int64 v61; // r8
  int v62; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v63; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v64; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v65; // [rsp+6Ch] [rbp-94h] BYREF
  int v66; // [rsp+70h] [rbp-90h] BYREF
  int v67; // [rsp+74h] [rbp-8Ch] BYREF
  struct DWMSPRITE *v68; // [rsp+78h] [rbp-88h] BYREF
  __int64 v69; // [rsp+80h] [rbp-80h] BYREF
  __int64 v70; // [rsp+88h] [rbp-78h]
  HDEV v71; // [rsp+90h] [rbp-70h] BYREF
  struct SFMLOGICALSURFACE *v72; // [rsp+98h] [rbp-68h]
  char v73[8]; // [rsp+A0h] [rbp-60h] BYREF
  char v74[8]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v75[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v76[9]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v77; // [rsp+150h] [rbp+50h] BYREF
  int v78; // [rsp+158h] [rbp+58h]
  int v79; // [rsp+15Ch] [rbp+5Ch]
  struct tagRECT v80; // [rsp+160h] [rbp+60h] BYREF

  v2 = a2;
  v70 = a2;
  v71 = a1;
  v4 = 1;
  ENTER_GRE_DWM_CRIT((__int64)a1, &v67);
  v5 = a1 + 20;
  if ( *((_DWORD *)a1 + 35) )
    v5 = (HDEV)(**((_QWORD **)a1 + 18) + 80LL);
  v6 = *((_QWORD *)v5 + 1);
  v63 = 0;
  while ( v6 )
  {
    v9 = *(_QWORD *)(v6 + 72);
    if ( v9 && (unsigned int)UserIsWindowOnDesktopAndComposed(v9, v2) )
    {
      if ( *((_DWORD *)a1 + 35) )
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
      DwmSpriteObj = (HSPRITE)hspCreateDwmSpriteObj(*(HWND *)(v6 + 72), v2, a1, 0);
      v68 = 0LL;
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v68, DwmSpriteObj);
      v15 = v68;
      if ( !v68 )
      {
        v4 = 0;
        goto LABEL_50;
      }
      v16 = *(__int64 **)(v6 + 16);
      v17 = *((_QWORD *)v68 + 21);
      v72 = (struct SFMLOGICALSURFACE *)v17;
      v18 = *v16;
      *((_DWORD *)v68 + 14) = *(_DWORD *)(v6 + 112) + *(_DWORD *)(v18 + 2576);
      *((_DWORD *)v15 + 15) = *(_DWORD *)(v18 + 2580) + *(_DWORD *)(v6 + 116);
      *((_DWORD *)v15 + 16) = *(_DWORD *)(v6 + 112) + *(_DWORD *)(v18 + 2576);
      *((_DWORD *)v15 + 17) = *(_DWORD *)(v18 + 2580) + *(_DWORD *)(v6 + 116);
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
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v17, a1, (struct _SURFOBJ *)(v22 + 24));
          *(_DWORD *)(v17 + 252) |= 1u;
          *(_DWORD *)(v17 + 252) ^= ((unsigned __int8)*(_DWORD *)(v17 + 252) ^ (unsigned __int8)(*(_DWORD *)v6 >> 1)) & 0x40;
          goto LABEL_29;
        }
        Surface = hsurfSpCreateSurface((__int64)a1, (struct tagSIZE *)(*(_QWORD *)(v6 + 128) + 32LL));
        if ( Surface )
        {
          LOBYTE(v47) = 5;
          v48 = HmgReferenceCheckLock(Surface, v47, 0LL);
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v17, a1, (struct _SURFOBJ *)(v48 + 24));
          v49 = *(struct _SURFOBJ **)(v17 + 184);
          v75[0] = 0LL;
          SURFREFVIEW::bMap((SURFREFVIEW *)v75, v49);
          if ( v75[0] )
          {
            v50 = *(_QWORD *)(v6 + 128);
            v77 = 0LL;
            v78 = *(_DWORD *)(v50 + 32);
            v51 = *(_DWORD *)(v50 + 36);
            v52 = *(_QWORD *)(v17 + 184);
            v69 = 0LL;
            v79 = v51;
            v53 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v52);
            if ( (*((_DWORD *)v53 + 28) & 0x400) != 0 )
              v54 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)a1 + 354);
            else
              v54 = EngCopyBits;
            if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v71) )
              v54 = RedirCopyBits;
            HwndProcess = (struct _EPROCESS *)UserGetHwndProcess(*((_QWORD *)v15 + 5));
            SURFACE::vAppContainerOwner(v53, HwndProcess);
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *, __int64 *))v54)(
              *(_QWORD *)(v17 + 184),
              *(_QWORD *)(v6 + 128),
              0LL,
              0LL,
              &v77,
              &v69);
          }
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v75);
          goto LABEL_29;
        }
        v4 = 0;
      }
      else
      {
LABEL_29:
        memset(v76, 0, 0x88uLL);
        v62 = 39168;
        CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v74, (struct DWMSPRITE *)((char *)v15 + 88));
        UserGetMiniWinInfo(*((_QWORD *)v15 + 5), v76, &v62);
        v23 = *(_QWORD *)v15;
        v24 = *(_DWORD *)(v17 + 252) & 1;
        v25 = *(_DWORD *)(v17 + 252) & 0xC;
        v26 = v25 | *((_DWORD *)v15 + 41) & 1 | (2 * (v24 | (4 * (*((_DWORD *)v15 + 41) & 0xE))));
        v29 = (void *)UserReferenceDwmApiPort(v25, v24, v27, v28);
        if ( (int)DwmAsyncCreateSprite(
                    v29,
                    v23,
                    *((_QWORD *)v15 + 5),
                    (struct DWMSPRITE *)((char *)v15 + 56),
                    v26,
                    (__int64)v76,
                    v62) < 0 )
        {
          v4 = 0;
        }
        else
        {
          v4 = 1;
          if ( *(_QWORD *)(v17 + 184) || (unsigned int)UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v6 + 72), v30) )
          {
            *(_DWORD *)(v17 + 252) |= 8u;
            SFMLOGICALSURFACE::StartSfmStateTracking((SFMLOGICALSURFACE *)v17, a1, gpSfmState);
            SFMLOGICALSURFACE::GetRedirectionInfo(
              (SFMLOGICALSURFACE *)v17,
              (enum _HLSURF_REDIRECTIONSTYLE *)&v66,
              &v65,
              &v64,
              0LL,
              0LL);
            v31 = *(_DWORD *)(v17 + 252) & 1;
            v32 = *(_DWORD *)(v17 + 252) & 0xC;
            v33 = *((_DWORD *)v15 + 41) & 1;
            v34 = *((_QWORD *)v15 + 13);
            v35 = v31 | (4 * (*((_DWORD *)v15 + 41) & 0xE));
            *((_QWORD *)v15 + 13) = 0LL;
            v36 = *(_QWORD *)v17;
            v37 = *(_QWORD *)v15;
            v38 = v32 | v33 | (2 * v35);
            v41 = (void *)UserReferenceDwmApiPort(v32, v31, v39, v40);
            updated = DwmAsyncUpdateSprite(
                        v41,
                        v37,
                        v36,
                        v38,
                        (__int64)v15 + 72,
                        v76,
                        v66,
                        v65,
                        v64,
                        *((_DWORD *)v15 + 29),
                        v34);
            v43 = v72;
            v4 = updated >= 0;
            *((_DWORD *)v72 + 63) &= ~8u;
            if ( updated >= 0 )
            {
              CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v73, (struct SFMLOGICALSURFACE *)((char *)v43 + 256));
              v80.right = *((_DWORD *)v15 + 16) - *((_DWORD *)v15 + 14);
              v80.bottom = *((_DWORD *)v15 + 17) - *((_DWORD *)v15 + 15);
              *(_QWORD *)&v80.left = 0LL;
              vSpUpdateDirtyRgn(v15, v43, 0LL, (struct _RECTL *)&v80, &v63, 0);
              PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v73);
              v44 = *((_QWORD *)v43 + 23);
              if ( v44 )
                v45 = *(_QWORD *)(v44 + 8);
              else
                v45 = 0LL;
              v4 = bSpDwmNotifyDirty(*(_QWORD *)v15, v43, v63, v45);
            }
          }
        }
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v74);
      }
      v2 = v70;
LABEL_50:
      v6 = *(_QWORD *)(v6 + 24);
      if ( v15 )
        _InterlockedDecrement((volatile signed __int32 *)v15 + 3);
      goto LABEL_53;
    }
    v6 = *(_QWORD *)(v6 + 24);
LABEL_53:
    if ( !v4 )
      break;
  }
  if ( v4 )
  {
    if ( *((_DWORD *)a1 + 35) )
    {
      v56 = *((_QWORD *)a1 + 19);
      if ( v56 )
      {
        do
        {
          v57 = *(_QWORD *)(v56 + 8);
          if ( *(_QWORD *)v56 && (unsigned int)UserIsWindowOnDesktopAndComposed(*(_QWORD *)v56, v2) )
          {
            GdiHintSpriteShape(a1, *(HWND *)v56, 0LL, 0, 0);
            GdiDeleteSprite(a1, *(HWND *)v56, (void *)v56);
          }
          v56 = v57;
        }
        while ( v57 );
      }
    }
    else
    {
      v7 = (_QWORD *)*((_QWORD *)a1 + 11);
      if ( v7 )
      {
        do
        {
          v58 = v7[9];
          v59 = (_QWORD *)v7[3];
          if ( v58 && (unsigned int)UserIsWindowOnDesktopAndComposed(v58, v2) )
          {
            if ( v7[30] )
              GdiHintSpriteShape(a1, (HWND)v7[9], 0LL, 0, 0);
            GdiDeleteSprite(a1, (HWND)v7[9], v7);
          }
          v7 = v59;
        }
        while ( v59 );
      }
    }
  }
  else
  {
    v60 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
    while ( v60 != (struct DwmState *)((char *)g_pDwmState + 80) )
    {
      v61 = ((unsigned __int64)v60 - 24) & -(__int64)(v60 != 0LL);
      v60 = *(struct DwmState **)(v61 + 0x18);
      GreDeleteSprite(a1, 0LL, *(void **)v61, 1);
    }
  }
  LEAVE_GRE_DWM_CRIT((__int64)a1, v67);
  return v4;
}
