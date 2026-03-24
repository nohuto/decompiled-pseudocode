/*
 * XREFs of KbdSendConnectRequest @ 0x1C000DD80
 * Callers:
 *     KeyboardAddDeviceEx @ 0x1C000DB20 (KeyboardAddDeviceEx.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00060F8 (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall KbdSendConnectRequest(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v3; // rdx
  IRP *v4; // rax
  __int64 v5; // rdx
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  __int64 InputBuffer; // [rsp+60h] [rbp-38h] BYREF
  __int64 **(__fastcall *v9)(__int64, char *, int, _DWORD *); // [rsp+68h] [rbp-30h]
  struct _KEVENT Event; // [rsp+70h] [rbp-28h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&Event, 0, sizeof(Event));
  InputBuffer = 0LL;
  v9 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 3LL);
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 16);
  InputBuffer = *(_QWORD *)(a1 + 8);
  v9 = KeyboardClassServiceCallback;
  v4 = IoBuildDeviceIoControlRequest(0xB0203u, v3, &InputBuffer, 0x10u, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( !v4 )
  {
    result = -1073741670;
    goto LABEL_6;
  }
  result = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 16), v4);
  if ( result != 259 )
  {
LABEL_6:
    IoStatusBlock.Status = result;
    goto LABEL_7;
  }
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  result = IoStatusBlock.Status;
LABEL_7:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v5) = 5;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v5, 3LL);
      return IoStatusBlock.Status;
    }
  }
  return result;
}
