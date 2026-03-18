/*
 * XREFs of NtUserInvalidateRect @ 0x1C0064A20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxRedrawWindow @ 0x1C0064FD8 (xxxRedrawWindow.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
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
  __int64 v11; // r8
  int v12; // edi
  __int64 v13; // rsi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v15; // rbx
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v17; // r14
  __int64 v18; // rbx
  __int64 *v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  int v24; // ebx
  bool v25; // cf
  int v26; // eax
  struct _KTHREAD *v27; // r14
  __int64 v28; // rbx
  __int64 *v29; // rax
  struct tagWND *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v35; // [rsp+38h] [rbp-50h] BYREF
  __int64 v36; // [rsp+40h] [rbp-48h]
  __int64 v37; // [rsp+48h] [rbp-40h]
  __int128 v38; // [rsp+58h] [rbp-30h] BYREF

  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0uLL;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6, v7);
  v12 = 0;
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    gbValidateHandleForIL = 0;
  if ( a1 )
  {
    v13 = ValidateHwnd(a1);
    if ( !v13 )
      goto LABEL_35;
  }
  else
  {
    v13 = 0LL;
  }
  if ( a2 )
  {
    v10 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v38 = *a2;
    if ( v13 )
    {
      CurrentThread = KeGetCurrentThread();
      v15 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(MmUserProbeAddress, v9, v11) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v15 = *ThreadWin32Thread;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v15 + 472) + 224LL) & 1) == 0 )
      {
        v17 = KeGetCurrentThread();
        v18 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v10, v9, v11) )
        {
          v19 = (__int64 *)PsGetThreadWin32Thread(v17);
          if ( v19 )
            v18 = *v19;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v18 + 472) + 224LL) & 0x20) == 0 )
        {
          v20 = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL);
          if ( (((unsigned __int16)(v20 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v10,
                                                                                   v9,
                                                                                   v11) >> 8)) & 0x1FF) != 0 )
            goto LABEL_27;
          v23 = *(unsigned int *)(*(_QWORD *)(v13 + 40) + 288LL);
          if ( (*(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL) & 0xF) != 2 || (v24 = 1, (v23 & 0x20000000) == 0) )
            v24 = 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v23, v21, v22) & 0xF) != 2
            || (v25 = (W32GetCurrentThreadDpiAwarenessContext(v10, v9, v11) & 0x20000000) != 0, v26 = 1, !v25) )
          {
            v26 = 0;
          }
          if ( v24 != v26 )
LABEL_27:
            TransformRectBetweenCoordinateSpaces(&v38, &v38, 0LL, v13);
        }
      }
    }
  }
  v27 = KeGetCurrentThread();
  v28 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v10, v9, v11) )
  {
    v29 = (__int64 *)PsGetThreadWin32Thread(v27);
    if ( v29 )
      v28 = *v29;
  }
  v35 = *(_QWORD *)(v28 + 408);
  *(_QWORD *)(v28 + 408) = &v35;
  v36 = v13;
  if ( v13 )
  {
    HMLockObject(v13);
    v30 = (struct tagWND *)v13;
  }
  else
  {
    v30 = 0LL;
  }
  v12 = xxxRedrawWindow(v30);
  ThreadUnlock1(v32, v31, v33);
LABEL_35:
  UserSessionSwitchLeaveCrit(v10);
  return v12;
}
