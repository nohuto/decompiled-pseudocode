/*
 * XREFs of ?_ShouldHandleInput@CDragVisual@@AEAA_NI@Z @ 0x1803DA9A4
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803DB1E8 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CDragVisual::_ShouldHandleInput(CDragVisual *this, unsigned int a2)
{
  char v2; // r8

  v2 = 0;
  if ( !*((_QWORD *)this + 2) )
    return 0;
  if ( *((_BYTE *)this + 278) || *((_QWORD *)this + 21) )
    return 1;
  if ( a2 >= 0x200 )
  {
    if ( a2 <= 0x202 )
    {
      return GetCapture() == *((HWND *)this + 19);
    }
    else if ( a2 - 581 <= 2 )
    {
      return *((_DWORD *)this + 82) != 0;
    }
  }
  return v2;
}
