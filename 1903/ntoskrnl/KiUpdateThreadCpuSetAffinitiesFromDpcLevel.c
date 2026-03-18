/*
 * XREFs of KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1401966B4
 * Callers:
 *     KeUpdateThreadCpuSets @ 0x1401964C4 (KeUpdateThreadCpuSets.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x140196668 (KiUpdateThreadCpuSetAffinitiesProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiSendSoftwareInterrupt @ 0x14012C798 (KiSendSoftwareInterrupt.c)
 *     KiUpdateThreadCpuSets @ 0x140196754 (KiUpdateThreadCpuSets.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x14032DACC (EtwTraceIdealProcessor.c)
 */

int __fastcall KiUpdateThreadCpuSetAffinitiesFromDpcLevel(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  unsigned int v6; // esi
  __int64 updated; // rax
  unsigned int v8; // ebp
  __int64 v9; // rbx
  int result; // eax
  __int64 v11; // rdx
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // [rsp+30h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v16 = 0;
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
      KeYieldProcessorEx(&v16);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v6 = *(_DWORD *)(a1 + 588);
  updated = KiUpdateThreadCpuSets(a1, a2);
  v8 = *(_DWORD *)(a1 + 588);
  v9 = updated;
  result = KiReleaseThreadLockSafe(a1);
  if ( (xmmword_140572410 & 0x8000000) != 0 )
    result = EtwTraceIdealProcessor(a1, 1350LL, v6, v8);
  if ( v9 )
  {
    v15 = *(unsigned int *)(v9 + 36);
    result = KeGetPcr()->Prcb.Number;
    if ( result != (_DWORD)v15 )
    {
      LOBYTE(v11) = 2;
      return KiSendSoftwareInterrupt(v15, v11);
    }
  }
  return result;
}
