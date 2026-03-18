/*
 * XREFs of ?vClearDpiScaling@DC@@QEAAXXZ @ 0x1C0123418
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001D6E0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C0123524 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

void __fastcall DC::vClearDpiScaling(DC *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 130);
  if ( (v1 & 1) != 0 )
  {
    *((_DWORD *)this + 9) |= 0x10u;
    *(_QWORD *)((char *)this + 524) = 0LL;
    *(_QWORD *)((char *)this + 532) = 0LL;
    *((_DWORD *)this + 130) = v1 & 0xFFFFFFF8 | 4;
    DC::vUpdateCachedDPIScaleValue(this);
  }
}
