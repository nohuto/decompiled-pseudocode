/*
 * XREFs of ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000A6D4
 * Callers:
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x180032464 (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x1800068F4 (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x18000AA20 (-Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtag.c)
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x18000AD04 (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x18000BE2C (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001CDE0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180026E70 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18002B368 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18002D51C (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180030410 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180032054 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180033AE0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x180049258 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x1800493A8 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0p @ 0x180088248 (McTemplateU0p.c)
 */

__int64 __fastcall CTransitionVisualController::EnsureSnapshot(
        CTransitionVisualController *this,
        struct CWindowData *a2)
{
  volatile signed __int32 *v2; // rdi
  int v4; // ecx
  BOOL v6; // r13d
  bool v7; // r12
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
  __int128 v32; // [rsp+50h] [rbp-10h] BYREF
  CBaseObject *v33; // [rsp+A8h] [rbp+48h] BYREF
  CBaseObject *v34; // [rsp+B0h] [rbp+50h] BYREF
  struct tagRECT *v35; // [rsp+B8h] [rbp+58h]

  v2 = 0LL;
  v4 = *((_DWORD *)a2 + 151);
  v33 = 0LL;
  v6 = (v4 & 0x40000) != 0;
  v7 = (v4 & 0x40000) != 0
    || (v4 & 0x10000000) != 0 && (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2) > 0;
  v34 = 0LL;
  v8 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
  inserted = v8;
  if ( v8 < 0 )
  {
    v30 = 2733;
LABEL_43:
    v23 = v8;
LABEL_45:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v23,
      v30);
    return (unsigned int)inserted;
  }
  if ( !*((_QWORD *)a2 + 5) )
  {
    inserted = -2147024809;
    v30 = 2737;
    v23 = -2147024809;
    goto LABEL_45;
  }
  v8 = CTransitionVisualController::_SetDesktopId(this, *((_QWORD *)a2 + 15));
  inserted = v8;
  if ( v8 < 0 )
  {
    v30 = 2741;
    goto LABEL_43;
  }
  if ( (int)CTransitionVisualController::_GetSnapshotIndex(this, *((HWND *)a2 + 5)) >= 0 )
    return (unsigned int)inserted;
  v10 = *((_DWORD *)a2 + 151) & 0x1000000;
  v32 = 0uLL;
  v11 = (struct tagRECT *)(((unsigned __int64)a2 + 608) & -(__int64)(v10 != 0));
  v35 = v11;
  if ( CTransitionWindowSnapshot::CanUseCVIFromSnapshot(a2) )
  {
    v24 = CTransitionWindowSnapshot::Create(
            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
            *((struct CTopLevelWindow **)a2 + 49),
            0LL,
            v11,
            &v33);
    v2 = (volatile signed __int32 *)v33;
    if ( v24 >= 0 )
    {
LABEL_19:
      *(_QWORD *)&v32 = *((_QWORD *)a2 + 5);
      *((_QWORD *)&v32 + 1) = v2;
      goto LABEL_20;
    }
  }
  if ( (*((_BYTE *)a2 + 600) & 8) != 0 )
  {
    inserted = -2147483638;
  }
  else
  {
    Clone = CTransitionVisualController::_FindClone(this, a2, 0);
    if ( Clone >= *((_DWORD *)this + 12) )
    {
      v13 = CVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5), &v34);
      inserted = v13;
      if ( v13 < 0 )
      {
        v31 = 2763;
        goto LABEL_66;
      }
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v34, 0LL, 0, 1);
      if ( inserted < 0 )
      {
        v31 = 2764;
        goto LABEL_51;
      }
      v14 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 49);
      if ( v7 )
      {
        LOBYTE(v29) = 0;
        v13 = CTransitionVisualController::_StageCloneWithOwnedWindows(this, v14, v34, 0xFFFFFFFFLL, v29, v6);
        inserted = v13;
        if ( v13 < 0 )
        {
          v31 = 2769;
          goto LABEL_66;
        }
        Clone = CTransitionVisualController::_FindClone(this, a2, 0);
      }
      else
      {
        v13 = CTransitionVisualController::_StageCloneRelative(this, v14, v34, 0, 0LL, 1, 0, 1, 0LL);
        inserted = v13;
        if ( v13 < 0 )
        {
          v31 = 2776;
          goto LABEL_66;
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
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
                *((struct CTopLevelWindow **)a2 + 49),
                *(struct CVisual **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL * Clone + 8) + 24LL),
                v35,
                &v33);
        inserted = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            v15,
            0xAE5u);
          v2 = (volatile signed __int32 *)v33;
          goto LABEL_32;
        }
        v2 = (volatile signed __int32 *)v33;
        *((_BYTE *)v33 + 356) = *(_BYTE *)(*((_QWORD *)this + 3) + 24LL * Clone + 18);
        goto LABEL_19;
      }
      v2 = (volatile signed __int32 *)v33;
    }
    inserted = -2147467259;
  }
LABEL_20:
  if ( v2 )
  {
    if ( inserted < 0 )
      goto LABEL_32;
    v16 = (_QWORD *)((char *)this + 56);
    v17 = *((unsigned int *)this + 20);
    v18 = v17 + 1;
    inserted = (int)v17 + 1 < (unsigned int)v17 ? 0x80070216 : 0;
    if ( (int)v17 + 1 < (unsigned int)v17 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0xB5u);
    }
    else if ( v18 > *((_DWORD *)this + 19) )
    {
      v22 = DynArrayImpl<0>::AddMultipleAndSet(v16, 16LL, 1LL, &v32);
      inserted = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*v16 + 16 * v17) = v32;
      *((_DWORD *)this + 20) = v18;
    }
    if ( inserted >= 0 )
    {
      _InterlockedIncrement(v2 + 2);
      if ( (*((_DWORD *)a2 + 151) & 0x100000) != 0 )
      {
        RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                 *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                 *((_QWORD *)a2 + 15));
        v2 = (volatile signed __int32 *)v33;
        v27 = RootVisualForDesktop;
        v13 = VisualCollection::InsertRelative(
                (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                v33,
                *((struct CVisual **)a2 + 49),
                1,
                1);
        inserted = v13;
        if ( v13 >= 0 )
        {
          CTransitionVisualController::_MoveOwnedWindowTreeOffscreen((struct CTopLevelWindow **)a2);
          CDesktopManager::UpdateSceneImpl(v28, v27);
          goto LABEL_29;
        }
        v31 = 2817;
      }
      else
      {
        v2 = (volatile signed __int32 *)v33;
        v19 = v33;
        *((__m128i *)v33 + 21) = _mm_load_si128((const __m128i *)&_xmm);
        v13 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v19, 0LL, 0, 1);
        inserted = v13;
        if ( v13 >= 0 )
        {
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 64LL))(*((_QWORD *)this + 18));
LABEL_29:
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            McTemplateU0p(v20, &CommitChannel_Transition_Snapshot, v2);
          v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 5) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
          inserted = v13;
          if ( v13 >= 0 )
            goto LABEL_32;
          v31 = 2838;
          goto LABEL_66;
        }
        v31 = 2832;
      }
LABEL_66:
      v25 = v13;
      goto LABEL_67;
    }
    v31 = 2808;
LABEL_51:
    v25 = inserted;
LABEL_67:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v25,
      v31);
LABEL_32:
    if ( v2 )
      CBaseObject::Release((CBaseObject *)v2);
  }
  if ( v34 )
    CBaseObject::Release(v34);
  return (unsigned int)inserted;
}
