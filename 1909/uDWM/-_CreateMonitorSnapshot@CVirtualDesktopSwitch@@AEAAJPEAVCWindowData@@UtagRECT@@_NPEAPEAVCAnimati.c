/*
 * XREFs of ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800A9EFC
 * Callers:
 *     ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800A8D40 (-OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800ADB90 (-_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard.c)
 * Callees:
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000A2D8 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180018A54 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x18002E234 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180031410 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x180033588 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopSwitch::_CreateMonitorSnapshot(
        CVirtualDesktopSwitch *this,
        struct CWindowData *a2,
        struct tagRECT *a3,
        char a4,
        struct CAnimationComponent **a5)
{
  __int64 v5; // rsi
  int v6; // eax
  int v9; // eax
  unsigned int v12; // ebx
  struct CVisual *RootVisualForDesktop; // r14
  __int64 v14; // rax
  int v15; // eax
  struct CAnimatedTransitionVisual *v16; // rdi
  int v17; // eax
  __int64 v18; // rax
  CCachedVisualImageProxy **v19; // rcx
  int v20; // eax
  struct CAnimatedTransitionVisual *v22; // [rsp+30h] [rbp-58h] BYREF
  __int64 v23; // [rsp+38h] [rbp-50h]
  unsigned __int64 v24[9]; // [rsp+40h] [rbp-48h] BYREF

  v5 = 0LL;
  v6 = a3->right - a3->left;
  if ( v6 < 0 )
    v6 = 0;
  v22 = 0LL;
  LODWORD(v23) = v6;
  v9 = a3->bottom - a3->top;
  if ( v9 < 0 )
    v9 = 0;
  HIDWORD(v23) = v9;
  if ( !(unsigned int)GetDesktopID(1LL, v24) )
  {
    v12 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      0x1271u);
    return v12;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           v24[0]);
  v14 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  if ( v14 )
    v5 = CAnimationComponent::CAnimationComponent(v14, 0LL, *((_DWORD *)a2 + 153) & 0xFFF, 1, (__int64)this);
  if ( !v5 )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147024882,
      0x1279u);
    return v12;
  }
  v15 = CAnimatedTransitionVisual::Create(&v22);
  v12 = v15;
  if ( v15 >= 0 )
  {
    v16 = v22;
    v17 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v22, RootVisualForDesktop, 1, a3);
    v12 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v17, 0x127Cu);
      goto LABEL_22;
    }
    *((_DWORD *)v16 + 184) = *((_DWORD *)this + 18);
    v18 = v23;
    *((_DWORD *)v16 + 185) = 1;
    *((_QWORD *)v16 + 118) = 0LL;
    *((_QWORD *)v16 + 119) = v18;
    *(_QWORD *)(v5 + 40) = v16;
    _InterlockedAdd((volatile signed __int32 *)v16 + 4, 1u);
    *(struct tagRECT *)(v5 + 88) = *a3;
    if ( a4
      && (v19 = *(CCachedVisualImageProxy ***)(v5 + 40),
          *(_BYTE *)(v5 + 67) = 1,
          v20 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(v19, RootVisualForDesktop, a3),
          v12 = v20,
          v20 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v20, 0x1287u);
    }
    else
    {
      *a5 = (struct CAnimationComponent *)v5;
      _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v15, 0x127Bu);
  }
  v16 = v22;
LABEL_22:
  CBaseObject::Release((CBaseObject *)v5);
  if ( v16 )
    CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v16 + 8));
  return v12;
}
