/*
 * XREFs of ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180019C10
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x1800078F4 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18000D720 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x1800112F0 (-SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180014A70 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800198B0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18001F720 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ @ 0x18008776C (-LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800882AC (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18008DBC8 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x180019DD8 (-ConnectToParent@CVisual@@QEAAJ_N@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Hide@CVisual@@QEAAXXZ @ 0x18003A954 (-Hide@CVisual@@QEAAXXZ.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x18003AC20 (-Unhide@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x180083E20 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 *     ?OnAccentStateUpdated@CAccent@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x1800853B4 (-OnAccentStateUpdated@CAccent@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ShowWindow(CTopLevelWindow *this, char a2)
{
  char v2; // al
  unsigned int v3; // ebx
  __int64 v6; // rdx
  char v7; // cl
  char v8; // al
  bool v9; // al
  __int64 v10; // r8
  char v11; // al
  int v12; // ebp
  __int64 v13; // r14
  CProjectionBorderVisual *v14; // rcx
  CDesktopManager *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v19; // rdx
  int v20; // eax
  bool v21; // dl
  struct CVisual *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx

  v2 = *((_BYTE *)this + 241);
  v3 = 0;
  if ( (v2 & 1) != 0 )
  {
    a2 = 1;
    goto LABEL_22;
  }
  v6 = *((_QWORD *)this + 90);
  v7 = *(_BYTE *)(v6 + 599);
  if ( v7 < 0 || (v2 & 4) != 0 )
  {
    a2 = 0;
    goto LABEL_5;
  }
  if ( a2 )
  {
LABEL_22:
    v12 = CVisual::ConnectToParent(*((CVisual **)this + 32), 1);
    if ( (*((_BYTE *)this + 240) & 1) == 0 )
      goto LABEL_13;
    goto LABEL_23;
  }
LABEL_5:
  v8 = *(_BYTE *)(v6 + 596);
  v9 = (v8 & 1) != 0 && v7 >= 0 && (v8 & 4) == 0;
  v10 = *((_QWORD *)this + 32);
  if ( !v9 )
  {
    v11 = *(_BYTE *)(v10 + 84);
    v12 = 0;
    if ( (v11 & 4) != 0 )
    {
      *(_BYTE *)(v10 + 84) = v11 & 0xFB;
      v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 24) + 40LL) + 16LL);
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v19 + 16) + 440LL))(
              *(_QWORD *)(v19 + 16),
              *(unsigned int *)(v19 + 24),
              *(unsigned int *)(*(_QWORD *)(v10 + 16) + 24LL));
      v12 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x1A9u);
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x419u);
    }
    if ( (*((_BYTE *)this + 240) & 1) == 0 )
      goto LABEL_13;
LABEL_23:
    CVisual::Unhide(this);
    *((_BYTE *)this + 240) &= ~1u;
    goto LABEL_13;
  }
  v12 = CVisual::ConnectToParent(*((CVisual **)this + 32), 1);
  if ( (*((_BYTE *)this + 240) & 1) == 0 )
  {
    CVisual::Hide(this);
    *((_BYTE *)this + 240) |= 1u;
  }
LABEL_13:
  v13 = *((_QWORD *)this + 90);
  v14 = *(CProjectionBorderVisual **)(v13 + 408);
  if ( v14 )
  {
    v21 = a2 && (*((_BYTE *)this + 241) & 2) == 0;
    CProjectionBorderVisual::Show(v14, v21);
    v13 = *((_QWORD *)this + 90);
    v22 = *(struct CVisual **)(v13 + 408);
    v23 = *((_QWORD *)v22 + 3);
    if ( v23 )
    {
      VisualCollection::InsertRelative((VisualCollection *)(v23 + 32), v22, this, 1, 1);
      v13 = *((_QWORD *)this + 90);
    }
  }
  v15 = CDesktopManager::s_pDesktopManagerInstance;
  *((_BYTE *)this + 825) = 1;
  v16 = *((_QWORD *)v15 + 61);
  if ( *(_DWORD *)(v16 + 560) )
  {
    do
    {
      v17 = *(_QWORD *)(v16 + 536);
      if ( *(_DWORD *)(v17 + 16LL * v3 + 8) == 3 )
      {
        v24 = *(_QWORD *)(v17 + 16LL * v3);
        v25 = *(_QWORD *)(v24 + 392);
        if ( v25 )
        {
          if ( !v13 || *(_QWORD *)(v24 + 120) == *(_QWORD *)(v13 + 120) )
          {
            v26 = *(_QWORD *)(v25 + 264);
            if ( v26 )
              CAccent::OnAccentStateUpdated(v26, v24, 3LL);
          }
        }
      }
      ++v3;
    }
    while ( v3 < *(_DWORD *)(v16 + 560) );
  }
  return (unsigned int)v12;
}
