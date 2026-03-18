/*
 * XREFs of zzzCancelJournalling @ 0x1C000BD40
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 *     xxxDoHotKeyStuff @ 0x1C00E9CA0 (xxxDoHotKeyStuff.c)
 * Callees:
 *     SendMsgCleanup @ 0x1C000BBC0 (SendMsgCleanup.c)
 *     xxxReceiverDied @ 0x1C000BC90 (xxxReceiverDied.c)
 *     PhkFirstGlobalValid @ 0x1C000F7EC (PhkFirstGlobalValid.c)
 *     _PostThreadMessage @ 0x1C001B5D0 (_PostThreadMessage.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0028B0C (zzzEndDeferWinEventNotify.c)
 *     PhkNextValid @ 0x1C003BC60 (PhkNextValid.c)
 *     IsThreadHung @ 0x1C00612F0 (IsThreadHung.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00D7B08 (zzzUnhookWindowsHookEx.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 zzzCancelJournalling()
{
  __int64 GlobalValid; // rdi
  __int64 v1; // rdi
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 Valid; // rbx
  __int64 v6; // rbx

  ForceResetMouseButtonsDownState();
  ++gdwDeferWinEvent;
  GlobalValid = PhkFirstGlobalValid(gptiRit, 1LL);
  if ( GlobalValid )
  {
    do
    {
      if ( *(_QWORD *)(GlobalValid + 16) )
      {
        PostThreadMessage(*(_QWORD *)(GlobalValid + 16), 75LL, 0LL);
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
  v1 = PhkFirstGlobalValid(gptiRit, 0LL);
  if ( v1 )
  {
    do
    {
      if ( *(_QWORD *)(v1 + 16) )
      {
        PostThreadMessage(*(_QWORD *)(v1 + 16), 75LL, 0LL);
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
  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    v3 = *(_QWORD *)(grpdeskRitInput + 8LL);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 24);
      if ( v4 )
      {
        result = *(_QWORD *)(v4 + 40);
        if ( (*(_BYTE *)(result + 31) & 8) != 0 )
          return SetOrClrWF(0LL, v4, 3848LL, 1LL);
      }
    }
  }
  return result;
}
