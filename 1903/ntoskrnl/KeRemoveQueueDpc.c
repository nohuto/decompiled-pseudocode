/*
 * XREFs of KeRemoveQueueDpc @ 0x140108E20
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x14059AE90 (KiCalibrateTimeAdjustment.c)
 *     EtwpFreeLoggerContext @ 0x1406B717C (EtwpFreeLoggerContext.c)
 *     IoDisconnectInterrupt @ 0x140741080 (IoDisconnectInterrupt.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x140108E40 (KeRemoveQueueDpcEx.c)
 */

BOOLEAN __stdcall KeRemoveQueueDpc(PRKDPC Dpc)
{
  return KeRemoveQueueDpcEx(Dpc, 0LL);
}
