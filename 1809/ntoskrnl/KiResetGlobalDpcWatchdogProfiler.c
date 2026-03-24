/*
 * XREFs of KiResetGlobalDpcWatchdogProfiler @ 0x1400FB3C8
 * Callers:
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MiDispatchFault @ 0x140045FD0 (MiDispatchFault.c)
 *     MiGetPageChain @ 0x140049670 (MiGetPageChain.c)
 *     KeAccumulateTicks @ 0x1400601D0 (KeAccumulateTicks.c)
 *     MiDecommitPages @ 0x140068950 (MiDecommitPages.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE80 (MiWalkPageTablesRecursively.c)
 *     MiGetWorkingSetInfoList @ 0x1400965F0 (MiGetWorkingSetInfoList.c)
 *     KeShouldYieldProcessor @ 0x1400F9CE0 (KeShouldYieldProcessor.c)
 *     KiDpcWatchdog @ 0x1400FAF40 (KiDpcWatchdog.c)
 *     KiExpireTimer2 @ 0x1400FB900 (KiExpireTimer2.c)
 *     KeRelaxTimingConstraints @ 0x14028D0D4 (KeRelaxTimingConstraints.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 */

__int64 __fastcall KiResetGlobalDpcWatchdogProfiler(__int64 a1)
{
  void *v1; // r9
  __int64 result; // rax
  __int64 v3; // r8

  v1 = *(void **)(a1 + 25000);
  if ( v1 && *(void **)(a1 + 25008) != v1 )
  {
    result = *(unsigned int *)(a1 + 22772);
    if ( *(_DWORD *)(a1 + 22764) < (int)result )
    {
      v3 = (unsigned int)KiDpcWatchdogProfileArrayLength;
      *(_QWORD *)(a1 + 25008) = v1;
      return (__int64)memset(v1, 0, 8 * v3);
    }
  }
  return result;
}
