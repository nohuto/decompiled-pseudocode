/*
 * XREFs of GetTouchHoldTime @ 0x1C01F9030
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTouchTimeFromCPLValue@@YAKKKKH@Z @ 0x1C01F8A34 (-GetTouchTimeFromCPLValue@@YAKKKKH@Z.c)
 */

__int64 GetTouchHoldTime()
{
  return GetTouchTimeFromCPLValue(0x3E8u, 0x3E8u, 8u, 0);
}
