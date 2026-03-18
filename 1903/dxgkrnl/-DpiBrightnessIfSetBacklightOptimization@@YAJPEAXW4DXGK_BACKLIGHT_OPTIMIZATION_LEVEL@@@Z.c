/*
 * XREFs of ?DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C02A7A90
 * Callers:
 *     <none>
 * Callees:
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0127548 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0127A14 (DpiReleaseCoreSyncAccessSafe.c)
 *     ?DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C02A7E90 (-DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATI.c)
 */

__int64 __fastcall DpiBrightnessIfSetBacklightOptimization(
        struct _DEVICE_OBJECT *a1,
        enum DXGK_BACKLIGHT_OPTIMIZATION_LEVEL a2)
{
  char *DeviceExtension; // rbp
  char *v3; // rsi
  int v7; // ebx

  DeviceExtension = (char *)a1->DeviceExtension;
  v3 = 0LL;
  if ( *((_WORD *)DeviceExtension + 2377) == 2 )
    v3 = DeviceExtension + 4752;
  if ( !v3 )
    return 3221225659LL;
  v7 = -1073741661;
  KeWaitForSingleObject(DeviceExtension + 4480, Executive, 0, 0, 0LL);
  if ( *((_QWORD *)v3 + 9) )
  {
    v7 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
    if ( v7 >= 0 )
    {
      v7 = DpiBrightnessSetBacklightOptimizationHelper(a1, a2);
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
    }
  }
  KeReleaseMutex((PRKMUTEX)DeviceExtension + 80, 0);
  return (unsigned int)v7;
}
