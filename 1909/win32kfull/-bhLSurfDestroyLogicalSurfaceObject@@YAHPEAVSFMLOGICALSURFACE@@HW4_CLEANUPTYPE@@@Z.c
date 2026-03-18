/*
 * XREFs of ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C0031138
 * Callers:
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C0030010 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     GreSfmCloseCompositorRef @ 0x1C008A780 (GreSfmCloseCompositorRef.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C008A8C4 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C008C744 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C008E2DC (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     CleanupHLSURF @ 0x1C011BFB0 (CleanupHLSURF.c)
 *     GrepSfmRemoveSurfaces @ 0x1C0161DE0 (GrepSfmRemoveSurfaces.c)
 * Callees:
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C008C8BC (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 */

__int64 __fastcall bhLSurfDestroyLogicalSurfaceObject(__int64 *a1, int a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 v7; // rdi
  char v9; // [rsp+20h] [rbp-18h]

  v3 = *a1;
  v4 = 0;
  v7 = (__int64)a1;
  if ( *a1 )
  {
    v9 = 18;
    v7 = HmgRemoveObject(v3, 0LL, 0LL, 1LL, v9, 0LL);
  }
  if ( v7 )
  {
    SFMLOGICALSURFACE::DeInitialize(v7, v3, a3);
    FreeObject(v7, 18LL);
    if ( a2 )
      EtwLogicalSurfDestroyEvent(v3, 0LL);
    return 1;
  }
  return v4;
}
