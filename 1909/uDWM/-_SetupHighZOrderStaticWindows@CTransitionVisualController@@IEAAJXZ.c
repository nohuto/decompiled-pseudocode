/*
 * XREFs of ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800282B0
 * Callers:
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x180014E2C (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18002D2F4 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x180003688 (-_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     ?_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z @ 0x1800036BC (-_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z.c)
 *     ?_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@@Z @ 0x180003734 (-_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x180003F18 (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000455C (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x180007924 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x180009288 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180009D34 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x1800167EC (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x180028918 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x180029BC8 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x18003AC80 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x18003C558 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18004FB12 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pp @ 0x18008B11C (McTemplateU0pp.c)
 */

__int64 __fastcall CTransitionVisualController::_SetupHighZOrderStaticWindows(CTransitionVisualController *this)
{
  unsigned int v1; // ebp
  _BYTE *v2; // r12
  __int64 i; // rdx
  __int64 v5; // rcx
  size_t v6; // rdi
  _BYTE *v7; // rax
  __int64 v8; // r15
  int v9; // r13d
  struct _LIST_ENTRY *v10; // rsi
  int v11; // eax
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v13; // rdx
  __int64 v14; // r14
  HWND v15; // rcx
  CTransitionVisualController *v16; // rcx
  char v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rbp
  __int64 v20; // rcx
  unsigned int Flink; // eax
  int v22; // ecx
  unsigned int Clone; // eax
  CTransitionVisualController *v24; // rcx
  char v25; // r8
  __int64 v26; // r14
  __int64 v27; // rdx
  struct CVisual *v28; // rsi
  bool ShouldMoveOriginalWindowOffscreenForClone; // al
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v36; // r9
  void *v37; // [rsp+28h] [rbp-80h]
  void *v38; // [rsp+28h] [rbp-80h]
  size_t v39; // [rsp+50h] [rbp-58h]
  struct _LIST_ENTRY *WindowListForDesktop; // [rsp+58h] [rbp-50h]
  unsigned int v41; // [rsp+B0h] [rbp+8h]
  __int64 v42; // [rsp+B8h] [rbp+10h]
  CBaseObject *v43; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v44; // [rsp+C8h] [rbp+20h]

  v1 = 0;
  v2 = 0LL;
  v43 = 0LL;
  if ( *((_QWORD *)this + 12) == -1LL )
    goto LABEL_52;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); *(_BYTE *)(*((_QWORD *)this + 3) + 8 * v5 + 17) = 0 )
  {
    v5 = 3 * i;
    i = (unsigned int)(i + 1);
  }
  v6 = *((int *)this + 34);
  v39 = v6;
  v7 = (_BYTE *)(*(__int64 (__fastcall **)(WPF::HeapBase *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                  WPF::g_pProcessHeap,
                  v6);
  v2 = v7;
  if ( !v7 )
  {
    v1 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147024882,
      0x7DBu,
      v37);
    goto LABEL_52;
  }
  memset_0(v7, 0, v6);
  v8 = (unsigned int)(v6 - 1);
  v9 = v6 - 1;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           *((_QWORD *)this + 12));
  v10 = WindowListForDesktop;
  if ( !WindowListForDesktop )
    goto LABEL_46;
  v11 = CImmersiveState::Create(&v43, *((_QWORD *)this + 12));
  v41 = v11;
  v1 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v11,
      0x7E4u,
      v37);
    goto LABEL_50;
  }
  Blink = WindowListForDesktop->Blink;
  if ( (int)v8 < 0 )
  {
LABEL_46:
    v32 = (unsigned int)(*((_DWORD *)this + 12) - 1);
    if ( (int)v32 >= 0 )
    {
      v33 = 24LL * (int)v32;
      do
      {
        v34 = *((_QWORD *)this + 3);
        if ( *(_BYTE *)(v34 + v33 + 16) && !*(_BYTE *)(v34 + v33 + 17) )
        {
          CTransitionVisualController::_CleanupHighZOrderClone(this, (struct CTopLevelWindow **)(v34 + 24 * v32));
          DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((__int64 *)this + 3, v32);
        }
        v33 -= 24LL;
        v32 = (unsigned int)(v32 - 1);
      }
      while ( (int)v32 >= 0 );
    }
    goto LABEL_50;
  }
  v13 = (int)v8;
  v42 = (int)v8;
  v44 = (int)v8;
  while ( 2 )
  {
    if ( Blink == v10 || v9 < 0 )
      goto LABEL_46;
    while ( 1 )
    {
      v14 = v13;
      v15 = *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v9) + 16LL);
      if ( v15 != HWND_MESSAGE|0x2LL )
        break;
