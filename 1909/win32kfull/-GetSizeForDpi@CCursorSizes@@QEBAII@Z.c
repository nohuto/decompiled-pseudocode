/*
 * XREFs of ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C0101268
 * Callers:
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0025644 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00E4048 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCursorSizes::GetSizeForDpi(CCursorSizes *this, unsigned int a2)
{
  CCursorSizes *v2; // rsi
  CPushLock *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  unsigned int v9; // edi

  v2 = gpCursorSizes;
  v4 = (CCursorSizes *)((char *)gpCursorSizes + 64);
  if ( (**((unsigned __int8 (__fastcall ***)(char *))gpCursorSizes + 8))((char *)gpCursorSizes + 64) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v4 + 8, 0LL);
    if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))v4)(v4) )
      CPushLock::ReleaseLock(v4, v5, v6, v7);
  }
  if ( a2 >= 0x90 )
  {
    if ( a2 >= 0xC0 )
    {
      if ( a2 >= 0x120 )
        v8 = (-(__int64)(a2 < 0x180) & 0xFFFFFFFFFFFFFFF8uLL) + 60;
      else
        v8 = 44LL;
    }
    else
    {
      v8 = 36LL;
    }
  }
  else
  {
    v8 = 28LL;
  }
  v9 = *(_DWORD *)((char *)v2 + v8);
  CPushLock::ReleaseLock(v4, v5, v6, v7);
  return v9;
}
