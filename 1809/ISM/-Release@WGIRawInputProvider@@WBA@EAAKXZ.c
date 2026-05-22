/*
 * XREFs of ?Release@WGIRawInputProvider@@WBA@EAAKXZ @ 0x180005780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WGIRawInputProvider::Release(__int64 a1)
{
  return EdgyInputTarget::Release((EdgyInputTarget *)(a1 - 16));
}
