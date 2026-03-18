/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029FFC
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C00225E0 (NtGdiDeleteObjectApp.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0027830 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002B180 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreSuspendDirectDraw @ 0x1C003E4F0 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C003E674 (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C003FF58 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     GreGetDeviceCaps @ 0x1C00511A0 (GreGetDeviceCaps.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C006C574 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C007C840 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     GreCreatePatternBrushInternal @ 0x1C008CCA0 (GreCreatePatternBrushInternal.c)
 *     hbmSelectBitmapInternal @ 0x1C00BB910 (hbmSelectBitmapInternal.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BCDC0 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0124510 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C0125F80 (NtGdiGetDeviceCapsAll.c)
 *     GreSetMagicColors @ 0x1C012D79C (GreSetMagicColors.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0075F30 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

DYNAMICMODECHANGESHARELOCK *__fastcall DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK(
        DYNAMICMODECHANGESHARELOCK *this)
{
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared();
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  return this;
}
