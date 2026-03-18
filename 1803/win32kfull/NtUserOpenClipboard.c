/*
 * XREFs of NtUserOpenClipboard @ 0x1C00B6280
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C006BBD8 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     _OpenClipboard @ 0x1C00B6508 (_OpenClipboard.c)
 */

__int64 __fastcall NtUserOpenClipboard(__int64 a1, _DWORD *a2)
{
  int v4; // ebx
  ULONG64 CurrentProcessWin32Process; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 ThreadWin32Thread; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // r11
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD v22[4]; // [rsp+28h] [rbp-20h] BYREF
  int v23; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v23 = 0;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v7 = ValidateHwnd(a1);
    if ( !v7 )
      goto LABEL_13;
  }
  else
  {
    v7 = 0LL;
  }
  if ( gbLockScreenActive
    || *(PVOID *)(gptiCurrent + 448LL) == grpdeskLogon
    || *(_DWORD *)(PsGetCurrentProcessWin32Process(gptiCurrent) + 876)
    && ((v17 = gptiCurrent, v18 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 40LL), !gpqForeground)
     || !ForegroundInputOwnerMatch(gptiCurrent, 1))
    && ((v19 = *(_QWORD *)(v18 + 80)) == 0 || *(_QWORD *)(v19 + 16) != v17) )
  {
    v20 = 5LL;
LABEL_20:
    UserSetLastError(v20, CurrentProcessWin32Process);
    goto LABEL_13;
  }
  if ( v7 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
    v11 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 416LL);
    if ( *(_QWORD *)(v11 + 664) != *(_QWORD *)(CurrentProcessWin32Process + 664) )
    {
      if ( *(_QWORD *)(PsGetCurrentProcessWin32Process(v11) + 664) )
      {
        v21 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 416LL);
        if ( *(_QWORD *)(v21 + 664)
          || (*(_DWORD *)(*(_QWORD *)(PsGetCurrentProcessWin32Process(v21) + 664) + 32LL) & 4) != 0 )
        {
          UserSetLastError(87LL, CurrentProcessWin32Process);
          v20 = 0LL;
          goto LABEL_20;
        }
      }
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), CurrentProcessWin32Process);
  v22[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v22;
  v22[1] = v7;
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  v4 = OpenClipboard(v7, &v23);
  ThreadUnlock1(v14, v13, v15);
  v6 = MmUserProbeAddress;
  CurrentProcessWin32Process = MmUserProbeAddress;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_DWORD *)MmUserProbeAddress;
  *a2 = v23;
LABEL_13:
  UserSessionSwitchLeaveCrit(v6, CurrentProcessWin32Process, v8, v9);
  return v4;
}
