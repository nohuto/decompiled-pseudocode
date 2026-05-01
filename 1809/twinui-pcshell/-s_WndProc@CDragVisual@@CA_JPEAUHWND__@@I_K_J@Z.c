/*
 * XREFs of ?s_WndProc@CDragVisual@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180375A30
 * Callers:
 *     <none>
 * Callees:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803753D0 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 */

LONG_PTR __fastcall CDragVisual::s_WndProc(HWND hWnd, UINT Msg, void *a3, LONG_PTR *lParam)
{
  CDragVisual *WindowLongPtrW; // rsi
  LONG_PTR v9; // rbx

  WindowLongPtrW = (CDragVisual *)GetWindowLongPtrW(hWnd, 0);
  if ( Msg == 129 )
  {
    v9 = *lParam;
    SetWindowLongPtrW(hWnd, 0, *lParam);
    *(_QWORD *)(v9 + 152) = hWnd;
  }
  else if ( Msg == 130 )
  {
    SetWindowLongPtrW(hWnd, 0, 0LL);
    if ( !WindowLongPtrW )
      return DefWindowProcW(hWnd, Msg, (WPARAM)a3, (LPARAM)lParam);
    *((_QWORD *)WindowLongPtrW + 19) = 0LL;
  }
  if ( WindowLongPtrW )
    return CDragVisual::_WndProc(WindowLongPtrW, hWnd, Msg, a3, (LPARAM)lParam);
  return DefWindowProcW(hWnd, Msg, (WPARAM)a3, (LPARAM)lParam);
}
