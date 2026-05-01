/*
 * XREFs of ?IsHorizontal@CScrollViewer@@UEAA_NXZ @ 0x18031C940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CScrollViewer::IsHorizontal(CScrollViewer *this)
{
  return *((_DWORD *)this + 20) & 1;
}
