/*
 * XREFs of PopCaptureTimeOnProcZero @ 0x1405960F0
 * Callers:
 *     PopDiagComputeEarlyHiberStats @ 0x140596040 (PopDiagComputeEarlyHiberStats.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PopDiagTraceHiberStats @ 0x140726B70 (PopDiagTraceHiberStats.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeInitializeDpc @ 0x140098B70 (KeInitializeDpc.c)
 *     KeInsertQueueDpc @ 0x14009C950 (KeInsertQueueDpc.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 PopCaptureTimeOnProcZero()
{
  struct _KEVENT Event; // [rsp+30h] [rbp-9h] BYREF
  struct _KDPC Dpc; // [rsp+50h] [rbp+17h] BYREF
  __int64 SystemArgument1; // [rsp+A0h] [rbp+67h] BYREF

  memset(&Event, 0, sizeof(Event));
  memset(&Dpc, 0, sizeof(Dpc));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PopTimestampTargetProcessor, 0LL);
  Dpc.Importance = 2;
  if ( !Dpc.DpcData )
    Dpc.Number = 1280;
  KeInsertQueueDpc(&Dpc, &SystemArgument1, &Event);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return SystemArgument1;
}
