/*
 * XREFs of ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x18007D908
 * Callers:
 *     ??1CDisplay@@EEAA@XZ @ 0x18007D92C (--1CDisplay@@EEAA@XZ.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x180176470 (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 *     ?EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180176530 (-EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 *     ?ReleaseHwRenderTarget@CHwndRenderTargetDDA@@EEAAXXZ @ 0x180176600 (-ReleaseHwRenderTarget@CHwndRenderTargetDDA@@EEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
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
    ReleaseInterface<IBitmapLock>(v1);
  }
}
