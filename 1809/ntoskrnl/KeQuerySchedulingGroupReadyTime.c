/*
 * XREFs of KeQuerySchedulingGroupReadyTime @ 0x1401265C4
 * Callers:
 *     PspQueryJobHierarchyAccountingInformation @ 0x1405FE228 (PspQueryJobHierarchyAccountingInformation.c)
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQuerySchedulingGroupReadyTime(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // r14
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v10; // rbp
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v12; // rcx
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  struct _KPRCB *v18; // rcx
  int v19; // [rsp+58h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  v4 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v5 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v6 = KiProcessorBlock;
    v7 = a1 + 128;
    v8 = (unsigned int)KeNumberProcessors_0;
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
          KeYieldProcessorEx(&v19, v4, a3);
        while ( *(_QWORD *)(v10 + 48) );
      }
      v5 += *(_QWORD *)(v7 + 56);
      if ( (*(_BYTE *)(v7 + 112) & 1) != 0 )
        v5 += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v7 + 64);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 48), 0LL);
      v12 = KeGetCurrentPrcb();
      v4 = (__int64)v12->SchedulerAssist;
      if ( v4 )
      {
        if ( v12->NestingLevel <= 1u )
        {
          v17 = *(_DWORD *)(v4 + 20) - 1;
          *(_DWORD *)(v4 + 20) = v17;
          if ( !v17 )
            KiRemoveSystemWorkPriorityKick(v12);
        }
      }
      ++v6;
      v7 += 424LL;
      --v8;
    }
    while ( v8 );
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v18 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v18);
  }
  __writecr8(CurrentIrql);
  return v5;
}
