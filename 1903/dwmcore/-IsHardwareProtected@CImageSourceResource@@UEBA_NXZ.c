/*
 * XREFs of ?IsHardwareProtected@CImageSourceResource@@UEBA_NXZ @ 0x1801A06D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImageSourceResource::IsHardwareProtected(CImageSourceResource *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 40LL))(*((_QWORD *)this + 1));
}
