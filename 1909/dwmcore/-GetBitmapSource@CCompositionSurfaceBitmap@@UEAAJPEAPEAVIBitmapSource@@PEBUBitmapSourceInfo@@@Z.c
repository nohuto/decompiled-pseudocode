/*
 * XREFs of ?GetBitmapSource@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1801C6AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x1800AB8E0 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetBitmapSource(
        CCompositionSurfaceBitmap *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  *a2 = 0LL;
  if ( a3
    && *(_QWORD *)a3
    && CCompositionSurfaceBitmap::EnsureBitmapRealization((CCompositionSurfaceBitmap *)((char *)this - 64), 0) )
  {
    (*(void (__fastcall **)(__int64, struct IBitmapSource **, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 64LL))(
      *((_QWORD *)this + 4) + 16LL,
      a2,
      0LL);
  }
  return 0LL;
}
