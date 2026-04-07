/*
 * XREFs of ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800219E0
 * Callers:
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18000EB90 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180020FF0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800214B0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180022FA0 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180031DF0 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003EE1C (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ @ 0x18008D528 (-LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x18008DDD4 (-SetHolographic@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18008E0EC (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x180021B68 (-ConnectToParent@CVisual@@QEAAJ_N@Z.c)
 *     ?Hide@CVisual@@QEAAXXZ @ 0x18003ACE4 (-Hide@CVisual@@QEAAXXZ.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x18003B590 (-Unhide@CVisual@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x18008A830 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18008BB00 (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ShowWindow(CTopLevelWindow *this, char a2)
{
  char v2; // di
  __int64 v4; // rax
  char v5; // cl
  char v6; // al
  bool v7; // al
  CVisual *v8; // rcx
  unsigned int v9; // ebp
  __int64 v10; // rsi
  CProjectionBorderVisual *v11; // rcx
  CDesktopManager *v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rdi
  __int64 v15; // rax
  bool v17; // dl
  struct CVisual *v18; // rdx
  __int64 v19; // rcx
  struct CWindowData *v20; // rdx
  __int64 v21; // r14
  __int64 v22; // r14
  CAccentBlurBehind *v23; // rcx

  v2 = a2;
  if ( *((char *)this + 240) < 0 )
  {
    v2 = 1;
    goto LABEL_22;
  }
  v4 = *((_QWORD *)this + 90);
  v5 = *(_BYTE *)(v4 + 607);
  if ( v5 < 0 || (*((_BYTE *)this + 241) & 2) != 0 )
  {
    v2 = 0;
    goto LABEL_5;
  }
  if ( a2 )
  {
LABEL_22:
    v9 = CVisual::ConnectToParent(*((CVisual **)this + 32), 1);
    if ( (*((_BYTE *)this + 240) & 1) == 0 )
      goto LABEL_12;
    goto LABEL_23;
  }
LABEL_5:
  v6 = *(_BYTE *)(v4 + 604);
  v7 = (v6 & 1) != 0 && v5 >= 0 && (v6 & 4) == 0;
  v8 = (CVisual *)*((_QWORD *)this + 32);
  if ( !v7 )
  {
    v9 = CVisual::ConnectToParent(v8, 0);
    if ( (*((_BYTE *)this + 240) & 1) == 0 )
      goto LABEL_12;
LABEL_23:
    CVisual::Unhide(this);
    *((_BYTE *)this + 240) &= ~1u;
    goto LABEL_12;
  }
  v9 = CVisual::ConnectToParent(v8, 1);
  if ( (*((_BYTE *)this + 240) & 1) == 0 )
  {
    CVisual::Hide(this);
    *((_BYTE *)this + 240) |= 1u;
  }
LABEL_12:
  v10 = *((_QWORD *)this + 90);
  v11 = *(CProjectionBorderVisual **)(v10 + 416);
  if ( v11 )
  {
    v17 = v2 && (*((_BYTE *)this + 241) & 1) == 0;
    CProjectionBorderVisual::Show(v11, v17);
    v10 = *((_QWORD *)this + 90);
    v18 = *(struct CVisual **)(v10 + 416);
    v19 = *((_QWORD *)v18 + 3);
    if ( v19 )
    {
      VisualCollection::InsertRelative((VisualCollection *)(v19 + 32), v18, this, 1u, 1);
      v10 = *((_QWORD *)this + 90);
    }
  }
  v12 = CDesktopManager::s_pDesktopManagerInstance;
  *((_BYTE *)this + 825) = 1;
  v13 = 0;
  v14 = *((_QWORD *)v12 + 61);
  if ( *(_DWORD *)(v14 + 560) )
  {
    do
    {
      v15 = *(_QWORD *)(v14 + 536);
      if ( *(_DWORD *)(v15 + 16LL * v13 + 8) == 3 )
      {
        v20 = *(struct CWindowData **)(v15 + 16LL * v13);
        v21 = *((_QWORD *)v20 + 50);
        if ( v21 )
        {
          if ( !v10 || *((_QWORD *)v20 + 15) == *(_QWORD *)(v10 + 120) )
          {
            v22 = *(_QWORD *)(v21 + 264);
            if ( v22 )
            {
              v23 = *(CAccentBlurBehind **)(v22 + 336);
              if ( v23 )
              {
                if ( *((_QWORD *)v20 + 5) == *(_QWORD *)(v22 + 400)
                  || CAccentBlurBehind::IsBlurBehindDirty(
                       v23,
                       v20,
                       (const struct tagRECT *)(v22 + 616),
                       *(_QWORD *)(v22 + 408),
                       *(HWND *)(v22 + 400)) )
                {
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 24LL))(v22, 0x10000LL);
                }
              }
            }
          }
        }
      }
      ++v13;
    }
    while ( v13 < *(_DWORD *)(v14 + 560) );
  }
  return v9;
}
