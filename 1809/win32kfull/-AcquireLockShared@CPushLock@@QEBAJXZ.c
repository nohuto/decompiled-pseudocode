/*
 * XREFs of ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00FFC6C
 * Callers:
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x1C0017CAC (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00A2CB8 (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00DED40 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C0108B5C (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 *     ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z @ 0x1C011BA7C (-HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z.c)
 *     DC::AcquireDcVisRgnShared @ 0x1C015F480 (DC--AcquireDcVisRgnShared.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0100AFC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPushLock::AcquireLockShared(CPushLock *this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))this)(this) )
    return (unsigned int)-1073741816;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 8, 0LL);
  if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))this)(this) )
  {
    CPushLock::ReleaseLock(this);
    return (unsigned int)-1073741816;
  }
  return v2;
}
