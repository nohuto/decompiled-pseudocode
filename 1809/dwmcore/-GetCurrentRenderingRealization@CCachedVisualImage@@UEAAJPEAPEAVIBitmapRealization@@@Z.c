/*
 * XREFs of ?GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x180073A80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::GetCurrentRenderingRealization(
        CCachedVisualImage *this,
        struct IBitmapRealization **a2)
{
  struct IBitmapRealization *v2; // r8

  v2 = (struct IBitmapRealization *)(((unsigned __int64)this + 128) & -(__int64)(this != (CCachedVisualImage *)8));
  *a2 = v2;
  (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
