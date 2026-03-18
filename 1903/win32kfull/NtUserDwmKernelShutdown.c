/*
 * XREFs of NtUserDwmKernelShutdown @ 0x1C022B650
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     UserSetLastStatus @ 0x1C0132458 (UserSetLastStatus.c)
 *     xxxDwmStopRedirection @ 0x1C015E1B0 (xxxDwmStopRedirection.c)
 */

__int64 NtUserDwmKernelShutdown()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  NTSTATUS v13; // eax

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2, v3);
  v8 = 0LL;
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v9 = 5LL;
LABEL_10:
    UserSetLastError(v9, v5, v6, v7);
    goto LABEL_11;
  }
  v10 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( !v10 || (v11 = *(_QWORD *)(v10 + 8)) == 0 )
  {
    v9 = 87LL;
    goto LABEL_10;
  }
  v12 = *(unsigned int *)(*(_QWORD *)v11 + 64LL);
  if ( (v12 & 1) != 0 && (v13 = xxxDwmStopRedirection(0LL, v5), v13 < 0) )
    UserSetLastStatus(v13, 1);
  else
    v8 = 1LL;
LABEL_11:
  UserSessionSwitchLeaveCrit(v12);
  return v8;
}
