/*
 * XREFs of PnpDeviceCompletionRequestCreate @ 0x1406E9330
 * Callers:
 *     PipEnumerateDevice @ 0x1406E91B0 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1406ECCFC (PnpStartDeviceNode.c)
 * Callees:
 *     PnpAllocateWatchdog @ 0x140005D1C (PnpAllocateWatchdog.c)
 *     PnpEnableDeviceCompletionQueueWatchdog @ 0x14015A460 (PnpEnableDeviceCompletionQueueWatchdog.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpDeviceCompletionRequestCreate(__int64 a1, int a2)
{
  _QWORD *PoolWithTag; // rax
  __int64 v5; // rbx
  PVOID Watchdog; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x31706E50u);
  v5 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = PoolWithTag;
    *PoolWithTag = PoolWithTag;
    *((_DWORD *)PoolWithTag + 9) = 0;
    PoolWithTag[3] = 0LL;
    PoolWithTag[6] = 0LL;
    *((_DWORD *)PoolWithTag + 14) = 1;
    PoolWithTag[2] = a1;
    *((_DWORD *)PoolWithTag + 8) = a2;
    *((_DWORD *)PoolWithTag + 10) = -1073741595;
    Watchdog = PnpAllocateWatchdog();
    *(_QWORD *)(v5 + 120) = Watchdog;
    if ( Watchdog )
      PnpEnableDeviceCompletionQueueWatchdog(v5);
  }
  return v5;
}
