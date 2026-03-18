/*
 * XREFs of ?FxLibraryCleanup@@YAXXZ @ 0x1C002E988
 * Callers:
 *     DriverEntry @ 0x1C002F080 (DriverEntry.c)
 *     DriverUnload @ 0x1C002F2E0 (DriverUnload.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000459C (-FxPoolFree@@YAXPEAX@Z.c)
 */

void FxLibraryCleanup(void)
{
  if ( *(_QWORD *)&WPP_GLOBAL_WDF_Control.DeviceType )
  {
    IoDeleteDevice(*(PDEVICE_OBJECT *)&WPP_GLOBAL_WDF_Control.DeviceType);
    *(_QWORD *)&WPP_GLOBAL_WDF_Control.DeviceType = 0LL;
  }
  if ( qword_1C00AEEE8 )
  {
    FxPoolFree((FX_POOL_TRACKER *)qword_1C00AEEE8);
    qword_1C00AEEE8 = 0LL;
  }
}
