/*
 * XREFs of ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00BAB5C
 * Callers:
 *     bDeleteSurface @ 0x1C0015C30 (bDeleteSurface.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C0069900 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C0069F00 (bMigrateSurfaceForConversion.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C006C574 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BCDC0 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C01262BC (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C006BB50 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall SURFREF::bDeleteSurface(__int64 *a1, int a2)
{
  __int64 result; // rax

  result = SURFACE::bDeleteSurface(*a1, a2, 0);
  if ( (_DWORD)result )
    *a1 = 0LL;
  return result;
}
