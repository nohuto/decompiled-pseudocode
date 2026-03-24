/*
 * XREFs of KeyboardClassFindMorePorts @ 0x1C000C550
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002C10 (__security_check_cookie.c)
 *     memset @ 0x1C0003080 (memset.c)
 *     KeyboardClassLogError @ 0x1C0004B40 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005B2C (WPP_RECORDER_SF_.c)
 *     KeyboardAddDeviceEx @ 0x1C000CA20 (KeyboardAddDeviceEx.c)
 *     KbdDeterminePortsServiced @ 0x1C000CB20 (KbdDeterminePortsServiced.c)
 *     KbdCreateClassObject @ 0x1C000CD40 (KbdCreateClassObject.c)
 */

void __fastcall KeyboardClassFindMorePorts(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  PVOID v4; // rdi
  WCHAR *PoolWithTag; // rax
  __int64 v6; // rdx
  ULONG i; // ebx
  int ClassObject; // eax
  __int64 v9; // rsi
  void *v10; // rcx
  PVOID v11; // rdx
  int v12; // r14d
  void *v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rsi
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h]
  PFILE_OBJECT FileObject; // [rsp+68h] [rbp-98h] BYREF
  ULONG v20; // [rsp+70h] [rbp-90h] BYREF
  PVOID P[3]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v22[512]; // [rsp+90h] [rbp-70h] BYREF

  *(_QWORD *)&Destination.Length = 0LL;
  v18 = 0LL;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  Destination.Buffer = 0LL;
  v4 = 0LL;
  P[0] = 0LL;
  memset(v22, 0, sizeof(v22));
  *(_DWORD *)&DestinationString.Length = 0x2000000;
  DestinationString.Buffer = (PWSTR)v22;
  RtlCopyUnicodeString(&DestinationString, &::DestinationString);
  DestinationString.Length -= 10;
  RtlAppendUnicodeToString(&DestinationString, L"Port");
  RtlInitUnicodeString(&Destination, 0LL);
  Destination.MaximumLength = DestinationString.Length + 20;
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(
                           PagedPool,
                           (unsigned __int16)(DestinationString.Length + 20),
                           0x4364624Bu);
  Destination.Buffer = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Destination.MaximumLength);
    RtlAppendUnicodeToString(&Destination, L"\\Device\\");
    RtlAppendUnicodeToString(&Destination, DestinationString.Buffer);
    RtlAppendUnicodeToString(&Destination, L"0");
    KbdDeterminePortsServiced(&DestinationString, &v20);
    for ( i = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters; i < *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy; ++i )
    {
      if ( i >= v20 )
        break;
      Destination.Buffer[((unsigned __int64)Destination.Length >> 1) - 1] = i + 48;
      ClassObject = KbdCreateClassObject(DriverObject, 1);
      if ( ClassObject >= 0 )
      {
        v9 = *(_QWORD *)(v18 + 64);
        *(_QWORD *)v9 = v18;
        *(_BYTE *)(v9 + 64) = 0;
        if ( IoGetDeviceObjectPointer(&Destination, 0x80u, &FileObject, (PDEVICE_OBJECT *)(v9 + 16)) )
        {
          v10 = *(void **)(v9 + 104);
          if ( v10 )
          {
            ExFreePoolWithTag(v10, 0);
            *(_QWORD *)(v9 + 120) = 0LL;
            *(_QWORD *)(v9 + 112) = 0LL;
            *(_QWORD *)(v9 + 104) = 0LL;
          }
          IoDeleteDevice(*(PDEVICE_OBJECT *)v9);
          v4 = P[0];
        }
        else
        {
          v4 = P[0];
          v11 = P[0];
          *(_BYTE *)(v18 + 76) = *(_BYTE *)(*(_QWORD *)(v9 + 16) + 76LL) + 1;
          v12 = KeyboardAddDeviceEx(v9, v11, FileObject);
          *(_DWORD *)(v18 + 48) &= ~0x80u;
          if ( v4 )
          {
            ExFreePoolWithTag(v4, 0);
            v4 = 0LL;
            P[0] = 0LL;
          }
          if ( v12 >= 0 )
          {
            v14 = (_QWORD *)qword_1C00094D0;
            v15 = (_QWORD *)(v9 + 336);
            if ( *(__int64 **)qword_1C00094D0 != &qword_1C00094C8 )
              __fastfail(3u);
            *v15 = &qword_1C00094C8;
            v15[1] = v14;
            *v14 = v15;
            qword_1C00094D0 = (__int64)v15;
          }
          else
          {
            if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
            {
              ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              FileObject = (PFILE_OBJECT)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                         + 3 * *(unsigned int *)(v9 + 196));
              *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *(unsigned int *)(v9 + 196)) = 0LL;
              *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *(unsigned int *)(v9 + 196) + 19) = 1;
              *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *(unsigned int *)(v9 + 196) + 1) = 0LL;
              ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            }
            else if ( *(_QWORD *)(v9 + 352) )
            {
              FileObject = *(PFILE_OBJECT *)(v9 + 352);
              *(_QWORD *)(v9 + 352) = 0LL;
            }
            if ( FileObject )
              ObfDereferenceObject(FileObject);
            v13 = *(void **)(v9 + 104);
            if ( v13 )
            {
              ExFreePoolWithTag(v13, 0);
              *(_QWORD *)(v9 + 120) = 0LL;
              *(_QWORD *)(v9 + 112) = 0LL;
              *(_QWORD *)(v9 + 104) = 0LL;
            }
            IoDeleteDevice(*(PDEVICE_OBJECT *)v9);
          }
        }
      }
      else
      {
        KeyboardClassLogError(DriverObject, -1073414143, 10008, ClassObject, 0, 0LL, 0);
        v4 = P[0];
      }
    }
    WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = i;
  }
  else
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v6, 1LL);
    LODWORD(P[0]) = Destination.MaximumLength;
    KeyboardClassLogError(DriverObject, -1073414143, 10008, -1073741823, 1u, P, 0);
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
