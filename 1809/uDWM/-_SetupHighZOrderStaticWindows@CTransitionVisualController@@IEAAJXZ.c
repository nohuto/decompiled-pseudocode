/*
 * XREFs of ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180029F70
 * Callers:
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18000F09C (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001D830 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180031AA0 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z @ 0x180005994 (-_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z.c)
 *     ?_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@@Z @ 0x180005A94 (-_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x180005E1C (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180006C50 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x18000BE2C (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000C108 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18002870C (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180028BF0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18002B368 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18002DC04 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x18003AC78 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pp @ 0x18008481C (McTemplateU0pp.c)
 *     ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x18009FFBC (-_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_SetupHighZOrderStaticWindows(CTransitionVisualController *this)
{
  bool v2; // zf
  unsigned int v3; // ebp
  unsigned int i; // edx
  __int64 v5; // rax
  size_t v6; // rbx
  size_t v7; // r12
  _BYTE *v8; // rax
  int v9; // ebx
  unsigned int v10; // r15d
  struct _LIST_ENTRY *v11; // r13
  int v12; // eax
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v14; // rax
  __int64 v15; // r14
  int v16; // ebp
  HWND v17; // rcx
  CTransitionVisualController *v18; // rcx
  char v19; // bp
  size_t v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned int Flink; // eax
  int v25; // ecx
  unsigned int Clone; // eax
  unsigned __int64 v27; // rcx
  unsigned int v28; // r9d
  __int64 v29; // r8
  __int64 v30; // rdx
  int v31; // ebp
  __int64 v32; // rax
  struct CVisual *v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rdi
  __int64 v37; // rdx
  bool ShouldMoveOriginalWindowOffscreenForClone; // al
  int v40; // eax
  __int64 v41; // r9
  CBaseObject *v42; // [rsp+50h] [rbp-68h] BYREF
  __int64 v43; // [rsp+58h] [rbp-60h]
  struct _LIST_ENTRY *WindowListForDesktop; // [rsp+60h] [rbp-58h]
  int v45; // [rsp+C0h] [rbp+8h]
  unsigned int v46; // [rsp+C8h] [rbp+10h]
  __int64 v47; // [rsp+D0h] [rbp+18h]
  _BYTE *v48; // [rsp+D8h] [rbp+20h]

  v2 = *((_QWORD *)this + 12) == -1LL;
  v3 = 0;
  v48 = 0LL;
  v42 = 0LL;
  if ( v2 )
    goto LABEL_55;
  for ( i = 0; i < *((_DWORD *)this + 12); *(_BYTE *)(*((_QWORD *)this + 3) + 24 * v5 + 17) = 0 )
    v5 = i++;
  v6 = *((int *)this + 34);
  v7 = v6;
  v8 = (_BYTE *)(*(__int64 (__fastcall **)(WPF::HeapBase *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                  WPF::g_pProcessHeap,
                  v6);
  v48 = v8;
  if ( !v8 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147024882,
      0x7D6u);
    goto LABEL_55;
  }
  memset_0(v8, 0, v6);
  v9 = v6 - 1;
  v10 = v9;
  v45 = v9;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           *((_QWORD *)this + 12));
  v11 = WindowListForDesktop;
  if ( !WindowListForDesktop )
    goto LABEL_49;
  v12 = CImmersiveState::Create(&v42, *((_QWORD *)this + 12));
  v46 = v12;
  v3 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v12,
      0x7DFu);
    goto LABEL_53;
  }
  Blink = v11->Blink;
  if ( v9 < 0 )
  {
LABEL_49:
    v35 = (unsigned int)(*((_DWORD *)this + 12) - 1);
    if ( (int)v35 >= 0 )
    {
      v36 = 24LL * (int)v35;
      do
      {
        v37 = *((_QWORD *)this + 3);
        if ( *(_BYTE *)(v37 + v36 + 16) && !*(_BYTE *)(v37 + v36 + 17) )
        {
          CTransitionVisualController::_CleanupHighZOrderClone(this, (struct CTopLevelWindow **)(v37 + 24 * v35));
          DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((char *)this + 24, (unsigned int)v35);
        }
        v36 -= 24LL;
        v35 = (unsigned int)(v35 - 1);
      }
      while ( (int)v35 >= 0 );
    }
    goto LABEL_53;
  }
  v14 = v9;
  v47 = v9;
  v43 = v9;
  while ( 1 )
  {
    if ( Blink == v11 )
    {
LABEL_48:
      v3 = v46;
      goto LABEL_49;
    }
    while ( 1 )
    {
      v15 = v14;
      v16 = v10;
      v17 = *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL * v10) + 16LL);
      if ( v17 != HWND_MESSAGE|0x2LL )
        break;
LABEL_66:
      --v10;
      v14 = --v47;
      v48[v15] = 1;
      if ( v16 <= 0 )
        goto LABEL_48;
    }
    if ( (GetWindowLongPtrW(v17, -16) & 0x10000000) == 0
      && !CTransitionVisualController::_IsAnimationComponentVisible(
            v18,
            *(struct CAnimationComponent **)(*((_QWORD *)this + 14) + 8LL * v10)) )
    {
      CTransitionVisualController::HasVisibleStyle(*(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL * v10) + 16LL));
      goto LABEL_66;
    }
    v19 = 0;
    v20 = v7 - 1;
    if ( (__int64)(v7 - 1) < 0 )
      goto LABEL_23;
    v21 = v47;
    while ( 2 )
    {
      v22 = *((_QWORD *)this + 14);
      v23 = *(_QWORD *)(v22 + 8 * v20);
      if ( !*(_BYTE *)(v23 + 65) && *(_DWORD *)(*(_QWORD *)(v23 + 128) + 24LL) != 4 )
      {
        if ( *(_BYTE *)(v23 + 67) )
        {
LABEL_19:
          if ( *(struct _LIST_ENTRY **)(*(_QWORD *)(v22 + 8 * v20) + 16LL) == Blink[2].Blink )
          {
            v19 = 1;
            --v10;
            v48[v20] = 1;
            --v21;
          }
        }
        else if ( (GetWindowLongPtrW(*(HWND *)(v23 + 16), -16) & 0x10000000) != 0 )
        {
          v22 = *((_QWORD *)this + 14);
          goto LABEL_19;
        }
      }
      if ( (--v20 & 0x8000000000000000uLL) == 0LL )
        continue;
      break;
    }
    v11 = WindowListForDesktop;
    v47 = v21;
    if ( v19 )
      goto LABEL_25;
LABEL_23:
    if ( Blink[1].Blink )
    {
      if ( Blink[24].Blink )
      {
        if ( (BYTE4(Blink[37].Flink) & 1) != 0
          && SHIBYTE(Blink[37].Flink) >= 0
          && (HIDWORD(Blink[6].Flink) & 0x20000000) == 0 )
        {
          Flink = (unsigned int)Blink[7].Flink;
          if ( Flink > 0xC || (v25 = 4162, !_bittest(&v25, Flink)) )
          {
            if ( CTransitionVisualController::ShouldCloneWindow((HWND)Blink[2].Blink)
              && !CImmersiveState::IsLauncherShownAboveWindow(v42, (const struct CWindowData *)Blink)
              && !CTransitionVisualController::_IsOwnedByVisibleAC(this, (const struct CWindowData *)Blink) )
            {
              break;
            }
          }
        }
      }
    }
LABEL_25:
    Blink = Blink->Blink;
    if ( (v10 & 0x80000000) != 0 )
      goto LABEL_48;
    v14 = v47;
  }
  Clone = CTransitionVisualController::_FindClone(this, (struct CWindowData *)Blink, 1);
  v28 = *((_DWORD *)this + 12);
  v29 = Clone;
  if ( Clone < v28 )
  {
    v27 = *((_QWORD *)this + 3);
    *(_BYTE *)(v27 + 24LL * Clone + 17) = 1;
  }
  v30 = v43;
  if ( v43 >= 0 )
  {
    v27 = (unsigned int)v45;
    do
    {
      if ( !v48[v30] )
        break;
      v27 = (unsigned int)(v27 - 1);
      --v30;
    }
    while ( v30 >= 0 );
    v43 = v30;
    v45 = v27;
  }
  v31 = v45;
  if ( v45 >= 0
    && (_mm_lfence(),
        v27 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v45),
        (v32 = *(_QWORD *)(v27 + 40)) != 0) )
  {
    v33 = (struct CVisual *)(v32 + 8);
  }
  else
  {
    v33 = 0LL;
  }
  if ( (unsigned int)v29 < v28 )
  {
    VisualCollection::InsertRelative(
      (VisualCollection *)(*((_QWORD *)this + 2) + 32LL),
      *(struct CVisual **)(*((_QWORD *)this + 3) + 24 * v29 + 8),
      v33,
      1u,
      1);
LABEL_46:
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      if ( v31 < 0 )
      {
        v41 = 0LL;
      }
      else
      {
        _mm_lfence();
        v34 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v31);
        v41 = *(_QWORD *)(v34 + 16);
      }
      McTemplateU0pp(v34, &UdwmSystemAnimation_ZOrderClone, Blink[2].Blink, v41);
    }
    goto LABEL_25;
  }
  ShouldMoveOriginalWindowOffscreenForClone = CTransitionVisualController::_ShouldMoveOriginalWindowOffscreenForClone(
                                                (CTransitionVisualController *)v27,
                                                (struct CWindowData *)Blink);
  v40 = CTransitionVisualController::_StageCloneRelative(
          this,
          (struct CTopLevelWindow *)Blink[24].Blink,
          *((struct CVisual **)this + 2),
          1,
          v33,
          1,
          0,
          ShouldMoveOriginalWindowOffscreenForClone,
          0LL);
  v46 = v40;
  v3 = v40;
  if ( v40 >= 0 )
  {
    v31 = v45;
    goto LABEL_46;
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    v40,
    0x85Eu);
LABEL_53:
  if ( v42 )
    CBaseObject::Release(v42);
LABEL_55:
  (*(void (__fastcall **)(WPF::HeapBase *, _BYTE *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v48);
  return v3;
}
