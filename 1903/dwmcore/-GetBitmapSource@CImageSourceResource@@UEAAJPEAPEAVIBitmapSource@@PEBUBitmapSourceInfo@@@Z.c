/*
 * XREFs of ?GetBitmapSource@CImageSourceResource@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1801A0100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImageSourceResource::GetBitmapSource(
        CImageSourceResource *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IBitmapSource **, const struct BitmapSourceInfo *))(**((_QWORD **)this + 1) + 72LL))(
           *((_QWORD *)this + 1),
           a2,
           a3);
}
