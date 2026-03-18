/*
 * XREFs of ?GetAdapterLuid@CD3DDeviceLevel1@@UEBA?AU_LUID@@XZ @ 0x1800E75E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CD3DDeviceLevel1::GetAdapterLuid(CD3DDeviceLevel1 *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this + 89);
  return (struct _LUID)a2;
}
