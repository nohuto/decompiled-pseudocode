/*
 * XREFs of xxxSendNCActivateMessage @ 0x1C005E010
 * Callers:
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     xxxActivateThisWindow @ 0x1C005BE64 (xxxActivateThisWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C003547C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00355D0 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendNCActivateMessage(struct tagWND *a1, HWND a2)
{
  __int64 result; // rax
  struct tagWND *TopLevelHostForComponent; // rax
  __int64 TopLevelWindow; // r10
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v10[4]; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp+8h] BYREF

  LODWORD(BugCheckParameter3) = 1;
  if ( (unsigned int)CoreWindowProp::IsComponent(a1) && CoreWindowProp::GetTopLevelHostForComponent(a1) && a2 )
  {
    TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(a1);
    TopLevelWindow = GetTopLevelWindow((__int64)TopLevelHostForComponent);
    if ( TopLevelWindow && gpqForegroundPrev && *(_QWORD *)(gpqForegroundPrev + 128LL) != TopLevelWindow )
    {
      v10[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v10;
      v10[1] = TopLevelWindow;
      _InterlockedIncrement((volatile signed __int32 *)(TopLevelWindow + 8));
      xxxSendTransformableMessageTimeout(
        (__int64 *)TopLevelWindow,
        0x86u,
        a2,
        0LL,
        0,
        100,
        (__int64 *)&BugCheckParameter3,
        1,
        0);
      ThreadUnlock1(v8, v7, v9);
    }
    LODWORD(result) = BugCheckParameter3;
  }
  else
  {
    LODWORD(result) = xxxSendMessage((ULONG_PTR)a1);
  }
  return (int)result;
}
