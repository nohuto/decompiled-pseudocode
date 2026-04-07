/*
 * XREFs of ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18000C6AC
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000C4EC (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180017D78 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x18000C780 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18000FEC4 (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180010478 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800141F4 (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z @ 0x18001A078 (-EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180023870 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18002BA54 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x18003BEA4 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     floor_0 @ 0x18004FD7A (floor_0.c)
 */

__int64 __fastcall CWindowList::UpdateWindowScale(CWindowList *this, struct tagPOINT *a2, int a3)
{
  unsigned int v6; // edi
  int v7; // esi
  int v8; // r14d
  float v9; // xmm7_4
  CWindowList *v10; // rcx
  int v11; // eax
  CWindowList *v13; // rcx
  CTopLevelWindow *v14; // rcx
  HWND v15; // rdx
  void *v16; // [rsp+28h] [rbp-40h]
  bool v17; // [rsp+78h] [rbp+10h] BYREF
  struct tagPOINT v18; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  CWindowData::EstablishPixelAlignedScale((CWindowData *)a2, &v17);
  v7 = 0;
  v8 = 0;
  v9 = *(float *)&a2[38].x;
  if ( a2[23].y - a2[22].y >= 0 )
    v7 = a2[23].y - a2[22].y;
  if ( a2[24].x - a2[23].x >= 0 )
    v8 = a2[24].x - a2[23].x;
  if ( v9 != 1.0 )
  {
    v7 = (int)floor_0((float)((float)v7 * v9) + 0.5);
    v8 = (int)floor_0((float)((float)v8 * v9) + 0.5);
  }
  a2[7].x = v7 + a2[6].x;
  v10 = (CWindowList *)(unsigned int)(v8 + a2[6].y);
  a2[7].y = (int)v10;
  if ( *(_QWORD *)&a2[50] && (v11 = CWindowData::OnWindowSizeUpdated((CWindowData *)a2), v6 = v11, v11 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xD54u, v16);
  }
  else if ( v17 || a3 )
  {
    CWindowList::OnClientMarginsChange(v10, (struct CWindowData *)a2);
    CWindowList::OnClientGlassChange(v13, (struct CWindowData *)a2);
    v14 = (CTopLevelWindow *)a2[50];
    if ( v14 )
      CTopLevelWindow::OnWindowScaleUpdated(v14);
    v15 = (HWND)a2[5];
    v18 = a2[6];
    v17 = 0;
    CWindowPropertyTracker::GetWindowEndPosition(
      (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
      v15,
      &v18);
    CAnimationScheduler::OnWindowPositionChange(
      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30),
      (const struct CWindowData *)a2,
      v18,
      &v17);
    if ( !v17 )
      CWindowList::OnPositionChange(this, (struct CWindowData *)a2, 1);
  }
  return v6;
}
