/*
 * XREFs of NtUserInvalidateRect @ 0x1C00C72D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxRedrawWindow @ 0x1C00C7520 (xxxRedrawWindow.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserInvalidateRect(__int64 a1, __int128 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  int v11; // edi
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  struct _KTHREAD *CurrentThread; // r14
  __int64 v16; // rbx
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v18; // r14
  __int64 v19; // rbx
  __int64 *v20; // rax
  unsigned int v21; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  struct _KTHREAD *v23; // r14
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD v29[3]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v30; // [rsp+58h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6, v7);
  v11 = 0;
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    gbValidateHandleForIL = 0;
  if ( a1 )
  {
    v12 = ValidateHwnd(a1);
    if ( !v12 )
      goto LABEL_27;
  }
  else
  {
    v12 = 0LL;
  }
  if ( a2 )
  {
    v10 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v30 = *a2;
    if ( v12 )
    {
      CurrentThread = KeGetCurrentThread();
      v16 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(MmUserProbeAddress, v9) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v16 = *ThreadWin32Thread;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v16 + 480) + 224LL) & 1) == 0 )
      {
        v18 = KeGetCurrentThread();
        v19 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v10, v9) )
        {
          v20 = (__int64 *)PsGetThreadWin32Thread(v18);
          if ( v20 )
            v19 = *v20;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v19 + 480) + 224LL) & 0x20) == 0 )
        {
          v21 = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 288LL);
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v10, v9);
          v10 = 511LL;
          if ( (((unsigned __int16)(v21 >> 8) ^ (unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8)) & 0x1FF) != 0 )
            TransformRectBetweenCoordinateSpaces(&v30, &v30, 0LL, v12);
        }
      }
    }
  }
  v23 = KeGetCurrentThread();
  v24 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v10, v9) )
  {
    v25 = (__int64 *)PsGetThreadWin32Thread(v23);
    if ( v25 )
      v24 = *v25;
  }
  v29[0] = *(_QWORD *)(v24 + 416);
  *(_QWORD *)(v24 + 416) = v29;
  v29[1] = v12;
  if ( v12 )
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  v11 = xxxRedrawWindow((struct tagWND *)v12);
  ThreadUnlock1(v27, v26);
LABEL_27:
  UserSessionSwitchLeaveCrit(v10, v9, v13, v14);
  return v11;
}
