/*
 * XREFs of KeCountSetBitsAffinityEx @ 0x140098BB0
 * Callers:
 *     KiForwardTick @ 0x140036140 (KiForwardTick.c)
 *     KeFlushProcessWriteBuffers @ 0x140098C58 (KeFlushProcessWriteBuffers.c)
 *     PpmParkReportParkedCores @ 0x14011EAE0 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x140120E80 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x140120ED0 (PpmParkReportUnparkedCores.c)
 *     KeSynchronizeAddressPolicy @ 0x14012F6AC (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x14013A030 (KeSynchronizeSecurityDomain.c)
 *     PpmPerfApplyProcessorStates @ 0x1401760B0 (PpmPerfApplyProcessorStates.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140194D64 (PpmHeteroUpdateHgsConfiguration.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x1402B2500 (KiForceIdleUpdateSchedulerParkState.c)
 *     KiInitializeKernel @ 0x1405A1220 (KiInitializeKernel.c)
 *     PpmIdleInitializeConcurrency @ 0x140777CF8 (PpmIdleInitializeConcurrency.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCountSetBitsAffinityEx(_WORD *a1)
{
  unsigned __int16 v1; // ax
  unsigned int v2; // r8d
  unsigned __int64 *v3; // rcx
  __int64 v4; // r9
  unsigned __int64 v5; // rdx

  v1 = *a1;
  v2 = 0;
  if ( *a1 )
  {
    v3 = (unsigned __int64 *)(a1 + 4);
    v4 = v1;
    do
    {
      v5 = *v3++;
      v2 += (unsigned int)((0x101010101010101LL
                          * ((((v5 - ((v5 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v5 - ((v5 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v5 - ((v5 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v5 - ((v5 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
