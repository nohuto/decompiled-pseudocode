/*
 * XREFs of xxxGetDeviceChangeInfo @ 0x1C01E10B0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxGetDeviceChangeInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  IRP *v11; // rsi
  __int64 v12; // r8
  NTSTATUS Status; // esi
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v17[3]; // [rsp+70h] [rbp-9h] BYREF
  _QWORD v18[3]; // [rsp+88h] [rbp+Fh] BYREF
  struct _KEVENT Event; // [rsp+A0h] [rbp+27h] BYREF
  __int16 OutputBuffer; // [rsp+E0h] [rbp+67h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+E8h] [rbp+6Fh] BYREF
  PFILE_OBJECT FileObject; // [rsp+F0h] [rbp+77h] BYREF

  v4 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  OutputBuffer = 0;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(v18, 0, sizeof(v18));
  memset(v17, 0, sizeof(v17));
  if ( PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS )
    return 0LL;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gMediaChangeMutex);
  if ( gMediaChangeList.Flink == &gMediaChangeList )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = qword_1C032AAA0;
    v6 = *(_QWORD **)(qword_1C032AAA0 + 8);
    if ( *(struct _LIST_ENTRY **)qword_1C032AAA0 != &gMediaChangeList || *v6 != qword_1C032AAA0 )
      __fastfail(3u);
    qword_1C032AAA0 = *(_QWORD *)(qword_1C032AAA0 + 8);
    *v6 = &gMediaChangeList;
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gMediaChangeMutex);
  if ( !v5 )
    return 0LL;
  PushW32ThreadLock(v5, v18, (__int64)Win32FreePool);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject) >= 0 )
  {
    PushW32ThreadLock((__int64)FileObject, v17, UserDereferenceObject);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v11 = IoBuildDeviceIoControlRequest(
            0x6DC010u,
            DeviceObject,
            (PVOID)(v5 + 36),
            (unsigned int)*(unsigned __int16 *)(v5 + 36) + 4,
            &OutputBuffer,
            2u,
            0,
            &Event,
            &IoStatusBlock);
    if ( v11 )
    {
      if ( gdwInAtomicOperation )
      {
        v10 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v10);
      Status = IofCallDriver(DeviceObject, v11);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      EnterCrit(0LL, 1LL);
      if ( !Status && HIBYTE(OutputBuffer) )
      {
        v4 = 1 << (HIBYTE(OutputBuffer) - 65);
        if ( (*(_DWORD *)(v5 + 32) & 1) != 0 )
          v4 |= 0x80000000;
      }
    }
    PopAndFreeW32ThreadLock((__int64)v17, v9, v12);
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v18, v7, v8);
  return v4;
}
