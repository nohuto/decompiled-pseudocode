/*
 * XREFs of ?GetVerticalSegment@CRect@Geometry@@QEBA?AUCSegment1D@2@XZ @ 0x180082E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall Geometry::CRect::GetVerticalSegment(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 4);
  a2[1] = *(_DWORD *)(a1 + 12);
  return a2;
}
