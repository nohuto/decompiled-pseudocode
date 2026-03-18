/*
 * XREFs of EtwpSynchronizeWithElevatedIrqlLogging @ 0x1408FAAB4
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406AC3AC (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeGenericCallDpc @ 0x1400FCC10 (KeGenericCallDpc.c)
 */

char EtwpSynchronizeWithElevatedIrqlLogging()
{
  return KeGenericCallDpc((__int64)EtwpSynchronizationDpc, 0LL);
}
