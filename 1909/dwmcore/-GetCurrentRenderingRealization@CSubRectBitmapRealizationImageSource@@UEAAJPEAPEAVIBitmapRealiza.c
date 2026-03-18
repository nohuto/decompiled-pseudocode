/*
 * XREFs of ?GetCurrentRenderingRealization@CSubRectBitmapRealizationImageSource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x180259360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSubRectBitmapRealizationImageSource::GetCurrentRenderingRealization(
        CSubRectBitmapRealizationImageSource *this,
        struct IBitmapRealization **a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 8LL))(*((_QWORD *)this + 3));
  *a2 = (struct IBitmapRealization *)*((_QWORD *)this + 3);
  return 0LL;
}
