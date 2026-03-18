/*
 * XREFs of ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C0108B5C
 * Callers:
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C015BC7C (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C015BD0C (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00FFC6C (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0100AFC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall CCursorSizes::GetSizeForDpi(CCursorSizes *this, unsigned int a2)
{
  CCursorSizes *v2; // rsi
  unsigned __int64 v4; // rax
  unsigned int v5; // edi

  v2 = gpCursorSizes;
  CPushLock::AcquireLockShared((CCursorSizes *)((char *)gpCursorSizes + 64));
  if ( a2 >= 0x90 )
  {
    if ( a2 >= 0xC0 )
    {
      if ( a2 >= 0x120 )
        v4 = (-(__int64)(a2 < 0x180) & 0xFFFFFFFFFFFFFFF8uLL) + 56;
      else
        v4 = 40LL;
    }
    else
    {
      v4 = 32LL;
    }
  }
  else
  {
    v4 = 24LL;
  }
  v5 = *(_DWORD *)((char *)v2 + v4);
  CPushLock::ReleaseLock((CCursorSizes *)((char *)v2 + 64));
  return v5;
}
