/*
 * XREFs of _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00CE3B4
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00AD848 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00CE0A8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     LockW32Thread @ 0x1C0037060 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     xxxFocusSetInputContext @ 0x1C00CE6AC (xxxFocusSetInputContext.c)
 *     xxxApplyGlobalInputSettings @ 0x1C00CE784 (xxxApplyGlobalInputSettings.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00CE80C (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00CEF40 (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C00CEFB0 (zzzInputFocusReceivedWindowEvent.c)
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 */

__int64 __fastcall anonymous_namespace_::xxxSendFocusMessages(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rcx
  ULONG_PTR v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebp
  struct tagTHREADINFO *v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // rax
  __int64 v13; // r8
  _QWORD v14[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v15[3]; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v16[3]; // [rsp+58h] [rbp-20h] BYREF

  *(_DWORD *)(*(_QWORD *)(a1 + 432) + 388LL) &= ~0x800u;
  if ( !a2 )
  {
    v12 = *(_QWORD *)(a1 + 432);
    if ( *(_QWORD *)(v12 + 120) )
      *(_DWORD *)(v12 + 388) |= 0x800u;
  }
  v4 = *(_QWORD *)(a1 + 432);
  v5 = *(_QWORD *)(v4 + 112);
  v15[0] = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v15;
  v15[1] = v5;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v4 = *(_QWORD *)(a1 + 432);
  }
  v14[1] = a2;
  v14[0] = v4 + 112;
  HMAssignmentLock(v14);
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 432) == gpqForeground )
    {
      v8 = 0;
      v9 = *(struct tagTHREADINFO **)(a2 + 16);
      if ( v9 != (struct tagTHREADINFO *)gptiCurrent )
      {
        LockW32Thread((__int64)v9, v16);
        v9 = *(struct tagTHREADINFO **)(a2 + 16);
        v8 = 1;
      }
      xxxSetForegroundThreadWithWindowHint(v9, (struct tagWND *)a2);
      if ( v8 )
        PopAndFreeW32ThreadLock((__int64)v16, v10);
    }
    v7 = *(_QWORD *)(a1 + 432);
    v6 = v7;
    if ( v7 == gpqForeground && a2 == *(_QWORD *)(v7 + 112) )
    {
      v7 = HIDWORD(gpdwCPUserPreferencesMask);
      if ( (v7 & 0x80u) == 0LL )
      {
        xxxApplyGlobalInputSettings(v7, v6);
        v6 = *(_QWORD *)(a1 + 432);
      }
    }
    if ( v5 )
    {
      if ( v6 == gpqForeground )
        zzzInputFocusLostWindowEvent(v5, 2LL);
      xxxSendMessage(v5);
      v7 = gpsi;
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(v5, 0LL, 0LL);
    }
    if ( a2 == *(_QWORD *)(*(_QWORD *)(a1 + 432) + 112LL) )
    {
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(a2, 1LL, 0LL);
      xxxWindowEvent(0x8005u, a2, -4, 0, 0);
      if ( (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 1208LL) & 0x40000) != 0 && (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
      {
        if ( v5 )
          v13 = *(_QWORD *)v5;
        else
          v13 = 0LL;
        xxxSendNotifyMessage(a2, 7LL, v13, 0LL, 1);
      }
      else
      {
        xxxSendMessage(a2);
      }
      v6 = gpqForeground;
      if ( gpqForeground && *(_QWORD *)(gpqForeground + 112LL) == a2 )
        zzzInputFocusReceivedWindowEvent(2LL);
    }
  }
  else if ( v5 )
  {
    if ( *(_QWORD *)(a1 + 432) == gpqForeground )
      zzzInputFocusLostWindowEvent(v5, 3LL);
    xxxWindowEvent(0x8005u, 0LL, -4, 0, 0);
    xxxSendMessage(v5);
    v6 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v5, 0LL, 0LL);
  }
  return ThreadUnlock1(v7, v6);
}
