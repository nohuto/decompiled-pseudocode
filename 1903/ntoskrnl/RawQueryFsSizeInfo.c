/*
 * XREFs of RawQueryFsSizeInfo @ 0x1408CDDA0
 * Callers:
 *     RawQueryVolumeInformation @ 0x1406AA948 (RawQueryVolumeInformation.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140037100 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     RawBeginOperation @ 0x140096F60 (RawBeginOperation.c)
 *     IoBuildDeviceIoControlRequest @ 0x1400BB080 (IoBuildDeviceIoControlRequest.c)
 *     RawEndOperation @ 0x1400FA0B8 (RawEndOperation.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall RawQueryFsSizeInfo(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  struct _DEVICE_OBJECT *v9; // rdi
  IRP *v10; // rax
  NTSTATUS Status; // ebx
  bool v12; // al
  IRP *v13; // rax
  NTSTATUS v14; // ecx
  IRP *v15; // rax
  NTSTATUS v16; // eax
  unsigned __int64 v17; // rcx
  LONGLONG v18; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-49h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-39h] BYREF
  LARGE_INTEGER OutputBuffer; // [rsp+78h] [rbp-21h] BYREF
  LARGE_INTEGER Timeout; // [rsp+80h] [rbp-19h] BYREF
  __int64 v23; // [rsp+88h] [rbp-11h]
  __int64 v24; // [rsp+90h] [rbp-9h]
  LARGE_INTEGER v25[4]; // [rsp+98h] [rbp-1h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  Timeout.QuadPart = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  memset(v25, 0, sizeof(v25));
  OutputBuffer.QuadPart = 0LL;
  if ( *a4 < 0x18u )
    return 2147483653LL;
  if ( !RawBeginOperation(a1, a2) )
    return 3221226094LL;
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v9 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)(a1 + 184) + 16LL);
  v10 = IoBuildDeviceIoControlRequest(0x70000u, v9, 0LL, 0, &Timeout, 0x18u, 0, &Event, &IoStatusBlock);
  if ( !v10 )
    goto LABEL_25;
  Status = IofCallDriver(v9, v10);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    if ( (v9->Characteristics & 4) != 0 )
    {
      v12 = 0;
LABEL_21:
      v17 = HIDWORD(v24);
      *(_DWORD *)(a3 + 20) = HIDWORD(v24);
      *(_DWORD *)(a3 + 16) = 1;
      if ( v12 )
        v18 = v25[1].QuadPart / v17;
      else
        v18 = Timeout.QuadPart * HIDWORD(v23) * (int)v24;
      *(_QWORD *)(a3 + 8) = v18;
      *(_QWORD *)a3 = v18;
      *a4 -= 24;
      Status = 0;
      goto LABEL_26;
    }
    KeResetEvent(&Event);
    v13 = IoBuildDeviceIoControlRequest(0x7405Cu, v9, 0LL, 0, &OutputBuffer, 8u, 0, &Event, &IoStatusBlock);
    if ( v13 )
    {
      v14 = IofCallDriver(v9, v13);
      if ( v14 == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        v14 = IoStatusBlock.Status;
      }
      v25[1] = OutputBuffer;
      if ( v14 >= 0 )
      {
        v12 = 1;
        goto LABEL_21;
      }
      KeResetEvent(&Event);
      v15 = IoBuildDeviceIoControlRequest(0x74004u, v9, 0LL, 0, v25, 0x20u, 0, &Event, &IoStatusBlock);
      if ( v15 )
      {
        v16 = IofCallDriver(v9, v15);
        if ( v16 == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v16 = IoStatusBlock.Status;
        }
        v12 = v16 >= 0;
        goto LABEL_21;
      }
    }
LABEL_25:
    Status = -1073741670;
    goto LABEL_26;
  }
  *a4 = 0;
LABEL_26:
  RawEndOperation(a1, a2);
  return (unsigned int)Status;
}
