/*
 * XREFs of ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0075F4C
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C001EE60 (NtGdiDeleteObjectApp.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C0032090 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C0049DD0 (bMigrateSurfaceForConversion.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C005C564 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     bDeleteSurface @ 0x1C0063570 (bDeleteSurface.c)
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0077B94 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001D470 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall SURFREF::bDeleteSurface(__int64 *a1, int a2)
{
  __int64 result; // rax

  result = SURFACE::bDeleteSurface(*a1, a2, 0);
  if ( (_DWORD)result )
    *a1 = 0LL;
  return result;
}
