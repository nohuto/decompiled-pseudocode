/*
 * XREFs of RaidAdapterRestartQueues @ 0x1C0013C80
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0001FA0 (RaidAdapterDeferredRoutine.c)
 *     RaidUnitCompleteRequest @ 0x1C000B940 (RaidUnitCompleteRequest.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001221C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     StorPortAdapterActiveCondition @ 0x1C00212A0 (StorPortAdapterActiveCondition.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C00376A0 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterRestartDpcRoutine @ 0x1C0039270 (RaidAdapterRestartDpcRoutine.c)
 *     RaidAdapterSetPauseTimer @ 0x1C003A438 (RaidAdapterSetPauseTimer.c)
 *     RaidCompletionDpcRoutine @ 0x1C003A730 (RaidCompletionDpcRoutine.c)
 *     RaidPauseTimerDpcRoutine @ 0x1C003B3D0 (RaidPauseTimerDpcRoutine.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003B438 (RaidResumeAndRestartAdapterQueues.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C000D2EC (RaidRestartIoQueue.c)
 *     StorNextIoGatewayItem @ 0x1C0013D44 (StorNextIoGatewayItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RaidAdapterRestartQueues(__int64 a1, char a2)
{
  __int64 IoGatewayItem; // rax
  __int64 v5; // rcx
  _QWORD **v6; // rdi
  _QWORD *i; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v9[40]; // [rsp+48h] [rbp-30h] BYREF

  while ( 1 )
  {
    IoGatewayItem = StorNextIoGatewayItem((PKSPIN_LOCK)(a1 + 832));
    if ( !IoGatewayItem )
      break;
    v5 = *(_QWORD *)(*(_QWORD *)(IoGatewayItem - 120 + 184) + 32LL);
    (*(void (__fastcall **)(_QWORD, __int64, _BYTE *, _QWORD))(v5 + 648))(
      *(_QWORD *)(v5 + 640),
      IoGatewayItem - 120,
      v9,
      0LL);
  }
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  v6 = (_QWORD **)(a1 + 136);
  for ( i = *v6; i != v6; i = (_QWORD *)*i )
    RaidRestartIoQueue((__int64)(i - 7), 1);
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
