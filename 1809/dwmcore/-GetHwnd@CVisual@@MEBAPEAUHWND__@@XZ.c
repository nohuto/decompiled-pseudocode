/*
 * XREFs of ?GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ @ 0x18006C5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall CVisual::GetHwnd(CVisual *this)
{
  HWND result; // rax

  result = 0LL;
  if ( (*((_BYTE *)this + 93) & 1) != 0 )
    return (HWND)CVisual::GetTopLevelWindow(this);
  return result;
}
