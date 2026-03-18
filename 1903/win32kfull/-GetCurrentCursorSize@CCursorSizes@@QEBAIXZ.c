/*
 * XREFs of ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x1C0083070
 * Callers:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C0082E00 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C00ABDB0 (zzzUpdateCursorImage.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0109AA8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCursorSizes::GetCurrentCursorSize(CCursorSizes *this)
{
  CCursorSizes *v1; // rdi
  CPushLock *v2; // rbx
  unsigned int v3; // edi

  v1 = gpCursorSizes;
  v2 = (CCursorSizes *)((char *)gpCursorSizes + 64);
  if ( (**((unsigned __int8 (__fastcall ***)(char *))gpCursorSizes + 8))((char *)gpCursorSizes + 64) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v2 + 8, 0LL);
    if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))v2)(v2) )
      CPushLock::ReleaseLock(v2);
  }
  v3 = *(_DWORD *)v1;
  CPushLock::ReleaseLock(v2);
  return v3;
}
