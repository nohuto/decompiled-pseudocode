/*
 * XREFs of GreSelectPen @ 0x1C00BFC60
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectPenInternal @ 0x1C0075ED0 (GreSelectPenInternal.c)
 */

struct HOBJ__ *__fastcall GreSelectPen(HDC a1, struct HOBJ__ *a2)
{
  return GreSelectPenInternal(a1, a2, 1);
}
