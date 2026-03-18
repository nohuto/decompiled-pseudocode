/*
 * XREFs of KiIpiSendPacket @ 0x140098DB4
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x140012DE0 (KeQueryTotalCycleTimeThread.c)
 *     KeFlushProcessWriteBuffers @ 0x140098C58 (KeFlushProcessWriteBuffers.c)
 *     KeSynchronizeAddressPolicy @ 0x14012F6AC (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x14013A030 (KeSynchronizeSecurityDomain.c)
 *     KeUpdateThreadTag @ 0x140142DA0 (KeUpdateThreadTag.c)
 *     KeIpiGenericCall @ 0x14017F990 (KeIpiGenericCall.c)
 *     KeFlushRsb @ 0x140180F18 (KeFlushRsb.c)
 *     KiSynchronizeStibpPairing @ 0x1402ABDAC (KiSynchronizeStibpPairing.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1405AB130 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiSendRequest @ 0x140099C40 (KiIpiSendRequest.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall KiIpiSendPacket(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  v7[1] = a5;
  v7[2] = a6;
  v7[0] = a4;
  v7[3] = a3;
  return KiIpiSendRequest((unsigned int)KeGetCurrentPrcb(), a1, a2, (unsigned int)v7, 5LL);
}
