/*
 * XREFs of DriverEntry @ 0x1C000F470
 * Callers:
 *     GsDriverEntry @ 0x1C000F010 (GsDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00023B0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0002900 (__security_check_cookie.c)
 *     memmove @ 0x1C0002A00 (memmove.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     MouseClassLogError @ 0x1C00045F4 (MouseClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005728 (WPP_RECORDER_SF_.c)
 *     MouseAddDeviceEx @ 0x1C000C750 (MouseAddDeviceEx.c)
 *     MouDeterminePortsServiced @ 0x1C000C860 (MouDeterminePortsServiced.c)
 *     MouCreateClassObject @ 0x1C000CBD0 (MouCreateClassObject.c)
 *     WppInitKm @ 0x1C000CF20 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C000CFE0 (WppLoadTracingSupport.c)
 *     TraceLoggingRegisterEx @ 0x1C000D140 (TraceLoggingRegisterEx.c)
 *     WppCleanupKm @ 0x1C000E5C0 (WppCleanupKm.c)
 *     MouConfiguration @ 0x1C000F080 (MouConfiguration.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  PVOID v4; // r14
  ETWENABLECALLBACK *v5; // rdx
  const struct _TlgProvider_t *v6; // rcx
  void *v7; // r8
  PVOID PoolWithTag; // rax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // edx
  int v12; // r8d
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  WCHAR *v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // edi
  __int64 *v18; // rax
  int i; // edi
  __int64 v20; // rdx
  int v22; // eax
  PVOID v23; // rdi
  const WCHAR *v24; // rdx
  _BYTE *DeviceExtension; // rcx
  int v26; // eax
  int v27; // edx
  int v28; // r8d
  void *v29; // rcx
  int v30; // eax
  char *v31; // rsi
  void *v32; // rcx
  const WCHAR *v33; // rdx
  int v34; // r15d
  void *v35; // rcx
  _QWORD *v36; // rax
  _QWORD *v37; // rsi
  char v38[4]; // [rsp+20h] [rbp-E0h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  PDEVICE_OBJECT v40; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v42; // [rsp+68h] [rbp-98h] BYREF
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp-90h] BYREF
  PVOID P[3]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v45[512]; // [rsp+90h] [rbp-70h] BYREF

  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  v40 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_MouClassTraceGuid;
  v4 = 0LL;
  P[0] = 0LL;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v5) = 5;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v5, 1LL);
    }
  }
  TraceLoggingRegisterEx(v6, v5, v7);
  memset(&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0, 0x3E0uLL);
  qword_1C00094C8 = (__int64)&qword_1C00094C0;
  qword_1C00094C0 = (__int64)&qword_1C00094C0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) = 1;
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = 0;
  KeInitializeEvent((PRKEVENT)&WPP_MAIN_CB.AlignmentRequirement, SynchronizationEvent, 0);
  *(_DWORD *)&::DestinationString.Length = 0x2000000;
  ::DestinationString.Buffer = (PWSTR)&unk_1C00092C0;
  memset(v45, 0, sizeof(v45));
  *(_DWORD *)&Destination.Length = 0x2000000;
  Destination.Buffer = (PWSTR)v45;
  word_1C00092A0 = RegistryPath->Length;
  word_1C00092A2 = RegistryPath->Length + 2;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned __int16)word_1C00092A2, 0x43756F4Du);
  ::P = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, RegistryPath->Buffer, RegistryPath->Length);
    *((_WORD *)::P + ((unsigned __int64)RegistryPath->Length >> 1)) = 0;
    MouConfiguration();
    if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    {
      v22 = MouCreateClassObject(DriverObject, (__int128 *)&WPP_MAIN_CB.DeviceQueue.32, &v40, (PWSTR *)P, 1);
      i = v22;
      if ( v22 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = 2;
          WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v13, v12, 12, *(_DWORD *)v38, v22);
        }
        v4 = P[0];
        goto LABEL_17;
      }
      v23 = P[0];
      v24 = (const WCHAR *)P[0];
      DeviceExtension = v40->DeviceExtension;
      *(_QWORD *)DeviceExtension = v40;
      *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = DeviceExtension;
      DeviceExtension[64] = 0;
      v26 = MouseAddDeviceEx((__int64)DeviceExtension, v24, 0LL);
      if ( v26 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = 2;
        WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v27, v28, 13, *(_DWORD *)v38, v26);
      }
      ExFreePoolWithTag(v23, 0);
      P[0] = 0LL;
      v40->Flags &= ~0x80u;
    }
    RtlCopyUnicodeString(&Destination, &::DestinationString);
    Destination.Length -= 10;
    RtlAppendUnicodeToString(&Destination, L"Port");
    v10 = MouDeterminePortsServiced(&Destination.Length, &v42);
    if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v11, v12, 14, *(_DWORD *)v38, v10);
    }
    LODWORD(v13) = Destination.Length;
    if ( Destination.MaximumLength < (unsigned __int64)Destination.Length + 2 )
    {
      i = -1073741823;
    }
    else
    {
      v14 = (unsigned __int64)Destination.Length >> 1;
      Destination.Buffer[v14 + 1] = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v14, v12, 15, *(_DWORD *)v38, v42);
      }
      DestinationString.MaximumLength = Destination.Length + 24;
      v15 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(Destination.Length + 24), 0x43756F4Du);
      DestinationString.Buffer = v15;
      if ( !v15 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v16, 1LL);
        }
        i = -1073741823;
        LODWORD(P[0]) = DestinationString.MaximumLength;
        MouseClassLogError(DriverObject, -1073414143, 20008, -1073741823, 1u, P, 0);
        DestinationString.MaximumLength = 0;
        goto LABEL_45;
      }
      memset(v15, 0, DestinationString.MaximumLength);
      RtlAppendUnicodeToString(&DestinationString, L"\\Device\\");
      RtlAppendUnicodeToString(&DestinationString, Destination.Buffer);
      RtlAppendUnicodeToString(&DestinationString, L"0");
      LODWORD(v13) = DestinationString.Length;
      if ( DestinationString.MaximumLength < (unsigned __int64)DestinationString.Length + 2 )
      {
        i = -1073741823;
      }
      else
      {
        v17 = 0;
        v13 = (unsigned __int64)DestinationString.Length >> 1;
        for ( DestinationString.Buffer[v13 + 1] = 0; v17 < HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock); ++v17 )
        {
          if ( v17 >= v42 )
            break;
          DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) - 1] = v17 + 48;
          v30 = MouCreateClassObject(DriverObject, (__int128 *)&WPP_MAIN_CB.DeviceQueue.32, &v40, (PWSTR *)P, 1);
          if ( v30 >= 0 )
          {
            v31 = (char *)v40->DeviceExtension;
            *(_QWORD *)v31 = v40;
            v31[64] = 0;
            v40->Flags &= ~0x80u;
            if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, (PDEVICE_OBJECT *)v31 + 2) )
            {
              v32 = (void *)*((_QWORD *)v31 + 13);
              if ( v32 )
              {
                ExFreePoolWithTag(v32, 0);
                *((_QWORD *)v31 + 15) = 0LL;
                *((_QWORD *)v31 + 14) = 0LL;
                *((_QWORD *)v31 + 13) = 0LL;
              }
              IoDeleteDevice(*(PDEVICE_OBJECT *)v31);
              v4 = P[0];
            }
            else
            {
              v4 = P[0];
              v33 = (const WCHAR *)P[0];
              v40->StackSize = *(_BYTE *)(*((_QWORD *)v31 + 2) + 76LL) + 1;
              v34 = MouseAddDeviceEx((__int64)v31, v33, (__int64)FileObject);
              if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
                *((_QWORD *)v31 + 42) = FileObject;
              if ( v4 )
              {
                ExFreePoolWithTag(v4, 0);
                v4 = 0LL;
                P[0] = 0LL;
              }
              if ( v34 >= 0 )
              {
                v36 = (_QWORD *)qword_1C00094C8;
                v37 = v31 + 320;
                if ( *(__int64 **)qword_1C00094C8 != &qword_1C00094C0 )
                  __fastfail(3u);
                *v37 = &qword_1C00094C0;
                v37[1] = v36;
                *v36 = v37;
                qword_1C00094C8 = (__int64)v37;
              }
              else
              {
                if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
                {
                  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                  FileObject = (PFILE_OBJECT)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                             + 3 * *((unsigned int *)v31 + 45));
                  *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v31 + 45)) = 0LL;
                  *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *((unsigned int *)v31 + 45) + 19) = 1;
                  *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v31 + 45) + 1) = 0LL;
                  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                }
                else if ( *((_QWORD *)v31 + 42) )
                {
                  FileObject = (PFILE_OBJECT)*((_QWORD *)v31 + 42);
                  *((_QWORD *)v31 + 42) = 0LL;
                }
                if ( FileObject )
                  ObfDereferenceObject(FileObject);
                v35 = (void *)*((_QWORD *)v31 + 13);
                if ( v35 )
                {
                  ExFreePoolWithTag(v35, 0);
                  *((_QWORD *)v31 + 15) = 0LL;
                  *((_QWORD *)v31 + 14) = 0LL;
                  *((_QWORD *)v31 + 13) = 0LL;
                }
                IoDeleteDevice(*(PDEVICE_OBJECT *)v31);
              }
            }
          }
          else
          {
            MouseClassLogError(DriverObject, -1073414143, 20008, v30, 0, 0LL, 0);
            v4 = P[0];
          }
        }
        v18 = (__int64 *)qword_1C00094C0;
        for ( i = 0; v18 != &qword_1C00094C0; v18 = (__int64 *)*v18 )
          ++WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v9, 1LL);
    }
    i = -1073741823;
    LODWORD(P[0]) = RegistryPath->Length + 2;
    MouseClassLogError(DriverObject, -1073414143, 20002, -1073741823, 1u, P, 0);
  }
LABEL_17:
  if ( DestinationString.MaximumLength )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( i >= 0 )
  {
    IoRegisterDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)MouseClassFindMorePorts, 0LL);
    i = 0;
    DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)MouseClassCreate;
    DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)MouseClassClose;
    DriverObject->MajorFunction[3] = (PDRIVER_DISPATCH)MouseClassRead;
    DriverObject->MajorFunction[9] = (PDRIVER_DISPATCH)MouseClassFlush;
    DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)MouseClassDeviceControl;
    DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)MouseClassPassThrough;
    DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)MouseClassCleanup;
    DriverObject->MajorFunction[27] = (PDRIVER_DISPATCH)MousePnP;
    DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)MouseClassSystemControl;
    DriverObject->MajorFunction[22] = (PDRIVER_DISPATCH)MouseClassPower;
    DriverObject->DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)MouseAddDevice;
    goto LABEL_23;
  }
LABEL_45:
  if ( ::P )
  {
    ExFreePoolWithTag(::P, 0);
    ::P = 0LL;
  }
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
  {
    ExFreePoolWithTag(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0);
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = 0LL;
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    v29 = *(void **)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL);
    if ( v29 )
    {
      ExFreePoolWithTag(v29, 0);
      *(_OWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 112LL) = 0uLL;
      *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL) = 0LL;
    }
    IoDeleteDevice(**(PDEVICE_OBJECT **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
  }
LABEL_23:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v13, v12, 17, *(_DWORD *)v38, i);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v20) = 5;
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v20, 1LL);
      }
    }
  }
  if ( i < 0 )
  {
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    dword_1C0009010 = 0;
    WppCleanupKm((__int64)DriverObject);
  }
  return i;
}
