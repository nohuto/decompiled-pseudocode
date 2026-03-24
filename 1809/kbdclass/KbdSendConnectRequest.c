/*
 * XREFs of KbdSendConnectRequest @ 0x1C000CC50
 * Callers:
 *     KeyboardAddDeviceEx @ 0x1C000CA20 (KeyboardAddDeviceEx.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005B2C (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall KbdSendConnectRequest(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v3; // rdx
  IRP *v4; // rax
  __int64 v5; // rdx
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  _QWORD InputBuffer[2]; // [rsp+60h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-28h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 3LL);
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 16);
  InputBuffer[0] = *(_QWORD *)(a1 + 8);
  InputBuffer[1] = KeyboardClassServiceCallback;
  v4 = IoBuildDeviceIoControlRequest(0xB0203u, v3, InputBuffer, 0x10u, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( !v4 )
  {
    result = -1073741670;
    goto LABEL_5;
  }
  result = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 16), v4);
  if ( result != 259 )
  {
LABEL_5:
    IoStatusBlock.Status = result;
    goto LABEL_6;
  }
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  result = IoStatusBlock.Status;
LABEL_6:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v5, 3LL);
    return IoStatusBlock.Status;
  }
  return result;
}
