/*
 * XREFs of GreSelectPen @ 0x1C01205D0
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectPenInternal @ 0x1C00BAAE0 (GreSelectPenInternal.c)
 */

struct HOBJ__ *__fastcall GreSelectPen(HDC a1, struct HOBJ__ *a2)
{
  return GreSelectPenInternal(a1, a2, 1);
}
