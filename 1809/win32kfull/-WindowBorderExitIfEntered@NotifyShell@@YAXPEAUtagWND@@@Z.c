/*
 * XREFs of ?WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C0122E60
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     xxxTrackMouseMove @ 0x1C00AE034 (xxxTrackMouseMove.c)
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C0157414 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

void __fastcall NotifyShell::WindowBorderExitIfEntered(NotifyShell *this, struct tagWND *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 77);
  if ( (v2 & 1) != 0 )
  {
    *((_DWORD *)this + 77) = v2 & 0xFFFFFFFE;
    anonymous_namespace_::NotifyShellSimplePayload(*(_QWORD *)this, 6LL, 0LL);
  }
}
