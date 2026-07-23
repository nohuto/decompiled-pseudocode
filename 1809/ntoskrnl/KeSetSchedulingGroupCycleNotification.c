/*
 * XREFs of KeSetSchedulingGroupCycleNotification @ 0x140131404
 * Callers:
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KeSetSchedulingGroupCycleNotification(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // rdx
  __int64 *v7; // r12
  __int64 v8; // r13
  _QWORD *v9; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v11; // rbp
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v13; // rcx
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
    v6 = 2LL;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v7 = KiProcessorBlock;
      v8 = (unsigned int)KeNumberProcessors_0;
      v9 = (_QWORD *)(a1 + 128);
      do
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = 0;
        v11 = *v7;
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
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v11 + 48), 0LL) )
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
            KeYieldProcessorEx(&v19, v6, a3);
          while ( *(_QWORD *)(v11 + 48) );
        }
        v9[5] = *v9;
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 48), 0LL);
        v13 = KeGetCurrentPrcb();
        v6 = (__int64)v13->SchedulerAssist;
        if ( v6 )
        {
          if ( v13->NestingLevel <= 1u )
          {
            v17 = *(_DWORD *)(v6 + 20) - 1;
            *(_DWORD *)(v6 + 20) = v17;
            if ( !v17 )
              KiRemoveSystemWorkPriorityKick(v13);
          }
        }
        ++v7;
        v9 += 53;
        --v8;
      }
      while ( v8 );
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
