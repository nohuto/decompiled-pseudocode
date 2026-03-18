/*
 * XREFs of ?WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z @ 0x1C023A784
 * Callers:
 *     xxxTrackMouseMove @ 0x1C001C4B4 (xxxTrackMouseMove.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0025A2C (WPP_RECORDER_SF_q.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C012E190 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

void __fastcall NotifyShell::WindowBorderEnter(NotifyShell *this, struct tagWND *a2)
{
  int v3; // edx
  int v4; // ecx

  if ( anonymous_namespace_::NotifyShellSimplePayload() )
  {
    *((_DWORD *)this + 81) |= 1u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(v4, v3, 1u, 0xDu, (__int64)&WPP_9c76f83846f93a05eb3032aeec27f59d_Traceguids, this);
  }
}
