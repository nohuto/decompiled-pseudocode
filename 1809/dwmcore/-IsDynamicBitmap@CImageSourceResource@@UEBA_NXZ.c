/*
 * XREFs of ?IsDynamicBitmap@CImageSourceResource@@UEBA_NXZ @ 0x180175330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImageSourceResource::IsDynamicBitmap(CImageSourceResource *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 136LL))(*((_QWORD *)this + 1));
}
