/*
 * XREFs of VidSchiDelayReadyRoutine @ 0x1C0011580
 * Callers:
 *     VidSchiCancelDelayTimerContext @ 0x1C0011508 (VidSchiCancelDelayTimerContext.c)
 * Callees:
 *     VidSchiUnwaitContext @ 0x1C0012350 (VidSchiUnwaitContext.c)
 */

void __fastcall VidSchiDelayReadyRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(DeferredContext[12] + 24LL);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1648), &LockHandle);
  if ( (DeferredContext[23] & 0x40) != 0 )
  {
    *((_DWORD *)DeferredContext + 46) &= ~0x40u;
    if ( (unsigned __int8)VidSchiUnwaitContext(DeferredContext, 25903LL, v6, v7) )
    {
      *(_QWORD *)(v5 + 1144) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v5 + 1112), 0, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
