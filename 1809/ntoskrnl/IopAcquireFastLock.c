/*
 * XREFs of IopAcquireFastLock @ 0x14008C84C
 * Callers:
 *     BuildQueryDirectoryIrp @ 0x1405FA710 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406B9D00 (NtNotifyChangeDirectoryFileEx.c)
 * Callees:
 *     ObpIncrPointerCount @ 0x14005B360 (ObpIncrPointerCount.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     ObpPushStackInfo @ 0x1402D2F68 (ObpPushStackInfo.c)
 */

char __fastcall IopAcquireFastLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 116), 1) )
  {
    KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
    return 0;
  }
  else
  {
    v2 = (volatile signed __int64 *)(a1 - 48);
    if ( ObpTraceFlags )
      ObpPushStackInfo(a1 - 48);
    ObpIncrPointerCount(v2);
    return 1;
  }
}
