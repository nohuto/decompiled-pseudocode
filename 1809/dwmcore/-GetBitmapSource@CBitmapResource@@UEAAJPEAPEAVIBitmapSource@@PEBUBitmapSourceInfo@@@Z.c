/*
 * XREFs of ?GetBitmapSource@CBitmapResource@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1801C1760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResource::GetBitmapSource(
        CBitmapResource *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  struct IBitmapSource *v3; // rcx

  v3 = (struct IBitmapSource *)*((_QWORD *)this + 9);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(struct IBitmapSource *, struct IBitmapSource **, const struct BitmapSourceInfo *))(*(_QWORD *)v3 + 8LL))(
      v3,
      a2,
      a3);
  return 0LL;
}
