/*
 * XREFs of KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x14018CB74
 * Callers:
 *     KeUpdateThreadCpuSets @ 0x14018C98C (KeUpdateThreadCpuSets.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x14018CB28 (KiUpdateThreadCpuSetAffinitiesProcess.c)
 * Callees:
 *     KiSendSoftwareInterrupt @ 0x140003AE4 (KiSendSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiUpdateThreadCpuSets @ 0x14018CC14 (KiUpdateThreadCpuSets.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x14030FFFC (EtwTraceIdealProcessor.c)
 */

int __fastcall KiUpdateThreadCpuSetAffinitiesFromDpcLevel(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  unsigned int v7; // esi
  __int64 updated; // rax
  unsigned int v9; // ebp
  __int64 v10; // rbx
  int result; // eax
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  int v15; // [rsp+30h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v15 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = SchedulerAssist[5];
        SchedulerAssist[5] = v12 + 1;
        if ( v12 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v13 = CurrentPrcb->SchedulerAssist;
    if ( v13 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = v13[5] - 1;
        v13[5] = v14;
        if ( !v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v15, a2, a3);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v7 = *(_DWORD *)(a1 + 588);
  updated = KiUpdateThreadCpuSets(a1, a2);
  v9 = *(_DWORD *)(a1 + 588);
  v10 = updated;
  result = KiReleaseThreadLockSafe(a1);
  if ( (xmmword_140542350 & 0x8000000) != 0 )
    result = EtwTraceIdealProcessor(a1, 1350LL, v7, v9);
  if ( v10 )
  {
    result = KeGetPcr()->Prcb.Number;
    if ( result != *(_DWORD *)(v10 + 36) )
      return KiSendSoftwareInterrupt();
  }
  return result;
}
