/*
 * XREFs of KiResetGlobalDpcWatchdogProfiler @ 0x140109A48
 * Callers:
 *     KeAccumulateTicks @ 0x140033360 (KeAccumulateTicks.c)
 *     MiWalkPageTablesRecursively @ 0x1400494A0 (MiWalkPageTablesRecursively.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 *     MiProbeAndLockPages @ 0x14008E9A0 (MiProbeAndLockPages.c)
 *     KiExpireTimer2 @ 0x1400BF760 (KiExpireTimer2.c)
 *     MiQueryAddressState @ 0x1400C63D0 (MiQueryAddressState.c)
 *     MiDispatchFault @ 0x1400CBFD0 (MiDispatchFault.c)
 *     MiGetPageChain @ 0x1400CF700 (MiGetPageChain.c)
 *     KeShouldYieldProcessor @ 0x140109950 (KeShouldYieldProcessor.c)
 *     KiDpcWatchdog @ 0x140109A20 (KiDpcWatchdog.c)
 *     KeRelaxTimingConstraints @ 0x1402A3174 (KeRelaxTimingConstraints.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
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
