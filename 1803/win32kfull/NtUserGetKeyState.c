/*
 * XREFs of NtUserGetKeyState @ 0x1C005DCF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsKeyStateCached @ 0x1C005DF00 (IsKeyStateCached.c)
 *     IsGpqForegroundAccessible @ 0x1C005DF64 (IsGpqForegroundAccessible.c)
 *     PostUpdateKeyStateEvent @ 0x1C00C073C (PostUpdateKeyStateEvent.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall NtUserGetKeyState(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int16 v8; // di
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD *v11; // r15
  __int64 v12; // r14
  __int64 *v13; // rax
  int v14; // edx
  __int16 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx

  EnterSharedCrit(0LL, 1LL);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v5, v4) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = (_QWORD *)*ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(v3[53] + 388LL) & 1) != 0 )
  {
    ChangeAcquireResourceType();
    v7 = v3[53];
    if ( (*(_DWORD *)(v7 + 388) & 1) != 0 )
      PostUpdateKeyStateEvent(v7);
  }
  if ( (unsigned int)IsKeyStateCached(a1) )
    goto LABEL_27;
  if ( v3[56] != grpdeskRitInput )
  {
LABEL_9:
    v8 = 0;
    goto LABEL_21;
  }
  if ( (unsigned int)IsGpqForegroundAccessible(1LL) )
  {
LABEL_27:
    if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(v3) )
      goto LABEL_9;
    if ( a1 >= 0x100 )
    {
      UserSetLastError(87LL, v9);
      goto LABEL_9;
    }
    v11 = KeGetCurrentThread();
    v12 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v10, v9) )
    {
      v13 = (__int64 *)PsGetThreadWin32Thread(v11);
      if ( v13 )
        v12 = *v13;
    }
    v14 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)a1 >> 2) + *(_QWORD *)(v12 + 424) + 228);
    v15 = (v14 & (1 << (2 * (a1 & 3) + 1))) != 0;
    if ( _bittest(&v14, (unsigned __int8)(2 * (a1 & 3))) )
      v15 = ((v14 & (1 << (2 * (a1 & 3) + 1))) != 0) | 0xFF80;
    v8 = v15;
  }
  else
  {
    EtwTraceUIPIInputError(v3, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 428LL), 3);
    v8 = 0;
  }
LABEL_21:
  if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(v3) )
  {
    *(_DWORD *)(v3[59] + 112LL) = 0;
    v19 = 0LL;
    *(_QWORD *)(v3[59] + 116LL) = 0LL;
  }
  else
  {
    v16 = v3[59];
    *(_DWORD *)(v16 + 112) = *(_DWORD *)(gpsi + 6984LL);
    v19 = v3[59];
    *(_QWORD *)(v19 + 116) = *(_QWORD *)(v3[53] + 228LL);
  }
  UserSessionSwitchLeaveCrit(v19, v16, v17, v18);
  return v8;
}
