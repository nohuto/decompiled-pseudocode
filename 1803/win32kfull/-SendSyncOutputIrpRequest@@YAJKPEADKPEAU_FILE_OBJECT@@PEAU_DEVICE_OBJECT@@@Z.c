/*
 * XREFs of ?SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0101960
 * Callers:
 *     ?IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01017E4 (-IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SendSyncOutputIrpRequest(
        ULONG IoControlCode,
        PLARGE_INTEGER Timeout,
        ULONG OutputBufferLength,
        struct _FILE_OBJECT *a4,
        struct _DEVICE_OBJECT *DeviceObject)
{
  unsigned int v9; // ebp
  PIRP v10; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  v9 = -1073741668;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v10 = IoBuildDeviceIoControlRequest(
          IoControlCode,
          DeviceObject,
          0LL,
          0,
          Timeout,
          OutputBufferLength,
          0,
          &Object,
          &IoStatusBlock);
  if ( v10 )
  {
    v10->Tail.Overlay.CurrentStackLocation[-1].FileObject = a4;
    v9 = IofCallDriver(DeviceObject, v10);
    if ( v9 == 259 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      return (unsigned int)IoStatusBlock.Status;
    }
  }
  return v9;
}
