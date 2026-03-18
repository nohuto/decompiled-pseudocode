/*
 * XREFs of NtUserNavigateFocus @ 0x1C00061C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00062F8 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C0007F98 (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     xxxSendNotifyMessage @ 0x1C0060D20 (xxxSendNotifyMessage.c)
 */

// write access to const memory has been detected, the output may be wrong!
unsigned __int64 __fastcall NtUserNavigateFocus(__int64 a1, unsigned int a2)
{
  __int64 v4; // rsi
  __int64 TopLevelWindow; // rdi
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD v11[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v12[3]; // [rsp+48h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v4 = ValidateHwnd(a1);
  if ( !v4 )
    goto LABEL_16;
  if ( a2 > 6 )
  {
    v9 = 87LL;
    goto LABEL_19;
  }
  if ( gpqForeground && !(unsigned int)CoreWindowProp::CompositeAppHasForeground((const struct tagWND *)v4) )
  {
    v9 = 5LL;
LABEL_19:
    UserSetLastError(v9);
LABEL_16:
    v7 = 0LL;
    goto LABEL_13;
  }
  TopLevelWindow = GetTopLevelWindow(v4);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v11[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v11;
  v11[1] = TopLevelWindow;
  if ( TopLevelWindow )
    _InterlockedIncrement((volatile signed __int32 *)(TopLevelWindow + 8));
  v7 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL);
  if ( v7 )
    v7 = *(_QWORD *)v7;
  if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) == TopLevelWindow )
  {
    if ( IsPwndComponentWebview((const struct tagWND *)v4) )
    {
      v10 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v12[0] = *(_QWORD *)(v10 + 408);
      *(_QWORD *)(v10 + 408) = v12;
      v12[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      xxxSendNotifyMessage(v4, 6LL, 1LL, **(_QWORD **)(gpqForeground + 120LL), 0);
      ThreadUnlock1();
    }
  }
  else
  {
    v7 &= -(__int64)((unsigned int)xxxSetForegroundWindow2((struct tagWND *)TopLevelWindow) != 0);
  }
  ThreadUnlock1();
LABEL_13:
  UserSessionSwitchLeaveCrit();
  return v7;
}
