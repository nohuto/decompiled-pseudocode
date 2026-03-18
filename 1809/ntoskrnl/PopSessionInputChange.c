/*
 * XREFs of PopSessionInputChange @ 0x1406DC520
 * Callers:
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x14014240C (PopPrintEx.c)
 *     PopConsoleSessionPassiveInput @ 0x1406DC3C0 (PopConsoleSessionPassiveInput.c)
 *     PopConsoleSessionActiveInput @ 0x1406DC440 (PopConsoleSessionActiveInput.c)
 *     PopRemoteSessionActiveInput @ 0x1406DC4B4 (PopRemoteSessionActiveInput.c)
 *     PopGetDisplayTimeout @ 0x1406DC4F0 (PopGetDisplayTimeout.c)
 *     PopReleaseAdaptiveLock @ 0x1406DC650 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x1406DC6E4 (PopAcquireAdaptiveLock.c)
 *     PopDiagTraceSessionStates @ 0x1406DC770 (PopDiagTraceSessionStates.c)
 *     PopSetSessionUserStatus @ 0x1406DC9D8 (PopSetSessionUserStatus.c)
 */

__int64 __fastcall PopSessionInputChange(unsigned int a1, char *a2, int *a3)
{
  char v3; // r14
  const char *v4; // rax
  int v5; // ebp
  const char *v8; // r8
  bool v9; // di
  const EVENT_DESCRIPTOR *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx

  v3 = *a2;
  v4 = "Active";
  v5 = *((_DWORD *)a2 + 1);
  if ( !*a2 )
    v4 = "Passive";
  if ( PopConsoleContext != a1 || (v8 = "Console", a1 == -1) )
    v8 = "Remote";
  PopPrintEx(3u, "PopAdaptive:>>>>> %s session %u input is %s\n", v8, a1, v4);
  v9 = PopConsoleContext == a1 && a1 != -1;
  v10 = (const EVENT_DESCRIPTOR *)&POP_ETW_ADPM_ACTIVE_INPUT;
  if ( !v3 )
    v10 = &POP_ETW_ADPM_PASSIVE_INPUT;
  PopDiagTraceSessionStates(v10);
  LOBYTE(v11) = 1;
  PopAcquireAdaptiveLock(v11);
  if ( v3 )
  {
    if ( v9 )
      PopConsoleSessionActiveInput(a1, v5, a3);
    else
      PopRemoteSessionActiveInput(a1, v12, a3);
  }
  else if ( v9 )
  {
    PopConsoleSessionPassiveInput(a1, v5, a3);
  }
  else
  {
    PopSetSessionUserStatus(a1, 2LL);
    a3[1] = PopGetDisplayTimeout(a1);
    *a3 = PopInputTimeout;
  }
  return PopReleaseAdaptiveLock();
}
