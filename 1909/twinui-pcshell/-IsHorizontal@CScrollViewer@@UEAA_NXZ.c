/*
 * XREFs of ?IsHorizontal@CScrollViewer@@UEAA_NXZ @ 0x18039C810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CScrollViewer::IsHorizontal(CScrollViewer *this)
{
  return *((_DWORD *)this + 20) & 1;
}
