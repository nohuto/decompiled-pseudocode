/*
 * XREFs of NtUserGetKeyState @ 0x1C0081B40
 * Callers:
 *     <none>
 * Callees:
 *     PostUpdateKeyStateEvent @ 0x1C0082ADC (PostUpdateKeyStateEvent.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall NtUserGetKeyState(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *ThreadWin32Thread; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int16 v15; // di
  struct _KTHREAD *v16; // rsi
  __int64 v17; // rdi
  __int64 *v18; // rax
  __int64 v19; // rcx
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _KTHREAD *v28; // rsi
  __int64 v29; // rdi
  __int64 *v30; // rax
  int v31; // r9d
  __int16 v32; // r8
  __int64 v33; // rcx
  __int64 v35; // [rsp+98h] [rbp+10h] BYREF

  EnterSharedCrit(0LL, 1LL);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v5, v4, v6, v7) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = (_QWORD *)*ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(v3[53] + 396LL) & 1) != 0 )
  {
    ChangeAcquireResourceType();
    v9 = v3[53];
    v10 = *(_QWORD *)(v9 + 96);
    v11 = gObjDummyLock;
    if ( v10 )
      v11 = v10 + 384;
    if ( (*(_DWORD *)(v9 + 396) & 1) != 0 )
      PostUpdateKeyStateEvent(v9, v11);
  }
  if ( (unsigned int)IsKeyStateCached((unsigned __int8)a1) )
    goto LABEL_40;
  if ( v3[56] != grpdeskRitInput )
  {
    v15 = 0;
    goto LABEL_34;
  }
  v16 = KeGetCurrentThread();
  v17 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(grpdeskRitInput, v12, v13, v14) )
  {
    v18 = (__int64 *)PsGetThreadWin32Thread(v16);
    if ( v18 )
      v17 = *v18;
  }
  if ( (v19 = *(_QWORD *)(v17 + 416), v20 = *(_DWORD *)(v19 + 12), v35 = *(_QWORD *)(v19 + 872), !gpqForeground)
    || v20 < 0
    || (unsigned int)IsImmersiveAppRestricted(v19)
    && (v21 = *(_QWORD *)(v17 + 424), gpqForeground == v21)
    && (*(_DWORD *)(v21 + 396) & 0x2000000) != 0
    && (v22 = *(_QWORD *)(gpqForeground + 120LL)) != 0
    && (v23 = *(_QWORD *)(v22 + 16)) != 0
    && *(_QWORD *)(v23 + 416) == *(_QWORD *)(v17 + 416)
    || (unsigned __int8)CheckAccess(&v35, gpqForeground + 436LL) )
  {
LABEL_40:
    if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(v3) )
    {
      v15 = 0;
    }
    else if ( a1 < 0x100 )
    {
      v28 = KeGetCurrentThread();
      v29 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v25, v24, v26, v27) )
      {
        v30 = (__int64 *)PsGetThreadWin32Thread(v28);
        if ( v30 )
          v29 = *v30;
      }
      v31 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)a1 >> 2) + *(_QWORD *)(v29 + 424) + 236);
      v32 = _bittest(&v31, (unsigned __int8)(2 * (a1 & 3) + 1));
      v15 = v32 | 0xFF80;
      if ( !_bittest(&v31, (unsigned __int8)(2 * (a1 & 3))) )
        v15 = v32;
    }
    else
    {
      UserSetLastError(87LL);
      v15 = 0;
    }
  }
  else
  {
    EtwTraceUIPIInputError(v3, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 436LL), 3);
    v15 = 0;
  }
LABEL_34:
  if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(v3) )
  {
    *(_DWORD *)(v3[59] + 112LL) = 0;
    v33 = 0LL;
    *(_QWORD *)(v3[59] + 116LL) = 0LL;
  }
  else
  {
    *(_DWORD *)(v3[59] + 112LL) = *(_DWORD *)(gpsi + 6984LL);
    v33 = v3[59];
    *(_QWORD *)(v33 + 116) = *(_QWORD *)(v3[53] + 236LL);
  }
  UserSessionSwitchLeaveCrit(v33);
  return v15;
}
