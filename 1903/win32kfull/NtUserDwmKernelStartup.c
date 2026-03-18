/*
 * XREFs of NtUserDwmKernelStartup @ 0x1C00D6B40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     zzzDwmStartRedirection @ 0x1C00D92C4 (zzzDwmStartRedirection.c)
 *     UserSetLastStatus @ 0x1C0132458 (UserSetLastStatus.c)
 */

__int64 NtUserDwmKernelStartup()
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
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  NTSTATUS started; // eax
  __int64 v14; // rcx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2, v3);
  v8 = 0LL;
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v14 = 5LL;
    goto LABEL_10;
  }
  v9 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( !v9 || (v10 = *(_QWORD *)(v9 + 8)) == 0 )
  {
    v14 = 87LL;
LABEL_10:
    UserSetLastError(v14, v5, v6, v7);
    goto LABEL_7;
  }
  v11 = *(unsigned int *)(*(_QWORD *)v10 + 64LL);
  if ( (v11 & 1) != 0 || (started = zzzDwmStartRedirection(), started >= 0) )
    v8 = 1LL;
  else
    UserSetLastStatus(started);
LABEL_7:
  UserSessionSwitchLeaveCrit(v11);
  return v8;
}
