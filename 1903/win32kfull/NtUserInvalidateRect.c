/*
 * XREFs of NtUserInvalidateRect @ 0x1C00C3350
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxRedrawWindow @ 0x1C00C3908 (xxxRedrawWindow.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
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
  __int64 v12; // r9
  int v13; // edi
  __int64 v14; // rsi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v16; // rbx
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v18; // r14
  __int64 v19; // rbx
  __int64 *v20; // rax
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // ebx
  bool v27; // cf
  int v28; // eax
  struct _KTHREAD *v29; // r14
  __int64 v30; // rbx
  __int64 *v31; // rax
  struct tagWND *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v37; // [rsp+38h] [rbp-50h] BYREF
  __int64 v38; // [rsp+40h] [rbp-48h]
  __int64 v39; // [rsp+48h] [rbp-40h]
  __int128 v40; // [rsp+58h] [rbp-30h] BYREF

  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0uLL;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6, v7);
  v13 = 0;
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    gbValidateHandleForIL = 0;
  if ( a1 )
  {
    v14 = ValidateHwnd(a1);
    if ( !v14 )
      goto LABEL_35;
  }
  else
  {
    v14 = 0LL;
  }
  if ( a2 )
  {
    v10 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v40 = *a2;
    if ( v14 )
    {
      CurrentThread = KeGetCurrentThread();
      v16 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(MmUserProbeAddress, v9, v11, v12) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v16 = *ThreadWin32Thread;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v16 + 472) + 224LL) & 1) == 0 )
      {
        v18 = KeGetCurrentThread();
        v19 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v10, v9, v11, v12) )
        {
          v20 = (__int64 *)PsGetThreadWin32Thread(v18);
          if ( v20 )
            v19 = *v20;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v19 + 472) + 224LL) & 0x20) == 0 )
        {
          v21 = *(_DWORD *)(*(_QWORD *)(v14 + 40) + 288LL);
          if ( (((unsigned __int16)(v21 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v10,
                                                                                   v9,
                                                                                   v11,
                                                                                   v12) >> 8)) & 0x1FF) != 0 )
            goto LABEL_27;
          v25 = *(unsigned int *)(*(_QWORD *)(v14 + 40) + 288LL);
          if ( (*(_DWORD *)(*(_QWORD *)(v14 + 40) + 288LL) & 0xF) != 2 || (v26 = 1, (v25 & 0x20000000) == 0) )
            v26 = 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v25, v22, v23, v24) & 0xF) != 2
            || (v27 = (W32GetCurrentThreadDpiAwarenessContext(v10, v9, v11, v12) & 0x20000000) != 0, v28 = 1, !v27) )
          {
            v28 = 0;
          }
          if ( v26 != v28 )
LABEL_27:
            TransformRectBetweenCoordinateSpaces(&v40, &v40, 0LL, v14);
        }
      }
    }
  }
  v29 = KeGetCurrentThread();
  v30 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v10, v9, v11, v12) )
  {
    v31 = (__int64 *)PsGetThreadWin32Thread(v29);
    if ( v31 )
      v30 = *v31;
  }
  v37 = *(_QWORD *)(v30 + 408);
  *(_QWORD *)(v30 + 408) = &v37;
  v38 = v14;
  if ( v14 )
  {
    HMLockObject(v14);
    v32 = (struct tagWND *)v14;
  }
  else
  {
    v32 = 0LL;
  }
  v13 = xxxRedrawWindow(v32);
  ThreadUnlock1(v34, v33, v35);
LABEL_35:
  UserSessionSwitchLeaveCrit(v10);
  return v13;
}
