/*
 * XREFs of xxxSendFocusMessages @ 0x1C005EBC0
 * Callers:
 *     xxxActivateThisWindow @ 0x1C005BE64 (xxxActivateThisWindow.c)
 *     xxxSetFocus @ 0x1C005E8B0 (xxxSetFocus.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C005D428 (LockW32Thread.c)
 *     xxxFocusSetInputContext @ 0x1C005EEB8 (xxxFocusSetInputContext.c)
 *     xxxApplyGlobalInputSettings @ 0x1C005EF88 (xxxApplyGlobalInputSettings.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C005F010 (xxxSetForegroundThreadWithWindowHint.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C005FC1C (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C005FC8C (zzzInputFocusReceivedWindowEvent.c)
 *     xxxSendNotifyMessage @ 0x1C0060D20 (xxxSendNotifyMessage.c)
 */

__int64 __fastcall xxxSendFocusMessages(__int64 a1, ULONG_PTR a2, int a3)
{
  __int64 v4; // r14
  __int64 v6; // rcx
  ULONG_PTR v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebp
  struct tagTHREADINFO *v13; // rcx
  __int64 v14; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  __int128 v18; // [rsp+30h] [rbp-58h]
  __int128 v19; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v20[3]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v21[24]; // [rsp+68h] [rbp-20h] BYREF

  v4 = a3;
  *(_DWORD *)(*(_QWORD *)(a1 + 424) + 388LL) &= ~0x800u;
  if ( !a2 )
  {
    v16 = *(_QWORD *)(a1 + 424);
    if ( *(_QWORD *)(v16 + 120) )
      *(_DWORD *)(v16 + 388) |= 0x800u;
  }
  v6 = *(_QWORD *)(a1 + 424);
  v7 = *(_QWORD *)(v6 + 112);
  v20[0] = *(_QWORD *)(a1 + 408);
  *(_QWORD *)(a1 + 408) = v20;
  v20[1] = v7;
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v6 = *(_QWORD *)(a1 + 424);
  }
  *((_QWORD *)&v18 + 1) = a2;
  *(_QWORD *)&v18 = v6 + 112;
  v19 = v18;
  HMAssignmentLock(&v19);
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 424) == gpqForeground )
    {
      v12 = 0;
      v13 = *(struct tagTHREADINFO **)(a2 + 16);
      if ( v13 != (struct tagTHREADINFO *)gptiCurrent )
      {
        LockW32Thread((__int64)v13, (__int64)v21);
        v13 = *(struct tagTHREADINFO **)(a2 + 16);
        v12 = 1;
      }
      xxxSetForegroundThreadWithWindowHint(v13, (struct tagWND *)a2);
      if ( v12 )
        PopAndFreeW32ThreadLock((__int64)v21, v14);
    }
    v9 = *(_QWORD *)(a1 + 424);
    v8 = v9;
    if ( v9 == gpqForeground && a2 == *(_QWORD *)(v9 + 112) )
    {
      v9 = HIDWORD(gpdwCPUserPreferencesMask);
      if ( (v9 & 0x80u) == 0LL )
      {
        xxxApplyGlobalInputSettings(v9, v8, v10, v11);
        v8 = *(_QWORD *)(a1 + 424);
      }
    }
    if ( v7 )
    {
      if ( v8 == gpqForeground )
        zzzInputFocusLostWindowEvent(v7, 2LL);
      xxxSendMessage(v7);
      v9 = gpsi;
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(v7, 0LL, 0LL);
    }
    if ( a2 == *(_QWORD *)(*(_QWORD *)(a1 + 424) + 112LL) )
    {
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(a2, 1LL, 0LL);
      xxxWindowEvent(0x8005u, a2, -4, 0, 0);
      if ( (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 1200LL) & 0x40000) != 0 && (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 )
      {
        if ( v7 )
          v17 = *(_QWORD *)v7;
        else
          v17 = 0LL;
        xxxSendNotifyMessage(a2, 7LL, v17, v4, 1);
      }
      else
      {
        xxxSendMessage(a2);
      }
      v8 = gpqForeground;
      if ( gpqForeground && *(_QWORD *)(gpqForeground + 112LL) == a2 )
        zzzInputFocusReceivedWindowEvent(2LL);
    }
  }
  else if ( v7 )
  {
    if ( *(_QWORD *)(a1 + 424) == gpqForeground )
      zzzInputFocusLostWindowEvent(v7, 3LL);
    xxxWindowEvent(0x8005u, 0LL, -4, 0, 0);
    xxxSendMessage(v7);
    v8 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v7, 0LL, 0LL);
  }
  return ThreadUnlock1(v9, v8, v10);
}
