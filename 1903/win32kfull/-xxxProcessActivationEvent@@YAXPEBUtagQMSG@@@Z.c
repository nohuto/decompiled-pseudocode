/*
 * XREFs of ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00101A4
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxCancelTracking @ 0x1C0013904 (xxxCancelTracking.c)
 *     zzzLockWindowUpdate2 @ 0x1C00139B8 (zzzLockWindowUpdate2.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0014830 (zzzInputFocusReceivedWindowEvent.c)
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C0018B84 (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C001AF24 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C001BA9C (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001BBFC (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     zzzActiveCursorTracking @ 0x1C01E44A0 (zzzActiveCursorTracking.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxProcessActivationEvent(const struct tagQMSG *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rsi
  struct tagWND *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  struct tagWND *v13; // [rsp+48h] [rbp-20h]
  __int64 v14; // [rsp+50h] [rbp-18h]

  if ( *((_DWORD *)a1 + 24) != 6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v3 = *((_QWORD *)a1 + 5);
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v4 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( v3 )
  {
    LOBYTE(a2) = 1;
    v5 = HMValidateHandleNoSecure(v3, a2);
    v7 = v5;
    if ( !v5 )
      return;
    if ( gptiCurrent != *(_QWORD *)(v5 + 16) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v12 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v12;
    v13 = (struct tagWND *)v7;
    HMLockObject(v7);
    if ( gpqForeground )
    {
      if ( v7 == *(_QWORD *)(v4 + 128) )
      {
        anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v7);
        if ( v4 == gpqForeground )
        {
          xxxUpdateTray((struct tagWND *)v7);
          if ( (*((_DWORD *)a1 + 6) & 2) == 0 )
            xxxSetWindowPos((struct tagWND *)v7, 0, 0, 3);
        }
      }
      else if ( (unsigned __int8)anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)v7)
             && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
      {
        zzzActiveCursorTracking((struct tagWND *)v7);
      }
    }
    else
    {
      xxxSetForegroundWindow2(v7, gptiCurrent, 0LL);
    }
    if ( (*((_DWORD *)a1 + 6) & 1) != 0 && (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 31LL) & 0x20) != 0 )
      PostMessage(v7, 274LL, 61728LL, 0LL);
    goto LABEL_13;
  }
  xxxCancelTracking();
  CCursorClip::ClearClip(gpCursorClip);
  zzzLockWindowUpdate2(0LL);
  v9 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *((_QWORD *)a1 + 4) )
  {
    v10 = *(struct tagWND **)(v9 + 128);
    if ( v10 )
    {
      if ( v9 == gpqForeground )
      {
        v11 = W32GetThreadWin32Thread(KeGetCurrentThread());
        v12 = *(_QWORD *)(v11 + 408);
        *(_QWORD *)(v11 + 408) = &v12;
        v13 = v10;
        HMLockObject(v10);
        if ( *(_QWORD *)(v9 + 120) )
          zzzInputFocusReceivedWindowEvent(7LL);
        anonymous_namespace_::xxxSendNCActivateMessage(v10);
        xxxUpdateTray(v10);
        xxxSetWindowPos(v10, 0, 0, 3);
LABEL_13:
        ThreadUnlock1();
        return;
      }
    }
  }
  if ( v9 != gpqForeground )
    anonymous_namespace_::RemoveForegroundActivate();
}
