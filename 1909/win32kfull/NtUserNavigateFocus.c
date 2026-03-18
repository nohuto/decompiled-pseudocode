/*
 * XREFs of NtUserNavigateFocus @ 0x1C00096B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1C0006A24 (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C000B1B0 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSendNotifyMessage @ 0x1C001FA80 (xxxSendNotifyMessage.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0027734 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0115874 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall NtUserNavigateFocus(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *TopLevelWindow; // rsi
  int v9; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+38h] [rbp-28h]
  __int64 v13; // [rsp+40h] [rbp-20h]
  __int64 v14; // [rsp+48h] [rbp-18h] BYREF
  _QWORD *v15; // [rsp+50h] [rbp-10h]
  __int64 v16; // [rsp+58h] [rbp-8h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v2 = ValidateHwnd(a1);
  v3 = v2;
  if ( !v2 || (((*(_WORD *)(*(_QWORD *)(v2 + 40) + 42LL) & 0x3FFF) - 669) & 0xFFFFFFFD) == 0 )
  {
    v4 = 0LL;
    goto LABEL_15;
  }
  v11 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v11;
  v12 = v2;
  HMLockObject(v2);
  v4 = 0LL;
  if ( gpqForeground && !(unsigned int)CoreWindowProp::CompositeAppHasForeground((const struct tagWND *)v3) )
    goto LABEL_17;
  v5 = *((_QWORD *)CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)v3) + 2);
  if ( *(_QWORD *)(v5 + 424) == gpqForeground )
  {
    if ( *(_QWORD *)(v5 + 664) )
      goto LABEL_17;
  }
  v6 = *(_QWORD *)(v3 + 16);
  if ( v6 == gptiCurrent )
  {
    if ( (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v6 + 416))
      && (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 235LL) & 1) != 0 )
    {
LABEL_10:
      TopLevelWindow = (_QWORD *)GetTopLevelWindow(v3);
      if ( gpqForeground && *(_QWORD **)(gpqForeground + 128LL) == TopLevelWindow )
      {
        v4 = *(_QWORD **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
        if ( v4 )
          v4 = (_QWORD *)*v4;
        if ( IsPwndComponentWebview((const struct tagWND *)v3) )
          xxxSendNotifyMessage(v3, 6LL, 1LL, *TopLevelWindow, 0);
      }
      else if ( TopLevelWindow == (_QWORD *)v3 )
      {
        xxxForceForegroundWindowNoRestoreFocus(TopLevelWindow, 8LL);
      }
      else
      {
        v14 = 0LL;
        v15 = 0LL;
        v16 = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v14 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v14;
        v15 = TopLevelWindow;
        if ( TopLevelWindow )
          HMLockObject(TopLevelWindow);
        xxxForceForegroundWindowNoRestoreFocus(TopLevelWindow, 8LL);
        ThreadUnlock1();
      }
      goto LABEL_14;
    }
  }
  else
  {
    if ( (unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 416LL)) )
    {
      v9 = IsImmersiveAppRestricted(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 416LL));
    }
    else
    {
      if ( !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 416LL)) )
        goto LABEL_17;
      v9 = IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 416LL));
    }
    if ( v9 )
    {
      v4 = *(_QWORD **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
      if ( v4 )
        v4 = (_QWORD *)*v4;
      goto LABEL_10;
    }
  }
LABEL_17:
  UserSetLastError(5LL);
LABEL_14:
  ThreadUnlock1();
LABEL_15:
  UserSessionSwitchLeaveCrit();
  return v4;
}
