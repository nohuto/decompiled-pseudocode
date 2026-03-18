/*
 * XREFs of SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C0029BA0
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C0029094 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreHintSpriteShape @ 0x1C00296D4 (GreHintSpriteShape.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C002A934 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C00442C4 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GreSfmOpenCompositorRef @ 0x1C0045C0C (GreSfmOpenCompositorRef.c)
 *     GreSfmCloseCompositorRef @ 0x1C0045DB0 (GreSfmCloseCompositorRef.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0049350 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C012BBC4 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     GrepSfmRemoveSurfaces @ 0x1C0160E10 (GrepSfmRemoveSurfaces.c)
 *     CheckAndProcessSurfaceComplete @ 0x1C026C8C0 (CheckAndProcessSurfaceComplete.c)
 * Callees:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C002ACC8 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0045D38 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 */

SFMLOGICALSURFACE *__fastcall SFMLOGICALSURFACEREF_vDestructorWrap(__int64 a1)
{
  SFMLOGICALSURFACE *result; // rax
  SFMLOGICALSURFACE *v3; // rcx
  SFMLOGICALSURFACE *v4; // r9
  int v5; // eax

  result = *(SFMLOGICALSURFACE **)a1;
  if ( *(_QWORD *)a1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)result + 3);
    if ( *(_DWORD *)(a1 + 8) == 1 )
    {
      v3 = *(SFMLOGICALSURFACE **)a1;
      v4 = v3;
      v5 = *((_DWORD *)v3 + 61);
      if ( (v5 & 0x80u) != 0 && (v5 & 8) != 0 && (v5 & 0x10) != 0 )
      {
        *((_DWORD *)v3 + 61) = v5 & 0xFFFFFFEF;
        SFMLOGICALSURFACE::StopSfmStateTracking(*(SFMLOGICALSURFACE **)a1, 0LL, gpSfmState);
        v4 = *(SFMLOGICALSURFACE **)a1;
      }
      return (SFMLOGICALSURFACE *)bhLSurfDestroyLogicalSurfaceObject(v4, 1LL);
    }
  }
  return result;
}
