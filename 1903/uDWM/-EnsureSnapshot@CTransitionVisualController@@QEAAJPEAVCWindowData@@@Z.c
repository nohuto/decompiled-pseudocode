/*
 * XREFs of ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800048B4
 * Callers:
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x180031A54 (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x1800041E0 (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x180004BD4 (-Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x180004EA4 (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x1800093E4 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x180009448 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000B880 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x18000EF30 (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800182C0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180033284 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x1800333F0 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180033C40 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x18004B104 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x18004B254 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0p @ 0x18008E3E8 (McTemplateU0p.c)
 */

__int64 __fastcall CTransitionVisualController::EnsureSnapshot(
        CTransitionVisualController *this,
        struct CWindowData *a2)
{
  int v2; // eax
  volatile signed __int32 *v3; // rdi
  int v6; // r13d
  char v7; // r12
  int v8; // eax
  int inserted; // ebx
  int v10; // ecx
  struct tagRECT *v11; // r15
  unsigned int Clone; // r15d
  int v13; // eax
  struct CTopLevelWindow *v14; // rdx
  int v15; // eax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // edx
  struct CVisual *v19; // rdx
  __int64 v20; // rcx
  int v22; // eax
  int v23; // r9d
  int v24; // eax
  int v25; // r9d
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  struct CVisual *v27; // r14
  CDesktopManager *v28; // rcx
  int v29; // [rsp+20h] [rbp-40h]
  unsigned int v30; // [rsp+20h] [rbp-40h]
  unsigned int v31; // [rsp+20h] [rbp-40h]
  void *v32; // [rsp+28h] [rbp-38h]
  __int128 v33; // [rsp+50h] [rbp-10h] BYREF
  CBaseObject *v34; // [rsp+A8h] [rbp+48h] BYREF
  CBaseObject *v35; // [rsp+B0h] [rbp+50h] BYREF
  struct tagRECT *v36; // [rsp+B8h] [rbp+58h]

  v2 = *((_DWORD *)a2 + 153);
  v3 = 0LL;
  v34 = 0LL;
  if ( (v2 & 0x40000) != 0 )
  {
    v6 = 1;
  }
  else
  {
    v6 = 0;
    if ( (v2 & 0x10000000) == 0 || (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2) <= 0 )
    {
      v7 = 0;
      goto LABEL_4;
    }
  }
  v7 = 1;
LABEL_4:
  v35 = 0LL;
  v8 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
  inserted = v8;
  if ( v8 < 0 )
  {
    v30 = 2742;
LABEL_45:
    v23 = v8;
LABEL_47:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v23,
      v30,
      v32);
    return (unsigned int)inserted;
  }
  if ( !*((_QWORD *)a2 + 5) )
  {
    inserted = -2147024809;
    v30 = 2746;
    v23 = -2147024809;
    goto LABEL_47;
  }
  v8 = CTransitionVisualController::_SetDesktopId(this, *((_QWORD *)a2 + 15));
  inserted = v8;
  if ( v8 < 0 )
  {
    v30 = 2750;
    goto LABEL_45;
  }
  if ( (int)CTransitionVisualController::_GetSnapshotIndex(this, *((HWND *)a2 + 5)) >= 0 )
    return (unsigned int)inserted;
  v10 = *((_DWORD *)a2 + 153) & 0x1000000;
  v33 = 0uLL;
  v11 = (struct tagRECT *)(((unsigned __int64)a2 + 616) & -(__int64)(v10 != 0));
  v36 = v11;
  if ( CTransitionWindowSnapshot::CanUseCVIFromSnapshot(a2) )
  {
    v24 = CTransitionWindowSnapshot::Create(*((struct CTopLevelWindow **)a2 + 50), 0LL, v11, &v34);
    v3 = (volatile signed __int32 *)v34;
    if ( v24 >= 0 )
    {
LABEL_19:
      *(_QWORD *)&v33 = *((_QWORD *)a2 + 5);
      *((_QWORD *)&v33 + 1) = v3;
      goto LABEL_20;
    }
  }
  if ( (*((_BYTE *)a2 + 608) & 8) != 0 )
  {
    inserted = -2147483638;
  }
  else
  {
    Clone = CTransitionVisualController::_FindClone(this, a2, 0);
    if ( Clone >= *((_DWORD *)this + 12) )
    {
      v13 = CVisual::Create(&v35);
      inserted = v13;
      if ( v13 < 0 )
      {
        v31 = 2771;
        goto LABEL_68;
      }
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v35, 0LL, 0, 1);
      if ( inserted < 0 )
      {
        v31 = 2772;
        goto LABEL_54;
      }
      v14 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 50);
      if ( v7 )
      {
        LODWORD(v32) = v6;
        LOBYTE(v29) = 0;
        v13 = CTransitionVisualController::_StageCloneWithOwnedWindows(this, v14, v35, 0xFFFFFFFFLL, v29);
        inserted = v13;
        if ( v13 < 0 )
        {
          v31 = 2777;
          goto LABEL_68;
        }
        Clone = CTransitionVisualController::_FindClone(this, a2, 0);
      }
      else
      {
        v13 = CTransitionVisualController::_StageCloneRelative(this, v14, v35, 0, 0LL, 1, 0, 1, 0LL);
        inserted = v13;
        if ( v13 < 0 )
        {
          v31 = 2784;
          goto LABEL_68;
        }
      }
    }
    if ( Clone < *((_DWORD *)this + 12) )
    {
      _mm_lfence();
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL * Clone) + 720LL) + 40LL) == *((_QWORD *)a2 + 5) )
      {
        _mm_lfence();
        v15 = CTransitionWindowSnapshot::Create(
                *((struct CTopLevelWindow **)a2 + 50),
                *(struct CVisual **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL * Clone + 8) + 24LL),
                v36,
                &v34);
        inserted = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            v15,
            0xAECu,
            v32);
          v3 = (volatile signed __int32 *)v34;
          goto LABEL_31;
        }
        v3 = (volatile signed __int32 *)v34;
        *((_BYTE *)v34 + 356) = *(_BYTE *)(*((_QWORD *)this + 3) + 24LL * Clone + 18);
        goto LABEL_19;
      }
      v3 = (volatile signed __int32 *)v34;
    }
    inserted = -2147467259;
  }
