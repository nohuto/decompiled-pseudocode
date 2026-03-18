/*
 * XREFs of ?IsEmptyDrawing@CRedirectedVisualContent@@UEBA_NXZ @ 0x18020C6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRedirectedVisualContent::IsEmptyDrawing(CRedirectedVisualContent *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 7) + 88LL) & 0x80) == 0;
}
