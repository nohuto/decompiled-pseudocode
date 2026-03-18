/*
 * XREFs of EditionHandleAndPostKeyEvent @ 0x1C00D21B0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     PostShellHookMessagesEx @ 0x1C00B3938 (PostShellHookMessagesEx.c)
 *     HasHidTable @ 0x1C00D2180 (HasHidTable.c)
 *     PostInputMessage @ 0x1C00D3F4C (PostInputMessage.c)
 *     WakeSomeone @ 0x1C00D435C (WakeSomeone.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     IsProcessedByInputService @ 0x1C00D5CC8 (IsProcessedByInputService.c)
 *     GetMouseKeyFlags @ 0x1C00DE6A4 (GetMouseKeyFlags.c)
 *     xxxNextWindow @ 0x1C01DF29C (xxxNextWindow.c)
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
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rsi
  unsigned int v20; // edi
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int16 v26; // r15
  int v27; // ebp
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int16 MouseKeyFlags; // ax
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int v35; // [rsp+60h] [rbp-48h]
  _QWORD v36[3]; // [rsp+68h] [rbp-40h] BYREF

  v16 = *(_QWORD *)(gptiCurrent + 464LL);
  if ( !*(_QWORD *)(v16 + 56)
    && !*(_QWORD *)(v16 + 48)
    && !a4
    && (gafAsyncKeyState[4] & 0x10) != 0
    && (a5 == 9 && (a6 & 1) == 0 || a5 == 27 && (a6 & 2) == 0) )
  {
    v17 = gpqForeground;
    if ( !gpqForeground )
      v17 = *(_QWORD *)(gptiRit + 432LL);
    ++*(_DWORD *)(v17 + 396);
    PushW32ThreadLock(v17, v36, UnlockQueue);
    xxxNextWindow(v17, a5);
    PopAndFreeAlwaysW32ThreadLock((__int64)v36, v18);
    return 0LL;
  }
  if ( !gpqForeground )
  {
    if ( !a4 && ((*gpsi & 0x2000) != 0 || (*gpsi & 0x4000) != 0) && (unsigned __int8)(a5 + 83) <= 6u )
      PostShellHookMessagesEx(0xCu, (unsigned __int64)(unsigned __int16)(a5 - 165) << 16, 0LL);
    return 0LL;
  }
  v19 = *(_QWORD *)(gpqForeground + 32LL);
  v20 = a5;
  v35 = a5;
  if ( !(unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 96LL)) )
  {
    v21 = *(_QWORD *)(gpqForeground + 120LL);
    if ( v21 )
      v22 = *(_QWORD *)(v21 + 16);
    else
      v22 = *(_QWORD *)(gpqForeground + 96LL);
    if ( (unsigned int)HasHidTable(v22) )
    {
      v23 = v21 ? *(_QWORD *)(v21 + 16) : *(_QWORD *)(gpqForeground + 96LL);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 424) + 832LL) + 100LL) & 0x20) != 0 )
      {
        v24 = v21 ? *(_QWORD *)(v21 + 16) : *(_QWORD *)(gpqForeground + 96LL);
        if ( !(unsigned int)HasHidTable(v24) )
          return 1LL;
        v25 = v21 ? *(_QWORD *)(v21 + 16) : *(_QWORD *)(gpqForeground + 96LL);
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 424) + 832LL) + 100LL) & 0x400) == 0
          || (unsigned __int8)(a5 + 90) > 0x11u )
        {
          return 1LL;
        }
      }
    }
    v20 = a5;
  }
  if ( a5 == 0xE7 && (a8 & 0x1000) != 0 )
  {
    v26 = 0;
    v20 |= a7 << 16;
    v35 = v20;
  }
  else
  {
    v26 = a7;
  }
  v27 = ((a9 | v26) << 16) | 1;
  if ( !v19
    || *(_DWORD *)(v19 + 24) != a15
    || ((a15 - 256) & 0xFFFB) != 0
    || *(_QWORD *)(v19 + 32) != v20
    || (unsigned int)IsProcessedByInputService(v19)
    || *(_WORD *)(v19 + 42) != HIWORD(v27) )
  {
    if ( (unsigned __int8)(a5 + 90) > 0x11u )
      goto LABEL_74;
    if ( !a4 && gpqForeground )
    {
      if ( (unsigned __int8)(a5 + 83) <= 2u )
      {
        v28 = *(_QWORD *)(gpqForeground + 112LL);
        if ( v28 || (v28 = *(_QWORD *)(gpqForeground + 120LL)) != 0 )
        {
          v29 = *(_QWORD *)(*(_QWORD *)(v28 + 16) + 432LL);
          if ( v29 )
          {
            MouseKeyFlags = GetMouseKeyFlags(v29);
            PostShellHookMessagesEx(0xCu, ((unsigned __int64)(unsigned __int16)(a5 - 165) << 16) | MouseKeyFlags, 0LL);
          }
        }
      }
      else
      {
        PostEventMessageEx(*(struct tagTHREADINFO **)(gpqForeground + 96LL), 0, 0LL, a5, a11);
      }
    }
    if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 96LL))
      || ((v31 = *(_QWORD *)(gpqForeground + 120LL)) == 0
        ? (v32 = *(_QWORD *)(gpqForeground + 96LL))
        : (v32 = *(_QWORD *)(v31 + 16)),
          !(unsigned int)HasHidTable(v32)
       || (!v31 ? (v33 = *(_QWORD *)(gpqForeground + 96LL)) : (v33 = *(_QWORD *)(v31 + 16)),
           (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 424) + 832LL) + 100LL) & 0x20) == 0)) )
    {
LABEL_74:
      if ( !(unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 96LL)) )
      {
        PostPendingMouseMove(gpqForeground);
        PostInputMessage(gpqForeground, 0LL, a15, v35, v27, a12, 0LL, a14, 0, a11, a13, 0LL);
        return 0LL;
      }
      goto LABEL_43;
    }
    return 1LL;
  }
  if ( !(unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 96LL)) )
  {
    *(_QWORD *)(v19 + 40) = (unsigned __int16)(*(_WORD *)(v19 + 40) + 1) | (HIWORD(v27) << 16);
    WakeSomeone(gpqForeground, 0LL, a15, v19);
    return 0LL;
  }
LABEL_43:
  CKeyboardProcessor::ForwardInputToISM(a1, a4, a5, v26, a8, a10, a13);
  return 0LL;
}
