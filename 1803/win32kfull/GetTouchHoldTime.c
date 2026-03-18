/*
 * XREFs of GetTouchHoldTime @ 0x1C01D1F20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTouchTimeFromCPLValue@@YAKKKKH@Z @ 0x1C01D19CC (-GetTouchTimeFromCPLValue@@YAKKKKH@Z.c)
 */

__int64 GetTouchHoldTime()
{
  return GetTouchTimeFromCPLValue(0x3E8u, 0x3E8u, 8u, 0);
}
