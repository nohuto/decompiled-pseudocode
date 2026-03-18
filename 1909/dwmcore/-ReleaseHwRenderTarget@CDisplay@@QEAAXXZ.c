/*
 * XREFs of ?ReleaseHwRenderTarget@CDisplay@@QEAAXXZ @ 0x18002B930
 * Callers:
 *     ?EnsureHwRenderTarget@CDisplay@@QEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@W4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18002B648 (-EnsureHwRenderTarget@CDisplay@@QEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@W4DXGI_.c)
 *     ??1CDisplay@@EEAA@XZ @ 0x18002B884 (--1CDisplay@@EEAA@XZ.c)
 *     ?ReleaseHwRenderTarget@CHwndRenderTarget@@EEAAXXZ @ 0x18002BC00 (-ReleaseHwRenderTarget@CHwndRenderTarget@@EEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplay::ReleaseHwRenderTarget(CDisplay *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx

  v1 = (__int64 *)((char *)this + 72);
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 96LL))(v2);
    ReleaseInterface<ID2D1Geometry>(v1);
  }
}
