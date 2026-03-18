/*
 * XREFs of _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C001BA9C
 * Callers:
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00101A4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0013280 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001BBFC (_anonymous_namespace_--xxxLocalActivateWindow.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C001CE70 (xxxSendNotifyMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00835BC (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C008A4E0 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C008AB44 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetTopLevelWindow @ 0x1C00C8D90 (_GetTopLevelWindow.c)
 */

bool __fastcall anonymous_namespace_::xxxSendNCActivateMessage(struct tagWND *a1, __int64 a2, __int64 a3)
{
  bool v6; // bp
  unsigned __int64 v7; // r14
  struct tagWND *TopLevelWindow; // rbx
  struct tagWND *TopLevelHostForComponent; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 i; // r10
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  struct tagWND *v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-38h]
  char v19; // [rsp+80h] [rbp+8h] BYREF

  v6 = 1;
  if ( !(_WORD)a2 )
  {
    v7 = 0LL;
LABEL_3:
    TopLevelWindow = a1;
    v6 = xxxSendMessage(a1, 134LL, a2, a3) != 0;
    goto LABEL_4;
  }
  v7 = 1LL;
  if ( !(unsigned int)CoreWindowProp::IsComponent(a1) )
    goto LABEL_3;
  TopLevelWindow = a1;
  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(a1);
  if ( TopLevelHostForComponent )
    TopLevelWindow = (struct tagWND *)GetTopLevelWindow(TopLevelHostForComponent);
  if ( TopLevelWindow && gpqForegroundPrev && *(struct tagWND **)(gpqForegroundPrev + 136LL) != TopLevelWindow )
  {
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v16 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v16;
    v17 = TopLevelWindow;
    HMLockObject(TopLevelWindow);
    v6 = (unsigned int)xxxSendNotifyMessage(TopLevelWindow, 134LL, a2, 0LL, 1) != 0;
    ThreadUnlock1(v13, v12, v14);
  }
LABEL_4:
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v19);
  if ( (*((_DWORD *)TopLevelWindow + 81) & 8) != 0 )
  {
    for ( i = *((_QWORD *)TopLevelWindow + 14); i; i = *(_QWORD *)(i + 88) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(i + 40) + 235LL) & 1) != 0 && *(_QWORD *)(i + 16) == *((_QWORD *)TopLevelWindow + 2) )
      {
        QueueNotifyTransformableMessage((struct tagWND *)i, 0x2FCu, v7, 0LL, 1, 0);
        break;
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v19);
  return v6;
}
