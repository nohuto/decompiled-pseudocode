/*
 * XREFs of RawQueryFsSizeInfo @ 0x140890C20
 * Callers:
 *     RawQueryVolumeInformation @ 0x1406857AC (RawQueryVolumeInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     RawBeginOperation @ 0x1400D8250 (RawBeginOperation.c)
 *     IoBuildDeviceIoControlRequest @ 0x1400DDD10 (IoBuildDeviceIoControlRequest.c)
 *     RawEndOperation @ 0x1400F9858 (RawEndOperation.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall RawQueryFsSizeInfo(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  struct _DEVICE_OBJECT *v9; // rdi
  IRP *v10; // rax
  NTSTATUS Status; // ebx
  bool v12; // al
  LARGE_INTEGER v13; // r8
  IRP *v14; // rax
  NTSTATUS v15; // eax
  IRP *v16; // rax
  NTSTATUS v17; // eax
  unsigned __int64 v18; // rcx
  LONGLONG v19; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-49h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-39h] BYREF
  LARGE_INTEGER OutputBuffer; // [rsp+78h] [rbp-21h] BYREF
  LARGE_INTEGER Timeout; // [rsp+80h] [rbp-19h] BYREF
  int v24; // [rsp+8Ch] [rbp-Dh]
  int v25; // [rsp+90h] [rbp-9h]
  unsigned int v26; // [rsp+94h] [rbp-5h]
  LARGE_INTEGER v27; // [rsp+98h] [rbp-1h] BYREF
  LARGE_INTEGER v28; // [rsp+A0h] [rbp+7h]

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
      v13.QuadPart = 0LL;
      v28.QuadPart = 0LL;
LABEL_21:
      v18 = v26;
      *(_DWORD *)(a3 + 20) = v26;
      *(_DWORD *)(a3 + 16) = 1;
      if ( v12 )
        v19 = v13.QuadPart / v18;
      else
        v19 = Timeout.QuadPart * v24 * v25;
      *(_QWORD *)(a3 + 8) = v19;
      *(_QWORD *)a3 = v19;
      *a4 -= 24;
      Status = 0;
      goto LABEL_26;
    }
    KeResetEvent(&Event);
    v14 = IoBuildDeviceIoControlRequest(0x7405Cu, v9, 0LL, 0, &OutputBuffer, 8u, 0, &Event, &IoStatusBlock);
    if ( v14 )
    {
      v15 = IofCallDriver(v9, v14);
      if ( v15 == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        v15 = IoStatusBlock.Status;
      }
      v13 = OutputBuffer;
      v28 = OutputBuffer;
      if ( v15 >= 0 )
      {
        v12 = 1;
        goto LABEL_21;
      }
      KeResetEvent(&Event);
      v16 = IoBuildDeviceIoControlRequest(0x74004u, v9, 0LL, 0, &v27, 0x20u, 0, &Event, &IoStatusBlock);
      if ( v16 )
      {
        v17 = IofCallDriver(v9, v16);
        if ( v17 == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v17 = IoStatusBlock.Status;
        }
        v13 = v28;
        v12 = v17 >= 0;
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
