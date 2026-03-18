/*
 * XREFs of KeQuerySchedulingGroupReadyTime @ 0x140126110
 * Callers:
 *     PspQueryJobHierarchyAccountingInformation @ 0x14061251C (PspQueryJobHierarchyAccountingInformation.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQuerySchedulingGroupReadyTime(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r14
  __int64 v2; // rsi
  __int64 *v3; // r15
  __int64 v4; // rdi
  __int64 v5; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v7; // rbp
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v9; // rcx
  _DWORD *v10; // rdx
  _DWORD *v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  struct _KPRCB *v16; // rcx
  int v17; // [rsp+58h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v2 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v3 = KiProcessorBlock;
    v4 = a1 + 128;
    v5 = (unsigned int)KeNumberProcessors_0;
    do
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v17 = 0;
      v7 = *v3;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v13 = SchedulerAssist[5];
            SchedulerAssist[5] = v13 + 1;
            if ( v13 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
          break;
        v12 = CurrentPrcb->SchedulerAssist;
        if ( v12 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v14 = v12[5] - 1;
            v12[5] = v14;
            if ( !v14 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v17);
        while ( *(_QWORD *)(v7 + 48) );
      }
      v2 += *(_QWORD *)(v4 + 56);
      if ( (*(_BYTE *)(v4 + 112) & 1) != 0 )
        v2 += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v4 + 64);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
      v9 = KeGetCurrentPrcb();
      v10 = v9->SchedulerAssist;
      if ( v10 )
      {
        if ( v9->NestingLevel <= 1u )
        {
          v15 = v10[5] - 1;
          v10[5] = v15;
          if ( !v15 )
            KiRemoveSystemWorkPriorityKick(v9);
        }
      }
      ++v3;
      v4 += 424LL;
      --v5;
    }
    while ( v5 );
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v16 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v16);
  }
  __writecr8(CurrentIrql);
  return v2;
}
