/*
 * XREFs of ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180112840
 * Callers:
 *     ?OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1801127DC (-OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     ServiceDeviceEvent @ 0x180112928 (ServiceDeviceEvent.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180057130 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@DEVICE_EVENT@@QEAAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180112440 (-Initialize@DEVICE_EVENT@@QEAAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 */

__int64 __fastcall PostDeviceEvent(int a1, unsigned int *a2)
{
  _QWORD *v4; // rdi
  int v5; // ebx
  signed int LastError; // eax

  v4 = operator new(0x18uLL);
  if ( v4 )
  {
    *v4 = &DEVICE_EVENT::`vftable';
    v4[2] = 0LL;
    *((_DWORD *)v4 + 2) = 0;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    v5 = DEVICE_EVENT::Initialize((__int64)v4, a1, a2);
    if ( v5 >= 0 )
    {
      if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v4, 0LL) )
        return (unsigned int)v5;
      LastError = GetLastError();
      v5 = LastError;
      if ( LastError > 0 )
        v5 = (unsigned __int16)LastError | 0x80070000;
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 8LL))(v4, 1LL);
    return (unsigned int)v5;
  }
  return (unsigned int)-2147024882;
}
