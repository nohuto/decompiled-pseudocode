/*
 * XREFs of GreTransferDwmStateToSpriteState @ 0x1C015F770
 * Callers:
 *     zzzComposeDesktop @ 0x1C0010708 (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C015F5CC (zzzDecomposeDesktop.c)
 * Callees:
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C00819A0 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C00823E0 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C00830D8 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     GreDeleteSprite @ 0x1C0089B04 (GreDeleteSprite.c)
 *     DwmAsyncDestroySprite @ 0x1C0089D84 (DwmAsyncDestroySprite.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C0089F60 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C008AC04 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C008B9A0 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C008C744 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C008CA50 (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C008CB08 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C00FD85C (UserIsWindowWithNoRedirectionBitmap.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C015F274 (UserIsWindowOnDesktopAndComposed.c)
 *     ?vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z @ 0x1C027ED9C (-vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall GreTransferDwmStateToSpriteState(HDEV a1, __int64 a2)
{
  unsigned int v3; // r13d
  __int64 v4; // r8
  HDC v5; // r12
  HDC DisplayDC; // r15
  HDC v7; // rbx
  HDC v8; // r10
  struct DwmState *v9; // r14
  __int64 v11; // rdi
  __int64 v12; // r14
  HLSURF v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  int IsWindowWithNoRedirectionBitmap; // eax
  LONG v19; // eax
  __int64 v20; // r13
  int v21; // ecx
  HWND v22; // rdx
  void *v23; // rbx
  void *v24; // rax
  unsigned int v25; // [rsp+58h] [rbp-39h]
  int v26; // [rsp+6Ch] [rbp-25h] BYREF
  struct tagSIZE v27; // [rsp+70h] [rbp-21h] BYREF
  struct tagPOINT v28; // [rsp+78h] [rbp-19h] BYREF
  struct SURFACE *v29; // [rsp+80h] [rbp-11h]
  struct tagSIZE v30; // [rsp+88h] [rbp-9h] BYREF
  struct tagPOINT v31; // [rsp+90h] [rbp-1h] BYREF
  HDC v32; // [rsp+98h] [rbp+7h]
  HDC v33; // [rsp+A0h] [rbp+Fh]
  __int64 v34; // [rsp+A8h] [rbp+17h]
  __int64 v35; // [rsp+B0h] [rbp+1Fh]
  struct tagPOINT v36; // [rsp+B8h] [rbp+27h] BYREF
  HDEV v37; // [rsp+C0h] [rbp+2Fh] BYREF

  v34 = a2;
  v35 = 0LL;
  v37 = a1;
  v3 = 1;
  ENTER_GRE_DWM_CRIT((__int64)a1, &v26);
  if ( !g_pDwmState )
    goto LABEL_7;
  v5 = 0LL;
  v29 = 0LL;
  DisplayDC = 0LL;
  v7 = *(HDC *)(gpDispInfo + 56LL);
  v8 = (HDC)ghdcMem;
  v9 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
  v33 = v7;
  v32 = (HDC)ghdcMem;
  if ( v9 == (struct DwmState *)((char *)g_pDwmState + 80) )
    goto LABEL_3;
  do
  {
    v11 = ((unsigned __int64)v9 - 24) & -(__int64)(v9 != 0LL);
    v12 = *(_QWORD *)(v11 + 0xA8);
    if ( (*(_DWORD *)(v11 + 0x48) & 0x400000) != 0 )
    {
      v9 = *(struct DwmState **)(v11 + 24);
      GreDeleteSprite(a1, 0LL, *(void **)v11, 1);
      continue;
    }
    if ( !(unsigned int)UserIsWindowOnDesktopAndComposed(*(_QWORD *)(v11 + 40), v34, v4) )
    {
      v9 = *(struct DwmState **)(v11 + 24);
      continue;
    }
    if ( GdiCreateSprite(a1, *(HWND *)(v11 + 40), (struct _RECTL *)(v11 + 56)) )
    {
      v17 = *(_QWORD *)(v12 + 184);
      v3 = 1;
      if ( v17 )
      {
        v29 = SFMLOGICALSURFACE::OwnsSurfaceCleanup((SFMLOGICALSURFACE *)v12, v13);
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v12, a1, 0LL);
LABEL_19:
        v14 = *(_QWORD *)(v11 + 72) - v35;
        if ( !v14 )
          v14 = *(unsigned int *)(v11 + 80) - (unsigned __int64)(unsigned int)v35;
        if ( !v14 )
        {
          *(_DWORD *)(v11 + 72) = 4;
          *(_DWORD *)(v11 + 76) = 16711680;
        }
        if ( v17 )
        {
          v16 = *(unsigned int *)(v12 + 252);
          if ( (v16 & 1) != 0 )
          {
            GdiHintSpriteShape(a1, *(HWND *)(v11 + 40), *(HBITMAP *)(v17 + 8), ((unsigned int)v16 >> 6) & 1, 1);
            GdiUpdateSprite(
              a1,
              *(HWND *)(v11 + 40),
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              *(_DWORD *)(v11 + 80),
              (struct _BLENDFUNCTION *)(v11 + 76),
              *(_DWORD *)(v11 + 72) | 0x20000000,
              0LL);
          }
          else
          {
            v28 = 0LL;
            v36 = 0LL;
            v27 = 0LL;
            if ( !DisplayDC )
            {
              DisplayDC = (HDC)GreCreateDisplayDC(a1, 0LL);
              if ( !DisplayDC )
                DisplayDC = v33;
            }
            if ( v5 || (v5 = (HDC)GreCreateDisplayDC(a1, 1LL)) != 0LL || (v5 = v32) != 0LL )
            {
              if ( DisplayDC )
              {
                *((_DWORD *)v29 + 28) |= 0x4000000u;
                v20 = GreSelectBitmap(v5, *(_QWORD *)(v17 + 8));
                if ( v20 )
                {
                  v21 = *(_DWORD *)(v11 + 72);
                  v22 = *(HWND *)(v11 + 40);
                  v28 = *(struct tagPOINT *)(v11 + 56);
                  v27 = *(struct tagSIZE *)(v17 + 32);
                  GdiUpdateSprite(
                    a1,
                    v22,
                    0LL,
                    DisplayDC,
                    (struct _POINTL *)&v28,
                    &v27,
                    v5,
                    (struct _POINTL *)&v36,
                    *(_DWORD *)(v11 + 80),
                    (struct _BLENDFUNCTION *)(v11 + 76),
                    v21 | 0x20000000,
                    0LL);
                  GreSelectBitmap(v5, v20);
                }
                v3 = 1;
              }
            }
          }
        }
        else
        {
          v19 = *(_DWORD *)(v11 + 56);
          v30 = 0LL;
          v25 = *(_DWORD *)(v11 + 72) | 0x20000000;
          v31.x = v19;
          v31.y = *(_DWORD *)(v11 + 60);
          GdiUpdateSprite(
            a1,
            *(HWND *)(v11 + 40),
            0LL,
            0LL,
            (struct _POINTL *)&v31,
            &v30,
            0LL,
            0LL,
            *(_DWORD *)(v11 + 80),
            (struct _BLENDFUNCTION *)(v11 + 76),
            v25,
            0LL);
        }
        if ( v17 )
          SFMLOGICALSURFACE::CleanupShape((SFMLOGICALSURFACE *)v12, (HSURF *)v29);
        goto LABEL_40;
      }
      IsWindowWithNoRedirectionBitmap = UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v11 + 40), (__int64)v13, v15);
      v16 = 0LL;
      if ( IsWindowWithNoRedirectionBitmap )
        goto LABEL_19;
    }
    else
    {
      v3 = 0;
    }
LABEL_40:
    v9 = *(struct DwmState **)(v11 + 24);
    v23 = *(void **)v11;
    v24 = (void *)UserReferenceDwmApiPort(v14, v13, v15, v16);
    DwmAsyncDestroySprite(v24, (__int64)v23);
    vspDestroyDwmSpriteObjInternal(a1, 0LL, (struct DWMSPRITE *)v11);
  }
  while ( v9 != (struct DwmState *)((char *)g_pDwmState + 80) );
  v8 = v32;
  v7 = v33;
LABEL_3:
  if ( ((_DWORD)a1[10] & 0x20000) != 0 )
    vFixupMetaSpriteList((struct PDEVOBJ *)&v37);
  if ( v5 && v5 != v8 )
    GreDeleteDC(v5);
  if ( DisplayDC && DisplayDC != v7 )
    GreDeleteDC(DisplayDC);
LABEL_7:
  LEAVE_GRE_DWM_CRIT((__int64)a1, v26);
  return v3;
}