LABEL_20:
  if ( v3 )
  {
    if ( inserted < 0 )
      goto LABEL_31;
    v16 = (_QWORD *)((char *)this + 56);
    v17 = *((unsigned int *)this + 20);
    v18 = v17 + 1;
    if ( (int)v17 + 1 < (unsigned int)v17 )
    {
      inserted = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v32);
    }
    else
    {
      if ( v18 <= *((_DWORD *)this + 19) )
      {
        *(_OWORD *)(*v16 + 16 * v17) = v33;
        *((_DWORD *)this + 20) = v18;
        goto LABEL_25;
      }
      v22 = DynArrayImpl<0>::AddMultipleAndSet(v16, 16LL, 1LL, &v33);
      inserted = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xC0u, v32);
      if ( inserted >= 0 )
      {
LABEL_25:
        _InterlockedIncrement(v3 + 2);
        if ( (*((_DWORD *)a2 + 153) & 0x100000) != 0 )
        {
          RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                   *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                   *((_QWORD *)a2 + 15));
          v3 = (volatile signed __int32 *)v34;
          v27 = RootVisualForDesktop;
          v13 = VisualCollection::InsertRelative(
                  (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                  v34,
                  *((struct CVisual **)a2 + 50),
                  1,
                  1);
          inserted = v13;
          if ( v13 >= 0 )
          {
            CTransitionVisualController::_MoveOwnedWindowTreeOffscreen((struct CTopLevelWindow **)a2);
            CDesktopManager::UpdateSceneImpl(v28, v27);
            goto LABEL_28;
          }
          v31 = 2824;
        }
        else
        {
          v3 = (volatile signed __int32 *)v34;
          v19 = v34;
          *((__m128i *)v34 + 21) = _mm_load_si128((const __m128i *)&_xmm);
          v13 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v19, 0LL, 0, 1);
          inserted = v13;
          if ( v13 >= 0 )
          {
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 64LL))(*((_QWORD *)this + 18));
LABEL_28:
            if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
              McTemplateU0p(v20, &CommitChannel_Transition_Snapshot, v3);
            v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 5)
                                                                  + 16LL)
                                                    + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                         + 5)
                                                                       + 16LL));
            inserted = v13;
            if ( v13 >= 0 )
              goto LABEL_31;
            v31 = 2845;
            goto LABEL_68;
          }
          v31 = 2839;
        }
LABEL_68:
        v25 = v13;
        goto LABEL_69;
      }
    }
    v31 = 2815;
LABEL_54:
    v25 = inserted;
LABEL_69:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v25,
      v31,
      v32);
LABEL_31:
    if ( v3 )
      CBaseObject::Release((CBaseObject *)v3);
  }
  if ( v35 )
    CBaseObject::Release(v35);
  return (unsigned int)inserted;
}
