/*
 * XREFs of ?_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z @ 0x18037463C
 * Callers:
 *     ?_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x180374798 (-_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803753D0 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?_OnCancelDrag@CDragVisual@@AEAAXXZ @ 0x180373F0C (-_OnCancelDrag@CDragVisual@@AEAAXXZ.c)
 */

void __fastcall CDragVisual::_OnPointerCaptureChanged(CDragVisual *this, int a2)
{
  if ( *((_BYTE *)this + 325) )
  {
    CDragVisual::_OnCancelDrag(this);
    *((_BYTE *)this + 325) = 0;
  }
  if ( *((_DWORD *)this + 82) == a2 )
    *((_DWORD *)this + 82) = 0;
}
