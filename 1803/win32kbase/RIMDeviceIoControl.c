/*
 * XREFs of RIMDeviceIoControl @ 0x1C00E0E20
 * Callers:
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C006E9B0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     NtRIMDeviceIoControl @ 0x1C00DF300 (NtRIMDeviceIoControl.c)
 * Callees:
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C0005D80 (-Release@CompositionObject@@QEBA_JXZ.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00DEF5C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00DEF94 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeviceIoControl(
        char *a1,
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
  ULONG64 v15; // rcx
  int Status; // ebx
  _BYTE *v17; // rsi
  CompositionObject *v18; // rdi
  void *v19; // rcx
  __int64 v20; // rdx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // r14
  PIRP v22; // rax
  IRP *v23; // rbx
  _DWORD *v24; // rdx
  __int64 IoControlCode; // [rsp+28h] [rbp-90h]
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  CompositionObject *v28; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v29[8]; // [rsp+60h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK v30; // [rsp+68h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-40h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x82u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  Object = 0LL;
  v28 = 0LL;
  if ( a12 == 1 )
  {
    if ( InputBufferLength )
    {
      v15 = (ULONG64)a4 + InputBufferLength;
      if ( v15 > MmUserProbeAddress || v15 < (unsigned __int64)a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    ProbeForWrite(Address, Length, 1u);
  }
  Status = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( Status >= 0 )
  {
    v17 = Object;
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v29, (struct _KTHREAD **)Object + 12);
    if ( v17[73] )
    {
      Status = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x84u,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
    }
    else
    {
      Status = RawInputManagerDeviceObjectResolveHandle(a2, 3LL, 1LL, &v28);
      if ( Status >= 0 )
      {
        v18 = v28;
        v19 = (void *)*((_QWORD *)v28 + 38);
        if ( v19 && (v20 = *((_QWORD *)v28 + 39)) != 0 )
        {
          if ( (*((_DWORD *)v28 + 66) & 0x1000) != 0 )
          {
            Status = -1073741637;
          }
          else if ( a10 )
          {
            if ( !IoStatusBlock )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v20);
              v19 = (void *)*((_QWORD *)v18 + 38);
            }
            if ( a12 == 1 )
              NtDeviceIoControlFile(v19, 0LL, 0LL, 0LL, IoStatusBlock, a3, a4, InputBufferLength, 0LL, 0);
            else
              ZwDeviceIoControlFile(v19, 0LL, 0LL, 0LL, IoStatusBlock, a3, a4, InputBufferLength, 0LL, 0);
          }
          else
          {
            RelatedDeviceObject = IoGetRelatedDeviceObject(*((PFILE_OBJECT *)v28 + 39));
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            v22 = IoBuildDeviceIoControlRequest(
                    a3,
                    RelatedDeviceObject,
                    a4,
                    InputBufferLength,
                    (PVOID)Address,
                    Length,
                    a11 != 0,
                    &Event,
                    &v30);
            v23 = v22;
            if ( v22 )
            {
              v22->RequestorMode = a12;
              ObfReferenceObject(*((PVOID *)v18 + 39));
              v23->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)*((_QWORD *)v18 + 39);
              Status = IofCallDriver(RelatedDeviceObject, v23);
              if ( Status == 259 )
              {
                while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
                  ;
                Status = v30.Status;
              }
              ObfDereferenceObject(*((PVOID *)v18 + 39));
            }
            else
            {
              Status = -1073741668;
            }
            if ( a12 )
            {
              v24 = a8;
              if ( (unsigned __int64)a8 >= MmUserProbeAddress )
                v24 = (_DWORD *)MmUserProbeAddress;
              *v24 = v30.Information;
            }
            else
            {
              *a8 = v30.Information;
            }
          }
        }
        else
        {
          Status = -1073741436;
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x13u,
            0x83u,
            (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
        }
        CompositionObject::Release(v18);
      }
    }
    ObfDereferenceObject(v17);
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v29);
  }
  LODWORD(IoControlCode) = Status;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x85u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    IoControlCode);
  return (unsigned int)Status;
}
