/*
 * XREFs of UsbhAcpiEnumChildren @ 0x1C0020088
 * Callers:
 *     UsbhGetAcpiPortAttributes @ 0x1C001FFE0 (UsbhGetAcpiPortAttributes.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhAcpiEnumChildren(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 OutputBufferLength; // rbp
  PDEVICE_OBJECT *v5; // rsi
  IRP *v6; // rbx
  NTSTATUS Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF
  _QWORD InputBuffer[2]; // [rsp+78h] [rbp-30h] BYREF

  OutputBufferLength = a3;
  v5 = (PDEVICE_OBJECT *)FdoExt(a1);
  InputBuffer[1] = 0LL;
  InputBuffer[0] = 0x148696541LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = IoBuildDeviceIoControlRequest(
         0x32C020u,
         v5[151],
         InputBuffer,
         0x10u,
         a2,
         OutputBufferLength,
         0,
         &Event,
         &IoStatusBlock);
  if ( !v6 )
    return 3221225626LL;
  ObfReferenceObject(v5[151]);
  Status = IofCallDriver(v5[151], v6);
  if ( Status == 259 )
  {
    Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( !Status )
      Status = IoStatusBlock.Status;
  }
  ObfDereferenceObject(v5[151]);
  if ( (_DWORD)OutputBufferLength == 20 )
  {
    if ( Status != -2147483643 || *a2 != 1198089537 || a2[1] < 0x14u )
      return 3222536207LL;
  }
  else if ( Status >= 0 && (*a2 != 1198089537 || !a2[1] || IoStatusBlock.Information != OutputBufferLength) )
  {
    return 3222536207LL;
  }
  return (unsigned int)Status;
}
