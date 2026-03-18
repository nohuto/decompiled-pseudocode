/*
 * XREFs of NtSetThreadExecutionState @ 0x14069D770
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     PopGetLegacyPowerRequestFlags @ 0x1400EB2B8 (PopGetLegacyPowerRequestFlags.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x1400EB30C (PopApplyLegacyPowerRequestFlags.c)
 *     PoCaptureReasonContext @ 0x1400EB528 (PoCaptureReasonContext.c)
 *     SessionIsInteractive @ 0x1400EBC4C (SessionIsInteractive.c)
 *     PoDestroyReasonContext @ 0x1400ECD28 (PoDestroyReasonContext.c)
 *     PopSystemRequiredSet @ 0x14018206C (PopSystemRequiredSet.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PoEnergyContextUpdateComponentPower @ 0x140694094 (PoEnergyContextUpdateComponentPower.c)
 *     PopCreateUserPowerRequest @ 0x14069DFD4 (PopCreateUserPowerRequest.c)
 *     PopNotifyConsoleUserPresent @ 0x14071E580 (PopNotifyConsoleUserPresent.c)
 *     PopDiagTraceSetThreadExecutionState @ 0x14071E850 (PopDiagTraceSetThreadExecutionState.c)
 */

NTSTATUS __stdcall NtSetThreadExecutionState(EXECUTION_STATE esFlags, EXECUTION_STATE *PreviousFlags)
{
  char PreviousMode; // dl
  struct _KTHREAD *CurrentThread; // r15
  __int64 v6; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  NTSTATUS v8; // ebx
  char LegacyPowerRequestFlags; // al
  unsigned int SessionId; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _LIST_ENTRY *v14; // [rsp+30h] [rbp-28h] BYREF
  EXECUTION_STATE v15; // [rsp+70h] [rbp+18h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    return -1073741637;
  CurrentThread = KeGetCurrentThread();
  if ( (esFlags & 0x7FFFFFBC) != 0 || (esFlags & 0x40) != 0 && (esFlags & 0x80000000) == 0 )
    return -1073741811;
  v6 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)PreviousFlags < 0x7FFFFFFF0000LL )
    v6 = (__int64)PreviousFlags;
  *(_DWORD *)v6 = *(_DWORD *)v6;
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  v14 = Blink;
  if ( Blink || (esFlags & 0x80000000) == 0 )
    goto LABEL_11;
  v8 = PoCaptureReasonContext(0LL, PreviousMode, 0LL, 1, 0LL, &P);
  if ( v8 < 0 )
    return v8;
  v8 = PopCreateUserPowerRequest(&v14, 0LL, P);
  if ( v8 >= 0 )
  {
    Blink = v14;
    CurrentThread[1].ApcState.ApcListHead[1].Blink = v14;
LABEL_11:
    LegacyPowerRequestFlags = PopGetLegacyPowerRequestFlags(Blink, esFlags, (int *)&v15);
    *PreviousFlags = v15;
    if ( (esFlags & 0x80000000) == 0 )
    {
      PopDiagTraceSetThreadExecutionState(CurrentThread, esFlags);
      if ( (esFlags & 1) != 0 )
      {
        PopAcquirePolicyLock();
        PopSystemRequiredSet();
        PopReleasePolicyLock();
      }
      if ( (esFlags & 2) != 0 )
      {
        PoEnergyContextUpdateComponentPower((__int64)KeGetCurrentThread()->ApcState.Process, 12, 3LL);
        SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( SessionIsInteractive(SessionId) )
        {
          LOBYTE(v13) = 1;
          PopNotifyConsoleUserPresent(v13, v12, 8LL);
        }
      }
    }
    else
    {
      PopApplyLegacyPowerRequestFlags(Blink, esFlags, LegacyPowerRequestFlags);
    }
    return 0;
  }
  if ( P )
    PoDestroyReasonContext(P);
  return v8;
}
