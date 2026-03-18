/*
 * XREFs of ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C01043B8
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 * Callees:
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C001B64C (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C001C5CC (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001C72C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0133390 (zzzInputFocusReceivedWindowEvent.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C0134BF0 (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     zzzLockWindowUpdate2 @ 0x1C0134CFC (zzzLockWindowUpdate2.c)
 *     xxxCancelTracking @ 0x1C0134DA0 (xxxCancelTracking.c)
 *     zzzActiveCursorTracking @ 0x1C01E4320 (zzzActiveCursorTracking.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxProcessActivationEvent(const struct tagQMSG *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rsi
  struct tagWND *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // [rsp+40h] [rbp-28h] BYREF
  struct tagWND *v21; // [rsp+48h] [rbp-20h]
  __int64 v22; // [rsp+50h] [rbp-18h]

  if ( *((_DWORD *)a1 + 24) != 6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v4 = *((_QWORD *)a1 + 5);
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v5 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( v4 )
  {
    LOBYTE(a2) = 1;
    v6 = HMValidateHandleNoSecure(v4, a2, a3);
    v10 = v6;
    if ( !v6 )
      return;
    if ( gptiCurrent != *(_QWORD *)(v6 + 16) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v9);
    v20 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v20;
    v21 = (struct tagWND *)v10;
    HMLockObject(v10);
    if ( gpqForeground )
    {
      if ( v10 == *(_QWORD *)(v5 + 128) )
      {
        anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v10, v5 == gpqForeground, 0LL);
        if ( v5 == gpqForeground )
        {
          xxxUpdateTray((struct tagWND *)v10);
          if ( (*((_DWORD *)a1 + 6) & 2) == 0 )
            xxxSetWindowPos((struct tagWND *)v10, 0LL, 0LL, 0LL, 0, 0, 3);
        }
      }
      else if ( anonymous_namespace_::xxxLocalActivateWindow(
                  (struct tagWND *)v10,
                  *((_DWORD *)a1 + 8),
                  *((_BYTE *)a1 + 24) & 2 | 0x84) )
      {
        v13 = (unsigned int)gpdwCPUserPreferencesMask;
        if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
          zzzActiveCursorTracking(v10);
      }
    }
    else
    {
      xxxSetForegroundWindow2(v10, gptiCurrent, 0LL);
    }
    if ( (*((_DWORD *)a1 + 6) & 1) != 0 && (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 31LL) & 0x20) != 0 )
      PostMessage(v10, 274LL, 61728LL);
    goto LABEL_13;
  }
  xxxCancelTracking();
  CCursorClip::ClearClip(gpCursorClip);
  zzzLockWindowUpdate2(0LL);
  v17 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *((_QWORD *)a1 + 4) )
  {
    v18 = *(struct tagWND **)(v17 + 128);
    if ( v18 )
    {
      if ( v17 == gpqForeground )
      {
        v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16);
        v20 = *(_QWORD *)(v19 + 408);
        *(_QWORD *)(v19 + 408) = &v20;
        v21 = v18;
        HMLockObject(v18);
        if ( *(_QWORD *)(v17 + 120) )
          zzzInputFocusReceivedWindowEvent(7LL);
        anonymous_namespace_::xxxSendNCActivateMessage(v18, 1LL, 0LL);
        xxxUpdateTray(v18);
        xxxSetWindowPos(v18, 0LL, 0LL, 0LL, 0, 0, 3);
LABEL_13:
        ThreadUnlock1(v13, v12, v14);
        return;
      }
    }
  }
  if ( v17 != gpqForeground )
    anonymous_namespace_::RemoveForegroundActivate();
}
