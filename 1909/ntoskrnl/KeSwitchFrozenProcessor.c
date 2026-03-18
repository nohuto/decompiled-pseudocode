/*
 * XREFs of KeSwitchFrozenProcessor @ 0x1402ADF80
 * Callers:
 *     KdpSendWaitContinue @ 0x140955ADC (KdpSendWaitContinue.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140005340 (KeQueryActiveProcessorCountEx.c)
 *     KiCheckStall @ 0x1402AE17C (KiCheckStall.c)
 *     KiSetDebuggerOwner @ 0x1402AE818 (KiSetDebuggerOwner.c)
 */

__int64 __fastcall KeSwitchFrozenProcessor(ULONG a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  volatile signed __int32 *SchedulerAssist; // rax
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rcx

  v1 = a1;
  if ( a1 < KeQueryActiveProcessorCountEx(0xFFFFu) && !PoAllProcIntrDisabled )
  {
    _mm_lfence();
    v2 = KiProcessorBlock[v1];
    if ( ((*(_DWORD *)(v2 + 11656) - 2) & 0xFFFFFFFD) == 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      KiSetDebuggerOwner(v2);
      if ( (CurrentPrcb->IpiFrozen & 0xF) == 2 )
        return 3LL;
      if ( (CurrentPrcb->IpiFrozen & 0xF) != 4 )
        return 0LL;
      SchedulerAssist = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
        _InterlockedOr(SchedulerAssist, 0x20000u);
      KeQueryPerformanceCounter(0LL);
      while ( CurrentPrcb != (struct _KPRCB *)KiDebuggerOwner )
      {
        LOBYTE(v6) = 1;
        KiCheckStall(CurrentPrcb, v6);
      }
      v7 = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( v7 )
        _InterlockedAnd(v7, 0xFFFDFFFF);
    }
  }
  return 2LL;
}
