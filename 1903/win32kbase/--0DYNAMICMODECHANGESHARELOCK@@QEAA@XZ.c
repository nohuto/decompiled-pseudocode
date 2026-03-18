/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00151C0
 * Callers:
 *     hbmSelectBitmap @ 0x1C001A230 (hbmSelectBitmap.c)
 *     NtGdiDeleteObjectApp @ 0x1C0022090 (NtGdiDeleteObjectApp.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002A730 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0041CE8 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     GreSuspendDirectDraw @ 0x1C0043EF0 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C0044074 (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     GreCreatePatternBrushInternal @ 0x1C0052520 (GreCreatePatternBrushInternal.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00527BC (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C0080300 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0126D80 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreSetMagicColors @ 0x1C012FF4C (GreSetMagicColors.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C007A110 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

DYNAMICMODECHANGESHARELOCK *__fastcall DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK(
        DYNAMICMODECHANGESHARELOCK *this)
{
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared();
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  return this;
}
