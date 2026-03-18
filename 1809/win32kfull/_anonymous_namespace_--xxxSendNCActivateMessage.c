/*
 * XREFs of _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C00B0288
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00AD848 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00CCDB0 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0120D28 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0071958 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C007219C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00CC87C (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 */

bool __fastcall anonymous_namespace_::xxxSendNCActivateMessage(struct tagWND *a1, __int64 a2)
{
  bool v4; // bp
  struct tagWND *TopLevelWindow; // rbx
  struct tagWND *TopLevelHostForComponent; // rax
  __int64 v8; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 i; // r10
  _QWORD v13[4]; // [rsp+30h] [rbp-38h] BYREF
  char v14; // [rsp+70h] [rbp+8h] BYREF

  v4 = 1;
  if ( (_WORD)a2 && (unsigned int)CoreWindowProp::IsComponent(a1) )
  {
    TopLevelWindow = a1;
    TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(a1);
    if ( TopLevelHostForComponent )
      TopLevelWindow = (struct tagWND *)GetTopLevelWindow((__int64)TopLevelHostForComponent);
    if ( TopLevelWindow && gpqForegroundPrev && *(struct tagWND **)(gpqForegroundPrev + 128LL) != TopLevelWindow )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
      v13[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v13;
      v13[1] = TopLevelWindow;
      _InterlockedIncrement((volatile signed __int32 *)TopLevelWindow + 2);
      v4 = (unsigned int)xxxSendNotifyMessage(TopLevelWindow, 134LL, a2, 0LL, 1) != 0;
      ThreadUnlock1(v11, v10);
    }
  }
  else
  {
    TopLevelWindow = a1;
    v4 = xxxSendMessage((ULONG_PTR)a1) != 0;
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  if ( (*((_DWORD *)TopLevelWindow + 77) & 8) != 0 )
  {
    for ( i = *((_QWORD *)TopLevelWindow + 11); i; i = *(_QWORD *)(i + 64) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(i + 40) + 235LL) & 1) != 0 && *(_QWORD *)(i + 16) == *((_QWORD *)TopLevelWindow + 2) )
      {
        QueueNotifyTransformableMessage((struct tagWND *)i, 0x2FCu, (_WORD)a2 != 0, 0LL, 1, 0);
        break;
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  return v4;
}
