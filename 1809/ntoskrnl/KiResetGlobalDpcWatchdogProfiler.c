/*
 * XREFs of KiResetGlobalDpcWatchdogProfiler @ 0x1400FB448
 * Callers:
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MiDispatchFault @ 0x140045FD0 (MiDispatchFault.c)
 *     MiGetPageChain @ 0x140049670 (MiGetPageChain.c)
 *     KeAccumulateTicks @ 0x1400601D0 (KeAccumulateTicks.c)
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE70 (MiWalkPageTablesRecursively.c)
 *     MiGetWorkingSetInfoList @ 0x140096530 (MiGetWorkingSetInfoList.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     KiDpcWatchdog @ 0x1400FAFC0 (KiDpcWatchdog.c)
 *     KiExpireTimer2 @ 0x1400FB980 (KiExpireTimer2.c)
 *     KeRelaxTimingConstraints @ 0x14028D2C4 (KeRelaxTimingConstraints.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
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
