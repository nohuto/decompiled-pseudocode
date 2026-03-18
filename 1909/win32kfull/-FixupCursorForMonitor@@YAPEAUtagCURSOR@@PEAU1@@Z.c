/*
 * XREFs of ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C004C9B4
 * Callers:
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C004C0A0 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C0138C00 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00E4048 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

struct tagCURSOR *__fastcall FixupCursorForMonitor(struct tagCURSOR *a1)
{
  CCursorSizes *v2; // rsi
  CPushLock *v3; // rbx
  int v4; // esi
  struct tagCURSOR *result; // rax

  if ( !a1 )
    return a1;
  v2 = gpCursorSizes;
  v3 = (CCursorSizes *)((char *)gpCursorSizes + 64);
  if ( (**((unsigned __int8 (__fastcall ***)(char *))gpCursorSizes + 8))((char *)gpCursorSizes + 64) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v3 + 8, 0LL);
    if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))v3)(v3) )
      CPushLock::ReleaseLock(v3);
  }
  v4 = *(_DWORD *)v2;
  CPushLock::ReleaseLock(v3);
  for ( result = (struct tagCURSOR *)*((_QWORD *)a1 + 6);
        result && *((_DWORD *)result + 19) != v4;
        result = (struct tagCURSOR *)*((_QWORD *)result + 5) )
  {
    ;
  }
  if ( !result )
    return a1;
  return result;
}
