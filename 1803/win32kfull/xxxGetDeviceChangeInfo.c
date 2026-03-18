/*
 * XREFs of xxxGetDeviceChangeInfo @ 0x1C01AA650
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 */

__int64 __fastcall xxxGetDeviceChangeInfo(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  IRP *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  NTSTATUS Status; // esi
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-19h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-9h] BYREF
  _QWORD v15[3]; // [rsp+88h] [rbp+Fh] BYREF
  _QWORD v16[6]; // [rsp+A0h] [rbp+27h] BYREF
  char OutputBuffer; // [rsp+E0h] [rbp+67h] BYREF
  char v18; // [rsp+E1h] [rbp+68h]
  PDEVICE_OBJECT DeviceObject; // [rsp+E8h] [rbp+6Fh] BYREF
  PFILE_OBJECT FileObject; // [rsp+F0h] [rbp+77h] BYREF

  v2 = 0;
  if ( PsGetCurrentProcess(a1, a2) != gpepCSRSS )
    return 0LL;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  if ( gMediaChangeList.Flink == &gMediaChangeList )
  {
    v4 = 0LL;
  }
  else
  {
    v4 = qword_1C0329940;
    v5 = *(_QWORD **)(qword_1C0329940 + 8);
    if ( *(struct _LIST_ENTRY **)qword_1C0329940 != &gMediaChangeList || *v5 != qword_1C0329940 )
      __fastfail(3u);
    qword_1C0329940 = *(_QWORD *)(qword_1C0329940 + 8);
    *v5 = &gMediaChangeList;
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  if ( !v4 )
    return 0LL;
  PushW32ThreadLock(v4, v16, (__int64)Win32FreePool);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject) >= 0 )
  {
    PushW32ThreadLock((__int64)FileObject, v15, UserDereferenceObject);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v8 = IoBuildDeviceIoControlRequest(
           0x6DC010u,
           DeviceObject,
           (PVOID)(v4 + 36),
           (unsigned int)*(unsigned __int16 *)(v4 + 36) + 4,
           &OutputBuffer,
           2u,
           0,
           &Event,
           &IoStatusBlock);
    if ( v8 )
    {
      if ( gdwInAtomicOperation )
      {
        v7 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v7, gdwInAtomicOperation, v9, v10);
      Status = IofCallDriver(DeviceObject, v8);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      EnterCrit(0LL, 1LL);
      if ( !Status && v18 )
      {
        v2 = 1 << (v18 - 65);
        if ( (*(_DWORD *)(v4 + 32) & 1) != 0 )
          v2 |= 0x80000000;
      }
    }
    PopAndFreeW32ThreadLock((__int64)v15, v6);
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v16);
  return v2;
}
