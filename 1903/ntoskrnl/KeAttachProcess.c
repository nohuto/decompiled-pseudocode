/*
 * XREFs of KeAttachProcess @ 0x14012FB00
 * Callers:
 *     KiCompleteKernelInit @ 0x1405A1ABC (KiCompleteKernelInit.c)
 *     PopGracefulShutdown @ 0x1405AC870 (PopGracefulShutdown.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiAttachProcess @ 0x14003A440 (KiAttachProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __stdcall KeAttachProcess(PRKPROCESS Process)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KPROCESS *v3; // r8
  unsigned __int8 ApcStateIndex; // dl
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = CurrentThread->ApcState.Process;
  if ( v3 != Process )
  {
    ApcStateIndex = CurrentThread->ApcStateIndex;
    if ( ApcStateIndex || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 || (*(_DWORD *)&Process->0 & 0x400) != 0 )
      KeBugCheckEx(5u, (ULONG_PTR)Process, (ULONG_PTR)v3, ApcStateIndex, KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
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
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
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
      while ( CurrentThread->ThreadLock );
    }
    KiAttachProcess((__int64)CurrentThread, (__int64)Process, CurrentIrql, 0, (__int64)&CurrentThread->600);
  }
}
