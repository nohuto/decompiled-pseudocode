/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x1400BA2E0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140031530 (PpmIdleExecuteTransition.c)
 *     KxFlushSingleTb @ 0x14009F8A0 (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1400B8DE8 (KeFlushProcessWriteBuffers.c)
 *     KxFlushNonGlobalTb @ 0x1400B9C50 (KxFlushNonGlobalTb.c)
 *     KiIpiSendRequest @ 0x1400B9DD0 (KiIpiSendRequest.c)
 *     KiCheckKeepAlive @ 0x1400BACE0 (KiCheckKeepAlive.c)
 *     PpmParkUnblockIdle @ 0x140120130 (PpmParkUnblockIdle.c)
 *     KeSynchronizeAddressPolicy @ 0x14012ED98 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x140139958 (KeSynchronizeSecurityDomain.c)
 *     PpmPerfApplyProcessorStates @ 0x140175980 (PpmPerfApplyProcessorStates.c)
 *     KxFlushEntireTb @ 0x140187E68 (KxFlushEntireTb.c)
 *     KeBugCheck2 @ 0x1402A7B60 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x1402ADE20 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x1402AE848 (KiSendFreeze.c)
 *     PpmUnlockProcessors @ 0x1402F0664 (PpmUnlockProcessors.c)
 *     PnprQuiesceProcessors @ 0x1405AA568 (PnprQuiesceProcessors.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1408F8030 (EtwpGetMicroarchitecturalPmcAffinity.c)
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
