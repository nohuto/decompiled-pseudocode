/*
 * XREFs of ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180023870
 * Callers:
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x18000AE9C (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000C4EC (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18000C6AC (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180017D78 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001A160 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001F010 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18000EFD0 (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022BF4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4Repo.c)
 *     ?UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x18002396C (-UpdateAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z.c)
 *     ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z @ 0x180023A24 (-GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180023B40 (-OnOffsetUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180023B9C (-OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_1a2d7eb9b07ca6f2dc9b65c4384631da___ @ 0x18004CDFC (CWindowList--ForEachSoftwareCursorListener__lambda_1a2d7eb9b07ca6f2dc9b65c4384631da___.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18008AC20 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 */

void __fastcall CWindowList::OnPositionChange(CWindowList *this, struct CWindowData *a2, bool a3)
{
  struct CWindowData *v6; // rdx
  unsigned int v7; // ebx
  CTopLevelWindow *v8; // rcx
  CTopLevelWindow3D *v9; // rcx
  CProjectionBorderVisual *v10; // rcx
  struct CWindowData *v11; // rdi
  __int64 v12; // rcx
  int v13; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-18h] BYREF
  struct CWindowData *v15; // [rsp+78h] [rbp+28h] BYREF
  int v16; // [rsp+88h] [rbp+38h] BYREF
  int v17; // [rsp+8Ch] [rbp+3Ch]

  v15 = a2;
  CWindowList::GetPhysicalPtFromLogical(this, a2, (struct tagRECT *)((char *)a2 + 180), &v13, &v16);
  OffsetRect((LPRECT)a2 + 3, v13 - *((_DWORD *)a2 + 12), v16 - *((_DWORD *)a2 + 13));
  v6 = v15;
  v7 = 0;
  v8 = (CTopLevelWindow *)*((_QWORD *)v15 + 50);
  if ( v8 )
  {
    CTopLevelWindow::OnOffsetUpdated(v8);
    wil::Feature<__WilFeatureTraits_Feature_MagnifierNoJitter>::ReportUsageToService();
    v6 = v15;
    if ( (*((_BYTE *)v15 + 608) & 1) != 0 )
    {
      v16 = *((_DWORD *)v15 + 12);
      v17 = *((_DWORD *)v15 + 13);
      v14[0] = &v15;
      v14[1] = &v16;
      CWindowList::ForEachSoftwareCursorListener__lambda_1a2d7eb9b07ca6f2dc9b65c4384631da___(this, v14);
      v6 = v15;
    }
  }
  v9 = (CTopLevelWindow3D *)*((_QWORD *)v6 + 51);
  if ( v9 )
  {
    CTopLevelWindow3D::OnOffsetUpdated(v9, a3);
    v6 = v15;
  }
  v10 = (CProjectionBorderVisual *)*((_QWORD *)v6 + 52);
  if ( v10 )
  {
    CProjectionBorderVisual::UpdateRectFromWindow(v10, v6);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 65) + 64LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
      *((_QWORD *)v15 + 5));
    v6 = v15;
  }
  v11 = v6;
  if ( *((_DWORD *)v6 + 118) )
  {
    do
    {
      v12 = *(_QWORD *)(*((_QWORD *)v6 + 56) + 8LL * v7);
      if ( *(struct CWindowData **)(v12 + 64) == v11 && *(_DWORD *)(v12 + 72) == 1 )
      {
        CSecondaryWindowRepresentation::OnWindowOffsetUpdated((CSecondaryWindowRepresentation *)v12);
        v6 = v15;
      }
      ++v7;
    }
    while ( v7 < *((_DWORD *)v6 + 118) );
  }
  CWindowList::UpdateAccentState(this, v6, 3LL);
}
