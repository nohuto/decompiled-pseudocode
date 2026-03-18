/*
 * XREFs of RIMDeviceIoControl @ 0x1C004E580
 * Callers:
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C004AB20 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     NtRIMDeviceIoControl @ 0x1C010BF90 (NtRIMDeviceIoControl.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00521C8 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0052208 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeviceIoControl(
        __int64 a1,
        __int64 a2,
        ULONG a3,
        void *a4,
        ULONG InputBufferLength,
        volatile void *Address,
        ULONG Length,
        _DWORD *a8,
        struct _IO_STATUS_BLOCK *IoStatusBlock,
        int a10,
        int a11,
        int a12)
{
  NTSTATUS Status; // ebx
  _BYTE *v16; // rsi
  __int64 v17; // r8
  PVOID v18; // rdi
  void *v19; // rcx
  __int64 v20; // rdx
  ULONG64 v22; // rcx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // r14
  PIRP v24; // rax
  IRP *v25; // rbx
  _DWORD *v26; // rdx
  __int64 IoControlCode; // [rsp+28h] [rbp-90h]
  PVOID v28; // [rsp+50h] [rbp-68h] BYREF
  PVOID Object; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v30[8]; // [rsp+60h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK v31; // [rsp+68h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-40h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x86u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v28 = 0LL;
  Object = 0LL;
  if ( a12 == 1 )
  {
    if ( InputBufferLength )
    {
      v22 = (ULONG64)a4 + InputBufferLength;
      if ( v22 > MmUserProbeAddress || v22 < (unsigned __int64)a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    ProbeForWrite(Address, Length, 1u);
  }
  Status = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &v28);
  if ( Status >= 0 )
  {
    v16 = v28;
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)v30,
      (struct RIMLOCK *)((char *)v28 + 104));
    if ( v16[81] )
    {
      Status = -1073741637;
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x88u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
    }
    else
    {
      Status = RawInputManagerDeviceObjectResolveHandle(a2, 3LL, 1LL, &Object);
      if ( Status >= 0 )
      {
        v18 = Object;
        v19 = (void *)*((_QWORD *)Object + 39);
        if ( v19 && (v20 = *((_QWORD *)Object + 40)) != 0 )
        {
          if ( (*((_DWORD *)Object + 68) & 0x2000) != 0 )
          {
            Status = -1073741637;
          }
          else if ( a10 )
          {
            if ( !IoStatusBlock )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v20, v17);
              v19 = (void *)*((_QWORD *)v18 + 39);
            }
            if ( a12 == 1 )
              NtDeviceIoControlFile(v19, 0LL, 0LL, 0LL, IoStatusBlock, a3, a4, InputBufferLength, 0LL, 0);
            else
              ZwDeviceIoControlFile(v19, 0LL, 0LL, 0LL, IoStatusBlock, a3, a4, InputBufferLength, 0LL, 0);
          }
          else
          {
            RelatedDeviceObject = IoGetRelatedDeviceObject(*((PFILE_OBJECT *)Object + 40));
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            v24 = IoBuildDeviceIoControlRequest(
                    a3,
                    RelatedDeviceObject,
                    a4,
                    InputBufferLength,
                    (PVOID)Address,
                    Length,
                    a11 != 0,
                    &Event,
                    &v31);
            v25 = v24;
            if ( v24 )
            {
              v24->RequestorMode = a12;
              ObfReferenceObject(*((PVOID *)v18 + 40));
              v25->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)*((_QWORD *)v18 + 40);
              Status = IofCallDriver(RelatedDeviceObject, v25);
              if ( Status == 259 )
              {
                while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
                  ;
                Status = v31.Status;
              }
              ObfDereferenceObject(*((PVOID *)v18 + 40));
            }
            else
            {
              Status = -1073741668;
            }
            if ( a12 )
            {
              v26 = a8;
              if ( (unsigned __int64)a8 >= MmUserProbeAddress )
                v26 = (_DWORD *)MmUserProbeAddress;
              *v26 = v31.Information;
            }
            else
            {
              *a8 = v31.Information;
            }
          }
        }
        else
        {
          Status = -1073741436;
          WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x87u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
        }
        ObfDereferenceObject(v18);
      }
    }
    ObfDereferenceObject(v16);
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v30);
  }
  LODWORD(IoControlCode) = Status;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x89u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, IoControlCode);
  return (unsigned int)Status;
}
