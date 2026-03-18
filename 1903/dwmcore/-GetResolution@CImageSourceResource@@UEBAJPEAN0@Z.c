/*
 * XREFs of ?GetResolution@CImageSourceResource@@UEBAJPEAN0@Z @ 0x1801A05F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImageSourceResource::GetResolution(CImageSourceResource *this, double *a2, double *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, double *, double *))(**((_QWORD **)this + 1) + 128LL))(
           *((_QWORD *)this + 1),
           a2,
           a3);
}
