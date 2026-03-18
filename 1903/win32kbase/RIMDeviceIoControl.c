/*
 * XREFs of RIMDeviceIoControl @ 0x1C0069D40
 * Callers:
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C0068620 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     NtRIMDeviceIoControl @ 0x1C0136240 (NtRIMDeviceIoControl.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0051D60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C006B9C0 (RawInputManagerObjectResolveHandle.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C006CE74 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C006CEB4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeviceIoControl(
        __int64 a1,
        char *a2,
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
  char *v13; // rsi
  int v15; // edx
  int Status; // ebx
  _BYTE *v17; // r13
  int v18; // edx
  __int64 v19; // r8
  int v20; // edx
  PVOID v21; // rsi
  struct _FILE_OBJECT *v22; // rcx
  void *v23; // rcx
  ULONG64 v25; // rcx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  PIRP v27; // rbx
  _DWORD *v28; // rdx
  PVOID v29; // [rsp+50h] [rbp-78h] BYREF
  PVOID Object; // [rsp+58h] [rbp-70h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-68h]
  _BYTE v32[8]; // [rsp+68h] [rbp-60h] BYREF
  struct _IO_STATUS_BLOCK v33; // [rsp+70h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-48h] BYREF

  v13 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 132, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  v29 = 0LL;
  Object = 0LL;
  if ( a12 == 1 )
  {
    if ( InputBufferLength )
    {
      v25 = (ULONG64)a4 + InputBufferLength;
      if ( v25 > MmUserProbeAddress || v25 < (unsigned __int64)a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    ProbeForWrite(Address, Length, 1u);
  }
  Status = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &v29);
  if ( Status >= 0 )
  {
    v17 = v29;
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)v32,
      (struct RIMLOCK *)((char *)v29 + 104));
    if ( v17[81] )
    {
      Status = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v18, 1, 134, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      }
    }
    else
    {
      Status = RawInputManagerDeviceObjectResolveHandle(v13, 3u, 1, &Object);
      v20 = 0;
      if ( Status >= 0 )
      {
        v21 = Object;
        if ( *((_QWORD *)Object + 39) && (v22 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 40)) != 0LL )
        {
          if ( (*((_DWORD *)Object + 68) & 0x2000) != 0 )
          {
            Status = -1073741637;
          }
          else if ( a10 )
          {
            if ( !IoStatusBlock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, 0LL, v19);
            v23 = (void *)*((_QWORD *)v21 + 39);
            if ( a12 == 1 )
              NtDeviceIoControlFile(v23, 0LL, 0LL, 0LL, IoStatusBlock, a3, a4, InputBufferLength, 0LL, 0);
            else
              ZwDeviceIoControlFile(v23, 0LL, 0LL, 0LL, IoStatusBlock, a3, a4, InputBufferLength, 0LL, 0);
          }
          else
          {
            v33.Pointer = 0LL;
            v33.Information = 0LL;
            RelatedDeviceObject = IoGetRelatedDeviceObject(v22);
            DeviceObject = RelatedDeviceObject;
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            v27 = IoBuildDeviceIoControlRequest(
                    a3,
                    RelatedDeviceObject,
                    a4,
                    InputBufferLength,
                    (PVOID)Address,
                    Length,
                    a11 != 0,
                    &Event,
                    &v33);
            if ( v27 )
            {
              v27->RequestorMode = a12;
              ObfReferenceObject(*((PVOID *)v21 + 40));
              v27->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)*((_QWORD *)v21 + 40);
              Status = IofCallDriver(DeviceObject, v27);
              if ( Status == 259 )
              {
                while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
                  ;
                Status = v33.Status;
              }
              ObfDereferenceObject(*((PVOID *)v21 + 40));
            }
            else
            {
              Status = -1073741668;
            }
            if ( a12 )
            {
              v28 = a8;
              if ( (unsigned __int64)a8 >= MmUserProbeAddress )
                v28 = (_DWORD *)MmUserProbeAddress;
              *v28 = v33.Information;
            }
            else
            {
              *a8 = v33.Information;
            }
          }
        }
        else
        {
          Status = -1073741436;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v20) = 3;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v20, 1, 133, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
          }
        }
        ObfDereferenceObject(v21);
      }
    }
    ObfDereferenceObject(v17);
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v32);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v15, 1, 135, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, Status);
  }
  return (unsigned int)Status;
}
