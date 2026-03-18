/*
 * XREFs of EtwpUnlockBufferList @ 0x1400039C4
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140003444 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x140003774 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x140003928 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpReserveTraceBuffer @ 0x1400C31E0 (EtwpReserveTraceBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x140108A64 (EtwpAllocateFreeBuffers.c)
 *     EtwpEnqueueOverflowBuffer @ 0x14013C8DC (EtwpEnqueueOverflowBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x14033389C (EtwpDequeueBufferPendingCompression.c)
 *     EtwpReenableCompression @ 0x140333F60 (EtwpReenableCompression.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall EtwpUnlockBufferList(__int64 a1, unsigned __int8 *a2)
{
  bool v2; // zf
  KSPIN_LOCK *v3; // rcx
  unsigned __int8 v4; // bl
  __int64 v5; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = *(_DWORD *)(a1 + 316) == 1;
  v3 = (KSPIN_LOCK *)(a1 + 712);
  if ( v2 )
    return ExReleasePushLockEx((ULONG_PTR)v3, 0LL);
  v4 = *a2;
  KxReleaseSpinLock(v3);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb, v5);
  }
  result = v4;
  __writecr8(v4);
  return result;
}
