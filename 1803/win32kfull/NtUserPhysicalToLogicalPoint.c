/*
 * XREFs of NtUserPhysicalToLogicalPoint @ 0x1C003C520
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserPhysicalToLogicalPoint(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rdx
  _DWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r13
  __int64 *v10; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v16; // r14
  __int64 v17; // rbx
  __int64 *v18; // rax
  unsigned int v19; // ebx
  bool v20; // zf
  __int64 v21; // rax
  struct _KTHREAD *v22; // r15
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 *v26; // rax
  struct _KTHREAD *v27; // rbx
  __int64 *v28; // rax
  unsigned int v29; // ebx
  __int64 v30; // rax
  __int64 v32; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+20h]

  v33 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  gbValidateHandleForIL = 0;
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    v10 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v10 = (__int64 *)MmUserProbeAddress;
    v32 = *v10;
    CurrentThread = KeGetCurrentThread();
    v12 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(MmUserProbeAddress, v5) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v12 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v12 + 472) + 224LL) & 1) == 0 )
    {
      v16 = KeGetCurrentThread();
      v17 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v13) )
      {
        v18 = (__int64 *)PsGetThreadWin32Thread(v16);
        if ( v18 )
          v17 = *v18;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v17 + 472) + 224LL) & 0x20) == 0 )
      {
        v19 = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 288LL);
        v20 = (((unsigned __int16)(v19 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) == 0;
        v21 = v33;
        if ( !v20 )
          v21 = v32;
        v33 = v21;
      }
    }
    TransformPointBetweenCoordinateSpaces(&v32, &v32, v9, 0LL);
    v6 = (_DWORD *)(*(_QWORD *)(v9 + 40) + 88LL);
    if ( *(_QWORD *)(v9 + 40) != -88LL
      && (int)v32 >= *v6
      && (int)v32 <= *(_DWORD *)(*(_QWORD *)(v9 + 40) + 96LL)
      && SHIDWORD(v32) >= *(_DWORD *)(*(_QWORD *)(v9 + 40) + 92LL)
      && SHIDWORD(v32) <= *(_DWORD *)(*(_QWORD *)(v9 + 40) + 100LL) )
    {
      v22 = KeGetCurrentThread();
      v23 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v6, v5) )
      {
        v26 = (__int64 *)PsGetThreadWin32Thread(v22);
        if ( v26 )
          v23 = *v26;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v23 + 472) + 224LL) & 1) == 0 )
      {
        v27 = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v25, v24) )
        {
          v28 = (__int64 *)PsGetThreadWin32Thread(v27);
          if ( v28 )
            v4 = *v28;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v4 + 472) + 224LL) & 0x20) == 0 )
        {
          v29 = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 288LL);
          v20 = (((unsigned __int16)(v29 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) == 0;
          v30 = v32;
          if ( !v20 )
            v30 = v33;
          v32 = v30;
        }
      }
      v6 = (_DWORD *)MmUserProbeAddress;
      v5 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v5 = (_QWORD *)MmUserProbeAddress;
      *v5 = *v5;
      *a2 = v32;
      LODWORD(v4) = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return (int)v4;
}
