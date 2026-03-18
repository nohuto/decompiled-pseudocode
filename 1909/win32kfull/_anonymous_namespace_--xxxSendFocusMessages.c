/*
 * XREFs of _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0132A44
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001C72C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01326E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C001FA80 (xxxSendNotifyMessage.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C0072530 (LockW32Thread.c)
 *     xxxFocusSetInputContext @ 0x1C0132D68 (xxxFocusSetInputContext.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0132E60 (xxxApplyGlobalInputSettings.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0132EE8 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C0133320 (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0133390 (zzzInputFocusReceivedWindowEvent.c)
 */

__int64 __fastcall anonymous_namespace_::xxxSendFocusMessages(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct tagTHREADINFO *v9; // rcx
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v13; // rax
  __int64 v14; // r8
  __int128 v15; // [rsp+30h] [rbp-40h] BYREF
  __int64 v16; // [rsp+40h] [rbp-30h]
  __int64 v17; // [rsp+50h] [rbp-20h] BYREF
  __int64 *v18; // [rsp+58h] [rbp-18h]
  __int64 v19; // [rsp+60h] [rbp-10h]

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  *(_DWORD *)(*(_QWORD *)(a1 + 424) + 396LL) &= ~0x800u;
  if ( !a2 )
  {
    v13 = *(_QWORD *)(a1 + 424);
    if ( *(_QWORD *)(v13 + 128) )
      *(_DWORD *)(v13 + 396) |= 0x800u;
  }
  v4 = *(_QWORD *)(a1 + 424);
  v5 = *(__int64 **)(v4 + 120);
  v17 = *(_QWORD *)(a1 + 408);
  *(_QWORD *)(a1 + 408) = &v17;
  v18 = v5;
  if ( v5 )
  {
    HMLockObject(v5);
    v4 = *(_QWORD *)(a1 + 424);
  }
  *((_QWORD *)&v15 + 1) = a2;
  *(_QWORD *)&v15 = v4 + 120;
  HMAssignmentLock(&v15);
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 424) == gpqForeground )
    {
      v9 = *(struct tagTHREADINFO **)(a2 + 16);
      v15 = 0uLL;
      v10 = 0;
      v16 = 0LL;
      if ( v9 != (struct tagTHREADINFO *)gptiCurrent )
      {
        LockW32Thread((__int64)v9, &v15, v8);
        v9 = *(struct tagTHREADINFO **)(a2 + 16);
        v10 = 1;
      }
      xxxSetForegroundThreadWithWindowHint(v9, (struct tagWND *)a2);
      if ( v10 )
        PopAndFreeW32ThreadLock((__int64)&v15, v11, v8);
    }
    v7 = *(_QWORD *)(a1 + 424);
    v6 = v7;
    if ( v7 == gpqForeground && a2 == *(_QWORD *)(v7 + 120) )
    {
      v7 = HIDWORD(gpdwCPUserPreferencesMask);
      if ( (v7 & 0x80u) == 0LL )
      {
        xxxApplyGlobalInputSettings(v7, v6);
        v6 = *(_QWORD *)(a1 + 424);
      }
    }
    if ( v5 )
    {
      if ( v6 == gpqForeground )
        zzzInputFocusLostWindowEvent(v5, 2LL);
      xxxSendMessage((ULONG_PTR)v5);
      v7 = gpsi;
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(v5, 0LL, 0LL);
    }
    if ( a2 == *(_QWORD *)(*(_QWORD *)(a1 + 424) + 120LL) )
    {
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(a2, 1LL, 0LL);
      xxxWindowEvent(0x8005u, (struct tagWND *)a2, 4294967292LL, 0, 0);
      if ( (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 1224LL) & 0x40000) != 0 && (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 )
      {
        if ( v5 )
          v14 = *v5;
        else
          v14 = 0LL;
        xxxSendNotifyMessage((struct tagWND *)a2, 7u, v14, 0LL, 1);
      }
      else
      {
        xxxSendMessage(a2);
      }
      v6 = gpqForeground;
      if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) == a2 )
        zzzInputFocusReceivedWindowEvent(2LL);
    }
  }
  else if ( v5 )
  {
    if ( *(_QWORD *)(a1 + 424) == gpqForeground )
      zzzInputFocusLostWindowEvent(v5, 3LL);
    xxxWindowEvent(0x8005u, 0LL, 4294967292LL, 0, 0);
    xxxSendMessage((ULONG_PTR)v5);
    v6 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v5, 0LL, 0LL);
  }
  return ThreadUnlock1(v7, v6, v8);
}
