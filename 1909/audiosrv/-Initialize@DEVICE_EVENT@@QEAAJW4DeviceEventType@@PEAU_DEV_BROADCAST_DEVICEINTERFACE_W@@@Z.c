/*
 * XREFs of ?Initialize@DEVICE_EVENT@@QEAAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180112440
 * Callers:
 *     ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180112840 (-PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 * Callees:
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 */

__int64 __fastcall DEVICE_EVENT::Initialize(__int64 a1, int a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  void *v6; // rax

  v3 = 0;
  *(_DWORD *)(a1 + 8) = a2;
  if ( a3 )
  {
    v6 = malloc(*a3);
    *(_QWORD *)(a1 + 16) = v6;
    if ( v6 )
      memcpy_0(v6, a3, *a3);
    else
      return (unsigned int)-2147024882;
  }
  return v3;
}
