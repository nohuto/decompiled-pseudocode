/*
 * XREFs of KeQueryCurrentStackInformation @ 0x1400CAB30
 * Callers:
 *     RtlpIsFrameInBoundsEx @ 0x1400A0610 (RtlpIsFrameInBoundsEx.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1400C9AC0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     RtlpGetStackLimits @ 0x1400CAB00 (RtlpGetStackLimits.c)
 *     KeCheckStackAndTargetAddress @ 0x1400CC2A0 (KeCheckStackAndTargetAddress.c)
 *     PnprGetStackLimits @ 0x14028A2E8 (PnprGetStackLimits.c)
 *     KeBugCheck2 @ 0x140291090 (KeBugCheck2.c)
 *     EtwpTraceStackWalk @ 0x14030F644 (EtwpTraceStackWalk.c)
 *     EtwpCovSampCaptureKernelStack @ 0x140316968 (EtwpCovSampCaptureKernelStack.c)
 *     EtwpTraceLastBranchRecord @ 0x140317D58 (EtwpTraceLastBranchRecord.c)
 *     VerifierCaptureViolationKernelStack @ 0x140930960 (VerifierCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x14093CAA8 (ViDeadlockAnalyze.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400CACE4 (KeAreInterruptsEnabled.c)
 *     KeGetCurrentStackPointer @ 0x1401BC280 (KeGetCurrentStackPointer.c)
 *     KiRspInIstStack @ 0x14029301C (KiRspInIstStack.c)
 */

bool __fastcall KeQueryCurrentStackInformation(_DWORD *a1, char **a2, unsigned __int64 *a3)
{
  unsigned __int64 CurrentStackPointer; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // r10
  char *v9; // rax
  unsigned __int64 v10; // rcx
  bool result; // al
  char *IsrStack; // rax
  char *v13; // rcx
  char *v14; // rcx
  char *v15; // r8

  if ( (KiBugCheckActive & 3) != 0 )
  {
    *a1 = 0;
    *a3 = -1LL;
    *a2 = (char *)0xFFFF800000000000LL;
    return 1;
  }
  CurrentStackPointer = KeGetCurrentStackPointer();
  if ( KeGetCurrentIrql() >= 2u )
  {
    IsrStack = (char *)KeGetPcr()->Prcb.IsrStack;
    v13 = IsrStack - 24576;
    if ( CurrentStackPointer < (unsigned __int64)IsrStack && (unsigned __int64)v13 <= CurrentStackPointer )
    {
      *a1 = 6;
      *a3 = (unsigned __int64)IsrStack;
      result = 1;
      *a2 = v13;
      return result;
    }
  }
  if ( KeGetCurrentThread()->InitialStack != (void *)KeGetPcr()->Prcb.RspBase )
  {
    *a1 = 5;
    result = 1;
    *a3 = -1LL;
    *a2 = (char *)0xFFFF800000000000LL;
    return result;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    v14 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
    v15 = &v14[-(unsigned int)KeKernelStackSize];
    if ( (unsigned __int64)v15 <= CurrentStackPointer && CurrentStackPointer < (unsigned __int64)v14 )
    {
      *a1 = 1;
      result = 1;
      *a3 = (unsigned __int64)v14;
      *a2 = v15;
      return result;
    }
    if ( KeGetCurrentPrcb() == (struct _KPRCB *)KiDebuggerOwner )
    {
      *a1 = 7;
      result = 1;
      *a3 = -1LL;
      *a2 = (char *)0xFFFF800000000000LL;
      return result;
    }
  }
  if ( (unsigned __int8)KeAreInterruptsEnabled() && KeGetCurrentIrql() < 0xFu )
    goto LABEL_7;
  if ( (unsigned int)KiRspInIstStack(3LL) )
  {
    *a1 = 8;
    result = 1;
    *a3 = -1LL;
    *a2 = (char *)0xFFFF800000000000LL;
    return result;
  }
  if ( !(unsigned int)KiRspInIstStack(2LL) )
  {
LABEL_7:
    if ( (*(_DWORD *)(v8 + 116) & 0x1000) != 0 )
    {
      *a1 = 2;
    }
    else if ( *(_BYTE *)(v8 + 731) )
    {
      *a1 = 4;
    }
    else
    {
      *a1 = 3;
    }
    v9 = *(char **)(v8 + 48);
    v10 = *(_QWORD *)(v8 + 56);
    if ( (unsigned __int64)v9 >= v10 )
    {
      v9 = *(char **)(v8 + 48);
      v10 = *(_QWORD *)(v8 + 56);
    }
    *a3 = v10;
    *a2 = v9;
    return (unsigned __int64)v9 <= v7 && v7 < *a3;
  }
  else
  {
    *a1 = 9;
    result = 1;
    *a3 = -1LL;
    *a2 = (char *)0xFFFF800000000000LL;
  }
  return result;
}
