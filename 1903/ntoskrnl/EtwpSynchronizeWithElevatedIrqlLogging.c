/*
 * XREFs of EtwpSynchronizeWithElevatedIrqlLogging @ 0x1408FB0D4
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406B717C (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeGenericCallDpc @ 0x1400F9170 (KeGenericCallDpc.c)
 */

char EtwpSynchronizeWithElevatedIrqlLogging()
{
  return KeGenericCallDpc((__int64)EtwpSynchronizationDpc, 0LL);
}
