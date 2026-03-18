/*
 * XREFs of ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0120D28
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00AD848 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C00B0288 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00B098C (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C00CEFB0 (zzzInputFocusReceivedWindowEvent.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C00D7F6C (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     zzzLockWindowUpdate2 @ 0x1C00D817C (zzzLockWindowUpdate2.c)
 *     xxxCancelTracking @ 0x1C00D81FC (xxxCancelTracking.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     zzzActiveCursorTracking @ 0x1C01CF81C (zzzActiveCursorTracking.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C02C1D3C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void __fastcall xxxProcessActivationEvent(const struct tagQMSG *a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+48h] [rbp-20h]

  if ( *((_DWORD *)a1 + 24) != 6 )
    MicrosoftTelemetryAssertTriggeredMsgKM("Wrong QEVENT");
  v3 = *((_QWORD *)a1 + 5);
  v4 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( v3 )
  {
    LOBYTE(a2) = 1;
    v5 = HMValidateHandleNoSecure(v3, a2);
    v7 = v5;
    if ( !v5 )
      return;
    if ( gptiCurrent != *(_QWORD *)(v5 + 16) )
      MicrosoftTelemetryAssertTriggeredMsgKM("Expect current thread to own window");
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
    v17 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v17;
    v18 = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    if ( gpqForeground )
    {
      if ( v7 == *(_QWORD *)(v4 + 120) )
      {
        anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v7, v4 == gpqForeground);
        if ( v4 == gpqForeground )
        {
          xxxUpdateTray((struct tagWND *)v7);
          if ( (*((_DWORD *)a1 + 6) & 2) == 0 )
            xxxSetWindowPos((struct tagWND *)v7, 0LL, 0LL, 0LL, 0, 0, 3);
        }
      }
      else if ( anonymous_namespace_::xxxLocalActivateWindow(
                  (struct tagWND *)v7,
                  *((_DWORD *)a1 + 8),
                  *((_BYTE *)a1 + 24) & 2 | 0x84) )
      {
        v10 = (unsigned int)gpdwCPUserPreferencesMask;
        if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
          zzzActiveCursorTracking((struct tagWND *)v7);
      }
    }
    else
    {
      xxxSetForegroundWindow2((LARGE_INTEGER *)v7, gptiCurrent, 0);
    }
    if ( (*((_DWORD *)a1 + 6) & 1) != 0 && (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 31LL) & 0x20) != 0 )
      PostMessage((struct tagWND *)v7, 0x112u, 0xF120uLL, 0LL);
    goto LABEL_13;
  }
  xxxCancelTracking(0LL, a2);
  CCursorClip::ClearClip(gpCursorClip);
  zzzLockWindowUpdate2(0LL, 1LL, v11, v12);
  v14 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *((_QWORD *)a1 + 4) )
  {
    v15 = *(_QWORD *)(v14 + 120);
    if ( v15 )
    {
      if ( v14 == gpqForeground )
      {
        v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
        v17 = *(_QWORD *)(v16 + 416);
        *(_QWORD *)(v16 + 416) = &v17;
        v18 = v15;
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
        if ( *(_QWORD *)(v14 + 112) )
          zzzInputFocusReceivedWindowEvent(7);
        anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)v15, 1LL);
        xxxUpdateTray((struct tagWND *)v15);
        xxxSetWindowPos((struct tagWND *)v15, 0LL, 0LL, 0LL, 0, 0, 3);
LABEL_13:
        ThreadUnlock1(v10, v9);
        return;
      }
    }
  }
  if ( v14 != gpqForeground )
    anonymous_namespace_::RemoveForegroundActivate();
}
