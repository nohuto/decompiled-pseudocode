/*
 * XREFs of KeRemoveQueueDpc @ 0x1401329C0
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x14056B040 (KiCalibrateTimeAdjustment.c)
 *     EtwpFreeLoggerContext @ 0x1406C08C0 (EtwpFreeLoggerContext.c)
 *     IoDisconnectInterrupt @ 0x140710370 (IoDisconnectInterrupt.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x1401329E0 (KeRemoveQueueDpcEx.c)
 */

BOOLEAN __stdcall KeRemoveQueueDpc(PRKDPC Dpc)
{
  return KeRemoveQueueDpcEx(Dpc, 0LL);
}
