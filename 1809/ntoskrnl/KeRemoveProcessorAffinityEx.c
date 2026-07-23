/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x1400EDAF0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14005DC80 (PpmIdleExecuteTransition.c)
 *     KxFlushSingleTb @ 0x1400ECF40 (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1400ED078 (KeFlushProcessWriteBuffers.c)
 *     KxFlushNonGlobalTb @ 0x1400ED2A0 (KxFlushNonGlobalTb.c)
 *     KiCheckKeepAlive @ 0x1400EDA68 (KiCheckKeepAlive.c)
 *     PpmParkUnblockIdle @ 0x1401223D0 (PpmParkUnblockIdle.c)
 *     KeSynchronizeAddressPolicy @ 0x14012DD18 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x14013853C (KeSynchronizeSecurityDomain.c)
 *     PpmPerfApplyProcessorStates @ 0x140175290 (PpmPerfApplyProcessorStates.c)
 *     KxFlushEntireTb @ 0x140187998 (KxFlushEntireTb.c)
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x1402971B8 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x140297BA0 (KiSendFreeze.c)
 *     PpmUnlockProcessors @ 0x1402D6180 (PpmUnlockProcessors.c)
 *     PnprQuiesceProcessors @ 0x14057B720 (PnprQuiesceProcessors.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1408BC73C (EtwpGetMicroarchitecturalPmcAffinity.c)
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
