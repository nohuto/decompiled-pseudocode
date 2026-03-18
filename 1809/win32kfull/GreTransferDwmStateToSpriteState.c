/*
 * XREFs of GreTransferDwmStateToSpriteState @ 0x1C00CC540
 * Callers:
 *     zzzComposeDesktop @ 0x1C00C8E7C (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C00CC674 (zzzDecomposeDesktop.c)
 * Callees:
 *     GreDeleteSprite @ 0x1C000DC58 (GreDeleteSprite.c)
 *     DwmAsyncDestroySprite @ 0x1C000DF28 (DwmAsyncDestroySprite.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C000E15C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C000E468 (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C000E518 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C000E604 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C0095E04 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C00963A8 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C0096670 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C00A13E8 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C00A1E9C (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C00C8B2C (UserIsWindowOnDesktopAndComposed.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C011AACC (UserIsWindowWithNoRedirectionBitmap.c)
 *     ?vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z @ 0x1C0266238 (-vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z.c)
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
  __int64 v14; // rbx
  unsigned int v15; // r9d
  LONG v16; // eax
  __int64 v17; // r13
  LONG v18; // eax
  HWND v19; // rdx
  unsigned int v20; // ecx
  void *v21; // rbx
  void *v22; // rax
  unsigned int v23; // [rsp+58h] [rbp-39h]
  int v24; // [rsp+6Ch] [rbp-25h] BYREF
  struct SURFACE *v25; // [rsp+70h] [rbp-21h]
  struct tagPOINT v26; // [rsp+78h] [rbp-19h] BYREF
  struct tagSIZE v27; // [rsp+80h] [rbp-11h] BYREF
  struct tagPOINT v28; // [rsp+88h] [rbp-9h] BYREF
  struct tagSIZE v29; // [rsp+90h] [rbp-1h] BYREF
  struct tagPOINT v30; // [rsp+98h] [rbp+7h] BYREF
  HDC v31; // [rsp+A0h] [rbp+Fh]
  HDC v32; // [rsp+A8h] [rbp+17h]
  __int64 v33; // [rsp+B0h] [rbp+1Fh]
  __int64 v34; // [rsp+B8h] [rbp+27h]
  HDEV v35; // [rsp+C0h] [rbp+2Fh] BYREF

  v33 = a2;
  v34 = 0LL;
  v35 = a1;
  v3 = 1;
  ENTER_GRE_DWM_CRIT((__int64)a1, &v24);
  if ( !g_pDwmState )
    goto LABEL_7;
  v4 = 0LL;
  v25 = 0LL;
  DisplayDC = 0LL;
  v6 = *(HDC *)(gpDispInfo + 56LL);
  v7 = (HDC)ghdcMem;
  v8 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
  v32 = v6;
  v31 = (HDC)ghdcMem;
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
    if ( !(unsigned int)UserIsWindowOnDesktopAndComposed(*(_QWORD *)(v10 + 40), v33) )
    {
      v8 = *(struct DwmState **)(v10 + 24);
      continue;
    }
    if ( GdiCreateSprite(a1, *(HWND *)(v10 + 40), (struct _RECTL *)(v10 + 56)) )
    {
      v14 = *(_QWORD *)(v11 + 184);
      v3 = 1;
      if ( v14 )
      {
        v25 = SFMLOGICALSURFACE::OwnsSurfaceCleanup((SFMLOGICALSURFACE *)v11, v12);
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v11, a1, 0LL);
LABEL_19:
        v13 = *(_QWORD *)(v10 + 72) - v34;
        if ( !v13 )
          v13 = *(unsigned int *)(v10 + 80) - (unsigned __int64)(unsigned int)v34;
        if ( !v13 )
        {
          *(_DWORD *)(v10 + 72) = 4;
          *(_DWORD *)(v10 + 76) = 16711680;
        }
        if ( v14 )
        {
          v15 = *(_DWORD *)(v11 + 252);
          if ( (v15 & 1) != 0 )
          {
            GdiHintSpriteShape(a1, *(HWND *)(v10 + 40), *(HBITMAP *)(v14 + 8), (v15 >> 6) & 1, 1);
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
            if ( !DisplayDC )
            {
              DisplayDC = (HDC)GreCreateDisplayDC(a1, 0LL);
              if ( !DisplayDC )
                DisplayDC = v32;
            }
            if ( v4 || (v4 = (HDC)GreCreateDisplayDC(a1, 1LL)) != 0LL || (v4 = v31) != 0LL )
            {
              if ( DisplayDC )
              {
                *((_DWORD *)v25 + 28) |= 0x4000000u;
                v17 = GreSelectBitmap(v4, *(_QWORD *)(v14 + 8));
                if ( v17 )
                {
                  v18 = *(_DWORD *)(v10 + 56);
                  v19 = *(HWND *)(v10 + 40);
                  v20 = *(_DWORD *)(v10 + 72) | 0x20000000;
                  v26.y = 0;
                  v26.x = 0;
                  v28.x = v18;
                  v28.y = *(_DWORD *)(v10 + 60);
                  v27 = *(struct tagSIZE *)(v14 + 32);
                  GdiUpdateSprite(
                    a1,
                    v19,
                    0LL,
                    DisplayDC,
                    (struct _POINTL *)&v28,
                    &v27,
                    v4,
                    (struct _POINTL *)&v26,
                    *(_DWORD *)(v10 + 80),
                    (struct _BLENDFUNCTION *)(v10 + 76),
                    v20,
                    0LL);
                  GreSelectBitmap(v4, v17);
                }
                v3 = 1;
              }
            }
          }
        }
        else
        {
          v16 = *(_DWORD *)(v10 + 56);
          v29 = 0LL;
          v23 = *(_DWORD *)(v10 + 72) | 0x20000000;
          v30.x = v16;
          v30.y = *(_DWORD *)(v10 + 60);
          GdiUpdateSprite(
            a1,
            *(HWND *)(v10 + 40),
            0LL,
            0LL,
            (struct _POINTL *)&v30,
            &v29,
            0LL,
            0LL,
            *(_DWORD *)(v10 + 80),
            (struct _BLENDFUNCTION *)(v10 + 76),
            v23,
            0LL);
        }
        if ( v14 )
          SFMLOGICALSURFACE::CleanupShape((SFMLOGICALSURFACE *)v11, (HSURF *)v25);
        goto LABEL_40;
      }
      if ( (unsigned int)UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v10 + 40)) )
        goto LABEL_19;
    }
    else
    {
      v3 = 0;
    }
LABEL_40:
    v8 = *(struct DwmState **)(v10 + 24);
    v21 = *(void **)v10;
    v22 = (void *)UserReferenceDwmApiPort(v13);
    DwmAsyncDestroySprite(v22, (__int64)v21);
    vspDestroyDwmSpriteObjInternal(a1, 0LL, (struct DWMSPRITE *)v10);
  }
  while ( v8 != (struct DwmState *)((char *)g_pDwmState + 80) );
  v7 = v31;
  v6 = v32;
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
