/*
 * XREFs of ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C0022FF4
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F0B0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C00236DC (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C0023E94 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     GetWindowCloakState @ 0x1C006A29C (GetWindowCloakState.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C0109094 (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023A124 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x1C023A25C (_anonymous_namespace_--WindowSizingUpdate.c)
 */

void __fastcall NotifyShell::PositioningChanged(NotifyShell *this, struct tagWND *a2, const struct tagCVR *a3)
{
  int v3; // eax
  bool v6; // r8

  v3 = *((_DWORD *)a2 + 8);
  if ( (v3 & 0x80u) != 0 )
  {
    NotifyShell::CuratedWindowHidden(this, a2);
    v3 = *((_DWORD *)a2 + 8);
  }
  if ( (v3 & 0x2100C0) == 0
    && (v3 & 3) != 3
    && (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x10) != 0
    && !(unsigned int)GetWindowCloakState(this) )
  {
    if ( IsWindowSubjectToShellWindowBehavior(this, 0x10u) )
      NotifyShell::TrackedWindowPosChanged(this, 0LL, v6);
    if ( IsShellParticipatesInSizing(this) )
      anonymous_namespace_::WindowSizingUpdate(this);
  }
}
