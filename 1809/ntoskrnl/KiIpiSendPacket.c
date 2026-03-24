/*
 * XREFs of KiIpiSendPacket @ 0x1400ED104
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x1400D1D80 (KeQueryTotalCycleTimeThread.c)
 *     KeFlushProcessWriteBuffers @ 0x1400ECFF8 (KeFlushProcessWriteBuffers.c)
 *     KeSynchronizeAddressPolicy @ 0x14012DC48 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x14013843C (KeSynchronizeSecurityDomain.c)
 *     KeUpdateThreadTag @ 0x14013E7F0 (KeUpdateThreadTag.c)
 *     KeIpiGenericCall @ 0x140175930 (KeIpiGenericCall.c)
 *     KeFlushRsb @ 0x1402954C0 (KeFlushRsb.c)
 *     KiSynchronizeStibpPairing @ 0x140295794 (KiSynchronizeStibpPairing.c)
 *     KiInitializeDynamicProcessorDpc @ 0x14057B260 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiSendRequest @ 0x1400ED370 (KiIpiSendRequest.c)
 */

__int64 __fastcall KiIpiSendPacket(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  v7[1] = a5;
  v7[3] = a3;
  v7[0] = a4;
  v7[2] = a6;
  return KiIpiSendRequest((unsigned int)KeGetCurrentPrcb(), a1, a2, (unsigned int)v7, 0, 5LL);
}
