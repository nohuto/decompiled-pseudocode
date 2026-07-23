/*
 * XREFs of EtwpCovSampCaptureContextStop @ 0x1403169A0
 * Callers:
 *     EtwpCoverageSamplerStop @ 0x1408CA0F0 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x140316734 (EtwpCovSampCaptureCancelApcs.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x140316888 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x140316B40 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x1408C5604 (EtwpCovSampCaptureFreeLookasides.c)
 */

_QWORD *__fastcall EtwpCovSampCaptureContextStop(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  KSPIN_LOCK *v3; // rsi
  KIRQL v4; // al
  KIRQL v5; // bl
  __int64 *i; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  LARGE_INTEGER v8; // rbx
  void *v9; // rcx
  void *v10; // rcx
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (KSPIN_LOCK *)(a1 + 264);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 264));
  *(_DWORD *)(a1 + 912) = 0;
  v5 = v4;
  if ( *(_DWORD *)(a1 + 916) )
    *(_DWORD *)(a1 + 916) = 0;
  for ( i = *(__int64 **)(a1 + 576); i != (__int64 *)(a1 + 576); i = (__int64 *)*i )
  {
    *((_DWORD *)i + 6) = 0;
    *((_DWORD *)i + 7) = 0;
  }
  KeResetEvent((PRKEVENT)(a1 + 888));
  *(_DWORD *)(a1 + 920) = 0;
  KxReleaseSpinLock(v3);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v5);
  EtwpCovSampCaptureFlushSampleBuffers(a1);
  EtwpCovSampCaptureCleanupLookasides(a1);
  v8.QuadPart = -2500000LL;
LABEL_12:
  Timeout = v8;
  while ( KeWaitForSingleObject((PVOID)(a1 + 888), Executive, 0, 0, &Timeout) )
  {
    EtwpCovSampCaptureCancelApcs(a1);
    EtwpCovSampCaptureFlushSampleBuffers(a1);
    v8.QuadPart *= 2LL;
    Timeout = v8;
    if ( v8.QuadPart < -9600000000LL )
    {
      v8.QuadPart = -9600000000LL;
      goto LABEL_12;
    }
  }
  EtwpCovSampCaptureFreeLookasides(a1);
  v9 = *(void **)(a1 + 944);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x56777445u);
    *(_QWORD *)(a1 + 944) = 0LL;
  }
  v10 = *(void **)(a1 + 952);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x56777445u);
    *(_QWORD *)(a1 + 952) = 0LL;
  }
  *(_QWORD *)(a1 + 936) = 0LL;
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
