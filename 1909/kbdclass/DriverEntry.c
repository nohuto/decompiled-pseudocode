/*
 * XREFs of DriverEntry @ 0x1C0010080
 * Callers:
 *     GsDriverEntry @ 0x1C0010010 (GsDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002AE0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0002DA0 (__security_check_cookie.c)
 *     memmove @ 0x1C0002EC0 (memmove.c)
 *     memset @ 0x1C0003200 (memset.c)
 *     KeyboardClassLogError @ 0x1C0004FD4 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C00060F8 (WPP_RECORDER_SF_.c)
 *     KeyboardAddDeviceEx @ 0x1C000DB20 (KeyboardAddDeviceEx.c)
 *     KbdDeterminePortsServiced @ 0x1C000DC30 (KbdDeterminePortsServiced.c)
 *     KbdCreateClassObject @ 0x1C000DFA0 (KbdCreateClassObject.c)
 *     WppInitKm @ 0x1C000E2C0 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C000E380 (WppLoadTracingSupport.c)
 *     WppCleanupKm @ 0x1C000F988 (WppCleanupKm.c)
 *     KbdConfiguration @ 0x1C0010560 (KbdConfiguration.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS j; // edi
  PVOID v5; // r14
  __int64 v6; // rdx
  GUID v7; // xmm0
  PVOID PoolWithTag; // rax
  __int64 v9; // rdx
  __int64 Length; // rdx
  int v11; // edx
  int v12; // r8d
  WCHAR *v13; // rax
  __int64 v14; // rdx
  unsigned int i; // edi
  __int64 *v16; // rax
  const WCHAR *v18; // rdx
  _BYTE *DeviceExtension; // rcx
  int v20; // eax
  char *v21; // rsi
  void *v22; // rcx
  const WCHAR *v23; // rdx
  int v24; // r15d
  void *v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  void *v28; // rcx
  char v29[4]; // [rsp+20h] [rbp-E0h]
  PDEVICE_OBJECT v30; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v33; // [rsp+68h] [rbp-98h] BYREF
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp-90h] BYREF
  GUID ProviderId; // [rsp+78h] [rbp-88h] BYREF
  PVOID P[3]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v37[512]; // [rsp+A0h] [rbp-60h] BYREF

  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  v30 = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_KbdClassTraceGuid;
  j = 0;
  v5 = 0LL;
  P[0] = 0LL;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v6, 1LL);
  }
  v7 = (GUID)*((_OWORD *)EventInformation - 1);
  xmmword_1C000A038 = 0LL;
  ProviderId = v7;
  if ( !EtwRegister(&ProviderId, TlgEnableCallback, &dword_1C000A010, &RegHandle) )
    EtwSetInformation(RegHandle, EventProviderSetTraits, EventInformation, *(unsigned __int16 *)EventInformation);
  memset(&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0, 0x418uLL);
  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) = 1;
  qword_1C000A4F0 = (__int64)&qword_1C000A4E8;
  qword_1C000A4E8 = (__int64)&qword_1C000A4E8;
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = 0;
  KeInitializeEvent((PRKEVENT)&WPP_MAIN_CB.AlignmentRequirement, SynchronizationEvent, 0);
  *(_DWORD *)&::DestinationString.Length = 0x2000000;
  ::DestinationString.Buffer = (PWSTR)&unk_1C000A2E8;
  memset(v37, 0, sizeof(v37));
  *(_DWORD *)&DestinationString.Length = 0x2000000;
  DestinationString.Buffer = (PWSTR)v37;
  word_1C000A2C8 = RegistryPath->Length;
  word_1C000A2CA = RegistryPath->Length + 2;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned __int16)word_1C000A2CA, 0x4364624Bu);
  ::P = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, RegistryPath->Buffer, RegistryPath->Length);
    *((_WORD *)::P + ((unsigned __int64)RegistryPath->Length >> 1)) = 0;
    KbdConfiguration();
    if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    {
      j = KbdCreateClassObject(DriverObject, (__int128 *)&WPP_MAIN_CB.Dpc, &v30, (__int64 *)P, 1);
      if ( j < 0 )
      {
        v5 = P[0];
        goto LABEL_15;
      }
      v18 = (const WCHAR *)P[0];
      DeviceExtension = v30->DeviceExtension;
      *(_QWORD *)DeviceExtension = v30;
      *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = DeviceExtension;
      DeviceExtension[64] = 0;
      KeyboardAddDeviceEx((__int64)DeviceExtension, v18, 0LL);
      ExFreePoolWithTag(P[0], 0);
      P[0] = 0LL;
      v30->Flags &= ~0x80u;
    }
    RtlCopyUnicodeString(&DestinationString, &::DestinationString);
    DestinationString.Length -= 10;
    RtlAppendUnicodeToString(&DestinationString, L"Port");
    Length = DestinationString.Length;
    if ( DestinationString.MaximumLength < (unsigned __int64)DestinationString.Length + 2 )
    {
      j = -1073741823;
    }
    else
    {
      DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) + 1] = 0;
      KbdDeterminePortsServiced(&DestinationString.Length, &v33);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v11, v12, 12, *(_DWORD *)v29, v33);
      }
      RtlInitUnicodeString(&Destination, 0LL);
      Destination.MaximumLength = DestinationString.Length + 20;
      v13 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(DestinationString.Length + 20), 0x4364624Bu);
      Destination.Buffer = v13;
      if ( v13 )
      {
        memset(v13, 0, Destination.MaximumLength);
        RtlAppendUnicodeToString(&Destination, L"\\Device\\");
        RtlAppendUnicodeToString(&Destination, DestinationString.Buffer);
        RtlAppendUnicodeToString(&Destination, L"0");
        for ( i = 0; i < *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy; ++i )
        {
          if ( i >= v33 )
            break;
          Destination.Buffer[((unsigned __int64)Destination.Length >> 1) - 1] = i + 48;
          v20 = KbdCreateClassObject(DriverObject, (__int128 *)&WPP_MAIN_CB.Dpc, &v30, (__int64 *)P, 1);
          if ( v20 >= 0 )
          {
            v21 = (char *)v30->DeviceExtension;
            *(_QWORD *)v21 = v30;
            v21[64] = 0;
            v30->Flags &= ~0x80u;
            if ( IoGetDeviceObjectPointer(&Destination, 0x80u, &FileObject, (PDEVICE_OBJECT *)v21 + 2) >= 0 )
            {
              v5 = P[0];
              v23 = (const WCHAR *)P[0];
              v30->StackSize = *(_BYTE *)(*((_QWORD *)v21 + 2) + 76LL) + 1;
              v24 = KeyboardAddDeviceEx((__int64)v21, v23, (__int64)FileObject);
              if ( v5 )
              {
                ExFreePoolWithTag(v5, 0);
                v5 = 0LL;
                P[0] = 0LL;
              }
              if ( v24 >= 0 )
              {
                v26 = (_QWORD *)qword_1C000A4F0;
                v27 = v21 + 336;
                if ( *(__int64 **)qword_1C000A4F0 != &qword_1C000A4E8 )
                  __fastfail(3u);
                *v27 = &qword_1C000A4E8;
                v27[1] = v26;
                *v26 = v27;
                qword_1C000A4F0 = (__int64)v27;
              }
              else
              {
                if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
                {
                  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                  FileObject = (PFILE_OBJECT)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                             + 3 * *((unsigned int *)v21 + 49));
                  *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v21 + 49)) = 0LL;
                  *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *((unsigned int *)v21 + 49) + 19) = 1;
                  *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v21 + 49) + 1) = 0LL;
                  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                }
                else if ( *((_QWORD *)v21 + 44) )
                {
                  FileObject = (PFILE_OBJECT)*((_QWORD *)v21 + 44);
                  *((_QWORD *)v21 + 44) = 0LL;
                }
                if ( FileObject )
                  ObfDereferenceObject(FileObject);
                v25 = (void *)*((_QWORD *)v21 + 13);
                if ( v25 )
                {
                  ExFreePoolWithTag(v25, 0);
                  *((_QWORD *)v21 + 15) = 0LL;
                  *((_QWORD *)v21 + 14) = 0LL;
                  *((_QWORD *)v21 + 13) = 0LL;
                }
                IoDeleteDevice(*(PDEVICE_OBJECT *)v21);
              }
            }
            else
            {
              v22 = (void *)*((_QWORD *)v21 + 13);
              if ( v22 )
              {
                ExFreePoolWithTag(v22, 0);
                *((_QWORD *)v21 + 15) = 0LL;
                *((_QWORD *)v21 + 14) = 0LL;
                *((_QWORD *)v21 + 13) = 0LL;
              }
              IoDeleteDevice(*(PDEVICE_OBJECT *)v21);
              v5 = P[0];
            }
          }
          else
          {
            KeyboardClassLogError(DriverEntry, -1073414143, 10008, v20, 0, 0LL, 0);
            v5 = P[0];
          }
        }
        v16 = (__int64 *)qword_1C000A4E8;
        for ( j = 0; v16 != &qword_1C000A4E8; v16 = (__int64 *)*v16 )
          ++WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 2;
          WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v14, 1LL);
        }
        j = -1073741823;
        LODWORD(P[0]) = Destination.MaximumLength;
        KeyboardClassLogError(DriverObject, -1073414143, 10006, -1073741823, 1u, P, 0);
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
    LODWORD(P[0]) = RegistryPath->Length + 2;
    KeyboardClassLogError(DriverObject, -1073414143, 10002, -1073741823, 1u, P, 0);
  }
LABEL_15:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( j < 0 )
  {
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
      v28 = *(void **)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL);
      if ( v28 )
      {
        ExFreePoolWithTag(v28, 0);
        *(_OWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 112LL) = 0uLL;
        *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL) = 0LL;
      }
      IoDeleteDevice(**(PDEVICE_OBJECT **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
    }
  }
  else
  {
    IoRegisterDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)KeyboardClassFindMorePorts, 0LL);
    j = 0;
    DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)KeyboardClassCreate;
    DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)KeyboardClassClose;
    DriverObject->MajorFunction[3] = (PDRIVER_DISPATCH)KeyboardClassRead;
    DriverObject->MajorFunction[9] = (PDRIVER_DISPATCH)KeyboardClassFlush;
    DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)KeyboardClassDeviceControl;
    DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)KeyboardClassPassThrough;
    DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)KeyboardClassCleanup;
    DriverObject->MajorFunction[27] = (PDRIVER_DISPATCH)KeyboardPnP;
    DriverObject->MajorFunction[22] = (PDRIVER_DISPATCH)KeyboardClassPower;
    DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)KeyboardClassSystemControl;
    DriverObject->DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)KeyboardAddDevice;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(Length) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, Length, 1LL);
  }
  if ( j < 0 )
  {
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    dword_1C000A010 = 0;
    WppCleanupKm((__int64)DriverObject);
  }
  return j;
}
