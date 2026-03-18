/*
 * XREFs of ?IsEmptyDrawing@CRedirectedVisualContent@@UEBA_NXZ @ 0x1801D9DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRedirectedVisualContent::IsEmptyDrawing(CRedirectedVisualContent *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 7) + 88LL) & 0x400) == 0;
}
