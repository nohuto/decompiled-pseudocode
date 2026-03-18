/*
 * XREFs of ?IsOpaque@CImageSourceResource@@UEBA_NXZ @ 0x18019F870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImageSourceResource::IsOpaque(CImageSourceResource *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 104LL))(*((_QWORD *)this + 1));
}
