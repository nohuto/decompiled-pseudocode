/*
 * XREFs of ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x180049258
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000A6D4 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18002F1D4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18002B368 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18002D8AC (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18002DC04 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800358A0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_01b389546427082a9499a493e716ac63___ @ 0x1800493D8 (CTransitionVisualController--ForEachOwnedWindow__lambda_01b389546427082a9499a493e716ac63___.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x18009E890 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_StageCloneWithOwnedWindows(
        __int64 a1,
        struct CTopLevelWindow *a2,
        struct CVisual *a3,
        int a4,
        bool a5,
        int a6)
{
  unsigned int v6; // r15d
  struct CVisual *v7; // rsi
  bool v8; // zf
  struct tagRECT *v10; // rdi
  int v12; // eax
  int v13; // ebx
  LONG bottom; // eax
  int v16; // edx
  int left; // r11d
  int v18; // eax
  int v19; // r10d
  int top; // r8d
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int inserted; // eax
  bool v28; // [rsp+50h] [rbp-49h] BYREF
  struct CVisual *v29; // [rsp+58h] [rbp-41h] BYREF
  struct CVisual *v30; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v31[5]; // [rsp+68h] [rbp-31h] BYREF
  struct tagRECT rc; // [rsp+90h] [rbp-9h] BYREF
  int v33; // [rsp+108h] [rbp+6Fh] BYREF

  v33 = a4;
  v6 = *(_DWORD *)(a1 + 48);
  v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 96) == -1LL;
  v10 = (struct tagRECT *)*((_QWORD *)a2 + 90);
  v29 = a3;
  v30 = 0LL;
  v28 = 1;
  if ( v8 )
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147467259,
      0xECu);
  }
  else
  {
    v31[1] = a1;
    v31[0] = &v33;
    LOBYTE(a3) = 1;
    v31[2] = &v29;
    v31[3] = &a5;
    v31[4] = &v28;
    CTransitionVisualController::ForEachOwnedWindow__lambda_01b389546427082a9499a493e716ac63___(v10, v31, a3);
    v12 = CTransitionVisualController::_StageCloneRelative(
            (CTransitionVisualController *)a1,
            a2,
            v29,
            0LL,
            0LL,
            1,
            a5,
            1,
            &v28);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v12,
        0x101u);
LABEL_5:
      if ( v13 >= 0 )
        goto LABEL_6;
      goto LABEL_11;
    }
    if ( *((_DWORD *)v29 + 18) )
    {
      if ( a6 == 1 )
      {
        bottom = v10[37].bottom;
        rc = v10[3];
        if ( (bottom & 0x1000000) != 0 )
        {
          v16 = 0;
          left = v10[38].left;
          if ( v10[38].right - left >= 0 )
            v16 = v10[38].right - left;
          v18 = 0;
          if ( rc.right - rc.left >= 0 )
            v18 = rc.right - rc.left;
          if ( v16 > v18 )
            rc.right = v16 + rc.left;
          v19 = 0;
          top = v10[38].top;
          if ( v10[38].bottom - top >= 0 )
            v19 = v10[38].bottom - top;
          v21 = 0;
          if ( rc.bottom - rc.top >= 0 )
            v21 = rc.bottom - rc.top;
          if ( v19 > v21 )
            rc.bottom = v19 + rc.top;
          OffsetRect(&rc, left, top);
          bottom = v10[37].bottom;
        }
        if ( (bottom & 0x800000) != 0 )
        {
          v22 = 0;
          if ( v10[40].right - v10[40].left >= 0 )
            v22 = v10[40].right - v10[40].left;
          v23 = 0;
          if ( rc.right - rc.left >= 0 )
            v23 = rc.right - rc.left;
          if ( v22 > v23 )
            rc.right = v22 + rc.left;
          v24 = 0;
          if ( v10[40].bottom - v10[40].top >= 0 )
            v24 = v10[40].bottom - v10[40].top;
          v25 = 0;
          if ( rc.bottom - rc.top >= 0 )
            v25 = rc.bottom - rc.top;
          if ( v24 > v25 )
            rc.bottom = v24 + rc.top;
        }
        v26 = CTransitionVisualController::CreateBackground(&rc, &v30);
        v13 = v26;
        if ( v26 >= 0 )
        {
          v7 = v30;
          inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)v29 + 32), v30, 0LL, 1u, 1);
          v13 = inserted;
          if ( inserted >= 0 )
            goto LABEL_6;
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            inserted,
            0x128u);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            v26,
            0x127u);
          v7 = v30;
        }
      }
      goto LABEL_5;
    }
    v13 = -2003304447;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2003304447,
      0x106u);
  }
LABEL_11:
  VisualCollection::RemoveAll((struct CVisual *)((char *)v29 + 32));
  while ( *(_DWORD *)(a1 + 48) > v6 )
  {
    CTransitionVisualController::_MoveWindowOffscreen(
      *(struct CTopLevelWindow **)(*(_QWORD *)(a1 + 24) + 24LL * (unsigned int)(*(_DWORD *)(a1 + 48) - 1)),
      0);
    DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((__int64 *)(a1 + 24), *(_DWORD *)(a1 + 48) - 1);
  }
LABEL_6:
  if ( v7 )
    CBaseObject::Release(v7);
  return (unsigned int)v13;
}
