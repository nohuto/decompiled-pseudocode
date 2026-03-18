/*
 * XREFs of ?FreePointerDeviceIfSupported@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C0105510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FreePointerDeviceIfSupported(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  if ( (int)IsFreePointerDeviceSupported() >= 0 )
    FreePointerDevice(a1);
}
