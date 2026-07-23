/*
 * XREFs of PnpSetTargetDeviceRemove @ 0x1406EFF30
 * Callers:
 *     PnpRequestDeviceRemoval @ 0x1406F04AC (PnpRequestDeviceRemoval.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140751DB0 (PiDevCfgProcessDeviceCallback.c)
 *     IoRequestDeviceRemovalForReset @ 0x1408279B0 (IoRequestDeviceRemovalForReset.c)
 *     IopRetryDeviceRemovalForReset @ 0x140827DB0 (IopRetryDeviceRemovalForReset.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14083DBA4 (PnpQueueQueryAndRemoveEvent.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     PnpInsertEventInQueue @ 0x140590ED8 (PnpInsertEventInQueue.c)
 *     PnpAllocateCriticalMemory @ 0x1406EFE04 (PnpAllocateCriticalMemory.c)
 *     PnpInitializeTargetDeviceRemoveEvent @ 0x1406F008C (PnpInitializeTargetDeviceRemoveEvent.c)
 */

__int64 __fastcall PnpSetTargetDeviceRemove(
        _QWORD *Object,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        _DWORD *a11,
        __int64 a12,
        __int64 a13,
        __int64 *a14)
{
  __int64 v15; // rcx
  unsigned int v18; // ebp
  PVOID CriticalMemory; // rax
  __int64 v20; // rbx

  v15 = 0LL;
  if ( a11 )
    *a11 = 259;
  if ( PnpShutdownEvent.Header.SignalState && !_InterlockedCompareExchange64(&PnpDeviceActionThread, 0LL, 0LL) )
    return 3221225865LL;
  if ( Object )
    v15 = *(_QWORD *)(Object[39] + 40LL);
  v18 = *(unsigned __int16 *)(v15 + 40) + 194;
  CriticalMemory = PnpAllocateCriticalMemory(a2 != 0 ? 3 : 0, PagedPool, v18, 0x4B706E50u);
  v20 = (__int64)CriticalMemory;
  if ( !CriticalMemory )
    return 3221225626LL;
  memset(CriticalMemory, 0, v18);
  PnpInitializeTargetDeviceRemoveEvent((void *)v20, v18, Object, a3, a4, a5, a6, a7, a8, (__int64)a11, a12, a13);
  *(_QWORD *)(v20 + 32) = a9;
  *(_QWORD *)(v20 + 40) = a10;
  if ( a14 )
  {
    *a14 = v20;
    ++*(_DWORD *)(v20 + 64);
  }
  return PnpInsertEventInQueue(v20);
}
