/*
 * XREFs of EditionHandleAndPostKeyEvent @ 0x1C00F3360
 * Callers:
 *     <none>
 * Callees:
 *     PostInputMessage @ 0x1C0019B84 (PostInputMessage.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     WakeSomeone @ 0x1C001C69C (WakeSomeone.c)
 *     HasHidTable @ 0x1C001E310 (HasHidTable.c)
 *     IsProcessedByInputService @ 0x1C0057DCC (IsProcessedByInputService.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     GetMouseKeyFlags @ 0x1C006343C (GetMouseKeyFlags.c)
 *     PostShellHookMessagesEx @ 0x1C006E9A8 (PostShellHookMessagesEx.c)
 *     xxxNextWindow @ 0x1C01BC6C8 (xxxNextWindow.c)
 */

__int64 __fastcall EditionHandleAndPostKeyEvent(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        char a6,
        unsigned __int16 a7,
        unsigned __int16 a8,
        unsigned __int16 a9,
        unsigned __int16 a10,
        __int64 a11,
        int a12,
        void *a13,
        __int64 a14,
        unsigned __int16 a15)
{
  unsigned __int16 v15; // r15
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rbp
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v27; // r14d
  __int64 v28; // rax
  unsigned __int8 *v29; // rcx
  unsigned __int16 MouseKeyFlags; // ax
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // [rsp+28h] [rbp-90h]
  unsigned int v36; // [rsp+60h] [rbp-58h]
  _QWORD v37[4]; // [rsp+70h] [rbp-48h] BYREF

  v15 = 0;
  v17 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( !*(_QWORD *)(v17 + 56)
    && !*(_QWORD *)(v17 + 48)
    && !a4
    && (BYTE4(gafAsyncKeyState[0]) & 0x14) == 0x10
    && (a5 == 9 && (a6 & 1) == 0 || a5 == 27 && (a6 & 2) == 0) )
  {
    v18 = gpqForeground;
    if ( !gpqForeground )
      v18 = *(_QWORD *)(gptiRit + 424LL);
    ++*(_DWORD *)(v18 + 396);
    PushW32ThreadLock(v18, v37, UnlockQueue);
    xxxNextWindow(v18, a5);
    PopAndFreeAlwaysW32ThreadLock((__int64)v37);
    return 0LL;
  }
  v19 = gpqForeground;
  if ( !gpqForeground )
  {
    if ( !a4 && ((*gpsi & 0x2000) != 0 || (*gpsi & 0x4000) != 0) && (unsigned __int8)(a5 + 83) <= 6u )
      PostShellHookMessagesEx(0xCu, (unsigned __int16)(a5 - 165) << 16, 0LL);
    return 0LL;
  }
  v20 = *(_QWORD *)(gpqForeground + 120LL);
  v21 = *(_QWORD *)(gpqForeground + 32LL);
  v36 = a5;
  if ( v20 )
    v22 = *(_QWORD *)(v20 + 16);
  else
    v22 = *(_QWORD *)(gpqForeground + 96LL);
  if ( (unsigned int)HasHidTable(v22) )
  {
    v23 = v20 ? *(_QWORD *)(v20 + 16) : *(_QWORD *)(gpqForeground + 96LL);
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 416) + 824LL) + 100LL) & 0x20) != 0 )
    {
      v24 = v20 ? *(_QWORD *)(v20 + 16) : *(_QWORD *)(gpqForeground + 96LL);
      if ( !(unsigned int)HasHidTable(v24) )
        return 1LL;
      v25 = v20 ? *(_QWORD *)(v20 + 16) : *(_QWORD *)(gpqForeground + 96LL);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 416) + 824LL) + 100LL) & 0x400) == 0
        || (unsigned __int8)(a5 + 90) > 0x11u )
      {
        return 1LL;
      }
    }
  }
  if ( a5 == 0xE7 && (a8 & 0x1000) != 0 )
    v36 = (a7 << 16) | a5;
  else
    v15 = a7;
  v27 = ((a9 | v15) << 16) | 1;
  if ( !v21 )
  {
LABEL_45:
    if ( (unsigned __int8)(a5 + 90) <= 0x11u )
    {
      if ( !a4 )
      {
        if ( (unsigned __int8)(a5 + 83) <= 2u )
        {
          v28 = *(_QWORD *)(gpqForeground + 112LL);
          if ( v28 || (v28 = *(_QWORD *)(gpqForeground + 120LL)) != 0 )
          {
            v29 = *(unsigned __int8 **)(*(_QWORD *)(v28 + 16) + 424LL);
            if ( v29 )
            {
              MouseKeyFlags = GetMouseKeyFlags(v29);
              PostShellHookMessagesEx(0xCu, ((unsigned __int16)(a5 - 165) << 16) | (unsigned __int64)MouseKeyFlags, 0LL);
            }
          }
        }
        else
        {
          PostEventMessageEx(
            *(struct tagTHREADINFO **)(gpqForeground + 96LL),
            gpqForeground,
            0xFu,
            0LL,
            0,
            0LL,
            a5,
            a11);
        }
      }
      v19 = gpqForeground;
      v31 = *(_QWORD *)(gpqForeground + 120LL);
      v32 = v31 ? *(_QWORD *)(v31 + 16) : *(_QWORD *)(gpqForeground + 96LL);
      if ( (unsigned int)HasHidTable(v32) )
      {
        v33 = v31 ? *(_QWORD *)(v31 + 16) : *(_QWORD *)(gpqForeground + 96LL);
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 416) + 824LL) + 100LL) & 0x20) != 0 )
          return 1LL;
      }
    }
    if ( !(unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(*(_QWORD *)v19 + 96LL)) )
    {
      PostPendingMouseMove(gpqForeground, v34);
      LODWORD(v35) = a12;
      PostInputMessage(gpqForeground, 0LL, a15, v36, v27, v35, 0LL, a14, 0, a11, a13, 0LL);
      return 0LL;
    }
    goto LABEL_42;
  }
  if ( *(_DWORD *)(v21 + 24) != a15
    || ((a15 - 256) & 0xFFFB) != 0
    || *(_QWORD *)(v21 + 32) != v36
    || IsProcessedByInputService(v21)
    || *(_WORD *)(v21 + 42) != HIWORD(v27) )
  {
    v19 = gpqForeground;
    goto LABEL_45;
  }
  if ( !(unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 96LL)) )
  {
    *(_QWORD *)(v21 + 40) = (HIWORD(v27) << 16) | (unsigned __int16)(*(_WORD *)(v21 + 40) + 1);
    WakeSomeone(gpqForeground, 0LL, a15, v21);
    return 0LL;
  }
LABEL_42:
  CKeyboardProcessor::ForwardInputToISM(a1, a4, a5, v15, a8, a10, a13);
  return 0LL;
}
