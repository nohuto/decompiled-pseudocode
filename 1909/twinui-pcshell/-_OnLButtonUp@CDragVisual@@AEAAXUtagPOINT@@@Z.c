/*
 * XREFs of ?_OnLButtonUp@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1803F9708
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803FA7E8 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x1803F9450 (-_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnFinishDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x1803F9538 (-_OnFinishDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 */

void __fastcall CDragVisual::_OnLButtonUp(CDragVisual *this, struct tagPOINT a2)
{
  if ( *((_BYTE *)this + 324) )
  {
    CDragVisual::_OnFinishDrag(this, 0, a2);
    *((_BYTE *)this + 324) = 0;
  }
  else if ( GetCapture() == *((HWND *)this + 19) )
  {
    CDragVisual::_OnClick((HWND *)this, a2);
  }
  if ( *((_QWORD *)this + 19) )
  {
    if ( GetCapture() == *((HWND *)this + 19) )
      ReleaseCapture();
  }
}
