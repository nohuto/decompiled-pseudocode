/*
 * XREFs of KeRemoveQueueDpc @ 0x1400FD530
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x14059AE70 (KiCalibrateTimeAdjustment.c)
 *     EtwpFreeLoggerContext @ 0x1406AC3AC (EtwpFreeLoggerContext.c)
 *     IoDisconnectInterrupt @ 0x140742F80 (IoDisconnectInterrupt.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x1400FD550 (KeRemoveQueueDpcEx.c)
 */

BOOLEAN __stdcall KeRemoveQueueDpc(PRKDPC Dpc)
{
  return KeRemoveQueueDpcEx(Dpc, 0LL);
}
