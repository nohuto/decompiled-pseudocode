/*
 * XREFs of KiIsPrimaryPresent @ 0x1402B5F70
 * Callers:
 *     KiParkUmsThread @ 0x1402B6130 (KiParkUmsThread.c)
 *     NtUmsThreadYield @ 0x1408811D0 (NtUmsThreadYield.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiIsPrimaryPresent(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r14
  char v3; // bp
  _QWORD *Object; // r13
  __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v11; // eax
  _DWORD *v12; // rcx
  int v13; // eax
  struct _KPRCB *v14; // rcx
  bool v17; // [rsp+70h] [rbp+18h]
  int v18; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v17 = 0;
  Object = CurrentThread->WaitBlock[3].Object;
  v6 = Object[4];
  v7 = Object[5];
  if ( !v6 || !v7 )
    return v3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = SchedulerAssist[5];
        SchedulerAssist[5] = v11 + 1;
        if ( v11 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      break;
    v12 = CurrentPrcb->SchedulerAssist;
    if ( v12 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = v12[5] - 1;
        v12[5] = v13;
        if ( !v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v18);
    while ( CurrentThread->ThreadLock );
  }
  if ( CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v6 )
    v17 = !_interlockedbittestandset((volatile signed __int32 *)v6, 7u);
  KiReleaseThreadLockSafe((__int64)CurrentThread);
  if ( v17 )
  {
    if ( *(_QWORD *)(v6 + 24) != v7 || *(_DWORD *)(v7 - 72) != *((_DWORD *)Object + 6) )
      goto LABEL_28;
    if ( a1 )
    {
      if ( *(_QWORD *)(v7 + 16) )
      {
        v3 = 0;
        goto LABEL_28;
      }
      *(_QWORD *)(v7 + 24) = a2;
      *(_QWORD *)(v7 + 16) = a1;
    }
    v3 = 1;
LABEL_28:
    _InterlockedAnd((volatile signed __int32 *)v6, 0xFFFFFF7F);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v14 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v14);
  }
  __writecr8(CurrentIrql);
  return v3;
}
