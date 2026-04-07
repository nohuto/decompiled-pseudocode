/*
 * XREFs of ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x180009448
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800048B4 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18002A0D0 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180032148 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x18004B104 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     _lambda_aa6b274e5719162e24170e1c78bdbbc5_::operator() @ 0x18004B348 (_lambda_aa6b274e5719162e24170e1c78bdbbc5_--operator().c)
 * Callees:
 *     ?SetHitTestVisibility@CVisual@@QEAAJ_N@Z @ 0x180003F34 (-SetHitTestVisibility@CVisual@@QEAAJ_N@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180009654 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18000AE20 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023D10 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18002BA54 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800365C0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AllowSnapshotForSWR@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18004D818 (-AllowSnapshotForSWR@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_StageCloneRelative(
        CTransitionVisualController *this,
        struct CTopLevelWindow *a2,
        struct CVisual *a3,
        bool a4,
        struct CVisual *a5,
        bool a6,
        bool a7,
        bool a8,
        bool *a9)
{
  __int64 v9; // rax
  int v10; // ebx
  __int128 v13; // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  VisualCollection *v19; // rcx
  int inserted; // eax
  __int64 v21; // rax
  bool *v22; // rbx
  __int64 v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v28; // eax
  bool v29; // al
  int v30; // r9d
  unsigned int v31; // [rsp+20h] [rbp-30h]
  void *v32; // [rsp+28h] [rbp-28h]
  CBaseObject *v33; // [rsp+30h] [rbp-20h] BYREF
  __int128 v34; // [rsp+38h] [rbp-18h] BYREF
  __int64 v35; // [rsp+48h] [rbp-8h]
  struct tagPOINT v36; // [rsp+88h] [rbp+38h] BYREF

  v9 = *((_QWORD *)a2 + 90);
  v10 = 0;
  v33 = 0LL;
  *(_QWORD *)&v13 = a2;
  if ( (*(_BYTE *)(v9 + 604) & 4) != 0 )
    return (unsigned int)v10;
  v15 = CTopLevelWindow::CloneVisualTreeForLivePreview(a2, 0, (bool)a3, a4, &v33);
  v10 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v15,
      0x8Du,
      v32);
    goto LABEL_19;
  }
  v16 = *(_QWORD *)(v13 + 720);
  if ( v16 )
  {
    v36 = *(struct tagPOINT *)(v16 + 48);
    if ( a7 )
      CWindowPropertyTracker::GetWindowEndPosition(
        (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
        *(HWND *)(v16 + 40),
        &v36);
  }
  else
  {
    v36 = *(struct tagPOINT *)(v13 + 112);
  }
  *((_QWORD *)&v13 + 1) = v33;
  CVisual::SetOffset(v33, &v36);
  if ( a4 )
    CVisual::SetHitTestVisibility(*((CVisual **)&v13 + 1), v17, v18);
  v19 = (struct CVisual *)((char *)a3 + 32);
  if ( !a6 )
  {
    inserted = VisualCollection::InsertRelative(v19, *((struct CVisual **)&v13 + 1), a5, 0, 1);
    v10 = inserted;
    if ( inserted >= 0 )
      goto LABEL_10;
    v31 = 173;
LABEL_35:
    v30 = inserted;
LABEL_38:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v30,
      v31,
      v32);
    goto LABEL_20;
  }
  inserted = VisualCollection::InsertRelative(v19, *((struct CVisual **)&v13 + 1), a5, 1, 1);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v31 = 169;
    goto LABEL_35;
  }
LABEL_10:
  if ( a8 )
  {
    v21 = *(_QWORD *)(v13 + 720);
    if ( !v21 || (*(_DWORD *)(v21 + 612) & 0x20000000) == 0 )
      CTransitionVisualController::_MoveWindowOffscreen((struct CTopLevelWindow *)v13, 1);
  }
  v22 = a9;
  v34 = v13;
  LOBYTE(v35) = a4;
  *(_WORD *)((char *)&v35 + 1) = 257;
  if ( a9 )
  {
    v29 = *a9 && CTransitionVisualController::AllowSnapshotForSWR(*(HWND *)(*(_QWORD *)(v13 + 720) + 40LL));
    *v22 = v29;
    BYTE2(v35) = v29;
  }
  v23 = *((unsigned int *)this + 12);
  v24 = v23 + 1;
  if ( (int)v23 + 1 < (unsigned int)v23 )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v32);
LABEL_37:
    v31 = 191;
    v30 = v10;
    goto LABEL_38;
  }
  if ( v24 > *((_DWORD *)this + 11) )
  {
    v28 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 24, 24LL, 1LL, &v34);
    v10 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0xC0u, v32);
    if ( v10 >= 0 )
      goto LABEL_18;
    goto LABEL_37;
  }
  v25 = 3 * v23;
  v10 = 0;
  v26 = *((_QWORD *)this + 3);
  *(_OWORD *)(v26 + 8 * v25) = v34;
  *(_QWORD *)(v26 + 8 * v25 + 16) = v35;
  *((_DWORD *)this + 12) = v24;
LABEL_18:
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
LABEL_19:
  *((_QWORD *)&v13 + 1) = v33;
LABEL_20:
  if ( v10 < 0 && *((_QWORD *)&v13 + 1) )
  {
    CTransitionVisualController::_MoveWindowOffscreen((struct CTopLevelWindow *)v13, 0);
    VisualCollection::Remove((struct CVisual *)((char *)a3 + 32), *((struct CVisual **)&v13 + 1));
    CBaseObject::Release(*((CBaseObject **)&v13 + 1));
  }
  return (unsigned int)v10;
}
