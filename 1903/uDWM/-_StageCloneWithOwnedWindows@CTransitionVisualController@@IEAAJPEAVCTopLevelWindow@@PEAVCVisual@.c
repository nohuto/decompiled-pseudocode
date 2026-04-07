/*
 * XREFs of ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x18004B104
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800048B4 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180032148 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x180009448 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18000ADA8 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18000AE20 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180036A78 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_aa6b274e5719162e24170e1c78bdbbc5___ @ 0x18004B284 (CTransitionVisualController--ForEachOwnedWindow__lambda_aa6b274e5719162e24170e1c78bdbbc5___.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x1800A3050 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
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
  LONG top; // eax
  int v16; // edx
  int right; // r11d
  int v18; // eax
  int v19; // r10d
  int bottom; // r8d
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int inserted; // eax
  void *v28; // [rsp+28h] [rbp-71h]
  void *v29; // [rsp+28h] [rbp-71h]
  bool v30; // [rsp+50h] [rbp-49h] BYREF
  struct CVisual *v31; // [rsp+58h] [rbp-41h] BYREF
  struct CVisual *v32; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v33[5]; // [rsp+68h] [rbp-31h] BYREF
  struct tagRECT rc; // [rsp+90h] [rbp-9h] BYREF
  int v35; // [rsp+108h] [rbp+6Fh] BYREF

  v35 = a4;
  v6 = *(_DWORD *)(a1 + 48);
  v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 96) == -1LL;
  v10 = (struct tagRECT *)*((_QWORD *)a2 + 90);
  v31 = a3;
  v32 = 0LL;
  v30 = 1;
  if ( v8 )
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147467259,
      0xEAu,
      v28);
  }
  else
  {
    v33[1] = a1;
    v33[0] = &v35;
    LOBYTE(a3) = 1;
    v33[2] = &v31;
    v33[3] = &a5;
    v33[4] = &v30;
    CTransitionVisualController::ForEachOwnedWindow__lambda_aa6b274e5719162e24170e1c78bdbbc5___(v10, v33, a3);
    v12 = CTransitionVisualController::_StageCloneRelative(
            (CTransitionVisualController *)a1,
            a2,
            v31,
            0,
            0LL,
            1,
            a5,
            1,
            &v30);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v12,
        0xFFu,
        v29);
LABEL_5:
      if ( v13 >= 0 )
        goto LABEL_6;
      goto LABEL_11;
    }
    if ( *((_DWORD *)v31 + 18) )
    {
      if ( a6 == 1 )
      {
        top = v10[38].top;
        rc = v10[3];
        if ( (top & 0x1000000) != 0 )
        {
          v16 = 0;
          right = v10[38].right;
          if ( v10[39].left - right >= 0 )
            v16 = v10[39].left - right;
          v18 = 0;
          if ( rc.right - rc.left >= 0 )
            v18 = rc.right - rc.left;
          if ( v16 > v18 )
            rc.right = v16 + rc.left;
          v19 = 0;
          bottom = v10[38].bottom;
          if ( v10[39].top - bottom >= 0 )
            v19 = v10[39].top - bottom;
          v21 = 0;
          if ( rc.bottom - rc.top >= 0 )
            v21 = rc.bottom - rc.top;
          if ( v19 > v21 )
            rc.bottom = v19 + rc.top;
          OffsetRect(&rc, right, bottom);
          top = v10[38].top;
        }
        if ( (top & 0x800000) != 0 )
        {
          v22 = 0;
          if ( v10[41].left - v10[40].right >= 0 )
            v22 = v10[41].left - v10[40].right;
          v23 = 0;
          if ( rc.right - rc.left >= 0 )
            v23 = rc.right - rc.left;
          if ( v22 > v23 )
            rc.right = v22 + rc.left;
          v24 = 0;
          if ( v10[41].top - v10[40].bottom >= 0 )
            v24 = v10[41].top - v10[40].bottom;
          v25 = 0;
          if ( rc.bottom - rc.top >= 0 )
            v25 = rc.bottom - rc.top;
          if ( v24 > v25 )
            rc.bottom = rc.top + v24;
        }
        v26 = CTransitionVisualController::CreateBackground(&rc, &v32);
        v13 = v26;
        if ( v26 >= 0 )
        {
          v7 = v32;
          inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)v31 + 32), v32, 0LL, 1u, 1);
          v13 = inserted;
          if ( inserted >= 0 )
            goto LABEL_6;
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            inserted,
            0x126u,
            v29);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            v26,
            0x125u,
            v29);
          v7 = v32;
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
      0x104u,
      v29);
  }
LABEL_11:
  VisualCollection::RemoveAll((struct CVisual *)((char *)v31 + 32));
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
