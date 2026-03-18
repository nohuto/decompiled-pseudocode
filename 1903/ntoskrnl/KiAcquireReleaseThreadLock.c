/*
 * XREFs of KiAcquireReleaseThreadLock @ 0x140081B38
 * Callers:
 *     KeRundownApcQueues @ 0x14060D84C (KeRundownApcQueues.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAcquireReleaseThreadLock(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v6; // rcx
  int v7; // eax
  int v8; // eax
  struct _KPRCB *v9; // rcx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF
  int v11; // [rsp+30h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  _InterlockedOr(v10, 0);
  if ( *(_QWORD *)(a1 + 64) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v7 = SchedulerAssist[5];
          SchedulerAssist[5] = v7 + 1;
          if ( v7 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v6 = CurrentPrcb->SchedulerAssist;
      if ( v6 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v8 = v6[5] - 1;
          v6[5] = v8;
          if ( !v8 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v11);
      while ( *(_QWORD *)(a1 + 64) );
    }
    KiReleaseThreadLockSafe(a1);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v9 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v9);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
