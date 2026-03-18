/*
 * XREFs of PnpDeviceCompletionRequestCreate @ 0x1407043BC
 * Callers:
 *     PipEnumerateDevice @ 0x140704150 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x140719E1C (PnpStartDeviceNode.c)
 * Callees:
 *     PnpEnableWatchdog @ 0x1400EEF6C (PnpEnableWatchdog.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall PnpDeviceCompletionRequestCreate(__int64 a1, int a2)
{
  _QWORD *PoolWithTag; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x31706E50u);
  if ( PoolWithTag )
  {
    PoolWithTag[1] = PoolWithTag;
    *PoolWithTag = PoolWithTag;
    *((_DWORD *)PoolWithTag + 14) = 1;
    *((_DWORD *)PoolWithTag + 9) = 0;
    PoolWithTag[3] = 0LL;
    PoolWithTag[2] = a1;
    *((_DWORD *)PoolWithTag + 8) = a2;
    *((_DWORD *)PoolWithTag + 10) = -1073741595;
    PoolWithTag[6] = 0LL;
    PnpEnableWatchdog(PoolWithTag, 2u);
  }
  return PoolWithTag;
}
