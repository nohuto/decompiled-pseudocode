/*
 * XREFs of ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C0107FB4
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C003839C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     GetWindowCloakState @ 0x1C002BE10 (GetWindowCloakState.c)
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C006A128 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C006B4E0 (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C0108034 (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C0221E98 (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C0221FA0 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 */

void __fastcall NotifyShell::PositioningChanged(NotifyShell *this, struct tagWND *a2, const struct tagCVR *a3)
{
  int v3; // eax
  bool v6; // r8
  __int64 v7; // r8

  v3 = *((_DWORD *)a2 + 8);
  if ( (v3 & 0x80u) != 0 )
  {
    NotifyShell::CuratedWindowHidden(this, a2);
    v3 = *((_DWORD *)a2 + 8);
  }
  if ( (v3 & 0x2100C0) == 0
    && (v3 & 3) != 3
    && (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x10) != 0
    && !(unsigned int)GetWindowCloakState((__int64)this) )
  {
    if ( IsWindowSubjectToShellWindowBehavior(this, 16LL) )
      NotifyShell::TrackedWindowPosChanged(this, 0LL, v6);
    if ( IsShellParticipatesInSizing(this) )
    {
      LOBYTE(v7) = 1;
      anonymous_namespace_::NotifyShellWindowPosChangedCommon(this, 0LL, v7, 7LL);
    }
  }
}
