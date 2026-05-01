/*
 * XREFs of ?_TrackMouseLeave@CDragVisual@@AEAAX_N@Z @ 0x1803DAA1C
 * Callers:
 *     ?Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z @ 0x1803D7D90 (-Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z.c)
 *     ?_OnMouseHover@CDragVisual@@AEAAJUtagPOINT@@@Z @ 0x1803DA180 (-_OnMouseHover@CDragVisual@@AEAAJUtagPOINT@@@Z.c)
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803DB1E8 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDragVisual::_TrackMouseLeave(CDragVisual *this, char a2)
{
  HWND v4; // rax
  DWORD v5; // r8d
  struct tagTRACKMOUSEEVENT v6; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 327) != a2 )
  {
    v4 = (HWND)*((_QWORD *)this + 19);
    v6.cbSize = 24;
    v6.hwndTrack = v4;
    v5 = 2;
    if ( !a2 )
      v5 = -2147483646;
    v6.dwFlags = v5;
    if ( TrackMouseEvent(&v6) )
      *((_BYTE *)this + 327) = a2;
  }
}
