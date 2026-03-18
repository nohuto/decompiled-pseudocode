/*
 * XREFs of xxxGetDeviceChangeInfo @ 0x1C01CCD50
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 */

__int64 __fastcall xxxGetDeviceChangeInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  IRP *v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  NTSTATUS Status; // esi
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-19h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-9h] BYREF
  _QWORD v18[3]; // [rsp+88h] [rbp+Fh] BYREF
  _QWORD v19[6]; // [rsp+A0h] [rbp+27h] BYREF
  char OutputBuffer; // [rsp+E0h] [rbp+67h] BYREF
  char v21; // [rsp+E1h] [rbp+68h]
  PDEVICE_OBJECT DeviceObject; // [rsp+E8h] [rbp+6Fh] BYREF
  PFILE_OBJECT FileObject; // [rsp+F0h] [rbp+77h] BYREF

  v4 = 0;
  if ( PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS )
    return 0LL;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  if ( gMediaChangeList.Flink == &gMediaChangeList )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = qword_1C0317898;
    v6 = *(_QWORD **)(qword_1C0317898 + 8);
    if ( *(struct _LIST_ENTRY **)qword_1C0317898 != &gMediaChangeList || *v6 != qword_1C0317898 )
      __fastfail(3u);
    qword_1C0317898 = *(_QWORD *)(qword_1C0317898 + 8);
    *v6 = &gMediaChangeList;
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  if ( !v5 )
    return 0LL;
  PushW32ThreadLock(v5, v19, (__int64)Win32FreePool);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject) >= 0 )
  {
    PushW32ThreadLock((__int64)FileObject, v18, UserDereferenceObject);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v10 = IoBuildDeviceIoControlRequest(
            0x6DC010u,
            DeviceObject,
            (PVOID)(v5 + 36),
            (unsigned int)*(unsigned __int16 *)(v5 + 36) + 4,
            &OutputBuffer,
            2u,
            0,
            &Event,
            &IoStatusBlock);
    if ( v10 )
    {
      if ( gdwInAtomicOperation )
      {
        v9 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v9, gdwInAtomicOperation, v11, v12);
      Status = IofCallDriver(DeviceObject, v10);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      EnterCrit(0LL, 1LL);
      if ( !Status && v21 )
      {
        v4 = 1 << (v21 - 65);
        if ( (*(_DWORD *)(v5 + 32) & 1) != 0 )
          v4 |= 0x80000000;
      }
    }
    PopAndFreeW32ThreadLock((__int64)v18, v8);
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v19, v7);
  return v4;
}
