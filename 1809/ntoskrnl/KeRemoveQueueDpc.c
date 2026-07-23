/*
 * XREFs of KeRemoveQueueDpc @ 0x140132AB0
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x14056C040 (KiCalibrateTimeAdjustment.c)
 *     EtwpFreeLoggerContext @ 0x1406C1B40 (EtwpFreeLoggerContext.c)
 *     IoDisconnectInterrupt @ 0x1407115F0 (IoDisconnectInterrupt.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x140132AD0 (KeRemoveQueueDpcEx.c)
 */

BOOLEAN __stdcall KeRemoveQueueDpc(PRKDPC Dpc)
{
  return KeRemoveQueueDpcEx(Dpc, 0LL);
}
