/*
 * XREFs of ?GetThumbnailLocation@CSwitchItemElement@@UEAA?AUCRect@Geometry@@XZ @ 0x180362990
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z @ 0x180363580 (-_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z.c)
 */

struct Geometry::CRect *__fastcall CSwitchItemElement::GetThumbnailLocation(__int64 a1, struct Geometry::CRect *a2)
{
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  CSwitchItemElement::_GetLayoutRects((CSwitchItemElement *)(a1 - 224), 0LL, 0LL, a2);
  return a2;
}
