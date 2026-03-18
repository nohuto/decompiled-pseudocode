/*
 * XREFs of NtUserGetKeyState @ 0x1C00AFD20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsKeyStateCached @ 0x1C00AFF60 (IsKeyStateCached.c)
 *     IsGpqForegroundAccessible @ 0x1C00AFFBC (IsGpqForegroundAccessible.c)
 *     PostUpdateKeyStateEvent @ 0x1C00D5A24 (PostUpdateKeyStateEvent.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall NtUserGetKeyState(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int16 v10; // di
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _KTHREAD *v15; // r14
  __int64 v16; // rsi
  __int64 *v17; // rax
  int v18; // r9d
  __int16 v19; // dx
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx

  EnterSharedCrit(0LL, 1LL);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v5, v4) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = (_QWORD *)*ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(v3[54] + 388LL) & 1) != 0 )
  {
    ChangeAcquireResourceType();
    v9 = v3[54];
    if ( (*(_DWORD *)(v9 + 388) & 1) != 0 )
      PostUpdateKeyStateEvent(v9, v7, v8);
  }
  if ( (unsigned int)IsKeyStateCached(a1) )
    goto LABEL_26;
  if ( v3[57] != grpdeskRitInput )
  {
LABEL_9:
    v10 = 0;
    goto LABEL_20;
  }
  if ( (unsigned int)IsGpqForegroundAccessible(1LL) )
  {
LABEL_26:
    if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(v3) )
      goto LABEL_9;
    if ( a1 >= 0x100 )
    {
      UserSetLastError(87LL, v11, v13, v14);
      goto LABEL_9;
    }
    v15 = KeGetCurrentThread();
    v16 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v12, v11) )
    {
      v17 = (__int64 *)PsGetThreadWin32Thread(v15);
      if ( v17 )
        v16 = *v17;
    }
    v18 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)a1 >> 2) + *(_QWORD *)(v16 + 432) + 228);
    v19 = _bittest(&v18, (unsigned __int8)(2 * (a1 & 3) + 1));
    v20 = (unsigned __int8)(2 * (a1 & 3));
    v10 = v19 | 0xFF80;
    if ( !_bittest(&v18, v20) )
      v10 = v19;
  }
  else
  {
    EtwTraceUIPIInputError(v3, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 428LL), 3);
    v10 = 0;
  }
LABEL_20:
  if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(v3) )
  {
    *(_DWORD *)(v3[60] + 112LL) = 0;
    v24 = 0LL;
    *(_QWORD *)(v3[60] + 116LL) = 0LL;
  }
  else
  {
    v21 = v3[60];
    *(_DWORD *)(v21 + 112) = *(_DWORD *)(gpsi + 6984LL);
    v24 = v3[60];
    *(_QWORD *)(v24 + 116) = *(_QWORD *)(v3[54] + 228LL);
  }
  UserSessionSwitchLeaveCrit(v24, v21, v22, v23);
  return v10;
}
