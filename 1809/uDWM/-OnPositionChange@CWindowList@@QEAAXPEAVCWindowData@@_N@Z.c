/*
 * XREFs of ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800142F0
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000D8A0 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180012950 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800146E8 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180015A80 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001D830 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x18002D90C (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 * Callees:
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x180006EF0 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x180010880 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180012FC0 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z @ 0x1800151EC (-GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z.c)
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180026D54 (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x180083EB0 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800852A0 (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z @ 0x180087FC0 (-SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z.c)
 */

void __fastcall CWindowList::OnPositionChange(CWindowList *this, struct CWindowData *a2, char a3)
{
  __int64 v6; // rbx
  bool v7; // zf
  __int64 v8; // rdx
  int v9; // eax
  int v10; // ecx
  CDesktopThumbnailCVIVisual *v11; // rcx
  CButton *v12; // rcx
  CBaseObject *v13; // rsi
  __int64 v14; // rbx
  CProjectionBorderVisual *v15; // rcx
  __int64 i; // rbx
  unsigned int j; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  CBaseObject *v20; // rcx
  __int64 v21; // rcx
  int started; // eax
  struct CWindowData *v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rbx
  CAccentBlurBehind *v26; // rcx
  unsigned __int64 v27; // [rsp+50h] [rbp+8h] BYREF
  int v28; // [rsp+58h] [rbp+10h] BYREF

  CWindowList::GetPhysicalPtFromLogical(this, a2, (struct tagRECT *)((char *)a2 + 180), &v28, (int *)&v27);
  OffsetRect((LPRECT)a2 + 3, v28 - *((_DWORD *)a2 + 12), v27 - *((_DWORD *)a2 + 13));
  v6 = *((_QWORD *)a2 + 49);
  if ( v6 )
  {
    v7 = (*(_BYTE *)(v6 + 241) & 2) == 0;
    v8 = *(_QWORD *)(v6 + 720);
    v9 = *(_DWORD *)(v8 + 48);
    v10 = *(_DWORD *)(v8 + 52);
    v27 = __PAIR64__(v10, v9);
    if ( !v7 )
    {
      v9 = -32000;
      v27 = 0xFFFF8300FFFF8300uLL;
      v10 = -32000;
    }
    if ( v9 != *(_DWORD *)(v6 + 112) || v10 != *(_DWORD *)(v6 + 116) )
    {
      *(_QWORD *)(v6 + 112) = v27;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, 8LL);
      v8 = *(_QWORD *)(v6 + 720);
    }
    v11 = *(CDesktopThumbnailCVIVisual **)(v8 + 584);
    if ( v11 )
      CDesktopThumbnailCVIVisual::SetDirtyFlags(v11, 0x1000u);
    v12 = *(CButton **)(v6 + 736);
    if ( v12 )
    {
      CButton::SetMouseCapture(v12, 0);
      v20 = *(CBaseObject **)(v6 + 736);
      if ( v20 )
      {
        CBaseObject::Release(v20);
        *(_QWORD *)(v6 + 736) = 0LL;
      }
    }
    v13 = *(CBaseObject **)(v6 + 728);
    if ( v13 )
    {
      *(_QWORD *)(v6 + 728) = 0LL;
      (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v13 + 120LL))(v13);
      v21 = *(_QWORD *)(v6 + 728);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 112LL))(v21);
      CBaseObject::Release(v13);
    }
  }
  v14 = *((_QWORD *)a2 + 50);
  if ( v14 )
  {
    if ( a3 && CTopLevelWindow3D::ShouldDelayTransition(*((CTopLevelWindow3D **)a2 + 50), 0) )
    {
      started = CTopLevelWindow3D::StartAnimation(v14, 9u);
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x1A4u);
    }
    else if ( !*(_BYTE *)(v14 + 288) && !*(_DWORD *)(v14 + 372) )
    {
      *(_OWORD *)(v14 + 308) = *(_OWORD *)(*(_QWORD *)(v14 + 328) + 48LL);
    }
  }
  v15 = (CProjectionBorderVisual *)*((_QWORD *)a2 + 51);
  if ( v15 )
  {
    CProjectionBorderVisual::UpdateRectFromWindow(v15, a2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 65) + 64LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
      *((_QWORD *)a2 + 5));
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 116); i = (unsigned int)(i + 1) )
  {
    v19 = *(_QWORD *)(*((_QWORD *)a2 + 55) + 8 * i);
    if ( *(struct CWindowData **)(v19 + 64) == a2 && *(_DWORD *)(v19 + 72) == 1 )
      CSecondaryWindowRepresentation::OnWindowOffsetUpdated((CSecondaryWindowRepresentation *)v19);
  }
  for ( j = 0; j < *((_DWORD *)this + 140); ++j )
  {
    v18 = *((_QWORD *)this + 67);
    if ( *(_DWORD *)(v18 + 16LL * j + 8) == 3 )
    {
      v23 = *(struct CWindowData **)(v18 + 16LL * j);
      v24 = *((_QWORD *)v23 + 49);
      if ( v24 )
      {
        if ( *((_QWORD *)v23 + 15) == *((_QWORD *)a2 + 15) )
        {
          v25 = *(_QWORD *)(v24 + 264);
          if ( v25 )
          {
            v26 = *(CAccentBlurBehind **)(v25 + 336);
            if ( v26 )
            {
              if ( *((_QWORD *)v23 + 5) == *(_QWORD *)(v25 + 400)
                || CAccentBlurBehind::IsBlurBehindDirty(
                     v26,
                     v23,
                     (const struct tagRECT *)(v25 + 616),
                     *(_QWORD *)(v25 + 408),
                     *(HWND *)(v25 + 400)) )
              {
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 24LL))(v25, 0x10000LL);
              }
            }
          }
        }
      }
    }
  }
}
