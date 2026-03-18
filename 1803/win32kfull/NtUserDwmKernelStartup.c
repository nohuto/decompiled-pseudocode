/*
 * XREFs of NtUserDwmKernelStartup @ 0x1C0008110
 * Callers:
 *     <none>
 * Callees:
 *     zzzDwmStartRedirection @ 0x1C0008494 (zzzDwmStartRedirection.c)
 *     UserSetLastStatus @ 0x1C000AD50 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 NtUserDwmKernelStartup()
{
  __int64 CurrentProcess; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  NTSTATUS started; // eax
  __int64 v10; // rcx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess();
  v4 = 0LL;
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v10 = 5LL;
    goto LABEL_10;
  }
  v5 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( !v5 || (v6 = *(_QWORD *)(v5 + 8)) == 0 )
  {
    v10 = 87LL;
LABEL_10:
    UserSetLastError(v10);
    goto LABEL_7;
  }
  v7 = *(unsigned int *)(*(_QWORD *)v6 + 52LL);
  if ( (v7 & 1) != 0 || (started = zzzDwmStartRedirection(), started >= 0) )
    v4 = 1LL;
  else
    UserSetLastStatus(started);
LABEL_7:
  UserSessionSwitchLeaveCrit(v7, v1, v2, v3);
  return v4;
}
