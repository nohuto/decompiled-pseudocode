/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x1400EDA70
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14005DC80 (PpmIdleExecuteTransition.c)
 *     KxFlushSingleTb @ 0x1400ECEC0 (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1400ECFF8 (KeFlushProcessWriteBuffers.c)
 *     KxFlushNonGlobalTb @ 0x1400ED220 (KxFlushNonGlobalTb.c)
 *     KiCheckKeepAlive @ 0x1400ED9E8 (KiCheckKeepAlive.c)
 *     PpmParkUnblockIdle @ 0x140122300 (PpmParkUnblockIdle.c)
 *     KeSynchronizeAddressPolicy @ 0x14012DC48 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x14013843C (KeSynchronizeSecurityDomain.c)
 *     PpmPerfApplyProcessorStates @ 0x140175190 (PpmPerfApplyProcessorStates.c)
 *     KxFlushEntireTb @ 0x140187858 (KxFlushEntireTb.c)
 *     KeBugCheck2 @ 0x140291190 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x140296FC8 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x1402979B0 (KiSendFreeze.c)
 *     PpmUnlockProcessors @ 0x1402D5F90 (PpmUnlockProcessors.c)
 *     PnprQuiesceProcessors @ 0x14057A720 (PnprQuiesceProcessors.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1408BB47C (EtwpGetMicroarchitecturalPmcAffinity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRemoveProcessorAffinityEx(unsigned __int16 *a1, int a2)
{
  unsigned int v2; // r9d
  __int64 result; // rax
  unsigned int v4; // edx

  v2 = KiProcessorIndexToNumberMappingTable[a2];
  result = *a1;
  v4 = v2 >> 6;
  if ( (unsigned int)result > v2 >> 6 )
  {
    result = *(_QWORD *)&a1[4 * v4 + 4] & ~(1LL << (v2 & 0x3F));
    *(_QWORD *)&a1[4 * v4 + 4] = result;
  }
  return result;
}
