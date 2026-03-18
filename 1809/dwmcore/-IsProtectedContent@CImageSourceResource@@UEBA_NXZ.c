/*
 * XREFs of ?IsProtectedContent@CImageSourceResource@@UEBA_NXZ @ 0x180077020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImageSourceResource::IsProtectedContent(CImageSourceResource *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 32LL))(*((_QWORD *)this + 1));
}
