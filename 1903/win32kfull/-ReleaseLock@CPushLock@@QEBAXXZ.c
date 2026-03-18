/*
 * XREFs of ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0109AA8
 * Callers:
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00457CC (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x1C0083070 (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00ABB94 (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C00ABDB0 (zzzUpdateCursorImage.c)
 *     ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C00E3040 (-RefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     ?GetSizeForIndex@CCursorSizes@@QEBA_NIPEAI@Z @ 0x1C0117548 (-GetSizeForIndex@CCursorSizes@@QEBA_NIPEAI@Z.c)
 *     ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z @ 0x1C012397C (-HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z.c)
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C0124B38 (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPushLock::ReleaseLock(CPushLock *this)
{
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)this + 2) )
  {
    *((_QWORD *)this + 2) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 8, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx((char *)this + 8, 0LL);
  }
  KeLeaveCriticalRegion();
}
