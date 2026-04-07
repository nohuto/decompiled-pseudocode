/*
 * XREFs of ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180028F30
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180009654 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180014060 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001468C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180025680 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180028BD4 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180030D40 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003F1F8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003F8D0 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003FBBC (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003FC38 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003FCB8 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003FD2C (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003FD94 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18004B210 (-_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___ @ 0x18004B3F8 (CTransitionVisualController--ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18007B83C (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x1800A47A8 (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x1800AF780 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVisual::RenderRecursive(CVisual *this)
{
  int v1; // eax
  __int64 v4; // rdi
  char v5; // si
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebp
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 20);
  if ( (v1 & 0xFFFFFFFE) != 0 )
  {
    v9 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 48LL))(this);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x142,
        (unsigned int)"windows\\dwm\\udwm\\visual.cpp",
        (const char *)(unsigned int)v9,
        v13);
      return v10;
    }
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 1) != 0 )
  {
    LODWORD(v4) = -1;
    v5 = 0;
    while ( 1 )
    {
      if ( !v5 )
      {
        LODWORD(v4) = *((_DWORD *)this + 18);
        v5 = 1;
      }
      v4 = (unsigned int)(v4 - 1);
      if ( (_DWORD)v4 == -1 )
        break;
      v6 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4);
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 64LL))(v6);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x153,
          (unsigned int)"windows\\dwm\\udwm\\visual.cpp",
          (const char *)(unsigned int)v7,
          v13);
        return v8;
      }
    }
    *((_DWORD *)this + 20) &= ~1u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0xFFFFFFFE) == 0 )
    return 0LL;
  v11 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 56LL))(this);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15E,
    (unsigned int)"windows\\dwm\\udwm\\visual.cpp",
    (const char *)(unsigned int)v11,
    v13);
  return v12;
}
