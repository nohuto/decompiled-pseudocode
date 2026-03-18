/*
 * XREFs of PpmCheckContinueExecution @ 0x1400BCA00
 * Callers:
 *     PpmPerfAction @ 0x1400BC600 (PpmPerfAction.c)
 *     PpmPerfControlActionCallback @ 0x1402F6F60 (PpmPerfControlActionCallback.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400BCAF0 (KiInsertQueueDpc.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1400BE420 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KeSubtractAffinityEx @ 0x1400BEDF0 (KeSubtractAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x1400F8FD0 (PoCopyDeepIdleMask.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KeFindFirstSetRightAffinityEx @ 0x1402A4DF0 (KeFindFirstSetRightAffinityEx.c)
 */

__int64 PpmCheckContinueExecution()
{
  __int64 Number; // rax
  int v2; // eax
  _BYTE *v3; // rcx
  _BYTE v4[176]; // [rsp+30h] [rbp-C8h] BYREF

  memset(v4, 0, 0xA8uLL);
  KeQuerySystemAllowedCpuSetAffinity(PpmCachedSystemAllowedCpuSet, &PpmCachedSystemAllowedCpuSetVersion);
  Number = KeGetCurrentPrcb()->Number;
  if ( ((PpmCachedSystemAllowedCpuSet[((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6)
                                    + 1] >> (KiProcessorIndexToNumberMappingTable[Number] & 0x3F)) & 1) == 0 )
  {
    PoCopyDeepIdleMask(v4);
    v2 = KeSubtractAffinityEx(PpmCachedSystemAllowedCpuSet, v4, v4);
    v3 = v4;
    if ( !v2 )
      v3 = PpmCachedSystemAllowedCpuSet;
    LOWORD(Number) = KeFindFirstSetRightAffinityEx(v3);
  }
  if ( !qword_140439618 )
    word_1404395E2 = Number + 1280;
  return KiInsertQueueDpc((ULONG_PTR)&PpmCheckDpc, 0);
}
