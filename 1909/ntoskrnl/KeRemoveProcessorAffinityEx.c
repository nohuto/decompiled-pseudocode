/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x14009A150
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140031920 (PpmIdleExecuteTransition.c)
 *     KeFlushProcessWriteBuffers @ 0x140098C58 (KeFlushProcessWriteBuffers.c)
 *     KxFlushNonGlobalTb @ 0x140099AC0 (KxFlushNonGlobalTb.c)
 *     KiIpiSendRequest @ 0x140099C40 (KiIpiSendRequest.c)
 *     KiCheckKeepAlive @ 0x14009AB50 (KiCheckKeepAlive.c)
 *     KxFlushSingleTb @ 0x1400C59E0 (KxFlushSingleTb.c)
 *     PpmParkUnblockIdle @ 0x140120E80 (PpmParkUnblockIdle.c)
 *     KeSynchronizeAddressPolicy @ 0x14012F6AC (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x14013A030 (KeSynchronizeSecurityDomain.c)
 *     PpmPerfApplyProcessorStates @ 0x1401760B0 (PpmPerfApplyProcessorStates.c)
 *     KxFlushEntireTb @ 0x140188418 (KxFlushEntireTb.c)
 *     KeBugCheck2 @ 0x1402A78C0 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x1402ADB80 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x1402AE5A8 (KiSendFreeze.c)
 *     PpmUnlockProcessors @ 0x1402F03C4 (PpmUnlockProcessors.c)
 *     PnprQuiesceProcessors @ 0x1405AA548 (PnprQuiesceProcessors.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1408F7A14 (EtwpGetMicroarchitecturalPmcAffinity.c)
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
