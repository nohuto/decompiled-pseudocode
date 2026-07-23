/*
 * XREFs of NtSetThreadExecutionState @ 0x1405882F0
 * Callers:
 *     <none>
 * Callees:
 *     PopGetLegacyPowerRequestFlags @ 0x140001CB4 (PopGetLegacyPowerRequestFlags.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x140001D08 (PopApplyLegacyPowerRequestFlags.c)
 *     SessionIsInteractive @ 0x140001FF8 (SessionIsInteractive.c)
 *     PoCaptureReasonContext @ 0x1400020AC (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x140003730 (PoDestroyReasonContext.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     PopSystemRequiredSet @ 0x1401787EC (PopSystemRequiredSet.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopCreateUserPowerRequest @ 0x140589C2C (PopCreateUserPowerRequest.c)
 *     PoEnergyContextUpdateComponentPower @ 0x140604FCC (PoEnergyContextUpdateComponentPower.c)
 *     PopNotifyConsoleUserPresent @ 0x1406DCE64 (PopNotifyConsoleUserPresent.c)
 *     PopDiagTraceSetThreadExecutionState @ 0x1406DCFFC (PopDiagTraceSetThreadExecutionState.c)
 */

NTSTATUS __stdcall NtSetThreadExecutionState(EXECUTION_STATE esFlags, EXECUTION_STATE *PreviousFlags)
{
  EXECUTION_STATE *v2; // r12
  struct _KTHREAD *CurrentThread; // r15
  __int64 v5; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  NTSTATUS v7; // ebx
  char LegacyPowerRequestFlags; // al
  unsigned int SessionId; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _LIST_ENTRY *v13; // [rsp+30h] [rbp-28h] BYREF
  EXECUTION_STATE v14; // [rsp+70h] [rbp+18h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  v2 = PreviousFlags;
  P = 0LL;
  v13 = 0LL;
  LOBYTE(PreviousFlags) = KeGetCurrentThread()->PreviousMode;
  if ( !(_BYTE)PreviousFlags )
    return -1073741637;
  CurrentThread = KeGetCurrentThread();
  if ( (esFlags & 0x7FFFFFBC) != 0 || (esFlags & 0x40) != 0 && (esFlags & 0x80000000) == 0 )
    return -1073741811;
  v5 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)v2 < 0x7FFFFFFF0000LL )
    v5 = (__int64)v2;
  *(_DWORD *)v5 = *(_DWORD *)v5;
  Blink = CurrentThread[1].ApcState.ApcListHead[1].Blink;
  v13 = Blink;
  if ( Blink || (esFlags & 0x80000000) == 0 )
    goto LABEL_11;
  v7 = PoCaptureReasonContext(0LL, (__int64)PreviousFlags, 0LL, 1, 0LL, &P);
  if ( v7 < 0 )
    return v7;
  v7 = PopCreateUserPowerRequest(&v13, 0LL, P);
  if ( v7 >= 0 )
  {
    Blink = v13;
    CurrentThread[1].ApcState.ApcListHead[1].Blink = v13;
LABEL_11:
    LegacyPowerRequestFlags = PopGetLegacyPowerRequestFlags(Blink, esFlags, (int *)&v14);
    *v2 = v14;
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
        PoEnergyContextUpdateComponentPower(KeGetCurrentThread()->ApcState.Process);
        SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( SessionIsInteractive(SessionId) )
        {
          LOBYTE(v12) = 1;
          PopNotifyConsoleUserPresent(v12, v11, 8LL);
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
  return v7;
}
