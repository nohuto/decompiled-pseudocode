/*
 * XREFs of ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x1C0138E70
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C004CBD0 (zzzUpdateCursorImage.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C0138C00 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00E4048 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCursorSizes::GetCurrentCursorSize(CCursorSizes *this)
{
  CCursorSizes *v1; // rdi
  CPushLock *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // edi

  v1 = gpCursorSizes;
  v2 = (CCursorSizes *)((char *)gpCursorSizes + 64);
  if ( (**((unsigned __int8 (__fastcall ***)(char *))gpCursorSizes + 8))((char *)gpCursorSizes + 64) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v2 + 8, 0LL);
    if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))v2)(v2) )
      CPushLock::ReleaseLock(v2, v3, v4, v5);
  }
  v6 = *(_DWORD *)v1;
  CPushLock::ReleaseLock(v2, v3, v4, v5);
  return v6;
}
