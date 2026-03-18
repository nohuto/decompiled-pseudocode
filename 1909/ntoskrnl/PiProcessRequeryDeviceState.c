/*
 * XREFs of PiProcessRequeryDeviceState @ 0x140747AF8
 * Callers:
 *     PnpDeviceActionWorker @ 0x14015DBE0 (PnpDeviceActionWorker.c)
 * Callees:
 *     PiProcessQueryDeviceState @ 0x140703450 (PiProcessQueryDeviceState.c)
 */

__int64 __fastcall PiProcessRequeryDeviceState(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // rcx
  unsigned int v2; // ebx
  int v3; // eax

  v1 = *(struct _DEVICE_OBJECT **)(a1 + 16);
  v2 = 0;
  v3 = *((_DWORD *)v1->DeviceObjectExtension->DeviceNode + 75);
  if ( v3 == 776 )
  {
    PiProcessQueryDeviceState(v1);
  }
  else if ( (unsigned int)(v3 - 787) <= 1 )
  {
    return (unsigned int)-1073741738;
  }
  return v2;
}
