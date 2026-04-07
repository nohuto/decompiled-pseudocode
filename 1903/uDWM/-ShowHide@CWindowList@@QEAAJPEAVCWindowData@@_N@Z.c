/*
 * XREFs of ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180017D78
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000C4EC (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000EE10 (-ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18000FFA0 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180011DF0 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026464 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180005254 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18000C6AC (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180012678 (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180014440 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001468C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18001471C (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800182C0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x1800186A4 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019F10 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x1800232FC (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180023870 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026654 (-OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180026870 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18002A4D4 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x18002F6F0 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z @ 0x180037EB4 (-FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180038630 (-SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180038700 (-SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800392B8 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180039980 (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800781B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x18008E134 (-SetHolographic@CTopLevelWindow@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowList::ShowHide(CWindowList *this, struct CWindowData *a2, char a3)
{
  __int64 v4; // rcx
  char v5; // al
  bool v8; // dl
  char v9; // cl
  int inserted; // ebx
  CTopLevelWindow3D *v11; // rcx
  struct CVisual *PrecedingVisibleWindowVisual; // rbx
  __int64 Element; // rax
  __int64 v14; // rcx
  struct CVisual *v15; // r14
  CVisual *v16; // rbx
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rcx
  char v20; // al
  CVisual *v21; // rcx
  CWindowList *v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rax
  struct CVisual *v26; // rbx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  __int64 v28; // rdx
  int v29; // [rsp+28h] [rbp-29h]
  _QWORD Buffer[2]; // [rsp+38h] [rbp-19h] BYREF
  __int128 v31; // [rsp+48h] [rbp-9h]
  __int128 v32; // [rsp+58h] [rbp+7h]
  __int128 v33; // [rsp+68h] [rbp+17h]
  __int64 v34; // [rsp+78h] [rbp+27h]
  char v35; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  bool v37; // [rsp+C0h] [rbp+6Fh] BYREF

  v4 = *((_QWORD *)a2 + 5);
  v5 = *((_BYTE *)a2 + 604) & 1;
  v37 = 0;
  v8 = v4 && v4 == *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 84);
  v9 = 0;
  if ( !v8 )
    v9 = v5;
  if ( v9 )
  {
    inserted = CWindowList::EnsureTopLevelWindow(this, a2);
    if ( inserted < 0 )
    {
      v28 = 2805LL;
      goto LABEL_39;
    }
    PrecedingVisibleWindowVisual = CWindowList::FindPrecedingVisibleWindowVisual(this, (struct _LIST_ENTRY *)a2);
    Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                (char *)this + 8,
                *((_QWORD *)a2 + 15));
    if ( Element )
      v14 = *(_QWORD *)(Element + 24);
    else
      v14 = 0LL;
    inserted = VisualCollection::InsertRelative(
                 (VisualCollection *)(v14 + 32),
                 *((struct CVisual **)a2 + 50),
                 PrecedingVisibleWindowVisual,
                 1u,
                 1);
    if ( inserted < 0 )
    {
      v28 = 2808LL;
      goto LABEL_39;
    }
    v15 = (struct CVisual *)*((_QWORD *)a2 + 52);
    if ( v15 )
    {
      if ( *((_QWORD *)v15 + 3) )
      {
        v26 = (struct CVisual *)*((_QWORD *)a2 + 50);
        RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
        inserted = VisualCollection::InsertRelative(
                     (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                     v15,
                     v26,
                     1u,
                     1);
        if ( inserted < 0 )
        {
          v28 = 2811LL;
          goto LABEL_39;
        }
      }
    }
    CVisual::SetDirtyFlags(*((CVisual **)a2 + 50), 0x400000);
    CVisual::SetDirtyFlags(*((CVisual **)a2 + 50), 0x8000);
    CVisual::SetDirtyFlags(*((CVisual **)a2 + 50), 0x10000);
    CVisual::SetDirtyFlags(*((CVisual **)a2 + 50), 0x20000);
    CVisual::SetOpacity(
      *((CVisual **)a2 + 50),
      (double)*(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)a2 + 50) + 720LL) + 352LL) / 255.0);
    v16 = (CVisual *)*((_QWORD *)a2 + 50);
    CVisual::SetDirtyFlags(v16, 0x40000);
    CVisual::SetDirtyFlags(v16, 0x4000000);
    CWindowData::OnColorizationUpdated(a2);
    CTopLevelWindow::OnBlurBehindUpdated(*((CTopLevelWindow **)a2 + 50));
    CVisual::SetDirtyFlags(*((CVisual **)a2 + 50), 0x4000);
    CTopLevelWindow::OnAccentPolicyUpdated(*((CTopLevelWindow **)a2 + 50));
    v17 = *((_QWORD *)a2 + 3);
    if ( v17 )
    {
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 296LL))(v17);
      CWindowList::SetExcludeFromDDA(this, *((struct IDwmWindow **)a2 + 3), v18);
      v19 = *((_QWORD *)a2 + 3);
      if ( v19 )
      {
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 304LL))(v19);
        CWindowList::SetPassiveUpdateMode(this, *((struct IDwmWindow **)a2 + 3), v20);
      }
    }
    if ( (*((_BYTE *)a2 + 609) & 1) != 0 )
    {
      inserted = CTopLevelWindow::SetHolographic(*((CTopLevelWindow **)a2 + 50), *((_BYTE *)a2 + 609) & 1);
      if ( inserted < 0 )
      {
        v28 = 2838LL;
        goto LABEL_39;
      }
    }
    CWindowList::OnPositionChange(this, a2, 0);
    inserted = CWindowList::UpdateWindowScale(this, (struct tagPOINT *)a2, 0);
    if ( inserted < 0 )
    {
      v28 = 2844LL;
      goto LABEL_39;
    }
    v21 = (CVisual *)*((_QWORD *)a2 + 50);
    if ( v21 )
      CVisual::SetDirtyFlags(v21, 0x4000000);
    CWindowList::OnGDISurfaceChange(v21, a2);
    inserted = CWindowList::UpdateThumbnailsForNewWindow(v22, a2);
    if ( inserted < 0 )
    {
      v28 = 2848LL;
      goto LABEL_39;
    }
    inserted = CLivePreview::OnWindowShowHide(
                 *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 64),
                 a2,
                 &v37,
                 0);
    if ( inserted < 0 )
    {
      v28 = 2852LL;
      goto LABEL_39;
    }
    CWindowList::ShowProjectionBorder(this, a2, *((_QWORD *)a2 + 52) != 0LL);
    if ( !v37 )
    {
      inserted = CTopLevelWindow3D::ShowWindow(
                   *((CTopLevelWindow3D **)a2 + 51),
                   1,
                   *(_BYTE *)(*((_QWORD *)a2 + 50) + 825LL) == 0);
      if ( inserted < 0 )
      {
        v28 = 2861LL;
        goto LABEL_39;
      }
    }
  }
  else
  {
    inserted = CLivePreview::OnWindowShowHide(
                 *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 64),
                 a2,
                 &v37,
                 0);
    if ( inserted < 0 )
    {
      v28 = 2868LL;
      goto LABEL_39;
    }
    if ( !v37 )
    {
      v11 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 51);
      if ( v11 )
      {
        inserted = CTopLevelWindow3D::ShowWindow(v11, 0, 0);
        if ( inserted < 0 )
        {
          v28 = 2874LL;
          goto LABEL_39;
        }
      }
    }
  }
  inserted = CWindowData::OnVisibilityUpdated((CWindowData **)a2);
  if ( inserted < 0 )
  {
    v28 = 2879LL;
  }
  else
  {
    if ( !a3 )
      return 0LL;
    v23 = *((_QWORD *)a2 + 15);
    Buffer[1] = 0LL;
    v34 = -1LL;
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    Buffer[0] = v23;
    v35 = 0;
    v24 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
    if ( v24 )
      v24 = (_QWORD *)v24[8];
    if ( *((_QWORD **)a2 + 5) != v24 )
      return 0LL;
    inserted = CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)a2 + 15));
    if ( inserted >= 0 )
      return 0LL;
    v28 = 2889LL;
  }
LABEL_39:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v28,
    (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)inserted,
    v29);
  return (unsigned int)inserted;
}
