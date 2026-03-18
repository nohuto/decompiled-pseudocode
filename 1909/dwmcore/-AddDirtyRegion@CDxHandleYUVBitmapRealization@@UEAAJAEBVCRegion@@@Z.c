/*
 * XREFs of ?AddDirtyRegion@CDxHandleYUVBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x1802621D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::AddDirtyRegion(
        CDxHandleYUVBitmapRealization *this,
        const struct CRegion *a2)
{
  (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *, const struct CRegion *))(*(_QWORD *)this + 128LL))(this, a2);
  return 0LL;
}
