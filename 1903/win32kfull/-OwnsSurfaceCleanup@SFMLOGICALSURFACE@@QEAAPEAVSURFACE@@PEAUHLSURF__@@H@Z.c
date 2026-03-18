/*
 * XREFs of ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C0048080
 * Callers:
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C0047EEC (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C015E650 (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     GreReferenceObject @ 0x1C004567C (GreReferenceObject.c)
 */

struct SURFACE *__fastcall SFMLOGICALSURFACE::OwnsSurfaceCleanup(SFMLOGICALSURFACE *this, HLSURF a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v6; // rax

  v3 = 0LL;
  v4 = *((_QWORD *)this + 23);
  if ( v4 && (*((_DWORD *)this + 61) & 0x20) == 0 )
  {
    v6 = SURFOBJ_TO_SURFACE_NOT_NULL(v4);
    *((_DWORD *)this + 61) |= 0x20u;
    v3 = v6;
    GreReferenceObject(*(HSURF *)(v6 + 32));
  }
  return (struct SURFACE *)v3;
}
