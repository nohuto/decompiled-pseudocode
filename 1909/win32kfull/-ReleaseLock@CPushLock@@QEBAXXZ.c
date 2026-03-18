/*
 * XREFs of ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00E4048
 * Callers:
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C004C9B4 (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C004CBD0 (zzzUpdateCursorImage.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C008A19C (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?GetSizeForIndex@CCursorSizes@@QEBA_NIPEAI@Z @ 0x1C00F1508 (-GetSizeForIndex@CCursorSizes@@QEBA_NIPEAI@Z.c)
 *     ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z @ 0x1C00FE07C (-HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z.c)
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C0101268 (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x1C0138E70 (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C013C800 (-RefreshSizes@CCursorSizes@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPushLock::ReleaseLock(CPushLock *this, __int64 a2, __int64 a3, __int64 a4)
{
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)this + 2) )
  {
    *((_QWORD *)this + 2) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 8, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx((char *)this + 8, 0LL, a3, a4);
  }
  KeLeaveCriticalRegion();
}
