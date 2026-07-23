/*
 * XREFs of IopAcquireFastLock @ 0x14008C83C
 * Callers:
 *     BuildQueryDirectoryIrp @ 0x1405FB710 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406BAF80 (NtNotifyChangeDirectoryFileEx.c)
 * Callees:
 *     ObpIncrPointerCount @ 0x14005B360 (ObpIncrPointerCount.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
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
