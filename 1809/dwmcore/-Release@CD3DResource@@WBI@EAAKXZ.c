/*
 * XREFs of ?Release@CD3DResource@@WBI@EAAKXZ @ 0x1800F0BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DResource::Release(__int64 a1)
{
  return CD3DResource::Release((CD3DSurface *)(a1 - 24));
}
