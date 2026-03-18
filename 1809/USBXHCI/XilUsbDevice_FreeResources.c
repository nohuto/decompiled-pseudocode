/*
 * XREFs of XilUsbDevice_FreeResources @ 0x1C00346C0
 * Callers:
 *     XilUsbDevice_Create @ 0x1C00343E8 (XilUsbDevice_Create.c)
 *     UsbDevice_EvtUsbDeviceCleanupCallback @ 0x1C0035B90 (UsbDevice_EvtUsbDeviceCleanupCallback.c)
 * Callees:
 *     XilCoreUsbDevice_FreeResources @ 0x1C0043078 (XilCoreUsbDevice_FreeResources.c)
 */

__int64 __fastcall XilUsbDevice_FreeResources(__int64 a1)
{
  __int64 v2; // rcx

  v2 = a1 + 8;
  if ( !*(_BYTE *)(a1 + 49) )
    v2 = a1;
  return XilCoreUsbDevice_FreeResources(v2);
}
