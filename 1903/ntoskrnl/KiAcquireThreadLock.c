/*
 * XREFs of KiAcquireThreadLock @ 0x1401BE710
 * Callers:
 *     KeDeleteMutant @ 0x140014474 (KeDeleteMutant.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAcquireThreadLock(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rdx
  int v4; // eax
  bool v5; // zf
  __int64 result; // rax
  _DWORD *v7; // rcx
  int v8; // eax
  _DWORD *v9; // rcx
  int v10; // eax
  int v11; // [rsp+30h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v11 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( !SchedulerAssist || CurrentPrcb->NestingLevel > 1u )
    goto LABEL_6;
  v4 = SchedulerAssist[5];
  v5 = v4 == -1;
  result = (unsigned int)(v4 + 1);
  SchedulerAssist[5] = result;
LABEL_4:
  if ( v5 )
    result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_6:
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    v7 = CurrentPrcb->SchedulerAssist;
    if ( v7 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v8 = v7[5] - 1;
        v7[5] = v8;
        if ( !v8 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
    {
      KeYieldProcessorEx(&v11);
      result = *(_QWORD *)(a1 + 64);
    }
    while ( result );
    v9 = CurrentPrcb->SchedulerAssist;
    if ( v9 && CurrentPrcb->NestingLevel <= 1u )
    {
      v10 = v9[5];
      v5 = v10 == -1;
      result = (unsigned int)(v10 + 1);
      v9[5] = result;
      goto LABEL_4;
    }
  }
  return result;
}
