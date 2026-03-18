/*
 * XREFs of KeAlertThread @ 0x1400AEA00
 * Callers:
 *     KeRequestTerminationThread @ 0x1400AE89C (KeRequestTerminationThread.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x140135C50 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     IoDecrementKeepAliveCount @ 0x140299730 (IoDecrementKeepAliveCount.c)
 *     KeAlertResumeThread @ 0x1402A4884 (KeAlertResumeThread.c)
 *     NtAlertThread @ 0x1408CAFA0 (NtAlertThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x14005BDF0 (KiSignalThread.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeAlertThread(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *SchedulerAssist; // rcx
  char v7; // si
  char v9; // al
  _DWORD *v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // [rsp+68h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = SchedulerAssist[5];
        SchedulerAssist[5] = v11 + 1;
        if ( v11 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v10 = CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = v10[5] - 1;
        v10[5] = v12;
        if ( !v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v13);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v7 = *(_BYTE *)(a2 + a1 + 114);
  if ( !v7 )
  {
    if ( *(_BYTE *)(a1 + 388) != 5
      || (unsigned __int8)((*(_BYTE *)(a1 + 112) & 7) - 3) <= 1u
      || (*(_DWORD *)(a1 + 116) & 0x10) == 0
      || a2 > *(char *)(a1 + 391)
      || (v9 = KiSignalThread((__int64)CurrentPrcb, a1, 257LL, 0LL), *(_BYTE *)(a1 + 112) |= 0x80u, !v9) )
    {
      *(_BYTE *)(a2 + a1 + 114) = 1;
    }
  }
  KiReleaseThreadLockSafe(a1);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 2u, CurrentIrql);
  return v7;
}
