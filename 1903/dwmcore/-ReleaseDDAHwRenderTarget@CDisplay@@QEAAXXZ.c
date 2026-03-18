/*
 * XREFs of ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x1800AF7B8
 * Callers:
 *     ??1CDisplay@@EEAA@XZ @ 0x1800AF730 (--1CDisplay@@EEAA@XZ.c)
 *     ?EnsureDDAHwRenderTarget@CDisplay@@QEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18015AA64 (-EnsureDDAHwRenderTarget@CDisplay@@QEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x1801AB9E8 (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 *     ?ReleaseHwRenderTarget@CHwndRenderTargetDDA@@EEAAXXZ @ 0x1801ABB20 (-ReleaseHwRenderTarget@CHwndRenderTargetDDA@@EEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180026628 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplay::ReleaseDDAHwRenderTarget(CDisplay *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx

  v1 = (__int64 *)((char *)this + 80);
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 96LL))(v2);
    ReleaseInterface<ID2D1Geometry>(v1);
  }
}
