/*
 * XREFs of ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C00A21FC
 * Callers:
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C000E15C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C00596B0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0075440 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     GreSfmCloseCompositorRef @ 0x1C00A209C (GreSfmCloseCompositorRef.c)
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C012E910 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     GrepSfmRemoveSurfaces @ 0x1C01334D0 (GrepSfmRemoveSurfaces.c)
 * Callees:
 *     ?SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z @ 0x1C0252660 (-SpNotifyLSurfaceTracking@@YAJPEAUHDEV__@@PEAUHLSURF__@@H@Z.c)
 */

__int64 __fastcall SFMLOGICALSURFACE::StopSfmStateTracking(SFMLOGICALSURFACE *this, HDEV a2, struct SfmState *a3)
{
  SFMLOGICALSURFACE **v6; // rdx
  SFMLOGICALSURFACE **v7; // rax
  int v8; // eax

  *((_DWORD *)this + 61) &= ~8u;
  DEC_SHARE_REF_CNT(this);
  --*((_DWORD *)a3 + 14);
  v6 = (SFMLOGICALSURFACE **)*((_QWORD *)this + 4);
  if ( v6[1] != (SFMLOGICALSURFACE *)((char *)this + 32)
    || (v7 = (SFMLOGICALSURFACE **)*((_QWORD *)this + 5), *v7 != (SFMLOGICALSURFACE *)((char *)this + 32)) )
  {
    __fastfail(3u);
  }
  *v7 = (SFMLOGICALSURFACE *)v6;
  v6[1] = (SFMLOGICALSURFACE *)v7;
  v8 = *((_DWORD *)this + 61);
  if ( (v8 & 0x80u) != 0 )
  {
    if ( a2 || (a2 = (HDEV)*((_QWORD *)this + 3)) != 0LL )
    {
      SpNotifyLSurfaceTracking(a2, *(HLSURF *)this, 0);
      v8 = *((_DWORD *)this + 61);
    }
    *((_DWORD *)this + 61) = v8 & 0xFFFFFF7F;
  }
  return 0LL;
}
