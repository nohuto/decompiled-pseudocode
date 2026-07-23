/*
 * XREFs of KiAcquirePrcbLock @ 0x14028F350
 * Callers:
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x140058D60 (KeRemoveQueueEx.c)
 *     KiBeginThreadWait @ 0x14008B1B0 (KiBeginThreadWait.c)
 *     KeRemovePriQueue @ 0x1400B60E0 (KeRemovePriQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAcquirePrcbLock(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 SchedulerAssist; // rdx
  int v6; // eax
  bool v7; // zf
  __int64 result; // rax
  _DWORD *v9; // rcx
  int v10; // eax
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // [rsp+30h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v13 = 0;
  SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
  if ( !SchedulerAssist || CurrentPrcb->NestingLevel > 1u )
    goto LABEL_6;
  v6 = *(_DWORD *)(SchedulerAssist + 20);
  v7 = v6 == -1;
  result = (unsigned int)(v6 + 1);
  *(_DWORD *)(SchedulerAssist + 20) = result;
LABEL_4:
  if ( v7 )
    result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
LABEL_6:
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    v9 = CurrentPrcb->SchedulerAssist;
    if ( v9 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = v9[5] - 1;
        v9[5] = v10;
        if ( !v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
    {
      KeYieldProcessorEx(&v13, SchedulerAssist, a3);
      result = *(_QWORD *)(a1 + 48);
    }
    while ( result );
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 && CurrentPrcb->NestingLevel <= 1u )
    {
      v12 = v11[5];
      v7 = v12 == -1;
      result = (unsigned int)(v12 + 1);
      v11[5] = result;
      goto LABEL_4;
    }
  }
  return result;
}
