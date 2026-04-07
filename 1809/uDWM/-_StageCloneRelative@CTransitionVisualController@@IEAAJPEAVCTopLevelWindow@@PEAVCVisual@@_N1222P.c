/*
 * XREFs of ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18002B368
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000A6D4 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180029F70 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18002F1D4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x180049258 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     _lambda_01b389546427082a9499a493e716ac63_::operator() @ 0x18004949C (_lambda_01b389546427082a9499a493e716ac63_--operator().c)
 * Callees:
 *     ?SetHitTestVisibility@CVisual@@QEAAJ_N@Z @ 0x1800068A4 (-SetHitTestVisibility@CVisual@@QEAAJ_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18002B19C (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002B57C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18002D8AC (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800347E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x1800363F4 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?AllowSnapshotForSWR@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18004B34C (-AllowSnapshotForSWR@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_StageCloneRelative(
        CTransitionVisualController *this,
        struct CTopLevelWindow *a2,
        struct CVisual *a3,
        __int64 a4,
        struct CVisual *a5,
        bool a6,
        bool a7,
        bool a8,
        bool *a9)
{
  __int64 v9; // rax
  int v10; // ebx
  char v11; // r14
  __int128 v13; // rdi
  int v15; // eax
  __int64 v16; // rdx
  VisualCollection *v17; // rcx
  int inserted; // eax
  __int64 v19; // rax
  bool *v20; // rbx
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v26; // eax
  bool v27; // al
  int v28; // r9d
  unsigned int v29; // [rsp+20h] [rbp-30h]
  CBaseObject *v30; // [rsp+30h] [rbp-20h] BYREF
  __int128 v31; // [rsp+38h] [rbp-18h] BYREF
  __int64 v32; // [rsp+48h] [rbp-8h]
  struct tagPOINT v33; // [rsp+88h] [rbp+38h] BYREF

  v9 = *((_QWORD *)a2 + 90);
  v10 = 0;
  v30 = 0LL;
  v11 = a4;
  *(_QWORD *)&v13 = a2;
  if ( (*(_BYTE *)(v9 + 596) & 4) != 0 )
    return (unsigned int)v10;
  v15 = CTopLevelWindow::CloneVisualTreeForLivePreview(a2, 0, (__int64)a3, a4, &v30);
  v10 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v15,
      0x8Fu);
    goto LABEL_20;
  }
  v16 = *(_QWORD *)(v13 + 720);
  if ( v16 )
  {
    v33 = *(struct tagPOINT *)(v16 + 48);
    if ( a7 )
      CWindowPropertyTracker::GetWindowEndPosition(
        (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
        *(HWND *)(v16 + 40),
        &v33);
  }
  else
  {
    v33 = *(struct tagPOINT *)(v13 + 112);
  }
  *((_QWORD *)&v13 + 1) = v30;
  CVisual::SetOffset(v30, &v33);
  if ( v11 )
    CVisual::SetHitTestVisibility(*((CVisual **)&v13 + 1));
  v17 = (struct CVisual *)((char *)a3 + 32);
  if ( !a6 )
  {
    inserted = VisualCollection::InsertRelative(v17, *((struct CVisual **)&v13 + 1), a5, 0, 1);
    v10 = inserted;
    if ( inserted >= 0 )
      goto LABEL_10;
    v29 = 175;
LABEL_34:
    v28 = inserted;
LABEL_36:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v28,
      v29);
    goto LABEL_21;
  }
  inserted = VisualCollection::InsertRelative(v17, *((struct CVisual **)&v13 + 1), a5, 1u, 1);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v29 = 171;
    goto LABEL_34;
  }
LABEL_10:
  if ( a8 )
  {
    v19 = *(_QWORD *)(v13 + 720);
    if ( !v19 || (*(_DWORD *)(v19 + 604) & 0x20000000) == 0 )
      CTransitionVisualController::_MoveWindowOffscreen((struct CTopLevelWindow *)v13, 1);
  }
  v20 = a9;
  v31 = v13;
  LOBYTE(v32) = v11;
  *(_WORD *)((char *)&v32 + 1) = 257;
  if ( a9 )
  {
    v27 = *a9 && CTransitionVisualController::AllowSnapshotForSWR(*(HWND *)(*(_QWORD *)(v13 + 720) + 40LL));
    *v20 = v27;
    BYTE2(v32) = v27;
  }
  v21 = *((unsigned int *)this + 12);
  v22 = v21 + 1;
  v10 = (int)v21 + 1 < (unsigned int)v21 ? 0x80070216 : 0;
  if ( (int)v21 + 1 < (unsigned int)v21 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xB5u);
  }
  else if ( v22 > *((_DWORD *)this + 11) )
  {
    v26 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 24, 0x18u, 1, &v31);
    v10 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xC0u);
  }
  else
  {
    v23 = 3 * v21;
    v24 = *((_QWORD *)this + 3);
    *(_OWORD *)(v24 + 8 * v23) = v31;
    *(_QWORD *)(v24 + 8 * v23 + 16) = v32;
    *((_DWORD *)this + 12) = v22;
  }
  if ( v10 < 0 )
  {
    v29 = 193;
    v28 = v10;
    goto LABEL_36;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
LABEL_20:
  *((_QWORD *)&v13 + 1) = v30;
LABEL_21:
  if ( v10 < 0 && *((_QWORD *)&v13 + 1) )
  {
    CTransitionVisualController::_MoveWindowOffscreen((struct CTopLevelWindow *)v13, 0);
    VisualCollection::Remove((struct CVisual *)((char *)a3 + 32), *((struct CVisual **)&v13 + 1));
    CBaseObject::Release(*((CBaseObject **)&v13 + 1));
  }
  return (unsigned int)v10;
}
