/*
 * XREFs of SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C0079C40
 * Callers:
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C007780C (GreAddLogicalSurfaceToDirtyQueue.c)
 *     GreHintSpriteShape @ 0x1C0077BD8 (GreHintSpriteShape.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C007C97C (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C00C22CC (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GreSfmOpenCompositorRef @ 0x1C00C5A48 (GreSfmOpenCompositorRef.c)
 *     GreSfmCloseCompositorRef @ 0x1C00C5B50 (GreSfmCloseCompositorRef.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C00C7514 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     GrepSfmRemoveSurfaces @ 0x1C0111970 (GrepSfmRemoveSurfaces.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C0137094 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     CheckAndProcessSurfaceComplete @ 0x1C023BF50 (CheckAndProcessSurfaceComplete.c)
 * Callees:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C007B0BC (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C00C7E18 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
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
