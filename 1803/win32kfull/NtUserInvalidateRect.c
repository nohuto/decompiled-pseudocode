/*
 * XREFs of NtUserInvalidateRect @ 0x1C002A820
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C002AA30 (xxxRedrawWindow.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserInvalidateRect(__int64 a1, __int128 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  int v9; // edi
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *CurrentThread; // r14
  __int64 v14; // rbx
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v16; // r14
  __int64 v17; // rbx
  __int64 *v18; // rax
  unsigned int v19; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  struct _KTHREAD *v21; // r14
  __int64 v22; // rbx
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD v28[3]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v29; // [rsp+58h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  v9 = 0;
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    gbValidateHandleForIL = 0;
  if ( a1 )
  {
    v10 = ValidateHwnd(a1);
    if ( !v10 )
      goto LABEL_27;
  }
  else
  {
    v10 = 0LL;
  }
  if ( a2 )
  {
    v8 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v29 = *a2;
    if ( v10 )
    {
      CurrentThread = KeGetCurrentThread();
      v14 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(MmUserProbeAddress, v7) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v14 = *ThreadWin32Thread;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v14 + 472) + 224LL) & 1) == 0 )
      {
        v16 = KeGetCurrentThread();
        v17 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7) )
        {
          v18 = (__int64 *)PsGetThreadWin32Thread(v16);
          if ( v18 )
            v17 = *v18;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v17 + 472) + 224LL) & 0x20) == 0 )
        {
          v19 = *(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL);
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
          v8 = 511LL;
          if ( (((unsigned __int16)(v19 >> 8) ^ (unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8)) & 0x1FF) != 0 )
            TransformRectBetweenCoordinateSpaces(&v29, &v29, 0LL, v10);
        }
      }
    }
  }
  v21 = KeGetCurrentThread();
  v22 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7) )
  {
    v23 = (__int64 *)PsGetThreadWin32Thread(v21);
    if ( v23 )
      v22 = *v23;
  }
  v28[0] = *(_QWORD *)(v22 + 408);
  *(_QWORD *)(v22 + 408) = v28;
  v28[1] = v10;
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  v9 = xxxRedrawWindow((struct tagWND *)v10);
  ThreadUnlock1(v25, v24, v26);
LABEL_27:
  UserSessionSwitchLeaveCrit(v8, v7, v11, v12);
  return v9;
}
