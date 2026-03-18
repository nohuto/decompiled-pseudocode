/*
 * XREFs of ?WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C010831C
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00200FC (xxxTrackMouseMove.c)
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C01090CC (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

void __fastcall NotifyShell::WindowBorderExitIfEntered(NotifyShell *this, struct tagWND *a2)
{
  int v2; // eax
  int v4; // edx
  int v5; // ecx

  v2 = *((_DWORD *)this + 81);
  if ( (v2 & 1) != 0 )
  {
    *((_DWORD *)this + 81) = v2 & 0xFFFFFFFE;
    anonymous_namespace_::NotifyShellSimplePayload(*(_QWORD *)this, 6LL, 0LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(v5, v4, 1, 14, (__int64)&WPP_9c76f83846f93a05eb3032aeec27f59d_Traceguids, this);
  }
}
