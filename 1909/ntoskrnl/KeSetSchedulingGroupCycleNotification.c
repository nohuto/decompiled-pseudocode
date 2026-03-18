/*
 * XREFs of KeSetSchedulingGroupCycleNotification @ 0x14012E7EC
 * Callers:
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KeSetSchedulingGroupCycleNotification(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // si
  __int64 *v6; // r12
  __int64 v7; // r13
  _QWORD *v8; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v10; // rbp
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  struct _KPRCB *v18; // rcx
  int v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+68h] [rbp+10h]

  v20 = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v6 = KiProcessorBlock;
      v7 = (unsigned int)KeNumberProcessors_0;
      v8 = (_QWORD *)(a1 + 128);
      do
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = 0;
        v10 = *v6;
        while ( 1 )
        {
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v15 = SchedulerAssist[5];
              SchedulerAssist[5] = v15 + 1;
              if ( v15 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v10 + 48), 0LL) )
            break;
          v14 = CurrentPrcb->SchedulerAssist;
          if ( v14 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v16 = v14[5] - 1;
              v14[5] = v16;
              if ( !v16 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v19);
          while ( *(_QWORD *)(v10 + 48) );
        }
        v8[5] = *v8;
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 48), 0LL);
        v12 = KeGetCurrentPrcb();
        v13 = v12->SchedulerAssist;
        if ( v13 )
        {
          if ( v12->NestingLevel <= 1u )
          {
            v17 = v13[5] - 1;
            v13[5] = v17;
            if ( !v17 )
              KiRemoveSystemWorkPriorityKick(v12);
          }
        }
        ++v6;
        v8 += 53;
        --v7;
      }
      while ( v7 );
    }
    *(_QWORD *)(a1 + 72) = v20;
    _InterlockedExchange64((volatile __int64 *)(a1 + 32), a3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v18 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v18);
    }
    __writecr8(CurrentIrql);
  }
}
