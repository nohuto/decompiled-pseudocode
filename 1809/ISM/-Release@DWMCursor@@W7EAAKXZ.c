/*
 * XREFs of ?Release@DWMCursor@@W7EAAKXZ @ 0x180005770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::Release(__int64 a1)
{
  return EdgyInputTarget::Release((EdgyInputTarget *)(a1 - 8));
}
