/*
 * XREFs of ?GetScrollIncrement@CVirtualDesktopContainerElement@@UEAAHXZ @ 0x180381A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopContainerElement::GetScrollIncrement(CVirtualDesktopContainerElement *this)
{
  return (unsigned int)(*((_DWORD *)this + 27)
                      + MulDiv(
                          *((_DWORD *)this + 26),
                          *((_DWORD *)this + 8) - *((_DWORD *)this + 6),
                          *((_DWORD *)this + 9) - *((_DWORD *)this + 7)));
}