LABEL_63:
      --v13;
      v2[v14] = 1;
      --v9;
      v42 = v13;
      if ( v9 < 0 )
        goto LABEL_13;
    }
    if ( (GetWindowLongPtrW(v15, -16) & 0x10000000) == 0
      && !CTransitionVisualController::_IsAnimationComponentVisible(
            v16,
            *(struct CAnimationComponent **)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v9)) )
    {
      CTransitionVisualController::HasVisibleStyle(*(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v9)
                                                           + 16LL));
      v13 = v42;
      goto LABEL_63;
    }
LABEL_13:
    if ( v9 < 0 )
      goto LABEL_46;
    v17 = 0;
    v18 = v39 - 1;
    if ( (__int64)(v39 - 1) >= 0 )
    {
      v19 = v42;
      do
      {
        v20 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v18);
        if ( !*(_BYTE *)(v20 + 65)
          && *(_DWORD *)(*(_QWORD *)(v20 + 128) + 24LL) != 4
          && (*(_BYTE *)(v20 + 67) || (GetWindowLongPtrW(*(HWND *)(v20 + 16), -16) & 0x10000000) != 0)
          && *(struct _LIST_ENTRY **)(*(_QWORD *)(*((_QWORD *)this + 14) + 8 * v18) + 16LL) == Blink[2].Blink )
        {
          v17 = 1;
          --v9;
          v2[v18] = 1;
          --v19;
        }
        --v18;
      }
      while ( v18 >= 0 );
      v42 = v19;
      v1 = v41;
      if ( v17 )
        goto LABEL_26;
    }
    if ( !Blink[1].Blink
      || !Blink[25].Flink
      || !CWindowData::IsWindowVisibleAndUncloaked((CWindowData *)Blink)
      || (HIDWORD(Blink[6].Flink) & 0x20000000) != 0
      || (Flink = (unsigned int)Blink[7].Flink, Flink <= 0xC) && (v22 = 4162, _bittest(&v22, Flink))
      || !CTransitionVisualController::ShouldCloneWindow((HWND)Blink[2].Blink)
      || CImmersiveState::IsLauncherShownAboveWindow(v43, (const struct CWindowData *)Blink)
      || CTransitionVisualController::_IsOwnedByVisibleAC(this, (const struct CWindowData *)Blink) )
    {
LABEL_26:
      Blink = Blink->Blink;
      if ( v9 < 0 )
        goto LABEL_46;
      v13 = v42;
      v10 = WindowListForDesktop;
      continue;
    }
    break;
  }
  Clone = CTransitionVisualController::_FindClone(this, (struct CWindowData *)Blink, 1);
  if ( Clone < *((_DWORD *)this + 12) )
  {
    v24 = (CTransitionVisualController *)*((_QWORD *)this + 3);
    v25 = 1;
    *((_BYTE *)v24 + 24 * Clone + 17) = 1;
  }
  else
  {
    v25 = 0;
  }
  v26 = v44;
  if ( v44 >= 0 )
  {
    do
    {
      if ( !v2[v26] )
        break;
      v8 = (unsigned int)(v8 - 1);
      --v26;
    }
    while ( v26 >= 0 );
    v44 = v26;
  }
  if ( (int)v8 < 0 )
  {
    v27 = 0LL;
  }
  else
  {
    _mm_lfence();
    v24 = *(CTransitionVisualController **)(*((_QWORD *)this + 14) + 8 * v8);
    v27 = *((_QWORD *)v24 + 5);
  }
  v28 = (struct CVisual *)((v27 + 8) & -(__int64)(v27 != 0));
  if ( v25 )
  {
    VisualCollection::InsertRelative(
      (VisualCollection *)(*((_QWORD *)this + 2) + 32LL),
      *(struct CVisual **)(*((_QWORD *)this + 3) + 24LL * Clone + 8),
      v28,
      1u,
      1);
    goto LABEL_44;
  }
  ShouldMoveOriginalWindowOffscreenForClone = CTransitionVisualController::_ShouldMoveOriginalWindowOffscreenForClone(
                                                v24,
                                                (struct CWindowData *)Blink);
  v30 = CTransitionVisualController::_StageCloneRelative(
          this,
          (struct CTopLevelWindow *)Blink[25].Flink,
          *((struct CVisual **)this + 2),
          1,
          v28,
          1,
          0,
          ShouldMoveOriginalWindowOffscreenForClone,
          0LL);
  v41 = v30;
  v1 = v30;
  if ( v30 >= 0 )
  {
LABEL_44:
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      if ( (int)v8 < 0 )
      {
        v36 = 0LL;
      }
      else
      {
        _mm_lfence();
        v31 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v8);
        v36 = *(_QWORD *)(v31 + 16);
      }
      McTemplateU0pp(v31, &UdwmSystemAnimation_ZOrderClone, Blink[2].Blink, v36);
    }
    goto LABEL_26;
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    v30,
    0x863u,
    v38);
LABEL_50:
  if ( v43 )
    CBaseObject::Release(v43);
LABEL_52:
  (*(void (__fastcall **)(WPF::HeapBase *, _BYTE *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v2);
  return v1;
}
