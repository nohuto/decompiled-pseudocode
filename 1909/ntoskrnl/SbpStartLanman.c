/*
 * XREFs of SbpStartLanman @ 0x140A3FC9C
 * Callers:
 *     IopInitializeBootDrivers @ 0x140A10C08 (IopInitializeBootDrivers.c)
 * Callees:
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x14009AEF0 (IoBuildDeviceIoControlRequest.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IoGetDeviceObjectPointer @ 0x1406907A0 (IoGetDeviceObjectPointer.c)
 */

__int64 SbpStartLanman()
{
  char *v0; // rsi
  void *OutputBuffer; // rdi
  NTSTATUS DeviceObjectPointer; // eax
  PFILE_OBJECT v3; // r14
  NTSTATUS Status; // ebx
  char *PoolWithTag; // rax
  struct _DEVICE_OBJECT *v6; // r15
  PIRP v7; // rax
  IRP *v8; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char *v10; // rax
  PIRP v11; // rax
  IRP *v12; // rdx
  struct _IO_STACK_LOCATION *v13; // rax
  struct _KEVENT Object; // [rsp+58h] [rbp-39h] BYREF
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-19h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-9h] BYREF
  _BYTE InputBuffer[40]; // [rsp+90h] [rbp-1h] BYREF

  memset(&Object, 0, sizeof(Object));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(InputBuffer, 0, 0x24uLL);
  FileObject = 0LL;
  v0 = 0LL;
  OutputBuffer = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(
                          (PUNICODE_STRING)&LanmanRedirectorName,
                          0x10000000u,
                          &FileObject,
                          &DeviceObject);
  v3 = FileObject;
  Status = DeviceObjectPointer;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_12;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x8CuLL, 0x42626D53u);
  OutputBuffer = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_3;
  *((_DWORD *)PoolWithTag + 15) = -1;
  *((_DWORD *)PoolWithTag + 4) = 5;
  *(_DWORD *)PoolWithTag = 3600;
  *((_DWORD *)PoolWithTag + 2) = 16;
  *((_DWORD *)PoolWithTag + 1) = 250;
  *((_DWORD *)PoolWithTag + 3) = 600;
  *((_DWORD *)PoolWithTag + 5) = 45;
  *((_DWORD *)PoolWithTag + 9) = 10;
  *((_DWORD *)PoolWithTag + 6) = 512;
  *((_DWORD *)PoolWithTag + 7) = 17;
  *((_DWORD *)PoolWithTag + 8) = 6144;
  *((_DWORD *)PoolWithTag + 10) = 500;
  *((_DWORD *)PoolWithTag + 12) = 500;
  *((_DWORD *)PoolWithTag + 11) = 10;
  *((_DWORD *)PoolWithTag + 14) = 45;
  *((_DWORD *)PoolWithTag + 18) = 5;
  *((_DWORD *)PoolWithTag + 13) = 40;
  *((_DWORD *)PoolWithTag + 16) = 3;
  *((_DWORD *)PoolWithTag + 17) = 20;
  *(_QWORD *)(PoolWithTag + 76) = 60LL;
  *((_DWORD *)PoolWithTag + 21) = 1;
  *((_DWORD *)PoolWithTag + 22) = 1;
  *((_DWORD *)PoolWithTag + 23) = 1;
  *((_DWORD *)PoolWithTag + 24) = 1;
  *((_DWORD *)PoolWithTag + 25) = 1;
  *((_DWORD *)PoolWithTag + 26) = 1;
  *((_DWORD *)PoolWithTag + 27) = 1;
  *((_DWORD *)PoolWithTag + 28) = 1;
  *((_DWORD *)PoolWithTag + 29) = 1;
  *((_DWORD *)PoolWithTag + 30) = 1;
  *((_DWORD *)PoolWithTag + 31) = 1;
  *((_DWORD *)PoolWithTag + 32) = 1;
  *(_QWORD *)(PoolWithTag + 132) = 1LL;
  Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
  Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
  LOWORD(Object.Header.Lock) = 1;
  Object.Header.Size = 6;
  Object.Header.SignalState = 0;
  memset(InputBuffer, 0, 0x24uLL);
  v6 = DeviceObject;
  v7 = IoBuildDeviceIoControlRequest(
         0x80140191,
         DeviceObject,
         InputBuffer,
         0x24u,
         OutputBuffer,
         0x8Cu,
         0,
         &Object,
         &IoStatusBlock);
  v8 = v7;
  if ( !v7 )
    goto LABEL_3;
  CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].FileObject = v3;
  CurrentStackLocation[-1].MajorFunction = 13;
  Status = IofCallDriver(v6, v8);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    v10 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x76uLL, 0x42626D53u);
    v0 = v10;
    if ( v10 )
    {
      memset(v10, 0, 0x76uLL);
      v0[65] |= 1u;
      *((_DWORD *)v0 + 17) = -1;
      *((_WORD *)v0 + 6) = 94;
      v0[84] = 1;
      v0[64] = 31;
      *((_DWORD *)v0 + 19) = 30;
      *((_WORD *)v0 + 43) = 26;
      *((_DWORD *)v0 + 20) = 30;
      *((_DWORD *)v0 + 8) = 20;
      *((_DWORD *)v0 + 10) = 20;
      *((_DWORD *)v0 + 6) = 30;
      *((_DWORD *)v0 + 18) = 10;
      *((_DWORD *)v0 + 5) = 120;
      *((_DWORD *)v0 + 7) = 0x8000;
      *((_DWORD *)v0 + 9) = 5;
      *((_DWORD *)v0 + 11) = 2048;
      *((_DWORD *)v0 + 12) = 32;
      *((_DWORD *)v0 + 13) = 512;
      *((_DWORD *)v0 + 14) = 0x1000000;
      *((_DWORD *)v0 + 15) = 0x100000;
      *(_OWORD *)(v0 + 88) = *(_OWORD *)L"\\Device\\vmsmb";
      *((_QWORD *)v0 + 13) = *(_QWORD *)L"vmsmb";
      *((_WORD *)v0 + 56) = aDeviceVmsmb[12];
      Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
      Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
      LOWORD(Object.Header.Lock) = 1;
      Object.Header.Size = 6;
      Object.Header.SignalState = 0;
      v11 = IoBuildDeviceIoControlRequest(0x1403A0u, v6, v0, 0x76u, 0LL, 0, 0, &Object, &IoStatusBlock);
      v12 = v11;
      if ( v11 )
      {
        v13 = v11->Tail.Overlay.CurrentStackLocation;
        v13[-1].FileObject = v3;
        v13[-1].MajorFunction = 13;
        Status = IofCallDriver(v6, v12);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        goto LABEL_12;
      }
    }
LABEL_3:
    Status = -1073741670;
  }
LABEL_12:
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( OutputBuffer )
    ExFreePoolWithTag(OutputBuffer, 0x42626D53u);
  if ( v0 )
    ExFreePoolWithTag(v0, 0x42626D53u);
  return (unsigned int)Status;
}
