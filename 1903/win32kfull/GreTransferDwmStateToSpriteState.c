/*
 * XREFs of GreTransferDwmStateToSpriteState @ 0x1C015E650
 * Callers:
 *     zzzComposeDesktop @ 0x1C00836A0 (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C015E4AC (zzzDecomposeDesktop.c)
 * Callees:
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C003D7A0 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C003E320 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C003F044 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     GreDeleteSprite @ 0x1C0045134 (GreDeleteSprite.c)
 *     DwmAsyncDestroySprite @ 0x1C00453B4 (DwmAsyncDestroySprite.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C0045590 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C0046234 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C0046FD0 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C0047D74 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C0048080 (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C0048138 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C012285C (UserIsWindowWithNoRedirectionBitmap.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C015EDD8 (UserIsWindowOnDesktopAndComposed.c)
 *     ?vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z @ 0x1C027F45C (-vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall GreTransferDwmStateToSpriteState(HDEV a1, __int64 a2)
{
  unsigned int v3; // r13d
  HDC v4; // r12
  HDC DisplayDC; // r15
  HDC v6; // rbx
  HDC v7; // r10
  struct DwmState *v8; // r14
  __int64 v10; // rdi
  __int64 v11; // r14
  HLSURF v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  int IsWindowWithNoRedirectionBitmap; // eax
  LONG v18; // eax
  int v19; // ecx
  HWND v20; // rdx
  void *v21; // rbx
  void *v22; // rax
  unsigned int v23; // [rsp+58h] [rbp-39h]
  int v24; // [rsp+6Ch] [rbp-25h] BYREF
  struct tagSIZE v25; // [rsp+70h] [rbp-21h] BYREF
  struct tagPOINT v26; // [rsp+78h] [rbp-19h] BYREF
  struct SURFACE *v27; // [rsp+80h] [rbp-11h]
  struct tagSIZE v28; // [rsp+88h] [rbp-9h] BYREF
  struct tagPOINT v29; // [rsp+90h] [rbp-1h] BYREF
  HDC v30; // [rsp+98h] [rbp+7h]
  HDC v31; // [rsp+A0h] [rbp+Fh]
  __int64 v32; // [rsp+A8h] [rbp+17h]
  __int64 v33; // [rsp+B0h] [rbp+1Fh]
  struct tagPOINT v34; // [rsp+B8h] [rbp+27h] BYREF
  HDEV v35; // [rsp+C0h] [rbp+2Fh] BYREF

  v32 = a2;
  v33 = 0LL;
  v35 = a1;
  v3 = 1;
  ENTER_GRE_DWM_CRIT((__int64)a1, &v24);
  if ( !g_pDwmState )
    goto LABEL_7;
  v4 = 0LL;
  v27 = 0LL;
  DisplayDC = 0LL;
  v6 = *(HDC *)(gpDispInfo + 56LL);
  v7 = (HDC)ghdcMem;
  v8 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
  v31 = v6;
  v30 = (HDC)ghdcMem;
  if ( v8 == (struct DwmState *)((char *)g_pDwmState + 80) )
    goto LABEL_3;
  do
  {
    v10 = ((unsigned __int64)v8 - 24) & -(__int64)(v8 != 0LL);
    v11 = *(_QWORD *)(v10 + 0xA8);
    if ( (*(_DWORD *)(v10 + 0x48) & 0x400000) != 0 )
    {
      v8 = *(struct DwmState **)(v10 + 24);
      GreDeleteSprite(a1, 0LL, *(void **)v10, 1);
      continue;
    }
    if ( !(unsigned int)UserIsWindowOnDesktopAndComposed(*(_QWORD *)(v10 + 40), v32) )
    {
      v8 = *(struct DwmState **)(v10 + 24);
      continue;
    }
    if ( GdiCreateSprite(a1, *(HWND *)(v10 + 40), (struct _RECTL *)(v10 + 56)) )
    {
      v16 = *(_QWORD *)(v11 + 184);
      v3 = 1;
      if ( v16 )
      {
        v27 = SFMLOGICALSURFACE::OwnsSurfaceCleanup((SFMLOGICALSURFACE *)v11, v12);
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v11, a1, 0LL);
LABEL_19:
        v13 = *(_QWORD *)(v10 + 72) - v33;
        if ( !v13 )
          v13 = *(unsigned int *)(v10 + 80) - (unsigned __int64)(unsigned int)v33;
        if ( !v13 )
        {
          *(_DWORD *)(v10 + 72) = 4;
          *(_DWORD *)(v10 + 76) = 16711680;
        }
        if ( v16 )
        {
          v15 = *(unsigned int *)(v11 + 252);
          if ( (v15 & 1) != 0 )
          {
            GdiHintSpriteShape(a1, *(HWND *)(v10 + 40), *(HBITMAP *)(v16 + 8), ((unsigned int)v15 >> 6) & 1, 1);
            GdiUpdateSprite(
              a1,
              *(HWND *)(v10 + 40),
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              *(_DWORD *)(v10 + 80),
              (struct _BLENDFUNCTION *)(v10 + 76),
              *(_DWORD *)(v10 + 72) | 0x20000000,
              0LL);
          }
          else
          {
            v26 = 0LL;
            v34 = 0LL;
            v25 = 0LL;
            if ( !DisplayDC )
            {
              DisplayDC = (HDC)GreCreateDisplayDC(a1, 0LL, 0LL);
              if ( !DisplayDC )
                DisplayDC = v31;
            }
            if ( v4 || (v4 = (HDC)GreCreateDisplayDC(a1, 1LL, 0LL)) != 0LL || (v4 = v30) != 0LL )
            {
              if ( DisplayDC )
              {
                *((_DWORD *)v27 + 28) |= 0x4000000u;
                if ( GreSelectBitmap(v4) )
                {
                  v19 = *(_DWORD *)(v10 + 72);
                  v20 = *(HWND *)(v10 + 40);
                  v26 = *(struct tagPOINT *)(v10 + 56);
                  v25 = *(struct tagSIZE *)(v16 + 32);
                  GdiUpdateSprite(
                    a1,
                    v20,
                    0LL,
                    DisplayDC,
                    (struct _POINTL *)&v26,
                    &v25,
                    v4,
                    (struct _POINTL *)&v34,
                    *(_DWORD *)(v10 + 80),
                    (struct _BLENDFUNCTION *)(v10 + 76),
                    v19 | 0x20000000,
                    0LL);
                  GreSelectBitmap(v4);
                }
                v3 = 1;
              }
            }
          }
        }
        else
        {
          v18 = *(_DWORD *)(v10 + 56);
          v28 = 0LL;
          v23 = *(_DWORD *)(v10 + 72) | 0x20000000;
          v29.x = v18;
          v29.y = *(_DWORD *)(v10 + 60);
          GdiUpdateSprite(
            a1,
            *(HWND *)(v10 + 40),
            0LL,
            0LL,
            (struct _POINTL *)&v29,
            &v28,
            0LL,
            0LL,
            *(_DWORD *)(v10 + 80),
            (struct _BLENDFUNCTION *)(v10 + 76),
            v23,
            0LL);
        }
        if ( v16 )
          SFMLOGICALSURFACE::CleanupShape((SFMLOGICALSURFACE *)v11, (HSURF *)v27);
        goto LABEL_40;
      }
      IsWindowWithNoRedirectionBitmap = UserIsWindowWithNoRedirectionBitmap(
                                          *(_QWORD *)(v10 + 40),
                                          (__int64)v12,
                                          v14,
                                          v15);
      v15 = 0LL;
      if ( IsWindowWithNoRedirectionBitmap )
        goto LABEL_19;
    }
    else
    {
      v3 = 0;
    }
LABEL_40:
    v8 = *(struct DwmState **)(v10 + 24);
    v21 = *(void **)v10;
    v22 = (void *)UserReferenceDwmApiPort(v13, v12, v14, v15);
    DwmAsyncDestroySprite(v22, (__int64)v21);
    vspDestroyDwmSpriteObjInternal(a1, 0LL, (struct DWMSPRITE *)v10);
  }
  while ( v8 != (struct DwmState *)((char *)g_pDwmState + 80) );
  v7 = v30;
  v6 = v31;
LABEL_3:
  if ( ((_DWORD)a1[10] & 0x20000) != 0 )
    vFixupMetaSpriteList((struct PDEVOBJ *)&v35);
  if ( v4 && v4 != v7 )
    GreDeleteDC(v4);
  if ( DisplayDC && DisplayDC != v6 )
    GreDeleteDC(DisplayDC);
LABEL_7:
  LEAVE_GRE_DWM_CRIT((__int64)a1, v24);
  return v3;
}
