/*
 * XREFs of NtUserSetSensorPresence @ 0x1C0235470
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserSetSensorPresence(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 CurrentProcess; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v3, v2, v4, v5);
  if ( CurrentProcess == gpepCSRSS )
    (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)P + 40LL))(P, a1);
  else
    UserSetLastError(5LL, CurrentProcess, v7, v8);
  UserSessionSwitchLeaveCrit(v9);
  return 1LL;
}
