/*
 * XREFs of ?FxLibraryCleanup@@YAXXZ @ 0x1C002F5AC
 * Callers:
 *     DriverEntry @ 0x1C002FC60 (DriverEntry.c)
 *     DriverUnload @ 0x1C002FEC0 (DriverUnload.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00054C8 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void FxLibraryCleanup(void)
{
  if ( *(_QWORD *)&WPP_GLOBAL_WDF_Control.DeviceType )
  {
    IoDeleteDevice(*(PDEVICE_OBJECT *)&WPP_GLOBAL_WDF_Control.DeviceType);
    *(_QWORD *)&WPP_GLOBAL_WDF_Control.DeviceType = 0LL;
  }
  if ( qword_1C00ABEB8 )
  {
    FxPoolFree((FX_POOL_TRACKER *)qword_1C00ABEB8);
    qword_1C00ABEB8 = 0LL;
  }
}
