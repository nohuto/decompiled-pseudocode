/*
 * XREFs of ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C0047D74
 * Callers:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00451A8 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C0048CF0 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0049350 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C015E650 (GreTransferDwmStateToSpriteState.c)
 *     GreDeleteSpriteDelayDelete @ 0x1C026CCF0 (GreDeleteSpriteDelayDelete.c)
 * Callees:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C002ACC8 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0045D38 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z @ 0x1C0047E80 (-vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z.c)
 *     ?CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ @ 0x1C0047F80 (-CleanupRegions@SFMLOGICALSURFACE@@QEAAXXZ.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0049270 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026B2A8 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

void __fastcall vspDestroyDwmSpriteObjInternal(HDEV a1, HDEV a2, struct DWMSPRITE *a3)
{
  SFMLOGICALSURFACE *v4; // rdi
  int v5; // esi
  unsigned __int8 v6; // r14
  int v8; // eax

  if ( a3 )
  {
    v4 = (SFMLOGICALSURFACE *)*((_QWORD *)a3 + 21);
    v5 = *((_DWORD *)a3 + 41) & 0x10;
    v6 = (unsigned __int8)a2;
    if ( *((int *)a3 + 29) >= 1 )
      CheckAndProcessWindowResizeComplete(a3, 1, 0LL);
    if ( v4 )
    {
      DWMSPRITE::SetLogicalSurface(a3, a2, 0LL);
      SFMLOGICALSURFACE::CleanupRegions(v4);
      v8 = *((_DWORD *)v4 + 61);
      if ( (v8 & 0x80u) != 0 && (v8 & 8) != 0 && (v8 & 0x10) != 0 )
      {
        *((_DWORD *)v4 + 61) = v8 & 0xFFFFFFEF;
        SFMLOGICALSURFACE::StopSfmStateTracking(v4, a1, gpSfmState);
      }
      bhLSurfDestroyLogicalSurfaceObject((__int64 *)v4, 1, 0);
    }
    if ( !v5 )
      vspRemoveStateReferencesForSprite(a3);
    if ( !*(_QWORD *)a3 || (EtwDwmSpriteDestroyEvent(0LL), HmgRemoveObject(*(_QWORD *)a3, v6, 0LL, 1LL, 15, 0LL)) )
      FreeObject(a3, 15LL);
    --*((_DWORD *)g_pDwmState + 24);
  }
}
