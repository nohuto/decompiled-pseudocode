/*
 * XREFs of NtUserGetKeyState @ 0x1C0137940
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     PostUpdateKeyStateEvent @ 0x1C01388DC (PostUpdateKeyStateEvent.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall NtUserGetKeyState(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v3; // rbx
  int v4; // edx
  __int64 v5; // rcx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // edx
  __int16 v13; // di
  struct _KTHREAD *v14; // rsi
  __int64 v15; // rdi
  __int64 *v16; // rax
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  struct _KTHREAD *v26; // rsi
  __int64 v27; // rdi
  __int64 *v28; // rax
  int v29; // r9d
  __int16 v30; // r8
  __int64 v31; // rcx
  __int64 v33; // [rsp+98h] [rbp+10h] BYREF

  EnterSharedCrit(0LL, 1LL);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v5, v4) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = (_QWORD *)*ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(v3[53] + 396LL) & 1) != 0 )
  {
    ChangeAcquireResourceType();
    v7 = v3[53];
    v8 = *(_QWORD *)(v7 + 104);
    v9 = gObjDummyLock;
    if ( v8 )
      v9 = v8 + 384;
    v10 = *(_QWORD *)(v7 + 96);
    v11 = gObjDummyLock;
    if ( v10 )
      v11 = v10 + 384;
    if ( (*(_DWORD *)(v7 + 396) & 1) != 0 )
      PostUpdateKeyStateEvent(v7, v11, v9);
  }
  if ( (unsigned int)IsKeyStateCached((unsigned __int8)a1) )
    goto LABEL_42;
  if ( v3[56] != grpdeskRitInput )
  {
    v13 = 0;
    goto LABEL_36;
  }
  v14 = KeGetCurrentThread();
  v15 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(grpdeskRitInput, v12) )
  {
    v16 = (__int64 *)PsGetThreadWin32Thread(v14);
    if ( v16 )
      v15 = *v16;
  }
  if ( (v17 = *(_QWORD *)(v15 + 416), v18 = *(_DWORD *)(v17 + 12), v33 = *(_QWORD *)(v17 + 872), !gpqForeground)
    || v18 < 0
    || (unsigned int)IsImmersiveAppRestricted(v17)
    && (v19 = *(_QWORD *)(v15 + 424), gpqForeground == v19)
    && (*(_DWORD *)(v19 + 396) & 0x2000000) != 0
    && (v20 = *(_QWORD *)(gpqForeground + 120LL)) != 0
    && (v21 = *(_QWORD *)(v20 + 16)) != 0
    && *(_QWORD *)(v21 + 416) == *(_QWORD *)(v15 + 416)
    || (unsigned __int8)CheckAccess(&v33, gpqForeground + 436LL) )
  {
LABEL_42:
    if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(v3) )
    {
      v13 = 0;
    }
    else if ( a1 < 0x100 )
    {
      v26 = KeGetCurrentThread();
      v27 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v23, v22) )
      {
        v28 = (__int64 *)PsGetThreadWin32Thread(v26);
        if ( v28 )
          v27 = *v28;
      }
      v29 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)a1 >> 2) + *(_QWORD *)(v27 + 424) + 236);
      v30 = _bittest(&v29, (unsigned __int8)(2 * (a1 & 3) + 1));
      v13 = v30 | 0xFF80;
      if ( !_bittest(&v29, (unsigned __int8)(2 * (a1 & 3))) )
        v13 = v30;
    }
    else
    {
      UserSetLastError(87LL, v22, v24, v25);
      v13 = 0;
    }
  }
  else
  {
    EtwTraceUIPIInputError(v3, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 436LL), 3);
    v13 = 0;
  }
LABEL_36:
  if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(v3) )
  {
    *(_DWORD *)(v3[59] + 112LL) = 0;
    v31 = 0LL;
    *(_QWORD *)(v3[59] + 116LL) = 0LL;
  }
  else
  {
    *(_DWORD *)(v3[59] + 112LL) = *(_DWORD *)(gpsi + 6984LL);
    v31 = v3[59];
    *(_QWORD *)(v31 + 116) = *(_QWORD *)(v3[53] + 236LL);
  }
  UserSessionSwitchLeaveCrit(v31);
  return v13;
}
