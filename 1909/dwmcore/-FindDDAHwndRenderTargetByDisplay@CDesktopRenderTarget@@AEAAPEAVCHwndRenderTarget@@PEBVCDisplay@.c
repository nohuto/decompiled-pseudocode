/*
 * XREFs of ?FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@@@Z @ 0x1801A6A38
 * Callers:
 *     ?HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x1801A6DF0 (-HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801A7324 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

struct CHwndRenderTarget *__fastcall CDesktopRenderTarget::FindDDAHwndRenderTargetByDisplay(
        CDesktopRenderTarget *this,
        const struct CDisplay *a2)
{
  __int64 v2; // rbx
  unsigned int v5; // esi
  const struct CDisplay **v6; // rcx

  v2 = 0LL;
  v5 = 0;
  if ( *((_DWORD *)this + 50) )
  {
    while ( 1 )
    {
      v6 = *(const struct CDisplay ***)(*((_QWORD *)this + 22) + 8LL * v5);
      if ( v6[21] == a2 )
      {
        if ( (*((unsigned __int8 (__fastcall **)(const struct CDisplay **))*v6 + 31))(v6) )
          break;
      }
      if ( ++v5 >= *((_DWORD *)this + 50) )
        return (struct CHwndRenderTarget *)v2;
    }
    return *(struct CHwndRenderTarget **)(*((_QWORD *)this + 22) + 8LL * v5);
  }
  return (struct CHwndRenderTarget *)v2;
}
