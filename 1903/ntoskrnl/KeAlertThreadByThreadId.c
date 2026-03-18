/*
 * XREFs of KeAlertThreadByThreadId @ 0x1401198BC
 * Callers:
 *     PsDispatchIumService @ 0x1403086B4 (PsDispatchIumService.c)
 *     NtAlertThreadByThreadId @ 0x1406C0150 (NtAlertThreadByThreadId.c)
 *     VslCallEnclave @ 0x14085174C (VslCallEnclave.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x14005BDF0 (KiSignalThread.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeAlertThreadByThreadId(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  char v5; // di
  char v6; // al
  _DWORD *v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // [rsp+40h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v9 = SchedulerAssist[5];
        SchedulerAssist[5] = v9 + 1;
        if ( v9 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v8 = CurrentPrcb->SchedulerAssist;
    if ( v8 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = v8[5] - 1;
        v8[5] = v10;
        if ( !v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v11);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x10) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    if ( *(_BYTE *)(a1 + 388) != 5
      || (unsigned __int8)((*(_BYTE *)(a1 + 112) & 7) - 3) <= 1u
      || *(_BYTE *)(a1 + 643) != 37
      || (v6 = KiSignalThread((__int64)CurrentPrcb, a1, 257LL, 0LL), *(_BYTE *)(a1 + 112) |= 0x80u, !v6) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 4u);
    }
  }
  KiReleaseThreadLockSafe(a1);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
  return v5;
}
