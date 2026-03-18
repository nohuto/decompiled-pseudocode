/*
 * XREFs of NVMeControllerInitPart2 @ 0x1C000DC08
 * Callers:
 *     NVMeHwInitialize @ 0x1C000B1C0 (NVMeHwInitialize.c)
 *     NVMeHwPassiveInitialize @ 0x1C000B280 (NVMeHwPassiveInitialize.c)
 *     NVMeControllerPowerUp @ 0x1C000DE90 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000E108 (NVMeControllerReset.c)
 * Callees:
 *     GetInterruptMessageInformation @ 0x1C000BABC (GetInterruptMessageInformation.c)
 *     InitializePerfOptions @ 0x1C000C200 (InitializePerfOptions.c)
 *     IoQueuesCreation @ 0x1C000C350 (IoQueuesCreation.c)
 *     IoQueuesInitialize @ 0x1C000C854 (IoQueuesInitialize.c)
 *     IoReservedQueuesInitialize @ 0x1C000CDB0 (IoReservedQueuesInitialize.c)
 *     IoSqToIoCqMapping @ 0x1C000CEBC (IoSqToIoCqMapping.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000E4E8 (NVMeInitHostMemoryBuffer.c)
 *     NVMeInitStreams @ 0x1C000E75C (NVMeInitStreams.c)
 *     NVMeBuildPollingConfiguration @ 0x1C0014798 (NVMeBuildPollingConfiguration.c)
 *     NVMeSetArbitration @ 0x1C0017108 (NVMeSetArbitration.c)
 *     NVMeSetInterruptCoalescing @ 0x1C00174C4 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C00175D8 (NVMeSetIoQueueCount.c)
 */

char __fastcall NVMeControllerInitPart2(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  char v4; // di
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rdx

  v3 = a3;
  v4 = a2;
  if ( (_BYTE)a2 )
  {
    if ( !GetInterruptMessageInformation(a1) )
    {
      *(_DWORD *)(a1 + 24) = 11;
      return 0;
    }
    NVMeBuildPollingConfiguration(a1);
  }
  LOBYTE(a3) = v3;
  LOBYTE(a2) = v4 == 0;
  NVMeSetIoQueueCount(a1, a2, a3);
  if ( !*(_WORD *)(a1 + 266) || !*(_WORD *)(a1 + 264) )
  {
    *(_DWORD *)(a1 + 24) = 12;
    return 0;
  }
  if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
  {
    LOBYTE(v6) = v3;
    NVMeSetInterruptCoalescing(a1, v6);
    if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
    {
      LOBYTE(v8) = v3;
      NVMeSetArbitration(a1, v8);
    }
  }
  if ( v4 )
  {
    if ( !InitializePerfOptions(a1) )
    {
      *(_DWORD *)(a1 + 264) = 0;
      *(_DWORD *)(a1 + 24) = 21;
      return 0;
    }
    if ( !IoQueuesInitialize(a1) )
    {
      *(_DWORD *)(a1 + 24) = 13;
      return 0;
    }
    if ( !*(_BYTE *)(a1 + 16) && *(_WORD *)(a1 + 798) && !IoReservedQueuesInitialize(a1) )
    {
      *(_DWORD *)(a1 + 24) = 17;
      return 0;
    }
    IoSqToIoCqMapping(a1);
  }
  if ( !IoQueuesCreation(a1, v3, v7) )
  {
    *(_DWORD *)(a1 + 24) = 14;
    return 0;
  }
  NVMeInitHostMemoryBuffer(a1);
  if ( (*(_BYTE *)(a1 + 3704) & 5) == 5 )
  {
    LOBYTE(v9) = -1;
    NVMeInitStreams(a1, v9);
  }
  return 1;
}
