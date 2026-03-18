/*
 * XREFs of GreGdoDeviceIoControlEx @ 0x1C00BA670
 * Callers:
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00ADCA4 (DrvSetWddmDeviceMonitorPowerState.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C004D920 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 */

__int64 __fastcall GreGdoDeviceIoControlEx(
        struct _DEVICE_OBJECT *a1,
        ULONG a2,
        void *a3,
        ULONG a4,
        PVOID a5,
        ULONG a6,
        unsigned int *a7,
        BOOLEAN a8)
{
  return GreDeviceIoControlImpl(a1, a2, a3, a4, a5, a6, a7, a8, 1);
}
