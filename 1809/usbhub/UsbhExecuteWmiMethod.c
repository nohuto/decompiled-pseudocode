/*
 * XREFs of UsbhExecuteWmiMethod @ 0x1C00524F0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall UsbhExecuteWmiMethod(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int *a8)
{
  unsigned int *v8; // rsi
  NTSTATUS v12; // ebx
  __int64 v13; // r15
  ULONG BufferUsed; // [rsp+70h] [rbp+18h] BYREF

  v8 = a8;
  BufferUsed = 0;
  v12 = -1073741163;
  Log((__int64)DeviceObject, 64, 1466788173, (__int64)Irp, (__int64)a8);
  v13 = a7;
  Log((__int64)DeviceObject, 64, 1466788145, a7, a6);
  Log((__int64)DeviceObject, 64, 1466788146, a3, 0LL);
  if ( FdoExt((__int64)DeviceObject)[340] == 5 )
  {
    if ( !a3 )
    {
      BufferUsed = 4;
      if ( a7 >= 4 )
      {
        if ( *v8 <= 0xB )
        {
          Log((__int64)DeviceObject, 64, 2003651889, (__int64)v8, v13);
          Log((__int64)DeviceObject, 64, 2003651890, (__int64)v8, (int)*v8);
          v12 = off_1C0060B28[2 * (int)*v8]((int)DeviceObject, a6, a7, (int)&BufferUsed, (__int64)v8);
        }
      }
      else
      {
        Log((__int64)DeviceObject, 64, 2003659041, (__int64)Irp, v13);
        v12 = -1073741789;
      }
    }
  }
  else
  {
    v12 = -1073741810;
  }
  Log((__int64)DeviceObject, 64, 1464682819, (__int64)Irp, v12);
  return WmiCompleteRequest(DeviceObject, Irp, v12, BufferUsed, 0);
}
