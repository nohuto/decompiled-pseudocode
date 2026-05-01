/*
 * XREFs of ?SetScrollPercent@CScrollViewer@@UEAAXN@Z @ 0x18039CDD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_ApplyScroll@CScrollViewer@@AEAAXH_N@Z @ 0x18039CFA4 (-_ApplyScroll@CScrollViewer@@AEAAXH_N@Z.c)
 *     ?_GetMinScrollOffset@CScrollViewer@@AEAAHXZ @ 0x18039D280 (-_GetMinScrollOffset@CScrollViewer@@AEAAHXZ.c)
 */

void __fastcall CScrollViewer::SetScrollPercent(CScrollViewer *this, double a2)
{
  int MinScrollOffset; // eax

  if ( (*(unsigned __int8 (__fastcall **)(CScrollViewer *))(*(_QWORD *)this + 64LL))(this) && a2 >= 0.0 && a2 <= 100.0 )
  {
    MinScrollOffset = CScrollViewer::_GetMinScrollOffset((CScrollViewer *)((char *)this - 208));
    CScrollViewer::_ApplyScroll((CScrollViewer *)((char *)this - 208), (int)((double)MinScrollOffset * a2 / 100.0), 0);
  }
}
