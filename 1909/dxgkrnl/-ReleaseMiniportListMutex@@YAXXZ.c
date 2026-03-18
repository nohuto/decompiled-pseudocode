/*
 * XREFs of ?ReleaseMiniportListMutex@@YAXXZ @ 0x1C0023240
 * Callers:
 *     DpiAddDevice @ 0x1C0165580 (DpiAddDevice.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x1C02A0970 (DpiFdoHandleQueryPowerRelations.c)
 * Callees:
 *     <none>
 */

void ReleaseMiniportListMutex(void)
{
  _InterlockedExchange64(&qword_1C00A2788, 0LL);
  KeReleaseMutex(Mutex, 0);
}
