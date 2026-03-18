/*
 * XREFs of zzzCancelJournalling @ 0x1C012B2A4
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 *     xxxDoHotKeyStuff @ 0x1C00DFB30 (xxxDoHotKeyStuff.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00444C0 (zzzEndDeferWinEventNotify.c)
 *     PhkFirstGlobalValid @ 0x1C00B189C (PhkFirstGlobalValid.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00B5264 (zzzUnhookWindowsHookEx.c)
 *     PhkNextValid @ 0x1C00B5C80 (PhkNextValid.c)
 *     SendMsgCleanup @ 0x1C00BC690 (SendMsgCleanup.c)
 *     xxxReceiverDied @ 0x1C00BC764 (xxxReceiverDied.c)
 *     IsThreadHung @ 0x1C00D0CAC (IsThreadHung.c)
 *     _PostThreadMessage @ 0x1C00D49B0 (_PostThreadMessage.c)
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
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rdx

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
      zzzUnhookWindowsHookEx((struct tagHOOK *)GlobalValid, v6);
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
      v7 = PhkNextValid(v1);
      zzzUnhookWindowsHookEx((struct tagHOOK *)v1, v8);
      v1 = v7;
    }
    while ( v7 );
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
