/*
 * XREFs of ?GetCurrentRenderingRealization@CImageSourceResource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18019EA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImageSourceResource::GetCurrentRenderingRealization(
        CImageSourceResource *this,
        struct IBitmapRealization **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IBitmapRealization **))(**((_QWORD **)this + 1) + 80LL))(
           *((_QWORD *)this + 1),
           a2);
}
