/*
 * XREFs of EtwpLockBufferList @ 0x140003A94
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140003444 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x140003800 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1400039AC (EtwpEnqueueAvailableBuffer.c)
 *     EtwpReserveTraceBuffer @ 0x1400A3060 (EtwpReserveTraceBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x1400FCE88 (EtwpAllocateFreeBuffers.c)
 *     EtwpEnqueueOverflowBuffer @ 0x14013CEBC (EtwpEnqueueOverflowBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x1403332FC (EtwpDequeueBufferPendingCompression.c)
 *     EtwpReenableCompression @ 0x1403339C0 (EtwpReenableCompression.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 */

void __fastcall EtwpLockBufferList(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // r9

  if ( *(_DWORD *)(a1 + 316) == 1 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 712, 0LL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    *a2 = CurrentIrql;
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 712));
  }
}
