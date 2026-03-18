/*
 * XREFs of NtUserGetScrollBarInfo @ 0x1C001FA60
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetScrollBarInfo @ 0x1C001FD30 (xxxGetScrollBarInfo.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002B550 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall NtUserGetScrollBarInfo(__int64 a1, __int64 a2, ULONG64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG_PTR v9; // r15
  int ScrollBarInfo; // edi
  __int64 v11; // rax
  _BYTE *v12; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v20; // rsi
  __int64 v21; // rbx
  __int64 *v22; // rax
  unsigned int v23; // r12d
  unsigned int v24; // ebx
  struct _KTHREAD *v25; // r13
  __int64 v26; // rsi
  __int64 *v27; // rax
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v30[11]; // [rsp+50h] [rbp-88h] BYREF

  memset(&v30[3], 0, 0x3CuLL);
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    v30[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v30;
    v30[1] = v9;
    _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
    if ( PsGetCurrentProcessWow64Process(gptiCurrent) )
      v11 = 0LL;
    else
      v11 = 3LL;
    if ( (v11 & a3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (_BYTE *)a3;
    if ( a3 >= MmUserProbeAddress )
      v12 = (_BYTE *)MmUserProbeAddress;
    *v12 = *v12;
    v12[59] = v12[59];
    LODWORD(v30[3]) = *(_DWORD *)a3;
    ScrollBarInfo = xxxGetScrollBarInfo(v9);
    CurrentThread = KeGetCurrentThread();
    v14 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v16, v15) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v14 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v14 + 480) + 224LL) & 1) == 0 )
    {
      v20 = KeGetCurrentThread();
      v21 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v18, v17) )
      {
        v22 = (__int64 *)PsGetThreadWin32Thread(v20);
        if ( v22 )
          v21 = *v22;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v21 + 480) + 224LL) & 0x20) == 0 )
      {
        v23 = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 288LL);
        v24 = 18;
        v25 = KeGetCurrentThread();
        v26 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v18, v17) )
        {
          v27 = (__int64 *)PsGetThreadWin32Thread(v25);
          if ( v27 )
            v26 = *v27;
        }
        if ( v26 )
        {
          if ( *(_QWORD *)(v26 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v26);
          if ( *(_DWORD *)(v26 + 340) )
          {
            v24 = *(_DWORD *)(v26 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
            if ( CurrentProcessWin32Process )
              v24 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
        }
        if ( (((unsigned __int16)(v23 >> 8) ^ (unsigned __int16)(v24 >> 8)) & 0x1FF) != 0 )
          TransformRectBetweenCoordinateSpaces((char *)&v30[3] + 4, (char *)&v30[3] + 4, 0LL, v9);
      }
    }
    if ( ScrollBarInfo )
    {
      *(_OWORD *)a3 = *(_OWORD *)&v30[3];
      *(_OWORD *)(a3 + 16) = *(_OWORD *)&v30[5];
      *(_OWORD *)(a3 + 32) = *(_OWORD *)&v30[7];
      *(_QWORD *)(a3 + 48) = v30[9];
      *(_DWORD *)(a3 + 56) = v30[10];
    }
    ThreadUnlock1(v18, v17);
  }
  else
  {
    ScrollBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return ScrollBarInfo;
}
