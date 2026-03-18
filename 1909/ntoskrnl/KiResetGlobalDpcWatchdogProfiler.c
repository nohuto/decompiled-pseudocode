/*
 * XREFs of KiResetGlobalDpcWatchdogProfiler @ 0x140108A18
 * Callers:
 *     KeAccumulateTicks @ 0x140033750 (KeAccumulateTicks.c)
 *     MiWalkPageTablesRecursively @ 0x140049540 (MiWalkPageTablesRecursively.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400577E0 (MiDecommitPages.c)
 *     KiExpireTimer2 @ 0x14009F5E0 (KiExpireTimer2.c)
 *     MiQueryAddressState @ 0x1400A6250 (MiQueryAddressState.c)
 *     MiDispatchFault @ 0x1400ABE50 (MiDispatchFault.c)
 *     MiGetPageChain @ 0x1400AF580 (MiGetPageChain.c)
 *     MiProbeAndLockPages @ 0x1400CBF90 (MiProbeAndLockPages.c)
 *     KeShouldYieldProcessor @ 0x140108920 (KeShouldYieldProcessor.c)
 *     KiDpcWatchdog @ 0x1401089F0 (KiDpcWatchdog.c)
 *     KeRelaxTimingConstraints @ 0x1402A2ED4 (KeRelaxTimingConstraints.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 */

void *__fastcall KiResetGlobalDpcWatchdogProfiler(__int64 a1)
{
  void *v1; // r9
  void *result; // rax
  __int64 v3; // r8

  v1 = *(void **)(a1 + 25000);
  if ( v1 && *(void **)(a1 + 25008) != v1 )
  {
    result = (void *)*(unsigned int *)(a1 + 22772);
    if ( *(_DWORD *)(a1 + 22764) < (int)result )
    {
      v3 = (unsigned int)KiDpcWatchdogProfileArrayLength;
      *(_QWORD *)(a1 + 25008) = v1;
      return memset(v1, 0, 8 * v3);
    }
  }
  return result;
}
