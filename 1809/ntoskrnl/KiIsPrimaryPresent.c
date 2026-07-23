/*
 * XREFs of KiIsPrimaryPresent @ 0x14029D6F4
 * Callers:
 *     KiParkUmsThread @ 0x14029D8B0 (KiParkUmsThread.c)
 *     NtUmsThreadYield @ 0x140846E30 (NtUmsThreadYield.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiIsPrimaryPresent(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r14
  char v4; // bp
  _QWORD *Object; // r13
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  struct _KPRCB *v15; // rcx
  bool v18; // [rsp+70h] [rbp+18h]
  int v19; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v18 = 0;
  Object = CurrentThread->WaitBlock[3].Object;
  v7 = Object[4];
  v8 = Object[5];
  if ( !v7 || !v8 )
    return v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v19 = 0;
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
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      break;
    v13 = CurrentPrcb->SchedulerAssist;
    if ( v13 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = v13[5] - 1;
        v13[5] = v14;
        if ( !v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v19, a2, a3);
    while ( CurrentThread->ThreadLock );
  }
  if ( CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v7 )
    v18 = !_interlockedbittestandset((volatile signed __int32 *)v7, 7u);
  KiReleaseThreadLockSafe((__int64)CurrentThread);
  if ( v18 )
  {
    if ( *(_QWORD *)(v7 + 24) != v8 || *(_DWORD *)(v8 - 72) != *((_DWORD *)Object + 6) )
      goto LABEL_28;
    if ( a1 )
    {
      if ( *(_QWORD *)(v8 + 16) )
      {
        v4 = 0;
        goto LABEL_28;
      }
      *(_QWORD *)(v8 + 24) = a2;
      *(_QWORD *)(v8 + 16) = a1;
    }
    v4 = 1;
LABEL_28:
    _InterlockedAnd((volatile signed __int32 *)v7, 0xFFFFFF7F);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v15 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v15);
  }
  __writecr8(CurrentIrql);
  return v4;
}
