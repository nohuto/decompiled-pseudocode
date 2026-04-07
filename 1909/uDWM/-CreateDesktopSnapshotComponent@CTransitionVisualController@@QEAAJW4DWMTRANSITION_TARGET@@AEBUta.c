/*
 * XREFs of ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800A3584
 * Callers:
 *     ?OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ @ 0x1800A8670 (-OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ.c)
 * Callees:
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000A2D8 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180010D80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180018A54 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x18002E1F4 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x18002E234 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x18002E8A4 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800311C4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180031410 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180032424 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x180033588 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionVisualController::CreateDesktopSnapshotComponent(
        CTransitionVisualController *a1,
        __int64 a2,
        const struct tagRECT *a3,
        _DWORD *a4,
        __int64 *a5)
{
  int v5; // eax
  CAnimatedTransitionVisual *v9; // r14
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // r15
  unsigned int v14; // esi
  struct CVisual *RootVisualForDesktop; // rbx
  int v16; // r9d
  int v17; // eax
  int v18; // eax
  __int64 v19; // rbx
  int v20; // edi
  bool v21; // zf
  __int64 *v22; // rax
  unsigned int v24; // [rsp+20h] [rbp-20h]
  unsigned __int64 v25; // [rsp+30h] [rbp-10h] BYREF
  __int64 v26; // [rsp+38h] [rbp-8h] BYREF
  CAnimatedTransitionVisual *v27; // [rsp+80h] [rbp+40h] BYREF

  v5 = a3->right - a3->left;
  v27 = 0LL;
  if ( v5 < 0 )
    v5 = 0;
  v25 = 0LL;
  LODWORD(v26) = v5;
  v9 = 0LL;
  v10 = a3->bottom - a3->top;
  if ( v10 < 0 )
    v10 = 0;
  HIDWORD(v26) = v10;
  v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  if ( v11 )
  {
    v12 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a4 + 112LL))(a4, 10LL);
    v13 = CAnimationComponent::CAnimationComponent(v11, -1LL, 10, v12, (__int64)a4);
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x53Au);
    return v14;
  }
  *(_DWORD *)(v13 + 60) = 0x7FFFFFFF;
  GetDesktopID(1LL, &v25);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           v25);
  if ( !RootVisualForDesktop )
  {
    v24 = 1344;
LABEL_12:
    v16 = -2147024882;
    v14 = -2147024882;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v16,
      v24);
    goto LABEL_29;
  }
  v17 = CTransitionVisualController::_SetDesktopId(a1, v25);
  v14 = v17;
  if ( v17 < 0 )
  {
    v24 = 1347;
LABEL_16:
    v16 = v17;
    goto LABEL_13;
  }
  v18 = CAnimatedTransitionVisual::Create(&v27);
  v14 = v18;
  if ( v18 >= 0 )
  {
    v9 = v27;
    if ( !v27 )
    {
      v24 = 1351;
      goto LABEL_12;
    }
    v17 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v27, RootVisualForDesktop, 1, a3);
    v14 = v17;
    if ( v17 < 0 )
    {
      v24 = 1354;
      goto LABEL_16;
    }
    v17 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual((CCachedVisualImageProxy **)v9, RootVisualForDesktop, a3);
    v14 = v17;
    if ( v17 < 0 )
    {
      v24 = 1355;
      goto LABEL_16;
    }
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v9, a3);
    *(struct tagRECT *)((char *)v9 + 872) = *a3;
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v9 + 8), 4096);
    v19 = v26;
    (*(void (__fastcall **)(__int64, __int64 *))(*((_QWORD *)v9 + 1) + 96LL))((__int64)v9 + 8, &v26);
    *((_QWORD *)v9 + 119) = v19;
    CVisual::SetInterpolationMode((unsigned int *)v9 + 2, 1u);
    v20 = a4[18];
    *((_DWORD *)v9 + 185) = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a4 + 112LL))(a4, 10LL);
    *((_DWORD *)v9 + 184) = v20;
    *((_BYTE *)v9 + 972) = CStoryboard::IsRTL();
    *(_QWORD *)(v13 + 40) = v9;
    _InterlockedIncrement((volatile signed __int32 *)v9 + 4);
    v21 = *(_DWORD *)(v13 + 68) == 2;
    *(struct tagRECT *)(v13 + 88) = *a3;
    if ( !v21 )
      *(_DWORD *)(v13 + 68) = 1;
    *((_QWORD *)v27 + 118) = 0LL;
    v22 = a5;
    *((_QWORD *)v9 + 119) = v19;
    *v22 = v13;
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v18,
      0x546u);
  }
  v9 = v27;
LABEL_29:
  CBaseObject::Release((CBaseObject *)v13);
  if ( v9 )
    CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v9 + 8));
  return v14;
}
