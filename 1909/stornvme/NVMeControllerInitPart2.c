/*
 * XREFs of NVMeControllerInitPart2 @ 0x1C000B078
 * Callers:
 *     NVMeHwInitialize @ 0x1C0008470 (NVMeHwInitialize.c)
 *     NVMeHwPassiveInitialize @ 0x1C0008520 (NVMeHwPassiveInitialize.c)
 *     NVMeControllerPowerUp @ 0x1C000B450 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000B6BC (NVMeControllerReset.c)
 * Callees:
 *     NVMeEnableThrottling @ 0x1C0005340 (NVMeEnableThrottling.c)
 *     GetInterruptMessageInformation @ 0x1C0008D70 (GetInterruptMessageInformation.c)
 *     InitializePerfOptions @ 0x1C0009510 (InitializePerfOptions.c)
 *     IoQueuesCreation @ 0x1C000965C (IoQueuesCreation.c)
 *     IoQueuesInitialize @ 0x1C0009C0C (IoQueuesInitialize.c)
 *     IoReservedQueuesInitialize @ 0x1C000A164 (IoReservedQueuesInitialize.c)
 *     IoSqToIoCqMapping @ 0x1C000A270 (IoSqToIoCqMapping.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000BA8C (NVMeInitHostMemoryBuffer.c)
 *     NVMeInitStreams @ 0x1C000BD00 (NVMeInitStreams.c)
 *     NVMeLogEtwControllerInfo @ 0x1C000BF18 (NVMeLogEtwControllerInfo.c)
 *     NVMeLogTelemetryControllerInfo @ 0x1C000C56C (NVMeLogTelemetryControllerInfo.c)
 *     NVMeStartAsyncEventCommands @ 0x1C000DA18 (NVMeStartAsyncEventCommands.c)
 *     NVMeBuildPollingConfiguration @ 0x1C0013FC8 (NVMeBuildPollingConfiguration.c)
 *     NVMeConfigAsyncEvent @ 0x1C0014144 (NVMeConfigAsyncEvent.c)
 *     NVMeGetCommandEffectsLog @ 0x1C0014F10 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetTemperatureThreshold @ 0x1C00153CC (NVMeGetTemperatureThreshold.c)
 *     NVMeSetArbitration @ 0x1C0017E98 (NVMeSetArbitration.c)
 *     NVMeSetInterruptCoalescing @ 0x1C0018258 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetIoQueueCount @ 0x1C001836C (NVMeSetIoQueueCount.c)
 *     NVMeSyncHostTime @ 0x1C00189F8 (NVMeSyncHostTime.c)
 */

char __fastcall NVMeControllerInitPart2(__int64 a1, char a2)
{
  char result; // al

  if ( a2 )
  {
    if ( !GetInterruptMessageInformation(a1) )
    {
      *(_DWORD *)(a1 + 24) = 11;
LABEL_32:
      StorPortNotification(4108LL, a1, 0LL);
      return 0;
    }
    NVMeBuildPollingConfiguration(a1);
  }
  NVMeSetIoQueueCount(a1);
  if ( !*(_WORD *)(a1 + 274) || !*(_WORD *)(a1 + 272) )
  {
    *(_DWORD *)(a1 + 24) = 12;
    goto LABEL_32;
  }
  if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
  {
    NVMeSetInterruptCoalescing(a1);
    if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
      NVMeSetArbitration(a1);
  }
  if ( a2 )
  {
    if ( !InitializePerfOptions(a1) )
    {
      *(_DWORD *)(a1 + 272) = 0;
      *(_DWORD *)(a1 + 24) = 21;
      goto LABEL_32;
    }
    if ( !IoQueuesInitialize(a1) )
    {
      *(_DWORD *)(a1 + 24) = 13;
      goto LABEL_32;
    }
    if ( !*(_BYTE *)(a1 + 16) && *(_WORD *)(a1 + 806) && !IoReservedQueuesInitialize(a1) )
    {
      *(_DWORD *)(a1 + 24) = 17;
      goto LABEL_32;
    }
    IoSqToIoCqMapping(a1);
  }
  if ( !IoQueuesCreation(a1) )
  {
    *(_DWORD *)(a1 + 24) = 14;
    goto LABEL_32;
  }
  NVMeGetCommandEffectsLog(a1);
  if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
  {
    NVMeGetTemperatureThreshold(a1);
    if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
    {
      NVMeConfigAsyncEvent(a1);
      if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
        NVMeStartAsyncEventCommands(a1);
    }
  }
  NVMeInitHostMemoryBuffer(a1);
  if ( (*(_BYTE *)(a1 + 3712) & 5) == 5 )
    NVMeInitStreams(a1);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1536) + 520LL) & 0x40) != 0 )
    NVMeSyncHostTime(a1);
  NVMeLogEtwControllerInfo(a1);
  NVMeLogTelemetryControllerInfo(a1);
  NVMeEnableThrottling(a1);
  *(_DWORD *)(a1 + 20) |= 0x201u;
  result = 1;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
