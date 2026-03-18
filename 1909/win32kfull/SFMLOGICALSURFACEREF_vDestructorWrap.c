/*
 * XREFs of SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C0030010
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C002F504 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreHintSpriteShape @ 0x1C002FB44 (GreHintSpriteShape.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0030DA4 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C0088C98 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GreSfmOpenCompositorRef @ 0x1C008A5DC (GreSfmOpenCompositorRef.c)
 *     GreSfmCloseCompositorRef @ 0x1C008A780 (GreSfmCloseCompositorRef.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C008DE10 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C0106B94 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     GrepSfmRemoveSurfaces @ 0x1C0161DE0 (GrepSfmRemoveSurfaces.c)
 *     CheckAndProcessSurfaceComplete @ 0x1C026C190 (CheckAndProcessSurfaceComplete.c)
 * Callees:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C0031138 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C008A708 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
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
