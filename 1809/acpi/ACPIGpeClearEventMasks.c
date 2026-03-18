/*
 * XREFs of ACPIGpeClearEventMasks @ 0x1C002538C
 * Callers:
 *     ACPITableLoad @ 0x1C0024FF0 (ACPITableLoad.c)
 *     ACPITableUnload @ 0x1C005D7C0 (ACPITableUnload.c)
 * Callees:
 *     ACPIGpeEnableDisableEvents @ 0x1C0025D3C (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeClearRegisters @ 0x1C0026004 (ACPIGpeClearRegisters.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

void ACPIGpeClearEventMasks()
{
  KIRQL v0; // bl

  v0 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0LL);
  ACPIGpeClearRegisters();
  memset(GpeHandlerRegistered, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeEnable, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeCurEnable, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeWakeEnable, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeWakeHandler, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeSpecialHandler, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeRunMethod, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpePending, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeComplete, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeIsLevel, 0, *((unsigned __int16 *)AcpiInformation + 51));
  memset(GpeHandlerType, 0, *((unsigned __int16 *)AcpiInformation + 51));
  KeReleaseSpinLock(&GpeTableLock, v0);
}
