/*
 * XREFs of ?ReleaseMiniportListMutex@@YAXXZ @ 0x1C00231F0
 * Callers:
 *     DpiAddDevice @ 0x1C01617D0 (DpiAddDevice.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x1C02A0560 (DpiFdoHandleQueryPowerRelations.c)
 * Callees:
 *     <none>
 */

void ReleaseMiniportListMutex(void)
{
  _InterlockedExchange64(&qword_1C00A2788, 0LL);
  KeReleaseMutex(Mutex, 0);
}
