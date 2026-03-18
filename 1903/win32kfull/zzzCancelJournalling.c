/*
 * XREFs of zzzCancelJournalling @ 0x1C0081580
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     xxxDoHotKeyStuff @ 0x1C010DF80 (xxxDoHotKeyStuff.c)
 * Callees:
 *     SendMsgCleanup @ 0x1C000E9F0 (SendMsgCleanup.c)
 *     xxxReceiverDied @ 0x1C000EAC4 (xxxReceiverDied.c)
 *     _PostThreadMessage @ 0x1C000F6C8 (_PostThreadMessage.c)
 *     IsThreadHung @ 0x1C0016E74 (IsThreadHung.c)
 *     PhkFirstGlobalValid @ 0x1C0023A2C (PhkFirstGlobalValid.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00B41A4 (zzzUnhookWindowsHookEx.c)
 *     PhkNextValid @ 0x1C00B459C (PhkNextValid.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00CCF6C (zzzEndDeferWinEventNotify.c)
 */

// write access to const memory has been detected, the output may be wrong!
char zzzCancelJournalling()
{
  __int64 GlobalValid; // rdi
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 Valid; // rbx
  __int64 v6; // rbx

  ForceResetMouseButtonsDownState();
  ++gdwDeferWinEvent;
  GlobalValid = PhkFirstGlobalValid(gptiRit, 1);
  if ( GlobalValid )
  {
    do
    {
      if ( *(_QWORD *)(GlobalValid + 16) )
      {
        PostThreadMessage(*(_QWORD *)(GlobalValid + 16), 0x4Bu, 0LL, 0LL);
        SendMsgCleanup();
      }
      Valid = PhkNextValid(GlobalValid);
      zzzUnhookWindowsHookEx((struct tagHOOK *)GlobalValid);
      GlobalValid = Valid;
    }
    while ( Valid );
  }
  zzzEndDeferWinEventNotify();
  ++gdwDeferWinEvent;
  v1 = PhkFirstGlobalValid(gptiRit, 0);
  if ( v1 )
  {
    do
    {
      if ( *(_QWORD *)(v1 + 16) )
      {
        PostThreadMessage(*(_QWORD *)(v1 + 16), 0x4Bu, 0LL, 0LL);
        SendMsgCleanup();
      }
      v6 = PhkNextValid(v1);
      zzzUnhookWindowsHookEx((struct tagHOOK *)v1);
      v1 = v6;
    }
    while ( v6 );
  }
  zzzEndDeferWinEventNotify();
  gppiLockSFW = 0LL;
  LOBYTE(v2) = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    v3 = *(_QWORD *)(grpdeskRitInput + 8LL);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 24);
      if ( v4 )
      {
        v2 = *(_QWORD *)(v4 + 40);
        if ( (*(_BYTE *)(v2 + 31) & 8) != 0 )
          LOBYTE(v2) = SetOrClrWF(0, v4, 0xF08u, 1);
      }
    }
  }
  return v2;
}
