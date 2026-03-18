/*
 * XREFs of ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0075440
 * Callers:
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C000ACC8 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00743A0 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0074C48 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     GreHintSpriteShape @ 0x1C0074E38 (GreHintSpriteShape.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C007CA08 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     GreSfmCloseCompositorRef @ 0x1C00A209C (GreSfmCloseCompositorRef.c)
 *     GreSfmOpenCompositorRef @ 0x1C00A2514 (GreSfmOpenCompositorRef.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C00A4B34 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GrepSfmRemoveSurfaces @ 0x1C01334D0 (GrepSfmRemoveSurfaces.c)
 *     CheckAndProcessSurfaceComplete @ 0x1C0253080 (CheckAndProcessSurfaceComplete.c)
 * Callees:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C0076174 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C00A21FC (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // r9
  int v5; // eax

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 12));
    if ( *((_DWORD *)this + 10) == 1 )
    {
      v3 = *((_QWORD *)this + 4);
      v4 = v3;
      v5 = *(_DWORD *)(v3 + 244);
      if ( (v5 & 0x80u) != 0 && (v5 & 8) != 0 && (v5 & 0x10) != 0 )
      {
        *(_DWORD *)(v3 + 244) = v5 & 0xFFFFFFEF;
        SFMLOGICALSURFACE::StopSfmStateTracking(*((SFMLOGICALSURFACE **)this + 4), 0LL, gpSfmState);
        v4 = *((_QWORD *)this + 4);
      }
      bhLSurfDestroyLogicalSurfaceObject(v4, 1LL);
    }
  }
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(this);
}
