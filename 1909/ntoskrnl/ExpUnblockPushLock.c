/*
 * XREFs of ExpUnblockPushLock @ 0x1400F8AC4
 * Callers:
 *     ExSweepSingleHandle @ 0x140082CD8 (ExSweepSingleHandle.c)
 *     MiUnlockImageSection @ 0x1400BBFFC (MiUnlockImageSection.c)
 *     ExBlockOnAddressPushLock @ 0x1400F8900 (ExBlockOnAddressPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1400F89E0 (ExTimedWaitForUnblockPushLock.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x14010E3EC (RtlpCSparseBitmapPageDecommit.c)
 *     CmpTryToRundownHive @ 0x1401129E0 (CmpTryToRundownHive.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x140112B90 (CmpDecrementAppHiveUnloadCount.c)
 *     ExUnblockPushLockEx @ 0x140112C20 (ExUnblockPushLockEx.c)
 *     ExUnblockOnAddressPushLockEx @ 0x1401C0820 (ExUnblockOnAddressPushLockEx.c)
 *     ExfUnblockPushLock @ 0x1401C0870 (ExfUnblockPushLock.c)
 *     IopCheckHandleForRevocation @ 0x140299B50 (IopCheckHandleForRevocation.c)
 *     PspHandleTableWalker @ 0x140307070 (PspHandleTableWalker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1400F89E0 (ExTimedWaitForUnblockPushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall ExpUnblockPushLock(volatile __int64 *a1, void *a2, char a3)
{
  char v3; // bp
  __int64 v4; // r9
  unsigned __int8 CurrentIrql; // bl
  __int64 v9; // rsi
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = 0;
  v4 = _InterlockedExchange64(a1, 0LL);
  CurrentIrql = 2;
  if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 24) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      }
    }
    do
    {
      v9 = *(_QWORD *)(v4 + 24);
      if ( (void *)v4 == a2 )
        v3 = 1;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)(v4 + 52), 1u) )
        KeSetEvent((PRKEVENT)v4, 1, 0);
      v4 = v9;
    }
    while ( v9 );
    if ( CurrentIrql != 2 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(CurrentIrql);
    }
  }
  if ( a2 && !v3 )
  {
    if ( a3 )
      KeWaitForSingleObject(a2, WrPushLock, 0, 0, 0LL);
    else
      ExTimedWaitForUnblockPushLock((__int64)a1, (char *)a2, 0LL);
  }
}
