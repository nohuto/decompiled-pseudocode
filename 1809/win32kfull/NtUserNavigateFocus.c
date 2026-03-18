/*
 * XREFs of NtUserNavigateFocus @ 0x1C00055F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00057F0 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C0008C1C (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C006F324 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall NtUserNavigateFocus(__int64 a1)
{
  __int64 v2; // rax
  const struct tagWND *v3; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  const struct tagWND *TopLevelWindow; // rbx
  __int64 ThreadWin32Thread; // rax
  _QWORD v9[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v10[3]; // [rsp+48h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v2 = ValidateHwnd(a1);
  v3 = (const struct tagWND *)v2;
  if ( v2 && (((*(_WORD *)(*(_QWORD *)(v2 + 40) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v9[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v9;
    v9[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v4 = 0LL;
    if ( gpqForeground && !(unsigned int)CoreWindowProp::CompositeAppHasForeground((const struct tagWND *)v2)
      || (v5 = *((_QWORD *)CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v3) + 2),
          *(_QWORD *)(v5 + 432) == gpqForeground)
      && *(_QWORD *)(v5 + 672) )
    {
      UserSetLastError(5LL);
    }
    else
    {
      TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(v3);
      if ( gpqForeground && *(const struct tagWND **)(gpqForeground + 120LL) == TopLevelWindow )
      {
        v4 = *(_QWORD **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
        if ( v4 )
          v4 = (_QWORD *)*v4;
        if ( IsPwndComponentWebview(v3) )
          xxxSendNotifyMessage(v3, 6LL, 1LL, *(_QWORD *)TopLevelWindow, 0);
      }
      else if ( TopLevelWindow == v3 )
      {
        xxxSetForegroundWindow2(TopLevelWindow, gptiCurrent, 0x48u);
      }
      else
      {
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v10[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v10;
        v10[1] = TopLevelWindow;
        if ( TopLevelWindow )
          _InterlockedIncrement((volatile signed __int32 *)TopLevelWindow + 2);
        xxxSetForegroundWindow2(TopLevelWindow, gptiCurrent, 0x48u);
        ThreadUnlock1();
      }
    }
    ThreadUnlock1();
  }
  else
  {
    v4 = 0LL;
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
